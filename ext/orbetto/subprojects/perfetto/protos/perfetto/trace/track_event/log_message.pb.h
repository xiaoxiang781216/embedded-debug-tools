// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/track_event/log_message.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2flog_5fmessage_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2flog_5fmessage_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2ftrack_5fevent_2flog_5fmessage_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2flog_5fmessage_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2flog_5fmessage_2eproto;
namespace perfetto {
namespace protos {
class LogMessage;
struct LogMessageDefaultTypeInternal;
extern LogMessageDefaultTypeInternal _LogMessage_default_instance_;
class LogMessageBody;
struct LogMessageBodyDefaultTypeInternal;
extern LogMessageBodyDefaultTypeInternal _LogMessageBody_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template <>
::perfetto::protos::LogMessage* Arena::CreateMaybeMessage<::perfetto::protos::LogMessage>(Arena*);
template <>
::perfetto::protos::LogMessageBody* Arena::CreateMaybeMessage<::perfetto::protos::LogMessageBody>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace perfetto {
namespace protos {
enum LogMessage_Priority : int {
  LogMessage_Priority_PRIO_UNSPECIFIED = 0,
  LogMessage_Priority_PRIO_UNUSED = 1,
  LogMessage_Priority_PRIO_VERBOSE = 2,
  LogMessage_Priority_PRIO_DEBUG = 3,
  LogMessage_Priority_PRIO_INFO = 4,
  LogMessage_Priority_PRIO_WARN = 5,
  LogMessage_Priority_PRIO_ERROR = 6,
  LogMessage_Priority_PRIO_FATAL = 7,
};

bool LogMessage_Priority_IsValid(int value);
constexpr LogMessage_Priority LogMessage_Priority_Priority_MIN = static_cast<LogMessage_Priority>(0);
constexpr LogMessage_Priority LogMessage_Priority_Priority_MAX = static_cast<LogMessage_Priority>(7);
constexpr int LogMessage_Priority_Priority_ARRAYSIZE = 7 + 1;
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
LogMessage_Priority_descriptor();
template <typename T>
const std::string& LogMessage_Priority_Name(T value) {
  static_assert(std::is_same<T, LogMessage_Priority>::value ||
                    std::is_integral<T>::value,
                "Incorrect type passed to Priority_Name().");
  return LogMessage_Priority_Name(static_cast<LogMessage_Priority>(value));
}
template <>
inline const std::string& LogMessage_Priority_Name(LogMessage_Priority value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfDenseEnum<LogMessage_Priority_descriptor,
                                                 0, 7>(
      static_cast<int>(value));
}
inline bool LogMessage_Priority_Parse(absl::string_view name, LogMessage_Priority* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<LogMessage_Priority>(
      LogMessage_Priority_descriptor(), name, value);
}

// ===================================================================


// -------------------------------------------------------------------

class LogMessage final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.LogMessage) */ {
 public:
  inline LogMessage() : LogMessage(nullptr) {}
  ~LogMessage() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR LogMessage(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  LogMessage(const LogMessage& from);
  LogMessage(LogMessage&& from) noexcept
    : LogMessage() {
    *this = ::std::move(from);
  }

  inline LogMessage& operator=(const LogMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline LogMessage& operator=(LogMessage&& from) noexcept {
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
  static const LogMessage& default_instance() {
    return *internal_default_instance();
  }
  static inline const LogMessage* internal_default_instance() {
    return reinterpret_cast<const LogMessage*>(
               &_LogMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LogMessage& a, LogMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(LogMessage* other) {
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
  void UnsafeArenaSwap(LogMessage* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  LogMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<LogMessage>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const LogMessage& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const LogMessage& from) {
    LogMessage::MergeImpl(*this, from);
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
  void InternalSwap(LogMessage* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.LogMessage";
  }
  protected:
  explicit LogMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  using Priority = LogMessage_Priority;
  static constexpr Priority PRIO_UNSPECIFIED = LogMessage_Priority_PRIO_UNSPECIFIED;
  static constexpr Priority PRIO_UNUSED = LogMessage_Priority_PRIO_UNUSED;
  static constexpr Priority PRIO_VERBOSE = LogMessage_Priority_PRIO_VERBOSE;
  static constexpr Priority PRIO_DEBUG = LogMessage_Priority_PRIO_DEBUG;
  static constexpr Priority PRIO_INFO = LogMessage_Priority_PRIO_INFO;
  static constexpr Priority PRIO_WARN = LogMessage_Priority_PRIO_WARN;
  static constexpr Priority PRIO_ERROR = LogMessage_Priority_PRIO_ERROR;
  static constexpr Priority PRIO_FATAL = LogMessage_Priority_PRIO_FATAL;
  static inline bool Priority_IsValid(int value) {
    return LogMessage_Priority_IsValid(value);
  }
  static constexpr Priority Priority_MIN = LogMessage_Priority_Priority_MIN;
  static constexpr Priority Priority_MAX = LogMessage_Priority_Priority_MAX;
  static constexpr int Priority_ARRAYSIZE = LogMessage_Priority_Priority_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Priority_descriptor() {
    return LogMessage_Priority_descriptor();
  }
  template <typename T>
  static inline const std::string& Priority_Name(T value) {
    return LogMessage_Priority_Name(value);
  }
  static inline bool Priority_Parse(absl::string_view name, Priority* value) {
    return LogMessage_Priority_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kSourceLocationIidFieldNumber = 1,
    kBodyIidFieldNumber = 2,
    kPrioFieldNumber = 3,
  };
  // optional uint64 source_location_iid = 1;
  bool has_source_location_iid() const;
  void clear_source_location_iid() ;
  ::uint64_t source_location_iid() const;
  void set_source_location_iid(::uint64_t value);

  private:
  ::uint64_t _internal_source_location_iid() const;
  void _internal_set_source_location_iid(::uint64_t value);

  public:
  // optional uint64 body_iid = 2;
  bool has_body_iid() const;
  void clear_body_iid() ;
  ::uint64_t body_iid() const;
  void set_body_iid(::uint64_t value);

  private:
  ::uint64_t _internal_body_iid() const;
  void _internal_set_body_iid(::uint64_t value);

  public:
  // optional .perfetto.protos.LogMessage.Priority prio = 3;
  bool has_prio() const;
  void clear_prio() ;
  ::perfetto::protos::LogMessage_Priority prio() const;
  void set_prio(::perfetto::protos::LogMessage_Priority value);

  private:
  ::perfetto::protos::LogMessage_Priority _internal_prio() const;
  void _internal_set_prio(::perfetto::protos::LogMessage_Priority value);

  public:
  // @@protoc_insertion_point(class_scope:perfetto.protos.LogMessage)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::uint64_t source_location_iid_;
    ::uint64_t body_iid_;
    int prio_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2flog_5fmessage_2eproto;
};// -------------------------------------------------------------------

class LogMessageBody final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.LogMessageBody) */ {
 public:
  inline LogMessageBody() : LogMessageBody(nullptr) {}
  ~LogMessageBody() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR LogMessageBody(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  LogMessageBody(const LogMessageBody& from);
  LogMessageBody(LogMessageBody&& from) noexcept
    : LogMessageBody() {
    *this = ::std::move(from);
  }

  inline LogMessageBody& operator=(const LogMessageBody& from) {
    CopyFrom(from);
    return *this;
  }
  inline LogMessageBody& operator=(LogMessageBody&& from) noexcept {
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
  static const LogMessageBody& default_instance() {
    return *internal_default_instance();
  }
  static inline const LogMessageBody* internal_default_instance() {
    return reinterpret_cast<const LogMessageBody*>(
               &_LogMessageBody_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(LogMessageBody& a, LogMessageBody& b) {
    a.Swap(&b);
  }
  inline void Swap(LogMessageBody* other) {
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
  void UnsafeArenaSwap(LogMessageBody* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  LogMessageBody* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<LogMessageBody>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const LogMessageBody& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const LogMessageBody& from) {
    LogMessageBody::MergeImpl(*this, from);
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
  void InternalSwap(LogMessageBody* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.LogMessageBody";
  }
  protected:
  explicit LogMessageBody(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kBodyFieldNumber = 2,
    kIidFieldNumber = 1,
  };
  // optional string body = 2;
  bool has_body() const;
  void clear_body() ;
  const std::string& body() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_body(Arg_&& arg, Args_... args);
  std::string* mutable_body();
  PROTOBUF_NODISCARD std::string* release_body();
  void set_allocated_body(std::string* ptr);

  private:
  const std::string& _internal_body() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_body(
      const std::string& value);
  std::string* _internal_mutable_body();

  public:
  // optional uint64 iid = 1;
  bool has_iid() const;
  void clear_iid() ;
  ::uint64_t iid() const;
  void set_iid(::uint64_t value);

  private:
  ::uint64_t _internal_iid() const;
  void _internal_set_iid(::uint64_t value);

  public:
  // @@protoc_insertion_point(class_scope:perfetto.protos.LogMessageBody)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr body_;
    ::uint64_t iid_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2flog_5fmessage_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// LogMessage

// optional uint64 source_location_iid = 1;
inline bool LogMessage::has_source_location_iid() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void LogMessage::clear_source_location_iid() {
  _impl_.source_location_iid_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::uint64_t LogMessage::source_location_iid() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.LogMessage.source_location_iid)
  return _internal_source_location_iid();
}
inline void LogMessage::set_source_location_iid(::uint64_t value) {
  _internal_set_source_location_iid(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.LogMessage.source_location_iid)
}
inline ::uint64_t LogMessage::_internal_source_location_iid() const {
  return _impl_.source_location_iid_;
}
inline void LogMessage::_internal_set_source_location_iid(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.source_location_iid_ = value;
}

// optional uint64 body_iid = 2;
inline bool LogMessage::has_body_iid() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void LogMessage::clear_body_iid() {
  _impl_.body_iid_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::uint64_t LogMessage::body_iid() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.LogMessage.body_iid)
  return _internal_body_iid();
}
inline void LogMessage::set_body_iid(::uint64_t value) {
  _internal_set_body_iid(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.LogMessage.body_iid)
}
inline ::uint64_t LogMessage::_internal_body_iid() const {
  return _impl_.body_iid_;
}
inline void LogMessage::_internal_set_body_iid(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.body_iid_ = value;
}

// optional .perfetto.protos.LogMessage.Priority prio = 3;
inline bool LogMessage::has_prio() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void LogMessage::clear_prio() {
  _impl_.prio_ = 0;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::perfetto::protos::LogMessage_Priority LogMessage::prio() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.LogMessage.prio)
  return _internal_prio();
}
inline void LogMessage::set_prio(::perfetto::protos::LogMessage_Priority value) {
   _internal_set_prio(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.LogMessage.prio)
}
inline ::perfetto::protos::LogMessage_Priority LogMessage::_internal_prio() const {
  return static_cast<::perfetto::protos::LogMessage_Priority>(_impl_.prio_);
}
inline void LogMessage::_internal_set_prio(::perfetto::protos::LogMessage_Priority value) {
  assert(::perfetto::protos::LogMessage_Priority_IsValid(value));
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.prio_ = value;
}

// -------------------------------------------------------------------

// LogMessageBody

// optional uint64 iid = 1;
inline bool LogMessageBody::has_iid() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void LogMessageBody::clear_iid() {
  _impl_.iid_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::uint64_t LogMessageBody::iid() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.LogMessageBody.iid)
  return _internal_iid();
}
inline void LogMessageBody::set_iid(::uint64_t value) {
  _internal_set_iid(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.LogMessageBody.iid)
}
inline ::uint64_t LogMessageBody::_internal_iid() const {
  return _impl_.iid_;
}
inline void LogMessageBody::_internal_set_iid(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.iid_ = value;
}

// optional string body = 2;
inline bool LogMessageBody::has_body() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void LogMessageBody::clear_body() {
  _impl_.body_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& LogMessageBody::body() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.LogMessageBody.body)
  return _internal_body();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void LogMessageBody::set_body(Arg_&& arg,
                                                     Args_... args) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.body_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.LogMessageBody.body)
}
inline std::string* LogMessageBody::mutable_body() {
  std::string* _s = _internal_mutable_body();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.LogMessageBody.body)
  return _s;
}
inline const std::string& LogMessageBody::_internal_body() const {
  return _impl_.body_.Get();
}
inline void LogMessageBody::_internal_set_body(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;


  _impl_.body_.Set(value, GetArenaForAllocation());
}
inline std::string* LogMessageBody::_internal_mutable_body() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.body_.Mutable( GetArenaForAllocation());
}
inline std::string* LogMessageBody::release_body() {
  // @@protoc_insertion_point(field_release:perfetto.protos.LogMessageBody.body)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.body_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.body_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void LogMessageBody::set_allocated_body(std::string* value) {
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.body_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.body_.IsDefault()) {
          _impl_.body_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.LogMessageBody.body)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto


PROTOBUF_NAMESPACE_OPEN

template <>
struct is_proto_enum<::perfetto::protos::LogMessage_Priority> : std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor<::perfetto::protos::LogMessage_Priority>() {
  return ::perfetto::protos::LogMessage_Priority_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2flog_5fmessage_2eproto_2epb_2eh