// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/config/android/android_system_property_config.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fsystem_5fproperty_5fconfig_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fsystem_5fproperty_5fconfig_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4023000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4023003 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
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

#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fsystem_5fproperty_5fconfig_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fsystem_5fproperty_5fconfig_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fsystem_5fproperty_5fconfig_2eproto;
namespace perfetto {
namespace protos {
class AndroidSystemPropertyConfig;
struct AndroidSystemPropertyConfigDefaultTypeInternal;
extern AndroidSystemPropertyConfigDefaultTypeInternal _AndroidSystemPropertyConfig_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template <>
::perfetto::protos::AndroidSystemPropertyConfig* Arena::CreateMaybeMessage<::perfetto::protos::AndroidSystemPropertyConfig>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace perfetto {
namespace protos {

// ===================================================================


// -------------------------------------------------------------------

class AndroidSystemPropertyConfig final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.AndroidSystemPropertyConfig) */ {
 public:
  inline AndroidSystemPropertyConfig() : AndroidSystemPropertyConfig(nullptr) {}
  ~AndroidSystemPropertyConfig() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR AndroidSystemPropertyConfig(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  AndroidSystemPropertyConfig(const AndroidSystemPropertyConfig& from);
  AndroidSystemPropertyConfig(AndroidSystemPropertyConfig&& from) noexcept
    : AndroidSystemPropertyConfig() {
    *this = ::std::move(from);
  }

  inline AndroidSystemPropertyConfig& operator=(const AndroidSystemPropertyConfig& from) {
    CopyFrom(from);
    return *this;
  }
  inline AndroidSystemPropertyConfig& operator=(AndroidSystemPropertyConfig&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const AndroidSystemPropertyConfig& default_instance() {
    return *internal_default_instance();
  }
  static inline const AndroidSystemPropertyConfig* internal_default_instance() {
    return reinterpret_cast<const AndroidSystemPropertyConfig*>(
               &_AndroidSystemPropertyConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AndroidSystemPropertyConfig& a, AndroidSystemPropertyConfig& b) {
    a.Swap(&b);
  }
  inline void Swap(AndroidSystemPropertyConfig* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(AndroidSystemPropertyConfig* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  AndroidSystemPropertyConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<AndroidSystemPropertyConfig>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const AndroidSystemPropertyConfig& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const AndroidSystemPropertyConfig& from) {
    AndroidSystemPropertyConfig::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AndroidSystemPropertyConfig* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.AndroidSystemPropertyConfig";
  }
  protected:
  explicit AndroidSystemPropertyConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPropertyNameFieldNumber = 2,
    kPollMsFieldNumber = 1,
  };
  // repeated string property_name = 2;
  int property_name_size() const;
  private:
  int _internal_property_name_size() const;

  public:
  void clear_property_name() ;
  const std::string& property_name(int index) const;
  std::string* mutable_property_name(int index);
  void set_property_name(int index, const std::string& value);
  void set_property_name(int index, std::string&& value);
  void set_property_name(int index, const char* value);
  void set_property_name(int index, const char* value, std::size_t size);
  void set_property_name(int index, absl::string_view value);
  std::string* add_property_name();
  void add_property_name(const std::string& value);
  void add_property_name(std::string&& value);
  void add_property_name(const char* value);
  void add_property_name(const char* value, std::size_t size);
  void add_property_name(absl::string_view value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& property_name() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_property_name();

  private:
  const std::string& _internal_property_name(int index) const;
  std::string* _internal_add_property_name();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& _internal_property_name() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* _internal_mutable_property_name();

  public:
  // optional uint32 poll_ms = 1;
  bool has_poll_ms() const;
  void clear_poll_ms() ;
  ::uint32_t poll_ms() const;
  void set_poll_ms(::uint32_t value);

  private:
  ::uint32_t _internal_poll_ms() const;
  void _internal_set_poll_ms(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:perfetto.protos.AndroidSystemPropertyConfig)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> property_name_;
    ::uint32_t poll_ms_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fsystem_5fproperty_5fconfig_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// AndroidSystemPropertyConfig

// optional uint32 poll_ms = 1;
inline bool AndroidSystemPropertyConfig::has_poll_ms() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void AndroidSystemPropertyConfig::clear_poll_ms() {
  _impl_.poll_ms_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::uint32_t AndroidSystemPropertyConfig::poll_ms() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.AndroidSystemPropertyConfig.poll_ms)
  return _internal_poll_ms();
}
inline void AndroidSystemPropertyConfig::set_poll_ms(::uint32_t value) {
  _internal_set_poll_ms(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.AndroidSystemPropertyConfig.poll_ms)
}
inline ::uint32_t AndroidSystemPropertyConfig::_internal_poll_ms() const {
  return _impl_.poll_ms_;
}
inline void AndroidSystemPropertyConfig::_internal_set_poll_ms(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.poll_ms_ = value;
}

// repeated string property_name = 2;
inline int AndroidSystemPropertyConfig::_internal_property_name_size() const {
  return _impl_.property_name_.size();
}
inline int AndroidSystemPropertyConfig::property_name_size() const {
  return _internal_property_name_size();
}
inline void AndroidSystemPropertyConfig::clear_property_name() {
  _internal_mutable_property_name()->Clear();
}
inline std::string* AndroidSystemPropertyConfig::add_property_name() {
  std::string* _s = _internal_add_property_name();
  // @@protoc_insertion_point(field_add_mutable:perfetto.protos.AndroidSystemPropertyConfig.property_name)
  return _s;
}
inline const std::string& AndroidSystemPropertyConfig::property_name(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.AndroidSystemPropertyConfig.property_name)
  return _internal_property_name(index);
}
inline std::string* AndroidSystemPropertyConfig::mutable_property_name(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.AndroidSystemPropertyConfig.property_name)
  return _internal_mutable_property_name()->Mutable(index);
}
inline void AndroidSystemPropertyConfig::set_property_name(int index, const std::string& value) {
  _internal_mutable_property_name()->Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.AndroidSystemPropertyConfig.property_name)
}
inline void AndroidSystemPropertyConfig::set_property_name(int index, std::string&& value) {
  _internal_mutable_property_name()->Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:perfetto.protos.AndroidSystemPropertyConfig.property_name)
}
inline void AndroidSystemPropertyConfig::set_property_name(int index, const char* value) {
  ABSL_DCHECK(value != nullptr);
  _internal_mutable_property_name()->Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:perfetto.protos.AndroidSystemPropertyConfig.property_name)
}
inline void AndroidSystemPropertyConfig::set_property_name(int index, const char* value,
                              std::size_t size) {
  _internal_mutable_property_name()->Mutable(index)->assign(
      reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.AndroidSystemPropertyConfig.property_name)
}
inline void AndroidSystemPropertyConfig::set_property_name(int index, absl::string_view value) {
  _internal_mutable_property_name()->Mutable(index)->assign(value.data(),
                                                     value.size());
  // @@protoc_insertion_point(field_set_string_piece:perfetto.protos.AndroidSystemPropertyConfig.property_name)
}
inline void AndroidSystemPropertyConfig::add_property_name(const std::string& value) {
  _internal_mutable_property_name()->Add()->assign(value);
  // @@protoc_insertion_point(field_add:perfetto.protos.AndroidSystemPropertyConfig.property_name)
}
inline void AndroidSystemPropertyConfig::add_property_name(std::string&& value) {
  _internal_mutable_property_name()->Add(std::move(value));
  // @@protoc_insertion_point(field_add:perfetto.protos.AndroidSystemPropertyConfig.property_name)
}
inline void AndroidSystemPropertyConfig::add_property_name(const char* value) {
  ABSL_DCHECK(value != nullptr);
  _internal_mutable_property_name()->Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:perfetto.protos.AndroidSystemPropertyConfig.property_name)
}
inline void AndroidSystemPropertyConfig::add_property_name(const char* value, std::size_t size) {
  _internal_mutable_property_name()->Add()->assign(
      reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:perfetto.protos.AndroidSystemPropertyConfig.property_name)
}
inline void AndroidSystemPropertyConfig::add_property_name(absl::string_view value) {
  _internal_mutable_property_name()->Add()->assign(value.data(), value.size());
  // @@protoc_insertion_point(field_add_string_piece:perfetto.protos.AndroidSystemPropertyConfig.property_name)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
AndroidSystemPropertyConfig::property_name() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.AndroidSystemPropertyConfig.property_name)
  return _internal_property_name();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* AndroidSystemPropertyConfig::mutable_property_name() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.AndroidSystemPropertyConfig.property_name)
  return _internal_mutable_property_name();
}
inline const std::string& AndroidSystemPropertyConfig::_internal_property_name(int index) const {
  return _internal_property_name().Get(index);
}
inline std::string* AndroidSystemPropertyConfig::_internal_add_property_name() {
  return _internal_mutable_property_name()->Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
AndroidSystemPropertyConfig::_internal_property_name() const {
  return _impl_.property_name_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
AndroidSystemPropertyConfig::_internal_mutable_property_name() {
  return &_impl_.property_name_;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fsystem_5fproperty_5fconfig_2eproto_2epb_2eh
