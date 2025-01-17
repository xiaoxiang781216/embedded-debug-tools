// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/generic.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fgeneric_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fgeneric_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fftrace_2fgeneric_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fgeneric_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fgeneric_2eproto;
namespace perfetto {
namespace protos {
class GenericFtraceEvent;
struct GenericFtraceEventDefaultTypeInternal;
extern GenericFtraceEventDefaultTypeInternal _GenericFtraceEvent_default_instance_;
class GenericFtraceEvent_Field;
struct GenericFtraceEvent_FieldDefaultTypeInternal;
extern GenericFtraceEvent_FieldDefaultTypeInternal _GenericFtraceEvent_Field_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template <>
::perfetto::protos::GenericFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::GenericFtraceEvent>(Arena*);
template <>
::perfetto::protos::GenericFtraceEvent_Field* Arena::CreateMaybeMessage<::perfetto::protos::GenericFtraceEvent_Field>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace perfetto {
namespace protos {

// ===================================================================


// -------------------------------------------------------------------

class GenericFtraceEvent_Field final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.GenericFtraceEvent.Field) */ {
 public:
  inline GenericFtraceEvent_Field() : GenericFtraceEvent_Field(nullptr) {}
  ~GenericFtraceEvent_Field() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR GenericFtraceEvent_Field(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GenericFtraceEvent_Field(const GenericFtraceEvent_Field& from);
  GenericFtraceEvent_Field(GenericFtraceEvent_Field&& from) noexcept
    : GenericFtraceEvent_Field() {
    *this = ::std::move(from);
  }

  inline GenericFtraceEvent_Field& operator=(const GenericFtraceEvent_Field& from) {
    CopyFrom(from);
    return *this;
  }
  inline GenericFtraceEvent_Field& operator=(GenericFtraceEvent_Field&& from) noexcept {
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
  static const GenericFtraceEvent_Field& default_instance() {
    return *internal_default_instance();
  }
  enum ValueCase {
    kStrValue = 3,
    kIntValue = 4,
    kUintValue = 5,
    VALUE_NOT_SET = 0,
  };

  static inline const GenericFtraceEvent_Field* internal_default_instance() {
    return reinterpret_cast<const GenericFtraceEvent_Field*>(
               &_GenericFtraceEvent_Field_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GenericFtraceEvent_Field& a, GenericFtraceEvent_Field& b) {
    a.Swap(&b);
  }
  inline void Swap(GenericFtraceEvent_Field* other) {
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
  void UnsafeArenaSwap(GenericFtraceEvent_Field* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GenericFtraceEvent_Field* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GenericFtraceEvent_Field>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GenericFtraceEvent_Field& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const GenericFtraceEvent_Field& from) {
    GenericFtraceEvent_Field::MergeImpl(*this, from);
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
  void InternalSwap(GenericFtraceEvent_Field* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.GenericFtraceEvent.Field";
  }
  protected:
  explicit GenericFtraceEvent_Field(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kStrValueFieldNumber = 3,
    kIntValueFieldNumber = 4,
    kUintValueFieldNumber = 5,
  };
  // optional string name = 1;
  bool has_name() const;
  void clear_name() ;
  const std::string& name() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_name(Arg_&& arg, Args_... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* ptr);

  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(
      const std::string& value);
  std::string* _internal_mutable_name();

  public:
  // string str_value = 3;
  bool has_str_value() const;
  void clear_str_value() ;
  const std::string& str_value() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_str_value(Arg_&& arg, Args_... args);
  std::string* mutable_str_value();
  PROTOBUF_NODISCARD std::string* release_str_value();
  void set_allocated_str_value(std::string* ptr);

  private:
  const std::string& _internal_str_value() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_str_value(
      const std::string& value);
  std::string* _internal_mutable_str_value();

  public:
  // int64 int_value = 4;
  bool has_int_value() const;
  void clear_int_value() ;
  ::int64_t int_value() const;
  void set_int_value(::int64_t value);

  private:
  ::int64_t _internal_int_value() const;
  void _internal_set_int_value(::int64_t value);

  public:
  // uint64 uint_value = 5;
  bool has_uint_value() const;
  void clear_uint_value() ;
  ::uint64_t uint_value() const;
  void set_uint_value(::uint64_t value);

  private:
  ::uint64_t _internal_uint_value() const;
  void _internal_set_uint_value(::uint64_t value);

  public:
  void clear_value();
  ValueCase value_case() const;
  // @@protoc_insertion_point(class_scope:perfetto.protos.GenericFtraceEvent.Field)
 private:
  class _Internal;
  void set_has_str_value();
  void set_has_int_value();
  void set_has_uint_value();

  inline bool has_value() const;
  inline void clear_has_value();

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    union ValueUnion {
      constexpr ValueUnion() : _constinit_{} {}
        ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
      ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr str_value_;
      ::int64_t int_value_;
      ::uint64_t uint_value_;
    } value_;
    ::uint32_t _oneof_case_[1];

  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fgeneric_2eproto;
};// -------------------------------------------------------------------

class GenericFtraceEvent final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.GenericFtraceEvent) */ {
 public:
  inline GenericFtraceEvent() : GenericFtraceEvent(nullptr) {}
  ~GenericFtraceEvent() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR GenericFtraceEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GenericFtraceEvent(const GenericFtraceEvent& from);
  GenericFtraceEvent(GenericFtraceEvent&& from) noexcept
    : GenericFtraceEvent() {
    *this = ::std::move(from);
  }

  inline GenericFtraceEvent& operator=(const GenericFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline GenericFtraceEvent& operator=(GenericFtraceEvent&& from) noexcept {
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
  static const GenericFtraceEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const GenericFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const GenericFtraceEvent*>(
               &_GenericFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(GenericFtraceEvent& a, GenericFtraceEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(GenericFtraceEvent* other) {
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
  void UnsafeArenaSwap(GenericFtraceEvent* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GenericFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GenericFtraceEvent>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GenericFtraceEvent& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const GenericFtraceEvent& from) {
    GenericFtraceEvent::MergeImpl(*this, from);
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
  void InternalSwap(GenericFtraceEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.GenericFtraceEvent";
  }
  protected:
  explicit GenericFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef GenericFtraceEvent_Field Field;

  // accessors -------------------------------------------------------

  enum : int {
    kFieldFieldNumber = 2,
    kEventNameFieldNumber = 1,
  };
  // repeated .perfetto.protos.GenericFtraceEvent.Field field = 2;
  int field_size() const;
  private:
  int _internal_field_size() const;

  public:
  void clear_field() ;
  ::perfetto::protos::GenericFtraceEvent_Field* mutable_field(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::GenericFtraceEvent_Field >*
      mutable_field();
  private:
  const ::perfetto::protos::GenericFtraceEvent_Field& _internal_field(int index) const;
  ::perfetto::protos::GenericFtraceEvent_Field* _internal_add_field();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::perfetto::protos::GenericFtraceEvent_Field>& _internal_field() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::perfetto::protos::GenericFtraceEvent_Field>* _internal_mutable_field();
  public:
  const ::perfetto::protos::GenericFtraceEvent_Field& field(int index) const;
  ::perfetto::protos::GenericFtraceEvent_Field* add_field();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::GenericFtraceEvent_Field >&
      field() const;
  // optional string event_name = 1;
  bool has_event_name() const;
  void clear_event_name() ;
  const std::string& event_name() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_event_name(Arg_&& arg, Args_... args);
  std::string* mutable_event_name();
  PROTOBUF_NODISCARD std::string* release_event_name();
  void set_allocated_event_name(std::string* ptr);

  private:
  const std::string& _internal_event_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_event_name(
      const std::string& value);
  std::string* _internal_mutable_event_name();

  public:
  // @@protoc_insertion_point(class_scope:perfetto.protos.GenericFtraceEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::GenericFtraceEvent_Field > field_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr event_name_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fgeneric_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// GenericFtraceEvent_Field

// optional string name = 1;
inline bool GenericFtraceEvent_Field::has_name() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void GenericFtraceEvent_Field::clear_name() {
  _impl_.name_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& GenericFtraceEvent_Field::name() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.GenericFtraceEvent.Field.name)
  return _internal_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void GenericFtraceEvent_Field::set_name(Arg_&& arg,
                                                     Args_... args) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.name_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.GenericFtraceEvent.Field.name)
}
inline std::string* GenericFtraceEvent_Field::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.GenericFtraceEvent.Field.name)
  return _s;
}
inline const std::string& GenericFtraceEvent_Field::_internal_name() const {
  return _impl_.name_.Get();
}
inline void GenericFtraceEvent_Field::_internal_set_name(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;


  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* GenericFtraceEvent_Field::_internal_mutable_name() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.name_.Mutable( GetArenaForAllocation());
}
inline std::string* GenericFtraceEvent_Field::release_name() {
  // @@protoc_insertion_point(field_release:perfetto.protos.GenericFtraceEvent.Field.name)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.name_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void GenericFtraceEvent_Field::set_allocated_name(std::string* value) {
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.name_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.name_.IsDefault()) {
          _impl_.name_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.GenericFtraceEvent.Field.name)
}

// string str_value = 3;
inline bool GenericFtraceEvent_Field::has_str_value() const {
  return value_case() == kStrValue;
}
inline void GenericFtraceEvent_Field::set_has_str_value() {
  _impl_._oneof_case_[0] = kStrValue;
}
inline void GenericFtraceEvent_Field::clear_str_value() {
  if (value_case() == kStrValue) {
    _impl_.value_.str_value_.Destroy();
    clear_has_value();
  }
}
inline const std::string& GenericFtraceEvent_Field::str_value() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.GenericFtraceEvent.Field.str_value)
  return _internal_str_value();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void GenericFtraceEvent_Field::set_str_value(Arg_&& arg,
                                                     Args_... args) {
  if (value_case() != kStrValue) {
    clear_value();

    set_has_str_value();
    _impl_.value_.str_value_.InitDefault();
  }
  _impl_.value_.str_value_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.GenericFtraceEvent.Field.str_value)
}
inline std::string* GenericFtraceEvent_Field::mutable_str_value() {
  std::string* _s = _internal_mutable_str_value();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.GenericFtraceEvent.Field.str_value)
  return _s;
}
inline const std::string& GenericFtraceEvent_Field::_internal_str_value() const {
  if (value_case() != kStrValue) {
    return ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited();
  }
  return _impl_.value_.str_value_.Get();
}
inline void GenericFtraceEvent_Field::_internal_set_str_value(const std::string& value) {
  if (value_case() != kStrValue) {
    clear_value();

    set_has_str_value();
    _impl_.value_.str_value_.InitDefault();
  }


  _impl_.value_.str_value_.Set(value, GetArenaForAllocation());
}
inline std::string* GenericFtraceEvent_Field::_internal_mutable_str_value() {
  if (value_case() != kStrValue) {
    clear_value();

    set_has_str_value();
    _impl_.value_.str_value_.InitDefault();
  }
  return _impl_.value_.str_value_.Mutable( GetArenaForAllocation());
}
inline std::string* GenericFtraceEvent_Field::release_str_value() {
  // @@protoc_insertion_point(field_release:perfetto.protos.GenericFtraceEvent.Field.str_value)
  if (value_case() != kStrValue) {
    return nullptr;
  }
  clear_has_value();
  return _impl_.value_.str_value_.Release();
}
inline void GenericFtraceEvent_Field::set_allocated_str_value(std::string* value) {
  if (has_value()) {
    clear_value();
  }
  if (value != nullptr) {
    set_has_str_value();
    _impl_.value_.str_value_.InitAllocated(value, GetArenaForAllocation());
  }
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.GenericFtraceEvent.Field.str_value)
}

// int64 int_value = 4;
inline bool GenericFtraceEvent_Field::has_int_value() const {
  return value_case() == kIntValue;
}
inline void GenericFtraceEvent_Field::set_has_int_value() {
  _impl_._oneof_case_[0] = kIntValue;
}
inline void GenericFtraceEvent_Field::clear_int_value() {
  if (value_case() == kIntValue) {
    _impl_.value_.int_value_ = ::int64_t{0};
    clear_has_value();
  }
}
inline ::int64_t GenericFtraceEvent_Field::int_value() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.GenericFtraceEvent.Field.int_value)
  return _internal_int_value();
}
inline void GenericFtraceEvent_Field::set_int_value(::int64_t value) {
  _internal_set_int_value(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.GenericFtraceEvent.Field.int_value)
}
inline ::int64_t GenericFtraceEvent_Field::_internal_int_value() const {
  if (value_case() == kIntValue) {
    return _impl_.value_.int_value_;
  }
  return ::int64_t{0};
}
inline void GenericFtraceEvent_Field::_internal_set_int_value(::int64_t value) {
  if (value_case() != kIntValue) {
    clear_value();
    set_has_int_value();
  }
  _impl_.value_.int_value_ = value;
}

// uint64 uint_value = 5;
inline bool GenericFtraceEvent_Field::has_uint_value() const {
  return value_case() == kUintValue;
}
inline void GenericFtraceEvent_Field::set_has_uint_value() {
  _impl_._oneof_case_[0] = kUintValue;
}
inline void GenericFtraceEvent_Field::clear_uint_value() {
  if (value_case() == kUintValue) {
    _impl_.value_.uint_value_ = ::uint64_t{0u};
    clear_has_value();
  }
}
inline ::uint64_t GenericFtraceEvent_Field::uint_value() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.GenericFtraceEvent.Field.uint_value)
  return _internal_uint_value();
}
inline void GenericFtraceEvent_Field::set_uint_value(::uint64_t value) {
  _internal_set_uint_value(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.GenericFtraceEvent.Field.uint_value)
}
inline ::uint64_t GenericFtraceEvent_Field::_internal_uint_value() const {
  if (value_case() == kUintValue) {
    return _impl_.value_.uint_value_;
  }
  return ::uint64_t{0u};
}
inline void GenericFtraceEvent_Field::_internal_set_uint_value(::uint64_t value) {
  if (value_case() != kUintValue) {
    clear_value();
    set_has_uint_value();
  }
  _impl_.value_.uint_value_ = value;
}

inline bool GenericFtraceEvent_Field::has_value() const {
  return value_case() != VALUE_NOT_SET;
}
inline void GenericFtraceEvent_Field::clear_has_value() {
  _impl_._oneof_case_[0] = VALUE_NOT_SET;
}
inline GenericFtraceEvent_Field::ValueCase GenericFtraceEvent_Field::value_case() const {
  return GenericFtraceEvent_Field::ValueCase(_impl_._oneof_case_[0]);
}
// -------------------------------------------------------------------

// GenericFtraceEvent

// optional string event_name = 1;
inline bool GenericFtraceEvent::has_event_name() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void GenericFtraceEvent::clear_event_name() {
  _impl_.event_name_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& GenericFtraceEvent::event_name() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.GenericFtraceEvent.event_name)
  return _internal_event_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void GenericFtraceEvent::set_event_name(Arg_&& arg,
                                                     Args_... args) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.event_name_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.GenericFtraceEvent.event_name)
}
inline std::string* GenericFtraceEvent::mutable_event_name() {
  std::string* _s = _internal_mutable_event_name();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.GenericFtraceEvent.event_name)
  return _s;
}
inline const std::string& GenericFtraceEvent::_internal_event_name() const {
  return _impl_.event_name_.Get();
}
inline void GenericFtraceEvent::_internal_set_event_name(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;


  _impl_.event_name_.Set(value, GetArenaForAllocation());
}
inline std::string* GenericFtraceEvent::_internal_mutable_event_name() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.event_name_.Mutable( GetArenaForAllocation());
}
inline std::string* GenericFtraceEvent::release_event_name() {
  // @@protoc_insertion_point(field_release:perfetto.protos.GenericFtraceEvent.event_name)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.event_name_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.event_name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void GenericFtraceEvent::set_allocated_event_name(std::string* value) {
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.event_name_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.event_name_.IsDefault()) {
          _impl_.event_name_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.GenericFtraceEvent.event_name)
}

