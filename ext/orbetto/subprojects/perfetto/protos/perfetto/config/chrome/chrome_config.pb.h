// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/config/chrome/chrome_config.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fchrome_2fchrome_5fconfig_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fchrome_2fchrome_5fconfig_2eproto_2epb_2eh

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
#include "google/protobuf/generated_enum_reflection.h"
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2fconfig_2fchrome_2fchrome_5fconfig_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2fconfig_2fchrome_2fchrome_5fconfig_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_protos_2fperfetto_2fconfig_2fchrome_2fchrome_5fconfig_2eproto;
namespace perfetto {
namespace protos {
class ChromeConfig;
struct ChromeConfigDefaultTypeInternal;
extern ChromeConfigDefaultTypeInternal _ChromeConfig_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template <>
::perfetto::protos::ChromeConfig* Arena::CreateMaybeMessage<::perfetto::protos::ChromeConfig>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace perfetto {
namespace protos {
enum ChromeConfig_ClientPriority : int {
  ChromeConfig_ClientPriority_UNKNOWN = 0,
  ChromeConfig_ClientPriority_BACKGROUND = 1,
  ChromeConfig_ClientPriority_USER_INITIATED = 2,
};

bool ChromeConfig_ClientPriority_IsValid(int value);
constexpr ChromeConfig_ClientPriority ChromeConfig_ClientPriority_ClientPriority_MIN = static_cast<ChromeConfig_ClientPriority>(0);
constexpr ChromeConfig_ClientPriority ChromeConfig_ClientPriority_ClientPriority_MAX = static_cast<ChromeConfig_ClientPriority>(2);
constexpr int ChromeConfig_ClientPriority_ClientPriority_ARRAYSIZE = 2 + 1;
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
ChromeConfig_ClientPriority_descriptor();
template <typename T>
const std::string& ChromeConfig_ClientPriority_Name(T value) {
  static_assert(std::is_same<T, ChromeConfig_ClientPriority>::value ||
                    std::is_integral<T>::value,
                "Incorrect type passed to ClientPriority_Name().");
  return ChromeConfig_ClientPriority_Name(static_cast<ChromeConfig_ClientPriority>(value));
}
template <>
inline const std::string& ChromeConfig_ClientPriority_Name(ChromeConfig_ClientPriority value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfDenseEnum<ChromeConfig_ClientPriority_descriptor,
                                                 0, 2>(
      static_cast<int>(value));
}
inline bool ChromeConfig_ClientPriority_Parse(absl::string_view name, ChromeConfig_ClientPriority* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ChromeConfig_ClientPriority>(
      ChromeConfig_ClientPriority_descriptor(), name, value);
}

// ===================================================================


// -------------------------------------------------------------------

class ChromeConfig final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.ChromeConfig) */ {
 public:
  inline ChromeConfig() : ChromeConfig(nullptr) {}
  ~ChromeConfig() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR ChromeConfig(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ChromeConfig(const ChromeConfig& from);
  ChromeConfig(ChromeConfig&& from) noexcept
    : ChromeConfig() {
    *this = ::std::move(from);
  }

  inline ChromeConfig& operator=(const ChromeConfig& from) {
    CopyFrom(from);
    return *this;
  }
  inline ChromeConfig& operator=(ChromeConfig&& from) noexcept {
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
  static const ChromeConfig& default_instance() {
    return *internal_default_instance();
  }
  static inline const ChromeConfig* internal_default_instance() {
    return reinterpret_cast<const ChromeConfig*>(
               &_ChromeConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ChromeConfig& a, ChromeConfig& b) {
    a.Swap(&b);
  }
  inline void Swap(ChromeConfig* other) {
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
  void UnsafeArenaSwap(ChromeConfig* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ChromeConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ChromeConfig>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ChromeConfig& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ChromeConfig& from) {
    ChromeConfig::MergeImpl(*this, from);
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
  void InternalSwap(ChromeConfig* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.ChromeConfig";
  }
  protected:
  explicit ChromeConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  using ClientPriority = ChromeConfig_ClientPriority;
  static constexpr ClientPriority UNKNOWN = ChromeConfig_ClientPriority_UNKNOWN;
  static constexpr ClientPriority BACKGROUND = ChromeConfig_ClientPriority_BACKGROUND;
  static constexpr ClientPriority USER_INITIATED = ChromeConfig_ClientPriority_USER_INITIATED;
  static inline bool ClientPriority_IsValid(int value) {
    return ChromeConfig_ClientPriority_IsValid(value);
  }
  static constexpr ClientPriority ClientPriority_MIN = ChromeConfig_ClientPriority_ClientPriority_MIN;
  static constexpr ClientPriority ClientPriority_MAX = ChromeConfig_ClientPriority_ClientPriority_MAX;
  static constexpr int ClientPriority_ARRAYSIZE = ChromeConfig_ClientPriority_ClientPriority_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ClientPriority_descriptor() {
    return ChromeConfig_ClientPriority_descriptor();
  }
  template <typename T>
  static inline const std::string& ClientPriority_Name(T value) {
    return ChromeConfig_ClientPriority_Name(value);
  }
  static inline bool ClientPriority_Parse(absl::string_view name, ClientPriority* value) {
    return ChromeConfig_ClientPriority_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kTraceConfigFieldNumber = 1,
    kJsonAgentLabelFilterFieldNumber = 5,
    kPrivacyFilteringEnabledFieldNumber = 2,
    kConvertToLegacyJsonFieldNumber = 3,
    kClientPriorityFieldNumber = 4,
  };
  // optional string trace_config = 1;
  bool has_trace_config() const;
  void clear_trace_config() ;
  const std::string& trace_config() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_trace_config(Arg_&& arg, Args_... args);
  std::string* mutable_trace_config();
  PROTOBUF_NODISCARD std::string* release_trace_config();
  void set_allocated_trace_config(std::string* ptr);

  private:
  const std::string& _internal_trace_config() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_trace_config(
      const std::string& value);
  std::string* _internal_mutable_trace_config();

  public:
  // optional string json_agent_label_filter = 5;
  bool has_json_agent_label_filter() const;
  void clear_json_agent_label_filter() ;
  const std::string& json_agent_label_filter() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_json_agent_label_filter(Arg_&& arg, Args_... args);
  std::string* mutable_json_agent_label_filter();
  PROTOBUF_NODISCARD std::string* release_json_agent_label_filter();
  void set_allocated_json_agent_label_filter(std::string* ptr);

  private:
  const std::string& _internal_json_agent_label_filter() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_json_agent_label_filter(
      const std::string& value);
  std::string* _internal_mutable_json_agent_label_filter();

  public:
  // optional bool privacy_filtering_enabled = 2;
  bool has_privacy_filtering_enabled() const;
  void clear_privacy_filtering_enabled() ;
  bool privacy_filtering_enabled() const;
  void set_privacy_filtering_enabled(bool value);

  private:
  bool _internal_privacy_filtering_enabled() const;
  void _internal_set_privacy_filtering_enabled(bool value);

  public:
  // optional bool convert_to_legacy_json = 3;
  bool has_convert_to_legacy_json() const;
  void clear_convert_to_legacy_json() ;
  bool convert_to_legacy_json() const;
  void set_convert_to_legacy_json(bool value);

  private:
  bool _internal_convert_to_legacy_json() const;
  void _internal_set_convert_to_legacy_json(bool value);

  public:
  // optional .perfetto.protos.ChromeConfig.ClientPriority client_priority = 4;
  bool has_client_priority() const;
  void clear_client_priority() ;
  ::perfetto::protos::ChromeConfig_ClientPriority client_priority() const;
  void set_client_priority(::perfetto::protos::ChromeConfig_ClientPriority value);

  private:
  ::perfetto::protos::ChromeConfig_ClientPriority _internal_client_priority() const;
  void _internal_set_client_priority(::perfetto::protos::ChromeConfig_ClientPriority value);

  public:
  // @@protoc_insertion_point(class_scope:perfetto.protos.ChromeConfig)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr trace_config_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr json_agent_label_filter_;
    bool privacy_filtering_enabled_;
    bool convert_to_legacy_json_;
    int client_priority_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2fconfig_2fchrome_2fchrome_5fconfig_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// ChromeConfig

// optional string trace_config = 1;
inline bool ChromeConfig::has_trace_config() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void ChromeConfig::clear_trace_config() {
  _impl_.trace_config_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& ChromeConfig::trace_config() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeConfig.trace_config)
  return _internal_trace_config();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void ChromeConfig::set_trace_config(Arg_&& arg,
                                                     Args_... args) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.trace_config_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeConfig.trace_config)
}
inline std::string* ChromeConfig::mutable_trace_config() {
  std::string* _s = _internal_mutable_trace_config();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.ChromeConfig.trace_config)
  return _s;
}
inline const std::string& ChromeConfig::_internal_trace_config() const {
  return _impl_.trace_config_.Get();
}
inline void ChromeConfig::_internal_set_trace_config(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;


  _impl_.trace_config_.Set(value, GetArenaForAllocation());
}
inline std::string* ChromeConfig::_internal_mutable_trace_config() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.trace_config_.Mutable( GetArenaForAllocation());
}
inline std::string* ChromeConfig::release_trace_config() {
  // @@protoc_insertion_point(field_release:perfetto.protos.ChromeConfig.trace_config)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.trace_config_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.trace_config_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void ChromeConfig::set_allocated_trace_config(std::string* value) {
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.trace_config_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.trace_config_.IsDefault()) {
          _impl_.trace_config_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.ChromeConfig.trace_config)
}

// optional bool privacy_filtering_enabled = 2;
inline bool ChromeConfig::has_privacy_filtering_enabled() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void ChromeConfig::clear_privacy_filtering_enabled() {
  _impl_.privacy_filtering_enabled_ = false;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline bool ChromeConfig::privacy_filtering_enabled() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeConfig.privacy_filtering_enabled)
  return _internal_privacy_filtering_enabled();
}
inline void ChromeConfig::set_privacy_filtering_enabled(bool value) {
  _internal_set_privacy_filtering_enabled(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeConfig.privacy_filtering_enabled)
}
inline bool ChromeConfig::_internal_privacy_filtering_enabled() const {
  return _impl_.privacy_filtering_enabled_;
}
inline void ChromeConfig::_internal_set_privacy_filtering_enabled(bool value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.privacy_filtering_enabled_ = value;
}

// optional bool convert_to_legacy_json = 3;
inline bool ChromeConfig::has_convert_to_legacy_json() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline void ChromeConfig::clear_convert_to_legacy_json() {
  _impl_.convert_to_legacy_json_ = false;
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline bool ChromeConfig::convert_to_legacy_json() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeConfig.convert_to_legacy_json)
  return _internal_convert_to_legacy_json();
}
inline void ChromeConfig::set_convert_to_legacy_json(bool value) {
  _internal_set_convert_to_legacy_json(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeConfig.convert_to_legacy_json)
}
inline bool ChromeConfig::_internal_convert_to_legacy_json() const {
  return _impl_.convert_to_legacy_json_;
}
inline void ChromeConfig::_internal_set_convert_to_legacy_json(bool value) {
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.convert_to_legacy_json_ = value;
}

// optional .perfetto.protos.ChromeConfig.ClientPriority client_priority = 4;
inline bool ChromeConfig::has_client_priority() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline void ChromeConfig::clear_client_priority() {
  _impl_.client_priority_ = 0;
  _impl_._has_bits_[0] &= ~0x00000010u;
}
inline ::perfetto::protos::ChromeConfig_ClientPriority ChromeConfig::client_priority() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeConfig.client_priority)
  return _internal_client_priority();
}
inline void ChromeConfig::set_client_priority(::perfetto::protos::ChromeConfig_ClientPriority value) {
   _internal_set_client_priority(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeConfig.client_priority)
}
inline ::perfetto::protos::ChromeConfig_ClientPriority ChromeConfig::_internal_client_priority() const {
  return static_cast<::perfetto::protos::ChromeConfig_ClientPriority>(_impl_.client_priority_);
}
inline void ChromeConfig::_internal_set_client_priority(::perfetto::protos::ChromeConfig_ClientPriority value) {
  assert(::perfetto::protos::ChromeConfig_ClientPriority_IsValid(value));
  _impl_._has_bits_[0] |= 0x00000010u;
  _impl_.client_priority_ = value;
}

