// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: encrypt_key.proto
// Protobuf C++ Version: 5.27.2

#ifndef GOOGLE_PROTOBUF_INCLUDED_encrypt_5fkey_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_encrypt_5fkey_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5027002
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_encrypt_5fkey_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_encrypt_5fkey_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_encrypt_5fkey_2eproto;
class Encrypt_key;
struct Encrypt_keyDefaultTypeInternal;
extern Encrypt_keyDefaultTypeInternal _Encrypt_key_default_instance_;
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google


// ===================================================================


// -------------------------------------------------------------------

class Encrypt_key final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:Encrypt_key) */ {
 public:
  inline Encrypt_key() : Encrypt_key(nullptr) {}
  ~Encrypt_key() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR Encrypt_key(
      ::google::protobuf::internal::ConstantInitialized);

  inline Encrypt_key(const Encrypt_key& from) : Encrypt_key(nullptr, from) {}
  inline Encrypt_key(Encrypt_key&& from) noexcept
      : Encrypt_key(nullptr, std::move(from)) {}
  inline Encrypt_key& operator=(const Encrypt_key& from) {
    CopyFrom(from);
    return *this;
  }
  inline Encrypt_key& operator=(Encrypt_key&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Encrypt_key& default_instance() {
    return *internal_default_instance();
  }
  static inline const Encrypt_key* internal_default_instance() {
    return reinterpret_cast<const Encrypt_key*>(
        &_Encrypt_key_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(Encrypt_key& a, Encrypt_key& b) { a.Swap(&b); }
  inline void Swap(Encrypt_key* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Encrypt_key* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Encrypt_key* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<Encrypt_key>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Encrypt_key& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const Encrypt_key& from) { Encrypt_key::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() final;
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(Encrypt_key* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "Encrypt_key"; }

 protected:
  explicit Encrypt_key(::google::protobuf::Arena* arena);
  Encrypt_key(::google::protobuf::Arena* arena, const Encrypt_key& from);
  Encrypt_key(::google::protobuf::Arena* arena, Encrypt_key&& from) noexcept
      : Encrypt_key(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kKeyFieldNumber = 1,
    kUserIdFieldNumber = 2,
  };
  // string _key = 1;
  void clear__key() ;
  const std::string& _key() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set__key(Arg_&& arg, Args_... args);
  std::string* mutable__key();
  PROTOBUF_NODISCARD std::string* release__key();
  void set_allocated__key(std::string* value);

  private:
  const std::string& _internal__key() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set__key(
      const std::string& value);
  std::string* _internal_mutable__key();

  public:
  // int32 _user_id = 2;
  void clear__user_id() ;
  ::int32_t _user_id() const;
  void set__user_id(::int32_t value);

  private:
  ::int32_t _internal__user_id() const;
  void _internal_set__user_id(::int32_t value);

  public:
  // @@protoc_insertion_point(class_scope:Encrypt_key)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      1, 2, 0,
      24, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_Encrypt_key_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const Encrypt_key& from_msg);
    ::google::protobuf::internal::ArenaStringPtr _key_;
    ::int32_t _user_id_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_encrypt_5fkey_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Encrypt_key

// string _key = 1;
inline void Encrypt_key::clear__key() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._key_.ClearToEmpty();
}
inline const std::string& Encrypt_key::_key() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:Encrypt_key._key)
  return _internal__key();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Encrypt_key::set__key(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._key_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:Encrypt_key._key)
}
inline std::string* Encrypt_key::mutable__key() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable__key();
  // @@protoc_insertion_point(field_mutable:Encrypt_key._key)
  return _s;
}
inline const std::string& Encrypt_key::_internal__key() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_._key_.Get();
}
inline void Encrypt_key::_internal_set__key(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._key_.Set(value, GetArena());
}
inline std::string* Encrypt_key::_internal_mutable__key() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_._key_.Mutable( GetArena());
}
inline std::string* Encrypt_key::release__key() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:Encrypt_key._key)
  return _impl_._key_.Release();
}
inline void Encrypt_key::set_allocated__key(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._key_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_._key_.IsDefault()) {
          _impl_._key_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Encrypt_key._key)
}

// int32 _user_id = 2;
inline void Encrypt_key::clear__user_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._user_id_ = 0;
}
inline ::int32_t Encrypt_key::_user_id() const {
  // @@protoc_insertion_point(field_get:Encrypt_key._user_id)
  return _internal__user_id();
}
inline void Encrypt_key::set__user_id(::int32_t value) {
  _internal_set__user_id(value);
  // @@protoc_insertion_point(field_set:Encrypt_key._user_id)
}
inline ::int32_t Encrypt_key::_internal__user_id() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_._user_id_;
}
inline void Encrypt_key::_internal_set__user_id(::int32_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._user_id_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_encrypt_5fkey_2eproto_2epb_2eh
