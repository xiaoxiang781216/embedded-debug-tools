// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/trace.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrace_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrace_2eproto_2epb_2eh

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
#include "protos/perfetto/trace/trace_packet.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2ftrace_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2ftrace_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_protos_2fperfetto_2ftrace_2ftrace_2eproto;
namespace perfetto {
namespace protos {
class Trace;
struct TraceDefaultTypeInternal;
extern TraceDefaultTypeInternal _Trace_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template <>
::perfetto::protos::Trace* Arena::CreateMaybeMessage<::perfetto::protos::Trace>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace perfetto {
namespace protos {

// ===================================================================


// -------------------------------------------------------------------

class Trace final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.Trace) */ {
 public:
  inline Trace() : Trace(nullptr) {}
  ~Trace() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Trace(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Trace(const Trace& from);
  Trace(Trace&& from) noexcept
    : Trace() {
    *this = ::std::move(from);
  }

  inline Trace& operator=(const Trace& from) {
    CopyFrom(from);
    return *this;
  }
  inline Trace& operator=(Trace&& from) noexcept {
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
  static const Trace& default_instance() {
    return *internal_default_instance();
  }
  static inline const Trace* internal_default_instance() {
    return reinterpret_cast<const Trace*>(
               &_Trace_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Trace& a, Trace& b) {
    a.Swap(&b);
  }
  inline void Swap(Trace* other) {
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
  void UnsafeArenaSwap(Trace* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Trace* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Trace>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Trace& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Trace& from) {
    Trace::MergeImpl(*this, from);
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
  void InternalSwap(Trace* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.Trace";
  }
  protected:
  explicit Trace(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPacketFieldNumber = 1,
  };
  // repeated .perfetto.protos.TracePacket packet = 1;
  int packet_size() const;
  private:
  int _internal_packet_size() const;

  public:
  void clear_packet() ;
  ::perfetto::protos::TracePacket* mutable_packet(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::TracePacket >*
      mutable_packet();
  private:
  const ::perfetto::protos::TracePacket& _internal_packet(int index) const;
  ::perfetto::protos::TracePacket* _internal_add_packet();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::perfetto::protos::TracePacket>& _internal_packet() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::perfetto::protos::TracePacket>* _internal_mutable_packet();
  public:
  const ::perfetto::protos::TracePacket& packet(int index) const;
  ::perfetto::protos::TracePacket* add_packet();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::TracePacket >&
      packet() const;
  // @@protoc_insertion_point(class_scope:perfetto.protos.Trace)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::TracePacket > packet_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2ftrace_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Trace

// repeated .perfetto.protos.TracePacket packet = 1;
inline int Trace::_internal_packet_size() const {
  return _impl_.packet_.size();
}
inline int Trace::packet_size() const {
  return _internal_packet_size();
}
inline ::perfetto::protos::TracePacket* Trace::mutable_packet(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.Trace.packet)
  return _internal_mutable_packet()->Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::TracePacket >*
Trace::mutable_packet() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.Trace.packet)
  return _internal_mutable_packet();
}
inline const ::perfetto::protos::TracePacket& Trace::_internal_packet(int index) const {
  return _internal_packet().Get(index);
}
inline const ::perfetto::protos::TracePacket& Trace::packet(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.Trace.packet)
  return _internal_packet(index);
}
inline ::perfetto::protos::TracePacket* Trace::_internal_add_packet() {
  return _internal_mutable_packet()->Add();
}
inline ::perfetto::protos::TracePacket* Trace::add_packet() {
  ::perfetto::protos::TracePacket* _add = _internal_add_packet();
  // @@protoc_insertion_point(field_add:perfetto.protos.Trace.packet)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::TracePacket >&
Trace::packet() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.Trace.packet)
  return _internal_packet();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::perfetto::protos::TracePacket>&
Trace::_internal_packet() const {
  return _impl_.packet_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::perfetto::protos::TracePacket>*
Trace::_internal_mutable_packet() {
  return &_impl_.packet_;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrace_2eproto_2epb_2eh