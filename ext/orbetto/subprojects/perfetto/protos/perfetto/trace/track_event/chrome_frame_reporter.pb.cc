// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/track_event/chrome_frame_reporter.proto

#include "protos/perfetto/trace/track_event/chrome_frame_reporter.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = ::PROTOBUF_NAMESPACE_ID::internal;
namespace perfetto {
namespace protos {
template <typename>
PROTOBUF_CONSTEXPR ChromeFrameReporter::ChromeFrameReporter(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.high_latency_contribution_stage_)*/{}
  , /*decltype(_impl_.state_)*/ 0

  , /*decltype(_impl_.reason_)*/ 0

  , /*decltype(_impl_.frame_source_)*/ ::uint64_t{0u}

  , /*decltype(_impl_.frame_sequence_)*/ ::uint64_t{0u}

  , /*decltype(_impl_.scroll_state_)*/ 0

  , /*decltype(_impl_.affects_smoothness_)*/ false

  , /*decltype(_impl_.has_main_animation_)*/ false

  , /*decltype(_impl_.has_compositor_animation_)*/ false

  , /*decltype(_impl_.has_smooth_input_main_)*/ false

  , /*decltype(_impl_.layer_tree_host_id_)*/ ::uint64_t{0u}

  , /*decltype(_impl_.has_missing_content_)*/ false

  , /*decltype(_impl_.has_high_latency_)*/ false

