// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/ion.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fion_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fion_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fftrace_2fion_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fion_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fion_2eproto;
namespace perfetto {
namespace protos {
class IonStatFtraceEvent;
struct IonStatFtraceEventDefaultTypeInternal;
extern IonStatFtraceEventDefaultTypeInternal _IonStatFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template <>
::perfetto::protos::IonStatFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::IonStatFtraceEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace perfetto {
namespace protos {

// ===================================================================


// -------------------------------------------------------------------

class IonStatFtraceEvent final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.IonStatFtraceEvent) */ {
 public:
  inline IonStatFtraceEvent() : IonStatFtraceEvent(nullptr) {}
  ~IonStatFtraceEvent() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR IonStatFtraceEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  IonStatFtraceEvent(const IonStatFtraceEvent& from);
  IonStatFtraceEvent(IonStatFtraceEvent&& from) noexcept
    : IonStatFtraceEvent() {
    *this = ::std::move(from);
  }

  inline IonStatFtraceEvent& operator=(const IonStatFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline IonStatFtraceEvent& operator=(IonStatFtraceEvent&& from) noexcept {
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
  static const IonStatFtraceEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const IonStatFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const IonStatFtraceEvent*>(
               &_IonStatFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(IonStatFtraceEvent& a, IonStatFtraceEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(IonStatFtraceEvent* other) {
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
  void UnsafeArenaSwap(IonStatFtraceEvent* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  IonStatFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<IonStatFtraceEvent>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const IonStatFtraceEvent& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const IonStatFtraceEvent& from) {
    IonStatFtraceEvent::MergeImpl(*this, from);
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
  void InternalSwap(IonStatFtraceEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.IonStatFtraceEvent";
  }
  protected:
  explicit IonStatFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLenFieldNumber = 2,
    kTotalAllocatedFieldNumber = 3,
    kBufferIdFieldNumber = 1,
  };
  // optional int64 len = 2;
  bool has_len() const;
  void clear_len() ;
  ::int64_t len() const;
  void set_len(::int64_t value);

  private:
  ::int64_t _internal_len() const;
  void _internal_set_len(::int64_t value);

  public:
  // optional uint64 total_allocated = 3;
  bool has_total_allocated() const;
  void clear_total_allocated() ;
  ::uint64_t total_allocated() const;
  void set_total_allocated(::uint64_t value);

  private:
  ::uint64_t _internal_total_allocated() const;
  void _internal_set_total_allocated(::uint64_t value);

  public:
  // optional uint32 buffer_id = 1;
  bool has_buffer_id() const;
  void clear_buffer_id() ;
  ::uint32_t buffer_id() const;
  void set_buffer_id(::uint32_t value);

  private:
  ::uint32_t _internal_buffer_id() const;
  void _internal_set_buffer_id(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:perfetto.protos.IonStatFtraceEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::int64_t len_;
    ::uint64_t total_allocated_;
    ::uint32_t buffer_id_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fion_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// IonStatFtraceEvent

// optional uint32 buffer_id = 1;
inline bool IonStatFtraceEvent::has_buffer_id() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void IonStatFtraceEvent::clear_buffer_id() {
  _impl_.buffer_id_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::uint32_t IonStatFtraceEvent::buffer_id() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.IonStatFtraceEvent.buffer_id)
  return _internal_buffer_id();
}
inline void IonStatFtraceEvent::set_buffer_id(::uint32_t value) {
  _internal_set_buffer_id(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.IonStatFtraceEvent.buffer_id)
}
inline ::uint32_t IonStatFtraceEvent::_internal_buffer_id() const {
  return _impl_.buffer_id_;
}
inline void IonStatFtraceEvent::_internal_set_buffer_id(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.buffer_id_ = value;
}

// optional int64 len = 2;
inline bool IonStatFtraceEvent::has_len() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void IonStatFtraceEvent::clear_len() {
  _impl_.len_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::int64_t IonStatFtraceEvent::len() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.IonStatFtraceEvent.len)
  return _internal_len();
}
inline void IonStatFtraceEvent::set_len(::int64_t value) {
  _internal_set_len(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.IonStatFtraceEvent.len)
}
inline ::int64_t IonStatFtraceEvent::_internal_len() const {
  return _impl_.len_;
}
inline void IonStatFtraceEvent::_internal_set_len(::int64_t value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.len_ = value;
}

// optional uint64 total_allocated = 3;
inline bool IonStatFtraceEvent::has_total_allocated() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void IonStatFtraceEvent::clear_total_allocated() {
  _impl_.total_allocated_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::uint64_t IonStatFtraceEvent::total_allocated() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.IonStatFtraceEvent.total_allocated)
  return _internal_total_allocated();
}
inline void IonStatFtraceEvent::set_total_allocated(::uint64_t value) {
  _internal_set_total_allocated(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.IonStatFtraceEvent.total_allocated)
}
inline ::uint64_t IonStatFtraceEvent::_internal_total_allocated() const {
  return _impl_.total_allocated_;
}
inline void IonStatFtraceEvent::_internal_set_total_allocated(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.total_allocated_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fion_2eproto_2epb_2eh