// repeated .perfetto.protos.GenericFtraceEvent.Field field = 2;
inline int GenericFtraceEvent::_internal_field_size() const {
  return _impl_.field_.size();
}
inline int GenericFtraceEvent::field_size() const {
  return _internal_field_size();
}
inline void GenericFtraceEvent::clear_field() {
  _internal_mutable_field()->Clear();
}
inline ::perfetto::protos::GenericFtraceEvent_Field* GenericFtraceEvent::mutable_field(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.GenericFtraceEvent.field)
  return _internal_mutable_field()->Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::GenericFtraceEvent_Field >*
GenericFtraceEvent::mutable_field() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.GenericFtraceEvent.field)
  return _internal_mutable_field();
}
inline const ::perfetto::protos::GenericFtraceEvent_Field& GenericFtraceEvent::_internal_field(int index) const {
  return _internal_field().Get(index);
}
inline const ::perfetto::protos::GenericFtraceEvent_Field& GenericFtraceEvent::field(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.GenericFtraceEvent.field)
  return _internal_field(index);
}
inline ::perfetto::protos::GenericFtraceEvent_Field* GenericFtraceEvent::_internal_add_field() {
  return _internal_mutable_field()->Add();
}
inline ::perfetto::protos::GenericFtraceEvent_Field* GenericFtraceEvent::add_field() {
  ::perfetto::protos::GenericFtraceEvent_Field* _add = _internal_add_field();
  // @@protoc_insertion_point(field_add:perfetto.protos.GenericFtraceEvent.field)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::GenericFtraceEvent_Field >&
GenericFtraceEvent::field() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.GenericFtraceEvent.field)
  return _internal_field();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::perfetto::protos::GenericFtraceEvent_Field>&
GenericFtraceEvent::_internal_field() const {
  return _impl_.field_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::perfetto::protos::GenericFtraceEvent_Field>*
GenericFtraceEvent::_internal_mutable_field() {
  return &_impl_.field_;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fgeneric_2eproto_2epb_2eh
