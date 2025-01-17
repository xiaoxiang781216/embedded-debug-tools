// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ui_state.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto;
namespace perfetto {
namespace protos {
class UiState;
struct UiStateDefaultTypeInternal;
extern UiStateDefaultTypeInternal _UiState_default_instance_;
class UiState_HighlightProcess;
struct UiState_HighlightProcessDefaultTypeInternal;
extern UiState_HighlightProcessDefaultTypeInternal _UiState_HighlightProcess_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template <>
::perfetto::protos::UiState* Arena::CreateMaybeMessage<::perfetto::protos::UiState>(Arena*);
template <>
::perfetto::protos::UiState_HighlightProcess* Arena::CreateMaybeMessage<::perfetto::protos::UiState_HighlightProcess>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace perfetto {
namespace protos {

// ===================================================================


// -------------------------------------------------------------------

class UiState_HighlightProcess final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.UiState.HighlightProcess) */ {
 public:
  inline UiState_HighlightProcess() : UiState_HighlightProcess(nullptr) {}
  ~UiState_HighlightProcess() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR UiState_HighlightProcess(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  UiState_HighlightProcess(const UiState_HighlightProcess& from);
  UiState_HighlightProcess(UiState_HighlightProcess&& from) noexcept
    : UiState_HighlightProcess() {
    *this = ::std::move(from);
  }

  inline UiState_HighlightProcess& operator=(const UiState_HighlightProcess& from) {
    CopyFrom(from);
    return *this;
  }
  inline UiState_HighlightProcess& operator=(UiState_HighlightProcess&& from) noexcept {
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
  static const UiState_HighlightProcess& default_instance() {
    return *internal_default_instance();
  }
  enum SelectorCase {
    kPid = 1,
    kCmdline = 2,
    SELECTOR_NOT_SET = 0,
  };

  static inline const UiState_HighlightProcess* internal_default_instance() {
    return reinterpret_cast<const UiState_HighlightProcess*>(
               &_UiState_HighlightProcess_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(UiState_HighlightProcess& a, UiState_HighlightProcess& b) {
    a.Swap(&b);
  }
  inline void Swap(UiState_HighlightProcess* other) {
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
  void UnsafeArenaSwap(UiState_HighlightProcess* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  UiState_HighlightProcess* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<UiState_HighlightProcess>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const UiState_HighlightProcess& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const UiState_HighlightProcess& from) {
    UiState_HighlightProcess::MergeImpl(*this, from);
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
  void InternalSwap(UiState_HighlightProcess* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.UiState.HighlightProcess";
  }
  protected:
  explicit UiState_HighlightProcess(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPidFieldNumber = 1,
    kCmdlineFieldNumber = 2,
  };
  // uint32 pid = 1;
  bool has_pid() const;
  void clear_pid() ;
  ::uint32_t pid() const;
  void set_pid(::uint32_t value);

  private:
  ::uint32_t _internal_pid() const;
  void _internal_set_pid(::uint32_t value);

  public:
  // string cmdline = 2;
  bool has_cmdline() const;
  void clear_cmdline() ;
  const std::string& cmdline() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_cmdline(Arg_&& arg, Args_... args);
  std::string* mutable_cmdline();
  PROTOBUF_NODISCARD std::string* release_cmdline();
  void set_allocated_cmdline(std::string* ptr);

  private:
  const std::string& _internal_cmdline() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_cmdline(
      const std::string& value);
  std::string* _internal_mutable_cmdline();

  public:
  void clear_selector();
  SelectorCase selector_case() const;
  // @@protoc_insertion_point(class_scope:perfetto.protos.UiState.HighlightProcess)
 private:
  class _Internal;
  void set_has_pid();
  void set_has_cmdline();

  inline bool has_selector() const;
  inline void clear_has_selector();

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    union SelectorUnion {
      constexpr SelectorUnion() : _constinit_{} {}
        ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
      ::uint32_t pid_;
      ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr cmdline_;
    } selector_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::uint32_t _oneof_case_[1];

  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto;
};// -------------------------------------------------------------------

class UiState final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.UiState) */ {
 public:
  inline UiState() : UiState(nullptr) {}
  ~UiState() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR UiState(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  UiState(const UiState& from);
  UiState(UiState&& from) noexcept
    : UiState() {
    *this = ::std::move(from);
  }

  inline UiState& operator=(const UiState& from) {
    CopyFrom(from);
    return *this;
  }
  inline UiState& operator=(UiState&& from) noexcept {
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
  static const UiState& default_instance() {
    return *internal_default_instance();
  }
  static inline const UiState* internal_default_instance() {
    return reinterpret_cast<const UiState*>(
               &_UiState_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(UiState& a, UiState& b) {
    a.Swap(&b);
  }
  inline void Swap(UiState* other) {
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
  void UnsafeArenaSwap(UiState* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  UiState* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<UiState>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const UiState& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const UiState& from) {
    UiState::MergeImpl(*this, from);
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
  void InternalSwap(UiState* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.UiState";
  }
  protected:
  explicit UiState(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef UiState_HighlightProcess HighlightProcess;

  // accessors -------------------------------------------------------

  enum : int {
    kHighlightProcessFieldNumber = 3,
    kTimelineStartTsFieldNumber = 1,
    kTimelineEndTsFieldNumber = 2,
  };
  // optional .perfetto.protos.UiState.HighlightProcess highlight_process = 3;
  bool has_highlight_process() const;
  void clear_highlight_process() ;
  const ::perfetto::protos::UiState_HighlightProcess& highlight_process() const;
  PROTOBUF_NODISCARD ::perfetto::protos::UiState_HighlightProcess* release_highlight_process();
  ::perfetto::protos::UiState_HighlightProcess* mutable_highlight_process();
  void set_allocated_highlight_process(::perfetto::protos::UiState_HighlightProcess* highlight_process);
  private:
  const ::perfetto::protos::UiState_HighlightProcess& _internal_highlight_process() const;
  ::perfetto::protos::UiState_HighlightProcess* _internal_mutable_highlight_process();
  public:
  void unsafe_arena_set_allocated_highlight_process(
      ::perfetto::protos::UiState_HighlightProcess* highlight_process);
  ::perfetto::protos::UiState_HighlightProcess* unsafe_arena_release_highlight_process();
  // optional int64 timeline_start_ts = 1;
  bool has_timeline_start_ts() const;
  void clear_timeline_start_ts() ;
  ::int64_t timeline_start_ts() const;
  void set_timeline_start_ts(::int64_t value);

  private:
  ::int64_t _internal_timeline_start_ts() const;
  void _internal_set_timeline_start_ts(::int64_t value);

  public:
  // optional int64 timeline_end_ts = 2;
  bool has_timeline_end_ts() const;
  void clear_timeline_end_ts() ;
  ::int64_t timeline_end_ts() const;
  void set_timeline_end_ts(::int64_t value);

  private:
  ::int64_t _internal_timeline_end_ts() const;
  void _internal_set_timeline_end_ts(::int64_t value);

  public:
  // @@protoc_insertion_point(class_scope:perfetto.protos.UiState)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::perfetto::protos::UiState_HighlightProcess* highlight_process_;
    ::int64_t timeline_start_ts_;
    ::int64_t timeline_end_ts_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// UiState_HighlightProcess

// uint32 pid = 1;
inline bool UiState_HighlightProcess::has_pid() const {
  return selector_case() == kPid;
}
inline void UiState_HighlightProcess::set_has_pid() {
  _impl_._oneof_case_[0] = kPid;
}
inline void UiState_HighlightProcess::clear_pid() {
  if (selector_case() == kPid) {
    _impl_.selector_.pid_ = 0u;
    clear_has_selector();
  }
}
inline ::uint32_t UiState_HighlightProcess::pid() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.UiState.HighlightProcess.pid)
  return _internal_pid();
}
inline void UiState_HighlightProcess::set_pid(::uint32_t value) {
  _internal_set_pid(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.UiState.HighlightProcess.pid)
}
inline ::uint32_t UiState_HighlightProcess::_internal_pid() const {
  if (selector_case() == kPid) {
    return _impl_.selector_.pid_;
  }
  return 0u;
}
inline void UiState_HighlightProcess::_internal_set_pid(::uint32_t value) {
  if (selector_case() != kPid) {
    clear_selector();
    set_has_pid();
  }
  _impl_.selector_.pid_ = value;
}

// string cmdline = 2;
inline bool UiState_HighlightProcess::has_cmdline() const {
  return selector_case() == kCmdline;
}
inline void UiState_HighlightProcess::set_has_cmdline() {
  _impl_._oneof_case_[0] = kCmdline;
}
inline void UiState_HighlightProcess::clear_cmdline() {
  if (selector_case() == kCmdline) {
    _impl_.selector_.cmdline_.Destroy();
    clear_has_selector();
  }
}
inline const std::string& UiState_HighlightProcess::cmdline() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.UiState.HighlightProcess.cmdline)
  return _internal_cmdline();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void UiState_HighlightProcess::set_cmdline(Arg_&& arg,
                                                     Args_... args) {
  if (selector_case() != kCmdline) {
    clear_selector();

    set_has_cmdline();
    _impl_.selector_.cmdline_.InitDefault();
  }
  _impl_.selector_.cmdline_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.UiState.HighlightProcess.cmdline)
}
inline std::string* UiState_HighlightProcess::mutable_cmdline() {
  std::string* _s = _internal_mutable_cmdline();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.UiState.HighlightProcess.cmdline)
  return _s;
}
inline const std::string& UiState_HighlightProcess::_internal_cmdline() const {
  if (selector_case() != kCmdline) {
    return ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited();
  }
  return _impl_.selector_.cmdline_.Get();
}
inline void UiState_HighlightProcess::_internal_set_cmdline(const std::string& value) {
  if (selector_case() != kCmdline) {
    clear_selector();

    set_has_cmdline();
    _impl_.selector_.cmdline_.InitDefault();
  }


  _impl_.selector_.cmdline_.Set(value, GetArenaForAllocation());
}
inline std::string* UiState_HighlightProcess::_internal_mutable_cmdline() {
  if (selector_case() != kCmdline) {
    clear_selector();

    set_has_cmdline();
    _impl_.selector_.cmdline_.InitDefault();
  }
  return _impl_.selector_.cmdline_.Mutable( GetArenaForAllocation());
}
inline std::string* UiState_HighlightProcess::release_cmdline() {
  // @@protoc_insertion_point(field_release:perfetto.protos.UiState.HighlightProcess.cmdline)
  if (selector_case() != kCmdline) {
    return nullptr;
  }
  clear_has_selector();
  return _impl_.selector_.cmdline_.Release();
}
inline void UiState_HighlightProcess::set_allocated_cmdline(std::string* value) {
  if (has_selector()) {
    clear_selector();
  }
  if (value != nullptr) {
    set_has_cmdline();
    _impl_.selector_.cmdline_.InitAllocated(value, GetArenaForAllocation());
  }
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.UiState.HighlightProcess.cmdline)
}

inline bool UiState_HighlightProcess::has_selector() const {
  return selector_case() != SELECTOR_NOT_SET;
}
inline void UiState_HighlightProcess::clear_has_selector() {
  _impl_._oneof_case_[0] = SELECTOR_NOT_SET;
}
inline UiState_HighlightProcess::SelectorCase UiState_HighlightProcess::selector_case() const {
  return UiState_HighlightProcess::SelectorCase(_impl_._oneof_case_[0]);
}
// -------------------------------------------------------------------

// UiState

// optional int64 timeline_start_ts = 1;
inline bool UiState::has_timeline_start_ts() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void UiState::clear_timeline_start_ts() {
  _impl_.timeline_start_ts_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::int64_t UiState::timeline_start_ts() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.UiState.timeline_start_ts)
  return _internal_timeline_start_ts();
}
inline void UiState::set_timeline_start_ts(::int64_t value) {
  _internal_set_timeline_start_ts(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.UiState.timeline_start_ts)
}
inline ::int64_t UiState::_internal_timeline_start_ts() const {
  return _impl_.timeline_start_ts_;
}
inline void UiState::_internal_set_timeline_start_ts(::int64_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.timeline_start_ts_ = value;
}

// optional int64 timeline_end_ts = 2;
inline bool UiState::has_timeline_end_ts() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void UiState::clear_timeline_end_ts() {
  _impl_.timeline_end_ts_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::int64_t UiState::timeline_end_ts() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.UiState.timeline_end_ts)
  return _internal_timeline_end_ts();
}
inline void UiState::set_timeline_end_ts(::int64_t value) {
  _internal_set_timeline_end_ts(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.UiState.timeline_end_ts)
}
inline ::int64_t UiState::_internal_timeline_end_ts() const {
  return _impl_.timeline_end_ts_;
}
inline void UiState::_internal_set_timeline_end_ts(::int64_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.timeline_end_ts_ = value;
}

// optional .perfetto.protos.UiState.HighlightProcess highlight_process = 3;
inline bool UiState::has_highlight_process() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.highlight_process_ != nullptr);
  return value;
}
inline void UiState::clear_highlight_process() {
  if (_impl_.highlight_process_ != nullptr) _impl_.highlight_process_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const ::perfetto::protos::UiState_HighlightProcess& UiState::_internal_highlight_process() const {
  const ::perfetto::protos::UiState_HighlightProcess* p = _impl_.highlight_process_;
  return p != nullptr ? *p : reinterpret_cast<const ::perfetto::protos::UiState_HighlightProcess&>(
      ::perfetto::protos::_UiState_HighlightProcess_default_instance_);
}
inline const ::perfetto::protos::UiState_HighlightProcess& UiState::highlight_process() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.UiState.highlight_process)
  return _internal_highlight_process();
}
inline void UiState::unsafe_arena_set_allocated_highlight_process(
    ::perfetto::protos::UiState_HighlightProcess* highlight_process) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.highlight_process_);
  }
  _impl_.highlight_process_ = highlight_process;
  if (highlight_process) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:perfetto.protos.UiState.highlight_process)
}
inline ::perfetto::protos::UiState_HighlightProcess* UiState::release_highlight_process() {
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::perfetto::protos::UiState_HighlightProcess* temp = _impl_.highlight_process_;
  _impl_.highlight_process_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::perfetto::protos::UiState_HighlightProcess* UiState::unsafe_arena_release_highlight_process() {
  // @@protoc_insertion_point(field_release:perfetto.protos.UiState.highlight_process)
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::perfetto::protos::UiState_HighlightProcess* temp = _impl_.highlight_process_;
  _impl_.highlight_process_ = nullptr;
  return temp;
}
inline ::perfetto::protos::UiState_HighlightProcess* UiState::_internal_mutable_highlight_process() {
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.highlight_process_ == nullptr) {
    auto* p = CreateMaybeMessage<::perfetto::protos::UiState_HighlightProcess>(GetArenaForAllocation());
    _impl_.highlight_process_ = p;
  }
  return _impl_.highlight_process_;
}
inline ::perfetto::protos::UiState_HighlightProcess* UiState::mutable_highlight_process() {
  ::perfetto::protos::UiState_HighlightProcess* _msg = _internal_mutable_highlight_process();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.UiState.highlight_process)
  return _msg;
}
inline void UiState::set_allocated_highlight_process(::perfetto::protos::UiState_HighlightProcess* highlight_process) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete _impl_.highlight_process_;
  }
  if (highlight_process) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(highlight_process);
    if (message_arena != submessage_arena) {
      highlight_process = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, highlight_process, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.highlight_process_ = highlight_process;
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.UiState.highlight_process)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto_2epb_2eh
