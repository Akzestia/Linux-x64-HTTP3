#include "QuicClient.h"
#include <cstdint>
#include <cstdio>
#include <fstream>
#include <vector>
//#include "../db/DbManager.h"

std::vector<uint8_t> loadFileContent(const std::string &filePath) {
    std::ifstream file(filePath, std::ios::binary | std::ios::ate);
    if (!file) {
        throw std::runtime_error("Failed to open file: " + filePath);
    }

    std::streamsize fileSize = file.tellg();
    file.seekg(0, std::ios::beg);

    std::vector<uint8_t> fileData(fileSize);
    if (!file.read(reinterpret_cast<char *>(fileData.data()), fileSize)) {
        throw std::runtime_error("Failed to read file: " + filePath);
    }

    return fileData;
}

int main() {
    QuicClient client("10.10.3.201", 6121, "./certs/server.cert",
                      "./certs/server.key");
    client.Connect();
    // User u;

    // u.set_name("Akzestia");
    // u.set_email("akzestia@xxx.com");

    HQUIC connection = client.getConnection();

    Person p;

    uint64_t xuxu = reinterpret_cast<uint64_t>(connection);
    
    p.set_connection(xuxu);
    p.set_email("Akzestia");
    p.set_name("akzestia@xxx.com");

    Wrapper w;
    // *w.mutable_user() = u;
    *w.mutable_person() = p;
    w.set_route(0x01);

    absl::Cord cord;
    bool serialized = w.SerializePartialToCord(&cord);

    if(serialized){
        client.send(cord);
    }

    char ch = getchar();

    client.Disconnect();

    char cx = getchar();
    
    return 0;
}
