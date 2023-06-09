// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg.proto

#ifndef PROTOBUF_INCLUDED_msg_2eproto
#define PROTOBUF_INCLUDED_msg_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_msg_2eproto 

namespace protobuf_msg_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_msg_2eproto
namespace messageQ {
class Msgbuf;
class MsgbufDefaultTypeInternal;
extern MsgbufDefaultTypeInternal _Msgbuf_default_instance_;
}  // namespace messageQ
namespace google {
namespace protobuf {
template<> ::messageQ::Msgbuf* Arena::CreateMaybeMessage<::messageQ::Msgbuf>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace messageQ {

// ===================================================================

class Msgbuf : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:messageQ.Msgbuf) */ {
 public:
  Msgbuf();
  virtual ~Msgbuf();

  Msgbuf(const Msgbuf& from);

  inline Msgbuf& operator=(const Msgbuf& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Msgbuf(Msgbuf&& from) noexcept
    : Msgbuf() {
    *this = ::std::move(from);
  }

  inline Msgbuf& operator=(Msgbuf&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Msgbuf& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Msgbuf* internal_default_instance() {
    return reinterpret_cast<const Msgbuf*>(
               &_Msgbuf_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Msgbuf* other);
  friend void swap(Msgbuf& a, Msgbuf& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Msgbuf* New() const final {
    return CreateMaybeMessage<Msgbuf>(NULL);
  }

  Msgbuf* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Msgbuf>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Msgbuf& from);
  void MergeFrom(const Msgbuf& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Msgbuf* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string text = 2;
  bool has_text() const;
  void clear_text();
  static const int kTextFieldNumber = 2;
  const ::std::string& text() const;
  void set_text(const ::std::string& value);
  #if LANG_CXX11
  void set_text(::std::string&& value);
  #endif
  void set_text(const char* value);
  void set_text(const char* value, size_t size);
  ::std::string* mutable_text();
  ::std::string* release_text();
  void set_allocated_text(::std::string* text);

  // optional int64 id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int64 id() const;
  void set_id(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:messageQ.Msgbuf)
 private:
  void set_has_id();
  void clear_has_id();
  void set_has_text();
  void clear_has_text();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr text_;
  ::google::protobuf::int64 id_;
  friend struct ::protobuf_msg_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Msgbuf

// optional int64 id = 1;
inline bool Msgbuf::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Msgbuf::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Msgbuf::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Msgbuf::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
  clear_has_id();
}
inline ::google::protobuf::int64 Msgbuf::id() const {
  // @@protoc_insertion_point(field_get:messageQ.Msgbuf.id)
  return id_;
}
inline void Msgbuf::set_id(::google::protobuf::int64 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:messageQ.Msgbuf.id)
}

// optional string text = 2;
inline bool Msgbuf::has_text() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Msgbuf::set_has_text() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Msgbuf::clear_has_text() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Msgbuf::clear_text() {
  text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_text();
}
inline const ::std::string& Msgbuf::text() const {
  // @@protoc_insertion_point(field_get:messageQ.Msgbuf.text)
  return text_.GetNoArena();
}
inline void Msgbuf::set_text(const ::std::string& value) {
  set_has_text();
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:messageQ.Msgbuf.text)
}
#if LANG_CXX11
inline void Msgbuf::set_text(::std::string&& value) {
  set_has_text();
  text_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:messageQ.Msgbuf.text)
}
#endif
inline void Msgbuf::set_text(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_text();
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:messageQ.Msgbuf.text)
}
inline void Msgbuf::set_text(const char* value, size_t size) {
  set_has_text();
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:messageQ.Msgbuf.text)
}
inline ::std::string* Msgbuf::mutable_text() {
  set_has_text();
  // @@protoc_insertion_point(field_mutable:messageQ.Msgbuf.text)
  return text_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Msgbuf::release_text() {
  // @@protoc_insertion_point(field_release:messageQ.Msgbuf.text)
  if (!has_text()) {
    return NULL;
  }
  clear_has_text();
  return text_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Msgbuf::set_allocated_text(::std::string* text) {
  if (text != NULL) {
    set_has_text();
  } else {
    clear_has_text();
  }
  text_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), text);
  // @@protoc_insertion_point(field_set_allocated:messageQ.Msgbuf.text)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace messageQ

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_msg_2eproto
