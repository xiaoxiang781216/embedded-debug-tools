// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/ftrace.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto;
namespace perfetto {
namespace protos {
class FuncgraphEntryFtraceEvent;
struct FuncgraphEntryFtraceEventDefaultTypeInternal;
extern FuncgraphEntryFtraceEventDefaultTypeInternal _FuncgraphEntryFtraceEvent_default_instance_;
class FuncgraphExitFtraceEvent;
struct FuncgraphExitFtraceEventDefaultTypeInternal;
extern FuncgraphExitFtraceEventDefaultTypeInternal _FuncgraphExitFtraceEvent_default_instance_;
class PrintFtraceEvent;
struct PrintFtraceEventDefaultTypeInternal;
extern PrintFtraceEventDefaultTypeInternal _PrintFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template <>
::perfetto::protos::FuncgraphEntryFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::FuncgraphEntryFtraceEvent>(Arena*);
template <>
::perfetto::protos::FuncgraphExitFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::FuncgraphExitFtraceEvent>(Arena*);
template <>
::perfetto::protos::PrintFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::PrintFtraceEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace perfetto {
namespace protos {

// ===================================================================


// -------------------------------------------------------------------

class PrintFtraceEvent final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.PrintFtraceEvent) */ {
 public:
  inline PrintFtraceEvent() : PrintFtraceEvent(nullptr) {}
  ~PrintFtraceEvent() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR PrintFtraceEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PrintFtraceEvent(const PrintFtraceEvent& from);
  PrintFtraceEvent(PrintFtraceEvent&& from) noexcept
    : PrintFtraceEvent() {
    *this = ::std::move(from);
  }

  inline PrintFtraceEvent& operator=(const PrintFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline PrintFtraceEvent& operator=(PrintFtraceEvent&& from) noexcept {
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
  static const PrintFtraceEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const PrintFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const PrintFtraceEvent*>(
               &_PrintFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PrintFtraceEvent& a, PrintFtraceEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(PrintFtraceEvent* other) {
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
  void UnsafeArenaSwap(PrintFtraceEvent* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PrintFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PrintFtraceEvent>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const PrintFtraceEvent& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const PrintFtraceEvent& from) {
    PrintFtraceEvent::MergeImpl(*this, from);
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
  void InternalSwap(PrintFtraceEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.PrintFtraceEvent";
  }
  protected:
  explicit PrintFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kBufFieldNumber = 2,
    kIpFieldNumber = 1,
  };
  // optional string buf = 2;
  bool has_buf() const;
  void clear_buf() ;
  const std::string& buf() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_buf(Arg_&& arg, Args_... args);
  std::string* mutable_buf();
  PROTOBUF_NODISCARD std::string* release_buf();
  void set_allocated_buf(std::string* ptr);

  private:
  const std::string& _internal_buf() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_buf(
      const std::string& value);
  std::string* _internal_mutable_buf();

  public:
  // optional uint64 ip = 1;
  bool has_ip() const;
  void clear_ip() ;
  ::uint64_t ip() const;
  void set_ip(::uint64_t value);

  private:
  ::uint64_t _internal_ip() const;
  void _internal_set_ip(::uint64_t value);

  public:
  // @@protoc_insertion_point(class_scope:perfetto.protos.PrintFtraceEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr buf_;
    ::uint64_t ip_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto;
};// -------------------------------------------------------------------

class FuncgraphEntryFtraceEvent final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.FuncgraphEntryFtraceEvent) */ {
 public:
  inline FuncgraphEntryFtraceEvent() : FuncgraphEntryFtraceEvent(nullptr) {}
  ~FuncgraphEntryFtraceEvent() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR FuncgraphEntryFtraceEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  FuncgraphEntryFtraceEvent(const FuncgraphEntryFtraceEvent& from);
  FuncgraphEntryFtraceEvent(FuncgraphEntryFtraceEvent&& from) noexcept
    : FuncgraphEntryFtraceEvent() {
    *this = ::std::move(from);
  }

  inline FuncgraphEntryFtraceEvent& operator=(const FuncgraphEntryFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline FuncgraphEntryFtraceEvent& operator=(FuncgraphEntryFtraceEvent&& from) noexcept {
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
  static const FuncgraphEntryFtraceEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const FuncgraphEntryFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const FuncgraphEntryFtraceEvent*>(
               &_FuncgraphEntryFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(FuncgraphEntryFtraceEvent& a, FuncgraphEntryFtraceEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(FuncgraphEntryFtraceEvent* other) {
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
  void UnsafeArenaSwap(FuncgraphEntryFtraceEvent* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  FuncgraphEntryFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<FuncgraphEntryFtraceEvent>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const FuncgraphEntryFtraceEvent& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const FuncgraphEntryFtraceEvent& from) {
    FuncgraphEntryFtraceEvent::MergeImpl(*this, from);
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
  void InternalSwap(FuncgraphEntryFtraceEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.FuncgraphEntryFtraceEvent";
  }
  protected:
  explicit FuncgraphEntryFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFuncFieldNumber = 2,
    kDepthFieldNumber = 1,
  };
  // optional uint64 func = 2;
  bool has_func() const;
  void clear_func() ;
  ::uint64_t func() const;
  void set_func(::uint64_t value);

  private:
  ::uint64_t _internal_func() const;
  void _internal_set_func(::uint64_t value);

  public:
  // optional int32 depth = 1;
  bool has_depth() const;
  void clear_depth() ;
  ::int32_t depth() const;
  void set_depth(::int32_t value);

  private:
  ::int32_t _internal_depth() const;
  void _internal_set_depth(::int32_t value);

  public:
  // @@protoc_insertion_point(class_scope:perfetto.protos.FuncgraphEntryFtraceEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::uint64_t func_;
    ::int32_t depth_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto;
};// -------------------------------------------------------------------

class FuncgraphExitFtraceEvent final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.FuncgraphExitFtraceEvent) */ {
 public:
  inline FuncgraphExitFtraceEvent() : FuncgraphExitFtraceEvent(nullptr) {}
  ~FuncgraphExitFtraceEvent() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR FuncgraphExitFtraceEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  FuncgraphExitFtraceEvent(const FuncgraphExitFtraceEvent& from);
  FuncgraphExitFtraceEvent(FuncgraphExitFtraceEvent&& from) noexcept
    : FuncgraphExitFtraceEvent() {
    *this = ::std::move(from);
  }

  inline FuncgraphExitFtraceEvent& operator=(const FuncgraphExitFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline FuncgraphExitFtraceEvent& operator=(FuncgraphExitFtraceEvent&& from) noexcept {
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
  static const FuncgraphExitFtraceEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const FuncgraphExitFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const FuncgraphExitFtraceEvent*>(
               &_FuncgraphExitFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(FuncgraphExitFtraceEvent& a, FuncgraphExitFtraceEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(FuncgraphExitFtraceEvent* other) {
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
  void UnsafeArenaSwap(FuncgraphExitFtraceEvent* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  FuncgraphExitFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<FuncgraphExitFtraceEvent>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const FuncgraphExitFtraceEvent& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const FuncgraphExitFtraceEvent& from) {
    FuncgraphExitFtraceEvent::MergeImpl(*this, from);
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
  void InternalSwap(FuncgraphExitFtraceEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.FuncgraphExitFtraceEvent";
  }
  protected:
  explicit FuncgraphExitFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCalltimeFieldNumber = 1,
    kFuncFieldNumber = 3,
    kOverrunFieldNumber = 4,
    kRettimeFieldNumber = 5,
    kDepthFieldNumber = 2,
  };
  // optional uint64 calltime = 1;
  bool has_calltime() const;
  void clear_calltime() ;
  ::uint64_t calltime() const;
  void set_calltime(::uint64_t value);

  private:
  ::uint64_t _internal_calltime() const;
  void _internal_set_calltime(::uint64_t value);

  public:
  // optional uint64 func = 3;
  bool has_func() const;
  void clear_func() ;
  ::uint64_t func() const;
  void set_func(::uint64_t value);

  private:
  ::uint64_t _internal_func() const;
  void _internal_set_func(::uint64_t value);

  public:
  // optional uint64 overrun = 4;
  bool has_overrun() const;
  void clear_overrun() ;
  ::uint64_t overrun() const;
  void set_overrun(::uint64_t value);

  private:
  ::uint64_t _internal_overrun() const;
  void _internal_set_overrun(::uint64_t value);

  public:
  // optional uint64 rettime = 5;
  bool has_rettime() const;
  void clear_rettime() ;
  ::uint64_t rettime() const;
  void set_rettime(::uint64_t value);

  private:
  ::uint64_t _internal_rettime() const;
  void _internal_set_rettime(::uint64_t value);

  public:
  // optional int32 depth = 2;
  bool has_depth() const;
  void clear_depth() ;
  ::int32_t depth() const;
  void set_depth(::int32_t value);

  private:
  ::int32_t _internal_depth() const;
  void _internal_set_depth(::int32_t value);

  public:
  // @@protoc_insertion_point(class_scope:perfetto.protos.FuncgraphExitFtraceEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::uint64_t calltime_;
    ::uint64_t func_;
    ::uint64_t overrun_;
    ::uint64_t rettime_;
    ::int32_t depth_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// PrintFtraceEvent

// optional uint64 ip = 1;
inline bool PrintFtraceEvent::has_ip() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void PrintFtraceEvent::clear_ip() {
  _impl_.ip_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::uint64_t PrintFtraceEvent::ip() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.PrintFtraceEvent.ip)
  return _internal_ip();
}
inline void PrintFtraceEvent::set_ip(::uint64_t value) {
  _internal_set_ip(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.PrintFtraceEvent.ip)
}
inline ::uint64_t PrintFtraceEvent::_internal_ip() const {
  return _impl_.ip_;
}
inline void PrintFtraceEvent::_internal_set_ip(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.ip_ = value;
}

// optional string buf = 2;
inline bool PrintFtraceEvent::has_buf() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void PrintFtraceEvent::clear_buf() {
  _impl_.buf_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& PrintFtraceEvent::buf() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.PrintFtraceEvent.buf)
  return _internal_buf();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void PrintFtraceEvent::set_buf(Arg_&& arg,
                                                     Args_... args) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.buf_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.PrintFtraceEvent.buf)
}
inline std::string* PrintFtraceEvent::mutable_buf() {
  std::string* _s = _internal_mutable_buf();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.PrintFtraceEvent.buf)
  return _s;
}
inline const std::string& PrintFtraceEvent::_internal_buf() const {
  return _impl_.buf_.Get();
}
inline void PrintFtraceEvent::_internal_set_buf(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;


  _impl_.buf_.Set(value, GetArenaForAllocation());
}
inline std::string* PrintFtraceEvent::_internal_mutable_buf() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.buf_.Mutable( GetArenaForAllocation());
}
inline std::string* PrintFtraceEvent::release_buf() {
  // @@protoc_insertion_point(field_release:perfetto.protos.PrintFtraceEvent.buf)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.buf_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.buf_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void PrintFtraceEvent::set_allocated_buf(std::string* value) {
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.buf_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.buf_.IsDefault()) {
          _impl_.buf_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.PrintFtraceEvent.buf)
}

// -------------------------------------------------------------------

// FuncgraphEntryFtraceEvent

// optional int32 depth = 1;
inline bool FuncgraphEntryFtraceEvent::has_depth() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void FuncgraphEntryFtraceEvent::clear_depth() {
  _impl_.depth_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::int32_t FuncgraphEntryFtraceEvent::depth() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.FuncgraphEntryFtraceEvent.depth)
  return _internal_depth();
}
inline void FuncgraphEntryFtraceEvent::set_depth(::int32_t value) {
  _internal_set_depth(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.FuncgraphEntryFtraceEvent.depth)
}
inline ::int32_t FuncgraphEntryFtraceEvent::_internal_depth() const {
  return _impl_.depth_;
}
inline void FuncgraphEntryFtraceEvent::_internal_set_depth(::int32_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.depth_ = value;
}

// optional uint64 func = 2;
inline bool FuncgraphEntryFtraceEvent::has_func() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void FuncgraphEntryFtraceEvent::clear_func() {
  _impl_.func_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::uint64_t FuncgraphEntryFtraceEvent::func() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.FuncgraphEntryFtraceEvent.func)
  return _internal_func();
}
inline void FuncgraphEntryFtraceEvent::set_func(::uint64_t value) {
  _internal_set_func(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.FuncgraphEntryFtraceEvent.func)
}
inline ::uint64_t FuncgraphEntryFtraceEvent::_internal_func() const {
  return _impl_.func_;
}
inline void FuncgraphEntryFtraceEvent::_internal_set_func(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.func_ = value;
}

// -------------------------------------------------------------------

// FuncgraphExitFtraceEvent

// optional uint64 calltime = 1;
inline bool FuncgraphExitFtraceEvent::has_calltime() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void FuncgraphExitFtraceEvent::clear_calltime() {
  _impl_.calltime_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::uint64_t FuncgraphExitFtraceEvent::calltime() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.FuncgraphExitFtraceEvent.calltime)
  return _internal_calltime();
}
inline void FuncgraphExitFtraceEvent::set_calltime(::uint64_t value) {
  _internal_set_calltime(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.FuncgraphExitFtraceEvent.calltime)
}
inline ::uint64_t FuncgraphExitFtraceEvent::_internal_calltime() const {
  return _impl_.calltime_;
}
inline void FuncgraphExitFtraceEvent::_internal_set_calltime(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.calltime_ = value;
}

// optional int32 depth = 2;
inline bool FuncgraphExitFtraceEvent::has_depth() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline void FuncgraphExitFtraceEvent::clear_depth() {
  _impl_.depth_ = 0;
  _impl_._has_bits_[0] &= ~0x00000010u;
}
inline ::int32_t FuncgraphExitFtraceEvent::depth() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.FuncgraphExitFtraceEvent.depth)
  return _internal_depth();
}
inline void FuncgraphExitFtraceEvent::set_depth(::int32_t value) {
  _internal_set_depth(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.FuncgraphExitFtraceEvent.depth)
}
inline ::int32_t FuncgraphExitFtraceEvent::_internal_depth() const {
  return _impl_.depth_;
}
inline void FuncgraphExitFtraceEvent::_internal_set_depth(::int32_t value) {
  _impl_._has_bits_[0] |= 0x00000010u;
  _impl_.depth_ = value;
}

// optional uint64 func = 3;
inline bool FuncgraphExitFtraceEvent::has_func() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void FuncgraphExitFtraceEvent::clear_func() {
  _impl_.func_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::uint64_t FuncgraphExitFtraceEvent::func() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.FuncgraphExitFtraceEvent.func)
  return _internal_func();
}
inline void FuncgraphExitFtraceEvent::set_func(::uint64_t value) {
  _internal_set_func(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.FuncgraphExitFtraceEvent.func)
}
inline ::uint64_t FuncgraphExitFtraceEvent::_internal_func() const {
  return _impl_.func_;
}
inline void FuncgraphExitFtraceEvent::_internal_set_func(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.func_ = value;
}

// optional uint64 overrun = 4;
inline bool FuncgraphExitFtraceEvent::has_overrun() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void FuncgraphExitFtraceEvent::clear_overrun() {
  _impl_.overrun_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::uint64_t FuncgraphExitFtraceEvent::overrun() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.FuncgraphExitFtraceEvent.overrun)
  return _internal_overrun();
}
inline void FuncgraphExitFtraceEvent::set_overrun(::uint64_t value) {
  _internal_set_overrun(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.FuncgraphExitFtraceEvent.overrun)
}
inline ::uint64_t FuncgraphExitFtraceEvent::_internal_overrun() const {
  return _impl_.overrun_;
}
inline void FuncgraphExitFtraceEvent::_internal_set_overrun(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.overrun_ = value;
}

// optional uint64 rettime = 5;
inline bool FuncgraphExitFtraceEvent::has_rettime() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline void FuncgraphExitFtraceEvent::clear_rettime() {
  _impl_.rettime_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::uint64_t FuncgraphExitFtraceEvent::rettime() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.FuncgraphExitFtraceEvent.rettime)
  return _internal_rettime();
}
inline void FuncgraphExitFtraceEvent::set_rettime(::uint64_t value) {
  _internal_set_rettime(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.FuncgraphExitFtraceEvent.rettime)
}
inline ::uint64_t FuncgraphExitFtraceEvent::_internal_rettime() const {
  return _impl_.rettime_;
}
inline void FuncgraphExitFtraceEvent::_internal_set_rettime(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.rettime_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto_2epb_2eh