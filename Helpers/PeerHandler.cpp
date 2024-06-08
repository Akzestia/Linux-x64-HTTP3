#include "PeerHandler.h"

std::unordered_map<HQUIC, uint8_t *> *PeerHandler::peers =
    new std::unordered_map<HQUIC, uint8_t *>();
std::unordered_map<HQUIC, size_t> *PeerHandler::peerDataSizes =
    new std::unordered_map<HQUIC, size_t>();

std::unordered_map<HQUIC, uint8_t *> *PeerHandler::GetPeers() { return peers; }

void PeerHandler::SetPeer(HQUIC Stream, const uint8_t &data, size_t dataSize) {
    if (peers->find(Stream) != peers->end()) {
        size_t currentSize = (*peerDataSizes)[Stream];
        size_t newSize = currentSize + dataSize;
        uint8_t *newData = new uint8_t[newSize];

        std::memcpy(newData, (*peers)[Stream], currentSize);
        std::memcpy(newData + currentSize, &data, dataSize);

        delete[] (*peers)[Stream];

        (*peers)[Stream] = newData;
        (*peerDataSizes)[Stream] = newSize;
    } else {
        uint8_t *newData = new uint8_t[dataSize];
        std::memcpy(newData, &data, dataSize);

        (*peers)[Stream] = newData;
        (*peerDataSizes)[Stream] = dataSize;
    }
}

// TODO proper handling
void PeerHandler::HandlePeer(HQUIC Stream, const uint8_t &data,
                             size_t dataSize) {
    SetPeer(Stream, data, dataSize);
}

std::string getFileExtension(const std::vector<uint8_t> &fileData) {
    if (fileData.empty()) {
        return "";
    }
    size_t index = 0;
    while (index < fileData.size() && fileData[index] == 0x00) {
        ++index;
    }
    std::cout << "First non null: " << index << "\n";

    std::printf("First three bytes: 0x%02X 0x%02X 0x%02X\n", fileData[index],
                fileData[index + 1], fileData[index + 2]);

    if (index + 4 <= fileData.size()) {
        if (fileData[index] == 0xFF && fileData[index + 1] == 0xD8 &&
            fileData[index + 2] == 0xFF) {
            return ".jpg"; // JPEG file
        } else if (fileData[index] == 0x89 && fileData[index + 1] == 0x50 &&
                   fileData[index + 2] == 0x4E && fileData[index + 3] == 0x47) {
            return ".png"; // PNG file
        } else if (fileData[index] == 0x47 && fileData[index + 1] == 0x49 &&
                   fileData[index + 2] == 0x46) {
            return ".gif"; // GIF file
        } else if (fileData[index] == 0x00 && fileData[index + 1] == 0x00 &&
                   fileData[index + 2] == 0x02 && fileData[index + 3] == 0x00) {
            return ".cur"; // CUR file
        } else if (fileData[index] == 0x49 && fileData[index + 1] == 0x44 &&
                   fileData[index + 2] == 0x33 &&
                   (fileData[index + 3] == 0x02 ||
                    fileData[index + 3] == 0x01)) {
            return ".mp3"; // MP3 file
        } else if (fileData[index] == 0x20 && fileData[index + 1] == 0x66 &&
                   fileData[index + 2] == 0x74) {
            return ".mp4"; // MP4 file
        }
    }

    return ""; // Unknown file type
}

bool PeerHandler::onPeerShutdown(HQUIC Stream) {

    uint8_t *data = (*peers)[Stream];
    size_t dataSize = (*peerDataSizes)[Stream];
    absl::string_view dataView(reinterpret_cast<const char *>(data), dataSize);
    absl::Cord receivedCord(dataView);

    Wrapper wrapper;
    if (!wrapper.ParsePartialFromCord(receivedCord)) {
        std::cerr << "Error: Failed to parse the Cord into a Wrapper" << std::endl;
        return false;
    }

    switch (wrapper.payload_case()) {
        case Wrapper::kUser: {
            const User& user = wrapper.user();
            std::cout << "Received User: " << user.name() << ", " << user.email() << std::endl;
            break;
        }
        case Wrapper::kPerson: {
            const Person& person = wrapper.person();
            std::cout << "Received Person: " << person.name() << ", " << person.email() << std::endl;
            break;
        }
        default:
            std::cerr << "Error: Unknown payload type" << std::endl;
            return false;
    }
    return true;
}

PeerHandler::~PeerHandler(){
    if(peers) delete peers;
    if(peerDataSizes) delete peerDataSizes;
}