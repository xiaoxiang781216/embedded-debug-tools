// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/track_event/chrome_process_descriptor.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fprocess_5fdescriptor_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fprocess_5fdescriptor_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fprocess_5fdescriptor_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fprocess_5fdescriptor_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fprocess_5fdescriptor_2eproto;
namespace perfetto {
namespace protos {
class ChromeProcessDescriptor;
struct ChromeProcessDescriptorDefaultTypeInternal;
extern ChromeProcessDescriptorDefaultTypeInternal _ChromeProcessDescriptor_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template <>
::perfetto::protos::ChromeProcessDescriptor* Arena::CreateMaybeMessage<::perfetto::protos::ChromeProcessDescriptor>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace perfetto {
namespace protos {
enum ChromeProcessDescriptor_ProcessType : int {
  ChromeProcessDescriptor_ProcessType_PROCESS_UNSPECIFIED = 0,
  ChromeProcessDescriptor_ProcessType_PROCESS_BROWSER = 1,
  ChromeProcessDescriptor_ProcessType_PROCESS_RENDERER = 2,
  ChromeProcessDescriptor_ProcessType_PROCESS_UTILITY = 3,
  ChromeProcessDescriptor_ProcessType_PROCESS_ZYGOTE = 4,
  ChromeProcessDescriptor_ProcessType_PROCESS_SANDBOX_HELPER = 5,
  ChromeProcessDescriptor_ProcessType_PROCESS_GPU = 6,
  ChromeProcessDescriptor_ProcessType_PROCESS_PPAPI_PLUGIN = 7,
  ChromeProcessDescriptor_ProcessType_PROCESS_PPAPI_BROKER = 8,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_NETWORK = 9,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_TRACING = 10,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_STORAGE = 11,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_AUDIO = 12,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_DATA_DECODER = 13,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_UTIL_WIN = 14,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_PROXY_RESOLVER = 15,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_CDM = 16,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_VIDEO_CAPTURE = 17,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_UNZIPPER = 18,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_MIRRORING = 19,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_FILEPATCHER = 20,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_TTS = 21,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_PRINTING = 22,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_QUARANTINE = 23,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_CROS_LOCALSEARCH = 24,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_CROS_ASSISTANT_AUDIO_DECODER = 25,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_FILEUTIL = 26,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_PRINTCOMPOSITOR = 27,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_PAINTPREVIEW = 28,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_SPEECHRECOGNITION = 29,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_XRDEVICE = 30,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_READICON = 31,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_LANGUAGEDETECTION = 32,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_SHARING = 33,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_MEDIAPARSER = 34,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_QRCODEGENERATOR = 35,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_PROFILEIMPORT = 36,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_IME = 37,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_RECORDING = 38,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_SHAPEDETECTION = 39,
  ChromeProcessDescriptor_ProcessType_PROCESS_RENDERER_EXTENSION = 40,
};

bool ChromeProcessDescriptor_ProcessType_IsValid(int value);
constexpr ChromeProcessDescriptor_ProcessType ChromeProcessDescriptor_ProcessType_ProcessType_MIN = static_cast<ChromeProcessDescriptor_ProcessType>(0);
constexpr ChromeProcessDescriptor_ProcessType ChromeProcessDescriptor_ProcessType_ProcessType_MAX = static_cast<ChromeProcessDescriptor_ProcessType>(40);
constexpr int ChromeProcessDescriptor_ProcessType_ProcessType_ARRAYSIZE = 40 + 1;
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
ChromeProcessDescriptor_ProcessType_descriptor();
template <typename T>
const std::string& ChromeProcessDescriptor_ProcessType_Name(T value) {
  static_assert(std::is_same<T, ChromeProcessDescriptor_ProcessType>::value ||
                    std::is_integral<T>::value,
                "Incorrect type passed to ProcessType_Name().");
  return ChromeProcessDescriptor_ProcessType_Name(static_cast<ChromeProcessDescriptor_ProcessType>(value));
}
template <>
inline const std::string& ChromeProcessDescriptor_ProcessType_Name(ChromeProcessDescriptor_ProcessType value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfDenseEnum<ChromeProcessDescriptor_ProcessType_descriptor,
                                                 0, 40>(
      static_cast<int>(value));
}
inline bool ChromeProcessDescriptor_ProcessType_Parse(absl::string_view name, ChromeProcessDescriptor_ProcessType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ChromeProcessDescriptor_ProcessType>(
      ChromeProcessDescriptor_ProcessType_descriptor(), name, value);
}

// ===================================================================


// -------------------------------------------------------------------

class ChromeProcessDescriptor final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.ChromeProcessDescriptor) */ {
 public:
  inline ChromeProcessDescriptor() : ChromeProcessDescriptor(nullptr) {}
  ~ChromeProcessDescriptor() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR ChromeProcessDescriptor(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ChromeProcessDescriptor(const ChromeProcessDescriptor& from);
  ChromeProcessDescriptor(ChromeProcessDescriptor&& from) noexcept
    : ChromeProcessDescriptor() {
    *this = ::std::move(from);
  }

  inline ChromeProcessDescriptor& operator=(const ChromeProcessDescriptor& from) {
    CopyFrom(from);
    return *this;
  }
  inline ChromeProcessDescriptor& operator=(ChromeProcessDescriptor&& from) noexcept {
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
  static const ChromeProcessDescriptor& default_instance() {
    return *internal_default_instance();
  }
  static inline const ChromeProcessDescriptor* internal_default_instance() {
    return reinterpret_cast<const ChromeProcessDescriptor*>(
               &_ChromeProcessDescriptor_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ChromeProcessDescriptor& a, ChromeProcessDescriptor& b) {
    a.Swap(&b);
  }
  inline void Swap(ChromeProcessDescriptor* other) {
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
  void UnsafeArenaSwap(ChromeProcessDescriptor* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ChromeProcessDescriptor* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ChromeProcessDescriptor>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ChromeProcessDescriptor& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ChromeProcessDescriptor& from) {
    ChromeProcessDescriptor::MergeImpl(*this, from);
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
  void InternalSwap(ChromeProcessDescriptor* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.ChromeProcessDescriptor";
  }
  protected:
  explicit ChromeProcessDescriptor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  using ProcessType = ChromeProcessDescriptor_ProcessType;
  static constexpr ProcessType PROCESS_UNSPECIFIED = ChromeProcessDescriptor_ProcessType_PROCESS_UNSPECIFIED;
  static constexpr ProcessType PROCESS_BROWSER = ChromeProcessDescriptor_ProcessType_PROCESS_BROWSER;
  static constexpr ProcessType PROCESS_RENDERER = ChromeProcessDescriptor_ProcessType_PROCESS_RENDERER;
  static constexpr ProcessType PROCESS_UTILITY = ChromeProcessDescriptor_ProcessType_PROCESS_UTILITY;
  static constexpr ProcessType PROCESS_ZYGOTE = ChromeProcessDescriptor_ProcessType_PROCESS_ZYGOTE;
  static constexpr ProcessType PROCESS_SANDBOX_HELPER = ChromeProcessDescriptor_ProcessType_PROCESS_SANDBOX_HELPER;
  static constexpr ProcessType PROCESS_GPU = ChromeProcessDescriptor_ProcessType_PROCESS_GPU;
  static constexpr ProcessType PROCESS_PPAPI_PLUGIN = ChromeProcessDescriptor_ProcessType_PROCESS_PPAPI_PLUGIN;
  static constexpr ProcessType PROCESS_PPAPI_BROKER = ChromeProcessDescriptor_ProcessType_PROCESS_PPAPI_BROKER;
  static constexpr ProcessType PROCESS_SERVICE_NETWORK = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_NETWORK;
  static constexpr ProcessType PROCESS_SERVICE_TRACING = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_TRACING;
  static constexpr ProcessType PROCESS_SERVICE_STORAGE = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_STORAGE;
  static constexpr ProcessType PROCESS_SERVICE_AUDIO = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_AUDIO;
  static constexpr ProcessType PROCESS_SERVICE_DATA_DECODER = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_DATA_DECODER;
  static constexpr ProcessType PROCESS_SERVICE_UTIL_WIN = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_UTIL_WIN;
  static constexpr ProcessType PROCESS_SERVICE_PROXY_RESOLVER = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_PROXY_RESOLVER;
  static constexpr ProcessType PROCESS_SERVICE_CDM = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_CDM;
  static constexpr ProcessType PROCESS_SERVICE_VIDEO_CAPTURE = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_VIDEO_CAPTURE;
  static constexpr ProcessType PROCESS_SERVICE_UNZIPPER = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_UNZIPPER;
  static constexpr ProcessType PROCESS_SERVICE_MIRRORING = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_MIRRORING;
  static constexpr ProcessType PROCESS_SERVICE_FILEPATCHER = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_FILEPATCHER;
  static constexpr ProcessType PROCESS_SERVICE_TTS = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_TTS;
  static constexpr ProcessType PROCESS_SERVICE_PRINTING = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_PRINTING;
  static constexpr ProcessType PROCESS_SERVICE_QUARANTINE = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_QUARANTINE;
  static constexpr ProcessType PROCESS_SERVICE_CROS_LOCALSEARCH = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_CROS_LOCALSEARCH;
  static constexpr ProcessType PROCESS_SERVICE_CROS_ASSISTANT_AUDIO_DECODER = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_CROS_ASSISTANT_AUDIO_DECODER;
  static constexpr ProcessType PROCESS_SERVICE_FILEUTIL = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_FILEUTIL;
  static constexpr ProcessType PROCESS_SERVICE_PRINTCOMPOSITOR = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_PRINTCOMPOSITOR;
  static constexpr ProcessType PROCESS_SERVICE_PAINTPREVIEW = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_PAINTPREVIEW;
  static constexpr ProcessType PROCESS_SERVICE_SPEECHRECOGNITION = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_SPEECHRECOGNITION;
  static constexpr ProcessType PROCESS_SERVICE_XRDEVICE = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_XRDEVICE;
  static constexpr ProcessType PROCESS_SERVICE_READICON = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_READICON;
  static constexpr ProcessType PROCESS_SERVICE_LANGUAGEDETECTION = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_LANGUAGEDETECTION;
  static constexpr ProcessType PROCESS_SERVICE_SHARING = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_SHARING;
  static constexpr ProcessType PROCESS_SERVICE_MEDIAPARSER = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_MEDIAPARSER;
  static constexpr ProcessType PROCESS_SERVICE_QRCODEGENERATOR = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_QRCODEGENERATOR;
  static constexpr ProcessType PROCESS_SERVICE_PROFILEIMPORT = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_PROFILEIMPORT;
  static constexpr ProcessType PROCESS_SERVICE_IME = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_IME;
  static constexpr ProcessType PROCESS_SERVICE_RECORDING = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_RECORDING;
  static constexpr ProcessType PROCESS_SERVICE_SHAPEDETECTION = ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_SHAPEDETECTION;
  static constexpr ProcessType PROCESS_RENDERER_EXTENSION = ChromeProcessDescriptor_ProcessType_PROCESS_RENDERER_EXTENSION;
  static inline bool ProcessType_IsValid(int value) {
    return ChromeProcessDescriptor_ProcessType_IsValid(value);
  }
  static constexpr ProcessType ProcessType_MIN = ChromeProcessDescriptor_ProcessType_ProcessType_MIN;
  static constexpr ProcessType ProcessType_MAX = ChromeProcessDescriptor_ProcessType_ProcessType_MAX;
  static constexpr int ProcessType_ARRAYSIZE = ChromeProcessDescriptor_ProcessType_ProcessType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ProcessType_descriptor() {
    return ChromeProcessDescriptor_ProcessType_descriptor();
  }
  template <typename T>
  static inline const std::string& ProcessType_Name(T value) {
    return ChromeProcessDescriptor_ProcessType_Name(value);
  }
  static inline bool ProcessType_Parse(absl::string_view name, ProcessType* value) {
    return ChromeProcessDescriptor_ProcessType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kHostAppPackageNameFieldNumber = 4,
    kProcessTypeFieldNumber = 1,
    kProcessPriorityFieldNumber = 2,
    kCrashTraceIdFieldNumber = 5,
    kLegacySortIndexFieldNumber = 3,
  };
  // optional string host_app_package_name = 4;
  bool has_host_app_package_name() const;
  void clear_host_app_package_name() ;
  const std::string& host_app_package_name() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_host_app_package_name(Arg_&& arg, Args_... args);
  std::string* mutable_host_app_package_name();
  PROTOBUF_NODISCARD std::string* release_host_app_package_name();
  void set_allocated_host_app_package_name(std::string* ptr);

  private:
  const std::string& _internal_host_app_package_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_host_app_package_name(
      const std::string& value);
  std::string* _internal_mutable_host_app_package_name();

  public:
  // optional .perfetto.protos.ChromeProcessDescriptor.ProcessType process_type = 1;
  bool has_process_type() const;
  void clear_process_type() ;
  ::perfetto::protos::ChromeProcessDescriptor_ProcessType process_type() const;
  void set_process_type(::perfetto::protos::ChromeProcessDescriptor_ProcessType value);

  private:
  ::perfetto::protos::ChromeProcessDescriptor_ProcessType _internal_process_type() const;
  void _internal_set_process_type(::perfetto::protos::ChromeProcessDescriptor_ProcessType value);

  public:
  // optional int32 process_priority = 2;
  bool has_process_priority() const;
  void clear_process_priority() ;
  ::int32_t process_priority() const;
  void set_process_priority(::int32_t value);

  private:
  ::int32_t _internal_process_priority() const;
  void _internal_set_process_priority(::int32_t value);

  public:
  // optional uint64 crash_trace_id = 5;
  bool has_crash_trace_id() const;
  void clear_crash_trace_id() ;
  ::uint64_t crash_trace_id() const;
  void set_crash_trace_id(::uint64_t value);

  private:
  ::uint64_t _internal_crash_trace_id() const;
  void _internal_set_crash_trace_id(::uint64_t value);

  public:
  // optional int32 legacy_sort_index = 3;
  bool has_legacy_sort_index() const;
  void clear_legacy_sort_index() ;
  ::int32_t legacy_sort_index() const;
  void set_legacy_sort_index(::int32_t value);

  private:
  ::int32_t _internal_legacy_sort_index() const;
  void _internal_set_legacy_sort_index(::int32_t value);

  public:
  // @@protoc_insertion_point(class_scope:perfetto.protos.ChromeProcessDescriptor)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr host_app_package_name_;
    int process_type_;
    ::int32_t process_priority_;
    ::uint64_t crash_trace_id_;
    ::int32_t legacy_sort_index_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fprocess_5fdescriptor_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// ChromeProcessDescriptor

// optional .perfetto.protos.ChromeProcessDescriptor.ProcessType process_type = 1;
inline bool ChromeProcessDescriptor::has_process_type() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void ChromeProcessDescriptor::clear_process_type() {
  _impl_.process_type_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::perfetto::protos::ChromeProcessDescriptor_ProcessType ChromeProcessDescriptor::process_type() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeProcessDescriptor.process_type)
  return _internal_process_type();
}
inline void ChromeProcessDescriptor::set_process_type(::perfetto::protos::ChromeProcessDescriptor_ProcessType value) {
   _internal_set_process_type(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeProcessDescriptor.process_type)
}
inline ::perfetto::protos::ChromeProcessDescriptor_ProcessType ChromeProcessDescriptor::_internal_process_type() const {
  return static_cast<::perfetto::protos::ChromeProcessDescriptor_ProcessType>(_impl_.process_type_);
}
inline void ChromeProcessDescriptor::_internal_set_process_type(::perfetto::protos::ChromeProcessDescriptor_ProcessType value) {
  assert(::perfetto::protos::ChromeProcessDescriptor_ProcessType_IsValid(value));
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.process_type_ = value;
}

// optional int32 process_priority = 2;
inline bool ChromeProcessDescriptor::has_process_priority() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void ChromeProcessDescriptor::clear_process_priority() {
  _impl_.process_priority_ = 0;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::int32_t ChromeProcessDescriptor::process_priority() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeProcessDescriptor.process_priority)
  return _internal_process_priority();
}
inline void ChromeProcessDescriptor::set_process_priority(::int32_t value) {
  _internal_set_process_priority(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeProcessDescriptor.process_priority)
}
inline ::int32_t ChromeProcessDescriptor::_internal_process_priority() const {
  return _impl_.process_priority_;
}
inline void ChromeProcessDescriptor::_internal_set_process_priority(::int32_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.process_priority_ = value;
}

// optional int32 legacy_sort_index = 3;
inline bool ChromeProcessDescriptor::has_legacy_sort_index() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline void ChromeProcessDescriptor::clear_legacy_sort_index() {
  _impl_.legacy_sort_index_ = 0;
  _impl_._has_bits_[0] &= ~0x00000010u;
}
inline ::int32_t ChromeProcessDescriptor::legacy_sort_index() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeProcessDescriptor.legacy_sort_index)
  return _internal_legacy_sort_index();
}
inline void ChromeProcessDescriptor::set_legacy_sort_index(::int32_t value) {
  _internal_set_legacy_sort_index(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeProcessDescriptor.legacy_sort_index)
}
inline ::int32_t ChromeProcessDescriptor::_internal_legacy_sort_index() const {
  return _impl_.legacy_sort_index_;
}
inline void ChromeProcessDescriptor::_internal_set_legacy_sort_index(::int32_t value) {
  _impl_._has_bits_[0] |= 0x00000010u;
  _impl_.legacy_sort_index_ = value;
}

// optional string host_app_package_name = 4;
inline bool ChromeProcessDescriptor::has_host_app_package_name() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void ChromeProcessDescriptor::clear_host_app_package_name() {
  _impl_.host_app_package_name_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& ChromeProcessDescriptor::host_app_package_name() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeProcessDescriptor.host_app_package_name)
  return _internal_host_app_package_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void ChromeProcessDescriptor::set_host_app_package_name(Arg_&& arg,
                                                     Args_... args) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.host_app_package_name_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeProcessDescriptor.host_app_package_name)
}
inline std::string* ChromeProcessDescriptor::mutable_host_app_package_name() {
  std::string* _s = _internal_mutable_host_app_package_name();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.ChromeProcessDescriptor.host_app_package_name)
  return _s;
}
inline const std::string& ChromeProcessDescriptor::_internal_host_app_package_name() const {
  return _impl_.host_app_package_name_.Get();
}
inline void ChromeProcessDescriptor::_internal_set_host_app_package_name(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;


  _impl_.host_app_package_name_.Set(value, GetArenaForAllocation());
}
inline std::string* ChromeProcessDescriptor::_internal_mutable_host_app_package_name() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.host_app_package_name_.Mutable( GetArenaForAllocation());
}
inline std::string* ChromeProcessDescriptor::release_host_app_package_name() {
  // @@protoc_insertion_point(field_release:perfetto.protos.ChromeProcessDescriptor.host_app_package_name)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.host_app_package_name_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.host_app_package_name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void ChromeProcessDescriptor::set_allocated_host_app_package_name(std::string* value) {
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.host_app_package_name_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.host_app_package_name_.IsDefault()) {
          _impl_.host_app_package_name_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.ChromeProcessDescriptor.host_app_package_name)
}

// optional uint64 crash_trace_id = 5;
inline bool ChromeProcessDescriptor::has_crash_trace_id() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline void ChromeProcessDescriptor::clear_crash_trace_id() {
  _impl_.crash_trace_id_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::uint64_t ChromeProcessDescriptor::crash_trace_id() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeProcessDescriptor.crash_trace_id)
  return _internal_crash_trace_id();
}
inline void ChromeProcessDescriptor::set_crash_trace_id(::uint64_t value) {
  _internal_set_crash_trace_id(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeProcessDescriptor.crash_trace_id)
}
inline ::uint64_t ChromeProcessDescriptor::_internal_crash_trace_id() const {
  return _impl_.crash_trace_id_;
}
inline void ChromeProcessDescriptor::_internal_set_crash_trace_id(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.crash_trace_id_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto


PROTOBUF_NAMESPACE_OPEN

template <>
struct is_proto_enum<::perfetto::protos::ChromeProcessDescriptor_ProcessType> : std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor<::perfetto::protos::ChromeProcessDescriptor_ProcessType>() {
  return ::perfetto::protos::ChromeProcessDescriptor_ProcessType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fprocess_5fdescriptor_2eproto_2epb_2eh
