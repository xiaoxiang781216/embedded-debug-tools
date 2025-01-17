// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/trace_uuid.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrace_5fuuid_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrace_5fuuid_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2ftrace_5fuuid_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2ftrace_5fuuid_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_protos_2fperfetto_2ftrace_2ftrace_5fuuid_2eproto;
namespace perfetto {
namespace protos {
class TraceUuid;
struct TraceUuidDefaultTypeInternal;
extern TraceUuidDefaultTypeInternal _TraceUuid_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template <>
::perfetto::protos::TraceUuid* Arena::CreateMaybeMessage<::perfetto::protos::TraceUuid>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace perfetto {
namespace protos {

// ===================================================================


// -------------------------------------------------------------------

class TraceUuid final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.TraceUuid) */ {
 public:
  inline TraceUuid() : TraceUuid(nullptr) {}
  ~TraceUuid() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR TraceUuid(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  TraceUuid(const TraceUuid& from);
  TraceUuid(TraceUuid&& from) noexcept
    : TraceUuid() {
    *this = ::std::move(from);
  }

  inline TraceUuid& operator=(const TraceUuid& from) {
    CopyFrom(from);
    return *this;
  }
  inline TraceUuid& operator=(TraceUuid&& from) noexcept {
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
  static const TraceUuid& default_instance() {
    return *internal_default_instance();
  }
  static inline const TraceUuid* internal_default_instance() {
    return reinterpret_cast<const TraceUuid*>(
               &_TraceUuid_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TraceUuid& a, TraceUuid& b) {
    a.Swap(&b);
  }
  inline void Swap(TraceUuid* other) {
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
  void UnsafeArenaSwap(TraceUuid* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  TraceUuid* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<TraceUuid>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const TraceUuid& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const TraceUuid& from) {
    TraceUuid::MergeImpl(*this, from);
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
  void InternalSwap(TraceUuid* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.TraceUuid";
  }
  protected:
  explicit TraceUuid(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMsbFieldNumber = 1,
    kLsbFieldNumber = 2,
  };
  // optional int64 msb = 1;
  bool has_msb() const;
  void clear_msb() ;
  ::int64_t msb() const;
  void set_msb(::int64_t value);

  private:
  ::int64_t _internal_msb() const;
  void _internal_set_msb(::int64_t value);

  public:
  // optional int64 lsb = 2;
  bool has_lsb() const;
  void clear_lsb() ;
  ::int64_t lsb() const;
  void set_lsb(::int64_t value);

  private:
  ::int64_t _internal_lsb() const;
  void _internal_set_lsb(::int64_t value);

  public:
  // @@protoc_insertion_point(class_scope:perfetto.protos.TraceUuid)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::int64_t msb_;
    ::int64_t lsb_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2ftrace_5fuuid_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// TraceUuid

// optional int64 msb = 1;
inline bool TraceUuid::has_msb() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void TraceUuid::clear_msb() {
  _impl_.msb_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::int64_t TraceUuid::msb() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TraceUuid.msb)
  return _internal_msb();
}
inline void TraceUuid::set_msb(::int64_t value) {
  _internal_set_msb(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.TraceUuid.msb)
}
inline ::int64_t TraceUuid::_internal_msb() const {
  return _impl_.msb_;
}
inline void TraceUuid::_internal_set_msb(::int64_t value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.msb_ = value;
}

// optional int64 lsb = 2;
inline bool TraceUuid::has_lsb() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void TraceUuid::clear_lsb() {
  _impl_.lsb_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::int64_t TraceUuid::lsb() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TraceUuid.lsb)
  return _internal_lsb();
}
inline void TraceUuid::set_lsb(::int64_t value) {
  _internal_set_lsb(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.TraceUuid.lsb)
}
inline ::int64_t TraceUuid::_internal_lsb() const {
  return _impl_.lsb_;
}
inline void TraceUuid::_internal_set_lsb(::int64_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.lsb_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrace_5fuuid_2eproto_2epb_2eh