// optional string json_agent_label_filter = 5;
inline bool ChromeConfig::has_json_agent_label_filter() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void ChromeConfig::clear_json_agent_label_filter() {
  _impl_.json_agent_label_filter_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& ChromeConfig::json_agent_label_filter() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeConfig.json_agent_label_filter)
  return _internal_json_agent_label_filter();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void ChromeConfig::set_json_agent_label_filter(Arg_&& arg,
                                                     Args_... args) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.json_agent_label_filter_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeConfig.json_agent_label_filter)
}
inline std::string* ChromeConfig::mutable_json_agent_label_filter() {
  std::string* _s = _internal_mutable_json_agent_label_filter();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.ChromeConfig.json_agent_label_filter)
  return _s;
}
inline const std::string& ChromeConfig::_internal_json_agent_label_filter() const {
  return _impl_.json_agent_label_filter_.Get();
}
inline void ChromeConfig::_internal_set_json_agent_label_filter(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000002u;


  _impl_.json_agent_label_filter_.Set(value, GetArenaForAllocation());
}
inline std::string* ChromeConfig::_internal_mutable_json_agent_label_filter() {
  _impl_._has_bits_[0] |= 0x00000002u;
  return _impl_.json_agent_label_filter_.Mutable( GetArenaForAllocation());
}
inline std::string* ChromeConfig::release_json_agent_label_filter() {
  // @@protoc_insertion_point(field_release:perfetto.protos.ChromeConfig.json_agent_label_filter)
  if ((_impl_._has_bits_[0] & 0x00000002u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000002u;
  auto* released = _impl_.json_agent_label_filter_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.json_agent_label_filter_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void ChromeConfig::set_allocated_json_agent_label_filter(std::string* value) {
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.json_agent_label_filter_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.json_agent_label_filter_.IsDefault()) {
          _impl_.json_agent_label_filter_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.ChromeConfig.json_agent_label_filter)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto


PROTOBUF_NAMESPACE_OPEN

template <>
struct is_proto_enum<::perfetto::protos::ChromeConfig_ClientPriority> : std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor<::perfetto::protos::ChromeConfig_ClientPriority>() {
  return ::perfetto::protos::ChromeConfig_ClientPriority_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fchrome_2fchrome_5fconfig_2eproto_2epb_2eh