  , /*decltype(_impl_.frame_type_)*/ 0
} {}
struct ChromeFrameReporterDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ChromeFrameReporterDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ChromeFrameReporterDefaultTypeInternal() {}
  union {
    ChromeFrameReporter _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ChromeFrameReporterDefaultTypeInternal _ChromeFrameReporter_default_instance_;
}  // namespace protos
}  // namespace perfetto
static ::_pb::Metadata file_level_metadata_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fframe_5freporter_2eproto[1];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fframe_5freporter_2eproto[4];
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fframe_5freporter_2eproto = nullptr;
const ::uint32_t TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fframe_5freporter_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeFrameReporter, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeFrameReporter, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeFrameReporter, _impl_.state_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeFrameReporter, _impl_.reason_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeFrameReporter, _impl_.frame_source_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeFrameReporter, _impl_.frame_sequence_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeFrameReporter, _impl_.affects_smoothness_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeFrameReporter, _impl_.scroll_state_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeFrameReporter, _impl_.has_main_animation_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeFrameReporter, _impl_.has_compositor_animation_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeFrameReporter, _impl_.has_smooth_input_main_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeFrameReporter, _impl_.has_missing_content_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeFrameReporter, _impl_.layer_tree_host_id_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeFrameReporter, _impl_.has_high_latency_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeFrameReporter, _impl_.frame_type_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeFrameReporter, _impl_.high_latency_contribution_stage_),
    0,
    1,
    2,
    3,
    5,
    4,
    6,
    7,
    8,
    10,
    9,
    11,
    12,
    ~0u,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 22, -1, sizeof(::perfetto::protos::ChromeFrameReporter)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::perfetto::protos::_ChromeFrameReporter_default_instance_._instance,
};
const char descriptor_table_protodef_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fframe_5freporter_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n=protos/perfetto/trace/track_event/chro"
    "me_frame_reporter.proto\022\017perfetto.protos"
    "\"\305\007\n\023ChromeFrameReporter\0229\n\005state\030\001 \001(\0162"
    "*.perfetto.protos.ChromeFrameReporter.St"
    "ate\022D\n\006reason\030\002 \001(\01624.perfetto.protos.Ch"
    "romeFrameReporter.FrameDropReason\022\024\n\014fra"
    "me_source\030\003 \001(\004\022\026\n\016frame_sequence\030\004 \001(\004\022"
    "\032\n\022affects_smoothness\030\005 \001(\010\022F\n\014scroll_st"
    "ate\030\006 \001(\01620.perfetto.protos.ChromeFrameR"
    "eporter.ScrollState\022\032\n\022has_main_animatio"
    "n\030\007 \001(\010\022 \n\030has_compositor_animation\030\010 \001("
    "\010\022\035\n\025has_smooth_input_main\030\t \001(\010\022\033\n\023has_"
    "missing_content\030\n \001(\010\022\032\n\022layer_tree_host"
    "_id\030\013 \001(\004\022\030\n\020has_high_latency\030\014 \001(\010\022B\n\nf"
    "rame_type\030\r \001(\0162..perfetto.protos.Chrome"
    "FrameReporter.FrameType\022\'\n\037high_latency_"
    "contribution_stage\030\016 \003(\t\"m\n\005State\022\033\n\027STA"
    "TE_NO_UPDATE_DESIRED\020\000\022\027\n\023STATE_PRESENTE"
    "D_ALL\020\001\022\033\n\027STATE_PRESENTED_PARTIAL\020\002\022\021\n\r"
    "STATE_DROPPED\020\003\"~\n\017FrameDropReason\022\026\n\022RE"
    "ASON_UNSPECIFIED\020\000\022\035\n\031REASON_DISPLAY_COM"
    "POSITOR\020\001\022\026\n\022REASON_MAIN_THREAD\020\002\022\034\n\030REA"
    "SON_CLIENT_COMPOSITOR\020\003\"h\n\013ScrollState\022\017"
    "\n\013SCROLL_NONE\020\000\022\026\n\022SCROLL_MAIN_THREAD\020\001\022"
    "\034\n\030SCROLL_COMPOSITOR_THREAD\020\002\022\022\n\016SCROLL_"
    "UNKNOWN\020\003\"%\n\tFrameType\022\n\n\006FORKED\020\000\022\014\n\010BA"
    "CKFILL\020\001"
};
static ::absl::once_flag descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fframe_5freporter_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fframe_5freporter_2eproto = {
    false,
    false,
    1048,
    descriptor_table_protodef_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fframe_5freporter_2eproto,
    "protos/perfetto/trace/track_event/chrome_frame_reporter.proto",
    &descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fframe_5freporter_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fframe_5freporter_2eproto::offsets,
    file_level_metadata_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fframe_5freporter_2eproto,
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fframe_5freporter_2eproto,
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fframe_5freporter_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fframe_5freporter_2eproto_getter() {
  return &descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fframe_5freporter_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fframe_5freporter_2eproto(&descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fframe_5freporter_2eproto);
namespace perfetto {
namespace protos {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ChromeFrameReporter_State_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fframe_5freporter_2eproto);
  return file_level_enum_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fframe_5freporter_2eproto[0];
}
bool ChromeFrameReporter_State_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}
#if (__cplusplus < 201703) && \
  (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

constexpr ChromeFrameReporter_State ChromeFrameReporter::STATE_NO_UPDATE_DESIRED;
constexpr ChromeFrameReporter_State ChromeFrameReporter::STATE_PRESENTED_ALL;
constexpr ChromeFrameReporter_State ChromeFrameReporter::STATE_PRESENTED_PARTIAL;
constexpr ChromeFrameReporter_State ChromeFrameReporter::STATE_DROPPED;
constexpr ChromeFrameReporter_State ChromeFrameReporter::State_MIN;
constexpr ChromeFrameReporter_State ChromeFrameReporter::State_MAX;
constexpr int ChromeFrameReporter::State_ARRAYSIZE;

#endif  // (__cplusplus < 201703) &&
        // (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ChromeFrameReporter_FrameDropReason_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fframe_5freporter_2eproto);
  return file_level_enum_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fframe_5freporter_2eproto[1];
}
bool ChromeFrameReporter_FrameDropReason_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}
#if (__cplusplus < 201703) && \
  (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

constexpr ChromeFrameReporter_FrameDropReason ChromeFrameReporter::REASON_UNSPECIFIED;
constexpr ChromeFrameReporter_FrameDropReason ChromeFrameReporter::REASON_DISPLAY_COMPOSITOR;
constexpr ChromeFrameReporter_FrameDropReason ChromeFrameReporter::REASON_MAIN_THREAD;
constexpr ChromeFrameReporter_FrameDropReason ChromeFrameReporter::REASON_CLIENT_COMPOSITOR;
constexpr ChromeFrameReporter_FrameDropReason ChromeFrameReporter::FrameDropReason_MIN;
constexpr ChromeFrameReporter_FrameDropReason ChromeFrameReporter::FrameDropReason_MAX;
constexpr int ChromeFrameReporter::FrameDropReason_ARRAYSIZE;

#endif  // (__cplusplus < 201703) &&
        // (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ChromeFrameReporter_ScrollState_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fframe_5freporter_2eproto);
  return file_level_enum_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fframe_5freporter_2eproto[2];
}
bool ChromeFrameReporter_ScrollState_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}
#if (__cplusplus < 201703) && \
  (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

constexpr ChromeFrameReporter_ScrollState ChromeFrameReporter::SCROLL_NONE;
constexpr ChromeFrameReporter_ScrollState ChromeFrameReporter::SCROLL_MAIN_THREAD;
constexpr ChromeFrameReporter_ScrollState ChromeFrameReporter::SCROLL_COMPOSITOR_THREAD;
constexpr ChromeFrameReporter_ScrollState ChromeFrameReporter::SCROLL_UNKNOWN;
constexpr ChromeFrameReporter_ScrollState ChromeFrameReporter::ScrollState_MIN;
constexpr ChromeFrameReporter_ScrollState ChromeFrameReporter::ScrollState_MAX;
constexpr int ChromeFrameReporter::ScrollState_ARRAYSIZE;

#endif  // (__cplusplus < 201703) &&
        // (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ChromeFrameReporter_FrameType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fframe_5freporter_2eproto);
  return file_level_enum_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fframe_5freporter_2eproto[3];
}
bool ChromeFrameReporter_FrameType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}
#if (__cplusplus < 201703) && \
  (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

constexpr ChromeFrameReporter_FrameType ChromeFrameReporter::FORKED;
constexpr ChromeFrameReporter_FrameType ChromeFrameReporter::BACKFILL;
constexpr ChromeFrameReporter_FrameType ChromeFrameReporter::FrameType_MIN;
constexpr ChromeFrameReporter_FrameType ChromeFrameReporter::FrameType_MAX;
constexpr int ChromeFrameReporter::FrameType_ARRAYSIZE;

#endif  // (__cplusplus < 201703) &&
        // (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
// ===================================================================

class ChromeFrameReporter::_Internal {
 public:
  using HasBits = decltype(std::declval<ChromeFrameReporter>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(ChromeFrameReporter, _impl_._has_bits_);
  static void set_has_state(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_reason(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_frame_source(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_frame_sequence(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_affects_smoothness(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_scroll_state(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_has_main_animation(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_has_compositor_animation(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_has_smooth_input_main(HasBits* has_bits) {
    (*has_bits)[0] |= 256u;
  }
  static void set_has_has_missing_content(HasBits* has_bits) {
    (*has_bits)[0] |= 1024u;
  }
  static void set_has_layer_tree_host_id(HasBits* has_bits) {
    (*has_bits)[0] |= 512u;
  }
  static void set_has_has_high_latency(HasBits* has_bits) {
    (*has_bits)[0] |= 2048u;
  }
  static void set_has_frame_type(HasBits* has_bits) {
    (*has_bits)[0] |= 4096u;
  }
};

ChromeFrameReporter::ChromeFrameReporter(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.ChromeFrameReporter)
}
ChromeFrameReporter::ChromeFrameReporter(const ChromeFrameReporter& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ChromeFrameReporter* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.high_latency_contribution_stage_){from._impl_.high_latency_contribution_stage_}
    , decltype(_impl_.state_) {}

    , decltype(_impl_.reason_) {}

    , decltype(_impl_.frame_source_) {}

    , decltype(_impl_.frame_sequence_) {}

    , decltype(_impl_.scroll_state_) {}

    , decltype(_impl_.affects_smoothness_) {}

    , decltype(_impl_.has_main_animation_) {}

    , decltype(_impl_.has_compositor_animation_) {}

    , decltype(_impl_.has_smooth_input_main_) {}

    , decltype(_impl_.layer_tree_host_id_) {}

    , decltype(_impl_.has_missing_content_) {}

    , decltype(_impl_.has_high_latency_) {}

    , decltype(_impl_.frame_type_) {}
  };

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.state_, &from._impl_.state_,
    static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.frame_type_) -
    reinterpret_cast<char*>(&_impl_.state_)) + sizeof(_impl_.frame_type_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.ChromeFrameReporter)
}

inline void ChromeFrameReporter::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.high_latency_contribution_stage_){arena}
    , decltype(_impl_.state_) { 0 }

    , decltype(_impl_.reason_) { 0 }

    , decltype(_impl_.frame_source_) { ::uint64_t{0u} }

    , decltype(_impl_.frame_sequence_) { ::uint64_t{0u} }

    , decltype(_impl_.scroll_state_) { 0 }

    , decltype(_impl_.affects_smoothness_) { false }

    , decltype(_impl_.has_main_animation_) { false }

    , decltype(_impl_.has_compositor_animation_) { false }

    , decltype(_impl_.has_smooth_input_main_) { false }

    , decltype(_impl_.layer_tree_host_id_) { ::uint64_t{0u} }

    , decltype(_impl_.has_missing_content_) { false }

    , decltype(_impl_.has_high_latency_) { false }

    , decltype(_impl_.frame_type_) { 0 }

  };
}

ChromeFrameReporter::~ChromeFrameReporter() {
  // @@protoc_insertion_point(destructor:perfetto.protos.ChromeFrameReporter)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ChromeFrameReporter::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _internal_mutable_high_latency_contribution_stage()->~RepeatedPtrField();
}

void ChromeFrameReporter::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ChromeFrameReporter::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.ChromeFrameReporter)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_mutable_high_latency_contribution_stage()->Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    ::memset(&_impl_.state_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.has_compositor_animation_) -
        reinterpret_cast<char*>(&_impl_.state_)) + sizeof(_impl_.has_compositor_animation_));
  }
  if (cached_has_bits & 0x00001f00u) {
    ::memset(&_impl_.has_smooth_input_main_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.frame_type_) -
        reinterpret_cast<char*>(&_impl_.has_smooth_input_main_)) + sizeof(_impl_.frame_type_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ChromeFrameReporter::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional .perfetto.protos.ChromeFrameReporter.State state = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          ::int32_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::perfetto::protos::ChromeFrameReporter_State_IsValid(static_cast<int>(val)))) {
            _internal_set_state(static_cast<::perfetto::protos::ChromeFrameReporter_State>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
        } else {
          goto handle_unusual;
        }
        continue;
      // optional .perfetto.protos.ChromeFrameReporter.FrameDropReason reason = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 16)) {
          ::int32_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::perfetto::protos::ChromeFrameReporter_FrameDropReason_IsValid(static_cast<int>(val)))) {
            _internal_set_reason(static_cast<::perfetto::protos::ChromeFrameReporter_FrameDropReason>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(2, val, mutable_unknown_fields());
          }
        } else {
          goto handle_unusual;
        }
        continue;
      // optional uint64 frame_source = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 24)) {
          _Internal::set_has_frame_source(&has_bits);
          _impl_.frame_source_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional uint64 frame_sequence = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 32)) {
          _Internal::set_has_frame_sequence(&has_bits);
          _impl_.frame_sequence_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional bool affects_smoothness = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 40)) {
          _Internal::set_has_affects_smoothness(&has_bits);
          _impl_.affects_smoothness_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional .perfetto.protos.ChromeFrameReporter.ScrollState scroll_state = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 48)) {
          ::int32_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::perfetto::protos::ChromeFrameReporter_ScrollState_IsValid(static_cast<int>(val)))) {
            _internal_set_scroll_state(static_cast<::perfetto::protos::ChromeFrameReporter_ScrollState>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(6, val, mutable_unknown_fields());
          }
        } else {
          goto handle_unusual;
        }
        continue;
      // optional bool has_main_animation = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 56)) {
          _Internal::set_has_has_main_animation(&has_bits);
          _impl_.has_main_animation_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional bool has_compositor_animation = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 64)) {
          _Internal::set_has_has_compositor_animation(&has_bits);
          _impl_.has_compositor_animation_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional bool has_smooth_input_main = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 72)) {
          _Internal::set_has_has_smooth_input_main(&has_bits);
          _impl_.has_smooth_input_main_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional bool has_missing_content = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 80)) {
          _Internal::set_has_has_missing_content(&has_bits);
          _impl_.has_missing_content_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional uint64 layer_tree_host_id = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 88)) {
          _Internal::set_has_layer_tree_host_id(&has_bits);
          _impl_.layer_tree_host_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional bool has_high_latency = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 96)) {
          _Internal::set_has_has_high_latency(&has_bits);
          _impl_.has_high_latency_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional .perfetto.protos.ChromeFrameReporter.FrameType frame_type = 13;
      case 13:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 104)) {
          ::int32_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::perfetto::protos::ChromeFrameReporter_FrameType_IsValid(static_cast<int>(val)))) {
            _internal_set_frame_type(static_cast<::perfetto::protos::ChromeFrameReporter_FrameType>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(13, val, mutable_unknown_fields());
          }
        } else {
          goto handle_unusual;
        }
        continue;
      // repeated string high_latency_contribution_stage = 14;
      case 14:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 114)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_high_latency_contribution_stage();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            #ifndef NDEBUG
            ::_pbi::VerifyUTF8(str, "perfetto.protos.ChromeFrameReporter.high_latency_contribution_stage");
            #endif  // !NDEBUG
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<114>(ptr));
        } else {
          goto handle_unusual;
        }
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* ChromeFrameReporter::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.ChromeFrameReporter)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional .perfetto.protos.ChromeFrameReporter.State state = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        1, this->_internal_state(), target);
  }

  // optional .perfetto.protos.ChromeFrameReporter.FrameDropReason reason = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        2, this->_internal_reason(), target);
  }

  // optional uint64 frame_source = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        3, this->_internal_frame_source(), target);
  }

  // optional uint64 frame_sequence = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        4, this->_internal_frame_sequence(), target);
  }

  // optional bool affects_smoothness = 5;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        5, this->_internal_affects_smoothness(), target);
  }

  // optional .perfetto.protos.ChromeFrameReporter.ScrollState scroll_state = 6;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        6, this->_internal_scroll_state(), target);
  }

  // optional bool has_main_animation = 7;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        7, this->_internal_has_main_animation(), target);
  }

  // optional bool has_compositor_animation = 8;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        8, this->_internal_has_compositor_animation(), target);
  }

  // optional bool has_smooth_input_main = 9;
  if (cached_has_bits & 0x00000100u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        9, this->_internal_has_smooth_input_main(), target);
  }

  // optional bool has_missing_content = 10;
  if (cached_has_bits & 0x00000400u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        10, this->_internal_has_missing_content(), target);
  }

  // optional uint64 layer_tree_host_id = 11;
  if (cached_has_bits & 0x00000200u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        11, this->_internal_layer_tree_host_id(), target);
  }

  // optional bool has_high_latency = 12;
  if (cached_has_bits & 0x00000800u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        12, this->_internal_has_high_latency(), target);
  }

  // optional .perfetto.protos.ChromeFrameReporter.FrameType frame_type = 13;
  if (cached_has_bits & 0x00001000u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        13, this->_internal_frame_type(), target);
  }

  // repeated string high_latency_contribution_stage = 14;
  for (int i = 0, n = this->_internal_high_latency_contribution_stage_size(); i < n; ++i) {
    const auto& s = this->_internal_high_latency_contribution_stage(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(s.data(), static_cast<int>(s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
                                "perfetto.protos.ChromeFrameReporter.high_latency_contribution_stage");
    target = stream->WriteString(14, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.ChromeFrameReporter)
  return target;
}

::size_t ChromeFrameReporter::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.ChromeFrameReporter)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string high_latency_contribution_stage = 14;
  total_size += 1 * ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_internal_high_latency_contribution_stage().size());
  for (int i = 0, n = _internal_high_latency_contribution_stage().size(); i < n; ++i) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        _internal_high_latency_contribution_stage().Get(i));
  }

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    // optional .perfetto.protos.ChromeFrameReporter.State state = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
                    ::_pbi::WireFormatLite::EnumSize(this->_internal_state());
    }

    // optional .perfetto.protos.ChromeFrameReporter.FrameDropReason reason = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
                    ::_pbi::WireFormatLite::EnumSize(this->_internal_reason());
    }

    // optional uint64 frame_source = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_frame_source());
    }

    // optional uint64 frame_sequence = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_frame_sequence());
    }

    // optional .perfetto.protos.ChromeFrameReporter.ScrollState scroll_state = 6;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
                    ::_pbi::WireFormatLite::EnumSize(this->_internal_scroll_state());
    }

    // optional bool affects_smoothness = 5;
    if (cached_has_bits & 0x00000020u) {
      total_size += 2;
    }

    // optional bool has_main_animation = 7;
    if (cached_has_bits & 0x00000040u) {
      total_size += 2;
    }

    // optional bool has_compositor_animation = 8;
    if (cached_has_bits & 0x00000080u) {
      total_size += 2;
    }

  }
  if (cached_has_bits & 0x00001f00u) {
    // optional bool has_smooth_input_main = 9;
    if (cached_has_bits & 0x00000100u) {
      total_size += 2;
    }

    // optional uint64 layer_tree_host_id = 11;
    if (cached_has_bits & 0x00000200u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_layer_tree_host_id());
    }

    // optional bool has_missing_content = 10;
    if (cached_has_bits & 0x00000400u) {
      total_size += 2;
    }

    // optional bool has_high_latency = 12;
    if (cached_has_bits & 0x00000800u) {
      total_size += 2;
    }

    // optional .perfetto.protos.ChromeFrameReporter.FrameType frame_type = 13;
    if (cached_has_bits & 0x00001000u) {
      total_size += 1 +
                    ::_pbi::WireFormatLite::EnumSize(this->_internal_frame_type());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ChromeFrameReporter::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ChromeFrameReporter::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ChromeFrameReporter::GetClassData() const { return &_class_data_; }


void ChromeFrameReporter::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ChromeFrameReporter*>(&to_msg);
  auto& from = static_cast<const ChromeFrameReporter&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.ChromeFrameReporter)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_high_latency_contribution_stage()->MergeFrom(from._internal_high_latency_contribution_stage());
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.state_ = from._impl_.state_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.reason_ = from._impl_.reason_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.frame_source_ = from._impl_.frame_source_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.frame_sequence_ = from._impl_.frame_sequence_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.scroll_state_ = from._impl_.scroll_state_;
    }
    if (cached_has_bits & 0x00000020u) {
      _this->_impl_.affects_smoothness_ = from._impl_.affects_smoothness_;
    }
    if (cached_has_bits & 0x00000040u) {
      _this->_impl_.has_main_animation_ = from._impl_.has_main_animation_;
    }
    if (cached_has_bits & 0x00000080u) {
      _this->_impl_.has_compositor_animation_ = from._impl_.has_compositor_animation_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 0x00001f00u) {
    if (cached_has_bits & 0x00000100u) {
      _this->_impl_.has_smooth_input_main_ = from._impl_.has_smooth_input_main_;
    }
    if (cached_has_bits & 0x00000200u) {
      _this->_impl_.layer_tree_host_id_ = from._impl_.layer_tree_host_id_;
    }
    if (cached_has_bits & 0x00000400u) {
      _this->_impl_.has_missing_content_ = from._impl_.has_missing_content_;
    }
    if (cached_has_bits & 0x00000800u) {
      _this->_impl_.has_high_latency_ = from._impl_.has_high_latency_;
    }
    if (cached_has_bits & 0x00001000u) {
      _this->_impl_.frame_type_ = from._impl_.frame_type_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ChromeFrameReporter::CopyFrom(const ChromeFrameReporter& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.ChromeFrameReporter)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChromeFrameReporter::IsInitialized() const {
  return true;
}

void ChromeFrameReporter::InternalSwap(ChromeFrameReporter* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _internal_mutable_high_latency_contribution_stage()->InternalSwap(
      other->_internal_mutable_high_latency_contribution_stage());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ChromeFrameReporter, _impl_.frame_type_)
      + sizeof(ChromeFrameReporter::_impl_.frame_type_)
      - PROTOBUF_FIELD_OFFSET(ChromeFrameReporter, _impl_.state_)>(
          reinterpret_cast<char*>(&_impl_.state_),
          reinterpret_cast<char*>(&other->_impl_.state_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ChromeFrameReporter::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fframe_5freporter_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fframe_5freporter_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fframe_5freporter_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::ChromeFrameReporter*
Arena::CreateMaybeMessage< ::perfetto::protos::ChromeFrameReporter >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::ChromeFrameReporter >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
