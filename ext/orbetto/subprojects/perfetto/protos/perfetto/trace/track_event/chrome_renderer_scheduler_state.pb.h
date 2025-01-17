// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/track_event/chrome_renderer_scheduler_state.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5frenderer_5fscheduler_5fstate_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5frenderer_5fscheduler_5fstate_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5frenderer_5fscheduler_5fstate_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5frenderer_5fscheduler_5fstate_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5frenderer_5fscheduler_5fstate_2eproto;
namespace perfetto {
namespace protos {
class ChromeRendererSchedulerState;
struct ChromeRendererSchedulerStateDefaultTypeInternal;
extern ChromeRendererSchedulerStateDefaultTypeInternal _ChromeRendererSchedulerState_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template <>
::perfetto::protos::ChromeRendererSchedulerState* Arena::CreateMaybeMessage<::perfetto::protos::ChromeRendererSchedulerState>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace perfetto {
namespace protos {
enum ChromeRAILMode : int {
  RAIL_MODE_NONE = 0,
  RAIL_MODE_RESPONSE = 1,
  RAIL_MODE_ANIMATION = 2,
  RAIL_MODE_IDLE = 3,
  RAIL_MODE_LOAD = 4,
};

bool ChromeRAILMode_IsValid(int value);
constexpr ChromeRAILMode ChromeRAILMode_MIN = static_cast<ChromeRAILMode>(0);
constexpr ChromeRAILMode ChromeRAILMode_MAX = static_cast<ChromeRAILMode>(4);
constexpr int ChromeRAILMode_ARRAYSIZE = 4 + 1;
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
ChromeRAILMode_descriptor();
template <typename T>
const std::string& ChromeRAILMode_Name(T value) {
  static_assert(std::is_same<T, ChromeRAILMode>::value ||
                    std::is_integral<T>::value,
                "Incorrect type passed to ChromeRAILMode_Name().");
  return ChromeRAILMode_Name(static_cast<ChromeRAILMode>(value));
}
template <>
inline const std::string& ChromeRAILMode_Name(ChromeRAILMode value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfDenseEnum<ChromeRAILMode_descriptor,
                                                 0, 4>(
      static_cast<int>(value));
}
inline bool ChromeRAILMode_Parse(absl::string_view name, ChromeRAILMode* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ChromeRAILMode>(
      ChromeRAILMode_descriptor(), name, value);
}

// ===================================================================


// -------------------------------------------------------------------

class ChromeRendererSchedulerState final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.ChromeRendererSchedulerState) */ {
 public:
  inline ChromeRendererSchedulerState() : ChromeRendererSchedulerState(nullptr) {}
  ~ChromeRendererSchedulerState() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR ChromeRendererSchedulerState(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ChromeRendererSchedulerState(const ChromeRendererSchedulerState& from);
  ChromeRendererSchedulerState(ChromeRendererSchedulerState&& from) noexcept
    : ChromeRendererSchedulerState() {
    *this = ::std::move(from);
  }

  inline ChromeRendererSchedulerState& operator=(const ChromeRendererSchedulerState& from) {
    CopyFrom(from);
    return *this;
  }
  inline ChromeRendererSchedulerState& operator=(ChromeRendererSchedulerState&& from) noexcept {
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
  static const ChromeRendererSchedulerState& default_instance() {
    return *internal_default_instance();
  }
  static inline const ChromeRendererSchedulerState* internal_default_instance() {
    return reinterpret_cast<const ChromeRendererSchedulerState*>(
               &_ChromeRendererSchedulerState_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ChromeRendererSchedulerState& a, ChromeRendererSchedulerState& b) {
    a.Swap(&b);
  }
  inline void Swap(ChromeRendererSchedulerState* other) {
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
  void UnsafeArenaSwap(ChromeRendererSchedulerState* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ChromeRendererSchedulerState* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ChromeRendererSchedulerState>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ChromeRendererSchedulerState& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ChromeRendererSchedulerState& from) {
    ChromeRendererSchedulerState::MergeImpl(*this, from);
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
  void InternalSwap(ChromeRendererSchedulerState* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.ChromeRendererSchedulerState";
  }
  protected:
  explicit ChromeRendererSchedulerState(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRailModeFieldNumber = 1,
    kIsBackgroundedFieldNumber = 2,
    kIsHiddenFieldNumber = 3,
  };
  // optional .perfetto.protos.ChromeRAILMode rail_mode = 1;
  bool has_rail_mode() const;
  void clear_rail_mode() ;
  ::perfetto::protos::ChromeRAILMode rail_mode() const;
  void set_rail_mode(::perfetto::protos::ChromeRAILMode value);

  private:
  ::perfetto::protos::ChromeRAILMode _internal_rail_mode() const;
  void _internal_set_rail_mode(::perfetto::protos::ChromeRAILMode value);

  public:
  // optional bool is_backgrounded = 2;
  bool has_is_backgrounded() const;
  void clear_is_backgrounded() ;
  bool is_backgrounded() const;
  void set_is_backgrounded(bool value);

  private:
  bool _internal_is_backgrounded() const;
  void _internal_set_is_backgrounded(bool value);

  public:
  // optional bool is_hidden = 3;
  bool has_is_hidden() const;
  void clear_is_hidden() ;
  bool is_hidden() const;
  void set_is_hidden(bool value);

  private:
  bool _internal_is_hidden() const;
  void _internal_set_is_hidden(bool value);

  public:
  // @@protoc_insertion_point(class_scope:perfetto.protos.ChromeRendererSchedulerState)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    int rail_mode_;
    bool is_backgrounded_;
    bool is_hidden_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5frenderer_5fscheduler_5fstate_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// ChromeRendererSchedulerState

// optional .perfetto.protos.ChromeRAILMode rail_mode = 1;
inline bool ChromeRendererSchedulerState::has_rail_mode() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void ChromeRendererSchedulerState::clear_rail_mode() {
  _impl_.rail_mode_ = 0;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::perfetto::protos::ChromeRAILMode ChromeRendererSchedulerState::rail_mode() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeRendererSchedulerState.rail_mode)
  return _internal_rail_mode();
}
inline void ChromeRendererSchedulerState::set_rail_mode(::perfetto::protos::ChromeRAILMode value) {
   _internal_set_rail_mode(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeRendererSchedulerState.rail_mode)
}
inline ::perfetto::protos::ChromeRAILMode ChromeRendererSchedulerState::_internal_rail_mode() const {
  return static_cast<::perfetto::protos::ChromeRAILMode>(_impl_.rail_mode_);
}
inline void ChromeRendererSchedulerState::_internal_set_rail_mode(::perfetto::protos::ChromeRAILMode value) {
  assert(::perfetto::protos::ChromeRAILMode_IsValid(value));
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.rail_mode_ = value;
}

// optional bool is_backgrounded = 2;
inline bool ChromeRendererSchedulerState::has_is_backgrounded() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void ChromeRendererSchedulerState::clear_is_backgrounded() {
  _impl_.is_backgrounded_ = false;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline bool ChromeRendererSchedulerState::is_backgrounded() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeRendererSchedulerState.is_backgrounded)
  return _internal_is_backgrounded();
}
inline void ChromeRendererSchedulerState::set_is_backgrounded(bool value) {
  _internal_set_is_backgrounded(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeRendererSchedulerState.is_backgrounded)
}
inline bool ChromeRendererSchedulerState::_internal_is_backgrounded() const {
  return _impl_.is_backgrounded_;
}
inline void ChromeRendererSchedulerState::_internal_set_is_backgrounded(bool value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.is_backgrounded_ = value;
}

// optional bool is_hidden = 3;
inline bool ChromeRendererSchedulerState::has_is_hidden() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void ChromeRendererSchedulerState::clear_is_hidden() {
  _impl_.is_hidden_ = false;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline bool ChromeRendererSchedulerState::is_hidden() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeRendererSchedulerState.is_hidden)
  return _internal_is_hidden();
}
inline void ChromeRendererSchedulerState::set_is_hidden(bool value) {
  _internal_set_is_hidden(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeRendererSchedulerState.is_hidden)
}
inline bool ChromeRendererSchedulerState::_internal_is_hidden() const {
  return _impl_.is_hidden_;
}
inline void ChromeRendererSchedulerState::_internal_set_is_hidden(bool value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.is_hidden_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto


PROTOBUF_NAMESPACE_OPEN

template <>
struct is_proto_enum<::perfetto::protos::ChromeRAILMode> : std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor<::perfetto::protos::ChromeRAILMode>() {
  return ::perfetto::protos::ChromeRAILMode_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5frenderer_5fscheduler_5fstate_2eproto_2epb_2eh
