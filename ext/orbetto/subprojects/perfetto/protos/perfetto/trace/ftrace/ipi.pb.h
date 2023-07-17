// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/ipi.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fipi_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fipi_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fftrace_2fipi_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fipi_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fipi_2eproto;
namespace perfetto {
namespace protos {
class IpiEntryFtraceEvent;
struct IpiEntryFtraceEventDefaultTypeInternal;
extern IpiEntryFtraceEventDefaultTypeInternal _IpiEntryFtraceEvent_default_instance_;
class IpiExitFtraceEvent;
struct IpiExitFtraceEventDefaultTypeInternal;
extern IpiExitFtraceEventDefaultTypeInternal _IpiExitFtraceEvent_default_instance_;
class IpiRaiseFtraceEvent;
struct IpiRaiseFtraceEventDefaultTypeInternal;
extern IpiRaiseFtraceEventDefaultTypeInternal _IpiRaiseFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template <>
::perfetto::protos::IpiEntryFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::IpiEntryFtraceEvent>(Arena*);
template <>
::perfetto::protos::IpiExitFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::IpiExitFtraceEvent>(Arena*);
template <>
::perfetto::protos::IpiRaiseFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::IpiRaiseFtraceEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace perfetto {
namespace protos {

// ===================================================================


// -------------------------------------------------------------------

class IpiEntryFtraceEvent final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.IpiEntryFtraceEvent) */ {
 public:
  inline IpiEntryFtraceEvent() : IpiEntryFtraceEvent(nullptr) {}
  ~IpiEntryFtraceEvent() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR IpiEntryFtraceEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  IpiEntryFtraceEvent(const IpiEntryFtraceEvent& from);
  IpiEntryFtraceEvent(IpiEntryFtraceEvent&& from) noexcept
    : IpiEntryFtraceEvent() {
    *this = ::std::move(from);
  }

  inline IpiEntryFtraceEvent& operator=(const IpiEntryFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline IpiEntryFtraceEvent& operator=(IpiEntryFtraceEvent&& from) noexcept {
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
  static const IpiEntryFtraceEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const IpiEntryFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const IpiEntryFtraceEvent*>(
               &_IpiEntryFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(IpiEntryFtraceEvent& a, IpiEntryFtraceEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(IpiEntryFtraceEvent* other) {
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
  void UnsafeArenaSwap(IpiEntryFtraceEvent* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  IpiEntryFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<IpiEntryFtraceEvent>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const IpiEntryFtraceEvent& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const IpiEntryFtraceEvent& from) {
    IpiEntryFtraceEvent::MergeImpl(*this, from);
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
  void InternalSwap(IpiEntryFtraceEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.IpiEntryFtraceEvent";
  }
  protected:
  explicit IpiEntryFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kReasonFieldNumber = 1,
  };
  // optional string reason = 1;
  bool has_reason() const;
  void clear_reason() ;
  const std::string& reason() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_reason(Arg_&& arg, Args_... args);
  std::string* mutable_reason();
  PROTOBUF_NODISCARD std::string* release_reason();
  void set_allocated_reason(std::string* ptr);

  private:
  const std::string& _internal_reason() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_reason(
      const std::string& value);
  std::string* _internal_mutable_reason();

  public:
  // @@protoc_insertion_point(class_scope:perfetto.protos.IpiEntryFtraceEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr reason_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fipi_2eproto;
};// -------------------------------------------------------------------

class IpiExitFtraceEvent final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.IpiExitFtraceEvent) */ {
 public:
  inline IpiExitFtraceEvent() : IpiExitFtraceEvent(nullptr) {}
  ~IpiExitFtraceEvent() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR IpiExitFtraceEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  IpiExitFtraceEvent(const IpiExitFtraceEvent& from);
  IpiExitFtraceEvent(IpiExitFtraceEvent&& from) noexcept
    : IpiExitFtraceEvent() {
    *this = ::std::move(from);
  }

  inline IpiExitFtraceEvent& operator=(const IpiExitFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline IpiExitFtraceEvent& operator=(IpiExitFtraceEvent&& from) noexcept {
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
  static const IpiExitFtraceEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const IpiExitFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const IpiExitFtraceEvent*>(
               &_IpiExitFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(IpiExitFtraceEvent& a, IpiExitFtraceEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(IpiExitFtraceEvent* other) {
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
  void UnsafeArenaSwap(IpiExitFtraceEvent* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  IpiExitFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<IpiExitFtraceEvent>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const IpiExitFtraceEvent& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const IpiExitFtraceEvent& from) {
    IpiExitFtraceEvent::MergeImpl(*this, from);
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
  void InternalSwap(IpiExitFtraceEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.IpiExitFtraceEvent";
  }
  protected:
  explicit IpiExitFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kReasonFieldNumber = 1,
  };
  // optional string reason = 1;
  bool has_reason() const;
  void clear_reason() ;
  const std::string& reason() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_reason(Arg_&& arg, Args_... args);
  std::string* mutable_reason();
  PROTOBUF_NODISCARD std::string* release_reason();
  void set_allocated_reason(std::string* ptr);

  private:
  const std::string& _internal_reason() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_reason(
      const std::string& value);
  std::string* _internal_mutable_reason();

  public:
  // @@protoc_insertion_point(class_scope:perfetto.protos.IpiExitFtraceEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr reason_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fipi_2eproto;
};// -------------------------------------------------------------------

class IpiRaiseFtraceEvent final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.IpiRaiseFtraceEvent) */ {
 public:
  inline IpiRaiseFtraceEvent() : IpiRaiseFtraceEvent(nullptr) {}
  ~IpiRaiseFtraceEvent() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR IpiRaiseFtraceEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  IpiRaiseFtraceEvent(const IpiRaiseFtraceEvent& from);
  IpiRaiseFtraceEvent(IpiRaiseFtraceEvent&& from) noexcept
    : IpiRaiseFtraceEvent() {
    *this = ::std::move(from);
  }

  inline IpiRaiseFtraceEvent& operator=(const IpiRaiseFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline IpiRaiseFtraceEvent& operator=(IpiRaiseFtraceEvent&& from) noexcept {
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
  static const IpiRaiseFtraceEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const IpiRaiseFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const IpiRaiseFtraceEvent*>(
               &_IpiRaiseFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(IpiRaiseFtraceEvent& a, IpiRaiseFtraceEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(IpiRaiseFtraceEvent* other) {
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
  void UnsafeArenaSwap(IpiRaiseFtraceEvent* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  IpiRaiseFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<IpiRaiseFtraceEvent>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const IpiRaiseFtraceEvent& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const IpiRaiseFtraceEvent& from) {
    IpiRaiseFtraceEvent::MergeImpl(*this, from);
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
  void InternalSwap(IpiRaiseFtraceEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.IpiRaiseFtraceEvent";
  }
  protected:
  explicit IpiRaiseFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kReasonFieldNumber = 2,
    kTargetCpusFieldNumber = 1,
  };
  // optional string reason = 2;
  bool has_reason() const;
  void clear_reason() ;
  const std::string& reason() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_reason(Arg_&& arg, Args_... args);
  std::string* mutable_reason();
  PROTOBUF_NODISCARD std::string* release_reason();
  void set_allocated_reason(std::string* ptr);

  private:
  const std::string& _internal_reason() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_reason(
      const std::string& value);
  std::string* _internal_mutable_reason();

  public:
  // optional uint32 target_cpus = 1;
  bool has_target_cpus() const;
  void clear_target_cpus() ;
  ::uint32_t target_cpus() const;
  void set_target_cpus(::uint32_t value);

  private:
  ::uint32_t _internal_target_cpus() const;
  void _internal_set_target_cpus(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:perfetto.protos.IpiRaiseFtraceEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr reason_;
    ::uint32_t target_cpus_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fipi_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// IpiEntryFtraceEvent

// optional string reason = 1;
inline bool IpiEntryFtraceEvent::has_reason() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void IpiEntryFtraceEvent::clear_reason() {
  _impl_.reason_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& IpiEntryFtraceEvent::reason() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.IpiEntryFtraceEvent.reason)
  return _internal_reason();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void IpiEntryFtraceEvent::set_reason(Arg_&& arg,
                                                     Args_... args) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.reason_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.IpiEntryFtraceEvent.reason)
}
inline std::string* IpiEntryFtraceEvent::mutable_reason() {
  std::string* _s = _internal_mutable_reason();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.IpiEntryFtraceEvent.reason)
  return _s;
}
inline const std::string& IpiEntryFtraceEvent::_internal_reason() const {
  return _impl_.reason_.Get();
}
inline void IpiEntryFtraceEvent::_internal_set_reason(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;


  _impl_.reason_.Set(value, GetArenaForAllocation());
}
inline std::string* IpiEntryFtraceEvent::_internal_mutable_reason() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.reason_.Mutable( GetArenaForAllocation());
}
inline std::string* IpiEntryFtraceEvent::release_reason() {
  // @@protoc_insertion_point(field_release:perfetto.protos.IpiEntryFtraceEvent.reason)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.reason_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.reason_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void IpiEntryFtraceEvent::set_allocated_reason(std::string* value) {
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.reason_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.reason_.IsDefault()) {
          _impl_.reason_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.IpiEntryFtraceEvent.reason)
}

// -------------------------------------------------------------------

// IpiExitFtraceEvent

// optional string reason = 1;
inline bool IpiExitFtraceEvent::has_reason() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void IpiExitFtraceEvent::clear_reason() {
  _impl_.reason_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& IpiExitFtraceEvent::reason() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.IpiExitFtraceEvent.reason)
  return _internal_reason();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void IpiExitFtraceEvent::set_reason(Arg_&& arg,
                                                     Args_... args) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.reason_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.IpiExitFtraceEvent.reason)
}
inline std::string* IpiExitFtraceEvent::mutable_reason() {
  std::string* _s = _internal_mutable_reason();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.IpiExitFtraceEvent.reason)
  return _s;
}
inline const std::string& IpiExitFtraceEvent::_internal_reason() const {
  return _impl_.reason_.Get();
}
inline void IpiExitFtraceEvent::_internal_set_reason(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;


  _impl_.reason_.Set(value, GetArenaForAllocation());
}
inline std::string* IpiExitFtraceEvent::_internal_mutable_reason() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.reason_.Mutable( GetArenaForAllocation());
}
inline std::string* IpiExitFtraceEvent::release_reason() {
  // @@protoc_insertion_point(field_release:perfetto.protos.IpiExitFtraceEvent.reason)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.reason_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.reason_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void IpiExitFtraceEvent::set_allocated_reason(std::string* value) {
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.reason_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.reason_.IsDefault()) {
          _impl_.reason_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.IpiExitFtraceEvent.reason)
}

// -------------------------------------------------------------------

// IpiRaiseFtraceEvent

// optional uint32 target_cpus = 1;
inline bool IpiRaiseFtraceEvent::has_target_cpus() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void IpiRaiseFtraceEvent::clear_target_cpus() {
  _impl_.target_cpus_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::uint32_t IpiRaiseFtraceEvent::target_cpus() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.IpiRaiseFtraceEvent.target_cpus)
  return _internal_target_cpus();
}
inline void IpiRaiseFtraceEvent::set_target_cpus(::uint32_t value) {
  _internal_set_target_cpus(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.IpiRaiseFtraceEvent.target_cpus)
}
inline ::uint32_t IpiRaiseFtraceEvent::_internal_target_cpus() const {
  return _impl_.target_cpus_;
}
inline void IpiRaiseFtraceEvent::_internal_set_target_cpus(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.target_cpus_ = value;
}

// optional string reason = 2;
inline bool IpiRaiseFtraceEvent::has_reason() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void IpiRaiseFtraceEvent::clear_reason() {
  _impl_.reason_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& IpiRaiseFtraceEvent::reason() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.IpiRaiseFtraceEvent.reason)
  return _internal_reason();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void IpiRaiseFtraceEvent::set_reason(Arg_&& arg,
                                                     Args_... args) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.reason_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.IpiRaiseFtraceEvent.reason)
}
inline std::string* IpiRaiseFtraceEvent::mutable_reason() {
  std::string* _s = _internal_mutable_reason();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.IpiRaiseFtraceEvent.reason)
  return _s;
}
inline const std::string& IpiRaiseFtraceEvent::_internal_reason() const {
  return _impl_.reason_.Get();
}
inline void IpiRaiseFtraceEvent::_internal_set_reason(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;


  _impl_.reason_.Set(value, GetArenaForAllocation());
}
inline std::string* IpiRaiseFtraceEvent::_internal_mutable_reason() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.reason_.Mutable( GetArenaForAllocation());
}
inline std::string* IpiRaiseFtraceEvent::release_reason() {
  // @@protoc_insertion_point(field_release:perfetto.protos.IpiRaiseFtraceEvent.reason)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.reason_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.reason_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void IpiRaiseFtraceEvent::set_allocated_reason(std::string* value) {
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.reason_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.reason_.IsDefault()) {
          _impl_.reason_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.IpiRaiseFtraceEvent.reason)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fipi_2eproto_2epb_2eh