// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/track_event/chrome_legacy_ipc.proto

#include "protos/perfetto/trace/track_event/chrome_legacy_ipc.pb.h"

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
PROTOBUF_CONSTEXPR ChromeLegacyIpc::ChromeLegacyIpc(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.message_class_)*/ 0

  , /*decltype(_impl_.message_line_)*/ 0u
} {}
struct ChromeLegacyIpcDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ChromeLegacyIpcDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ChromeLegacyIpcDefaultTypeInternal() {}
  union {
    ChromeLegacyIpc _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ChromeLegacyIpcDefaultTypeInternal _ChromeLegacyIpc_default_instance_;
}  // namespace protos
}  // namespace perfetto
static ::_pb::Metadata file_level_metadata_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5flegacy_5fipc_2eproto[1];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5flegacy_5fipc_2eproto[1];
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5flegacy_5fipc_2eproto = nullptr;
const ::uint32_t TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5flegacy_5fipc_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeLegacyIpc, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeLegacyIpc, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeLegacyIpc, _impl_.message_class_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeLegacyIpc, _impl_.message_line_),
    0,
    1,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 10, -1, sizeof(::perfetto::protos::ChromeLegacyIpc)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::perfetto::protos::_ChromeLegacyIpc_default_instance_._instance,
};
const char descriptor_table_protodef_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5flegacy_5fipc_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n9protos/perfetto/trace/track_event/chro"
    "me_legacy_ipc.proto\022\017perfetto.protos\"\316\007\n"
    "\017ChromeLegacyIpc\022D\n\rmessage_class\030\001 \001(\0162"
    "-.perfetto.protos.ChromeLegacyIpc.Messag"
    "eClass\022\024\n\014message_line\030\002 \001(\r\"\336\006\n\014Message"
    "Class\022\025\n\021CLASS_UNSPECIFIED\020\000\022\024\n\020CLASS_AU"
    "TOMATION\020\001\022\017\n\013CLASS_FRAME\020\002\022\016\n\nCLASS_PAG"
    "E\020\003\022\016\n\nCLASS_VIEW\020\004\022\020\n\014CLASS_WIDGET\020\005\022\017\n"
    "\013CLASS_INPUT\020\006\022\016\n\nCLASS_TEST\020\007\022\020\n\014CLASS_"
    "WORKER\020\010\022\016\n\nCLASS_NACL\020\t\022\025\n\021CLASS_GPU_CH"
    "ANNEL\020\n\022\017\n\013CLASS_MEDIA\020\013\022\017\n\013CLASS_PPAPI\020"
    "\014\022\020\n\014CLASS_CHROME\020\r\022\016\n\nCLASS_DRAG\020\016\022\017\n\013C"
    "LASS_PRINT\020\017\022\023\n\017CLASS_EXTENSION\020\020\022\033\n\027CLA"
    "SS_TEXT_INPUT_CLIENT\020\021\022\024\n\020CLASS_BLINK_TE"
    "ST\020\022\022\027\n\023CLASS_ACCESSIBILITY\020\023\022\023\n\017CLASS_P"
    "RERENDER\020\024\022\024\n\020CLASS_CHROMOTING\020\025\022\030\n\024CLAS"
    "S_BROWSER_PLUGIN\020\026\022\032\n\026CLASS_ANDROID_WEB_"
    "VIEW\020\027\022\023\n\017CLASS_NACL_HOST\020\030\022\031\n\025CLASS_ENC"
    "RYPTED_MEDIA\020\031\022\016\n\nCLASS_CAST\020\032\022\031\n\025CLASS_"
    "GIN_JAVA_BRIDGE\020\033\022!\n\035CLASS_CHROME_UTILIT"
    "Y_PRINTING\020\034\022\023\n\017CLASS_OZONE_GPU\020\035\022\022\n\016CLA"
    "SS_WEB_TEST\020\036\022\027\n\023CLASS_NETWORK_HINTS\020\037\022\037"
    "\n\033CLASS_EXTENSIONS_GUEST_VIEW\020 \022\024\n\020CLASS"
    "_GUEST_VIEW\020!\022\037\n\033CLASS_MEDIA_PLAYER_DELE"
    "GATE\020\"\022\032\n\026CLASS_EXTENSION_WORKER\020#\022\034\n\030CL"
    "ASS_SUBRESOURCE_FILTER\020$\022\033\n\027CLASS_UNFREE"
    "ZABLE_FRAME\020%"
};
static ::absl::once_flag descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5flegacy_5fipc_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5flegacy_5fipc_2eproto = {
    false,
    false,
    1053,
    descriptor_table_protodef_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5flegacy_5fipc_2eproto,
    "protos/perfetto/trace/track_event/chrome_legacy_ipc.proto",
    &descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5flegacy_5fipc_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5flegacy_5fipc_2eproto::offsets,
    file_level_metadata_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5flegacy_5fipc_2eproto,
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5flegacy_5fipc_2eproto,
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5flegacy_5fipc_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5flegacy_5fipc_2eproto_getter() {
  return &descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5flegacy_5fipc_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5flegacy_5fipc_2eproto(&descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5flegacy_5fipc_2eproto);
namespace perfetto {
namespace protos {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ChromeLegacyIpc_MessageClass_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5flegacy_5fipc_2eproto);
  return file_level_enum_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5flegacy_5fipc_2eproto[0];
}
bool ChromeLegacyIpc_MessageClass_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
      return true;
    default:
      return false;
  }
}
#if (__cplusplus < 201703) && \
  (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_UNSPECIFIED;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_AUTOMATION;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_FRAME;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_PAGE;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_VIEW;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_WIDGET;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_INPUT;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_TEST;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_WORKER;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_NACL;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_GPU_CHANNEL;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_MEDIA;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_PPAPI;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_CHROME;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_DRAG;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_PRINT;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_EXTENSION;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_TEXT_INPUT_CLIENT;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_BLINK_TEST;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_ACCESSIBILITY;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_PRERENDER;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_CHROMOTING;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_BROWSER_PLUGIN;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_ANDROID_WEB_VIEW;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_NACL_HOST;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_ENCRYPTED_MEDIA;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_CAST;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_GIN_JAVA_BRIDGE;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_CHROME_UTILITY_PRINTING;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_OZONE_GPU;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_WEB_TEST;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_NETWORK_HINTS;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_EXTENSIONS_GUEST_VIEW;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_GUEST_VIEW;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_MEDIA_PLAYER_DELEGATE;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_EXTENSION_WORKER;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_SUBRESOURCE_FILTER;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_UNFREEZABLE_FRAME;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::MessageClass_MIN;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::MessageClass_MAX;
constexpr int ChromeLegacyIpc::MessageClass_ARRAYSIZE;

#endif  // (__cplusplus < 201703) &&
        // (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
// ===================================================================

class ChromeLegacyIpc::_Internal {
 public:
  using HasBits = decltype(std::declval<ChromeLegacyIpc>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(ChromeLegacyIpc, _impl_._has_bits_);
  static void set_has_message_class(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_message_line(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

ChromeLegacyIpc::ChromeLegacyIpc(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.ChromeLegacyIpc)
}
ChromeLegacyIpc::ChromeLegacyIpc(const ChromeLegacyIpc& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(), _impl_(from._impl_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.ChromeLegacyIpc)
}

inline void ChromeLegacyIpc::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.message_class_) { 0 }

    , decltype(_impl_.message_line_) { 0u }

  };
}

ChromeLegacyIpc::~ChromeLegacyIpc() {
  // @@protoc_insertion_point(destructor:perfetto.protos.ChromeLegacyIpc)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ChromeLegacyIpc::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
}

void ChromeLegacyIpc::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ChromeLegacyIpc::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.ChromeLegacyIpc)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&_impl_.message_class_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.message_line_) -
        reinterpret_cast<char*>(&_impl_.message_class_)) + sizeof(_impl_.message_line_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ChromeLegacyIpc::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional .perfetto.protos.ChromeLegacyIpc.MessageClass message_class = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          ::int32_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::perfetto::protos::ChromeLegacyIpc_MessageClass_IsValid(static_cast<int>(val)))) {
            _internal_set_message_class(static_cast<::perfetto::protos::ChromeLegacyIpc_MessageClass>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
        } else {
          goto handle_unusual;
        }
        continue;
      // optional uint32 message_line = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 16)) {
          _Internal::set_has_message_line(&has_bits);
          _impl_.message_line_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
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

::uint8_t* ChromeLegacyIpc::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.ChromeLegacyIpc)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional .perfetto.protos.ChromeLegacyIpc.MessageClass message_class = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        1, this->_internal_message_class(), target);
  }

  // optional uint32 message_line = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        2, this->_internal_message_line(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.ChromeLegacyIpc)
  return target;
}

::size_t ChromeLegacyIpc::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.ChromeLegacyIpc)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional .perfetto.protos.ChromeLegacyIpc.MessageClass message_class = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
                    ::_pbi::WireFormatLite::EnumSize(this->_internal_message_class());
    }

    // optional uint32 message_line = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
          this->_internal_message_line());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ChromeLegacyIpc::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ChromeLegacyIpc::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ChromeLegacyIpc::GetClassData() const { return &_class_data_; }


void ChromeLegacyIpc::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ChromeLegacyIpc*>(&to_msg);
  auto& from = static_cast<const ChromeLegacyIpc&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.ChromeLegacyIpc)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.message_class_ = from._impl_.message_class_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.message_line_ = from._impl_.message_line_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ChromeLegacyIpc::CopyFrom(const ChromeLegacyIpc& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.ChromeLegacyIpc)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChromeLegacyIpc::IsInitialized() const {
  return true;
}

void ChromeLegacyIpc::InternalSwap(ChromeLegacyIpc* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ChromeLegacyIpc, _impl_.message_line_)
      + sizeof(ChromeLegacyIpc::_impl_.message_line_)
      - PROTOBUF_FIELD_OFFSET(ChromeLegacyIpc, _impl_.message_class_)>(
          reinterpret_cast<char*>(&_impl_.message_class_),
          reinterpret_cast<char*>(&other->_impl_.message_class_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ChromeLegacyIpc::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5flegacy_5fipc_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5flegacy_5fipc_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5flegacy_5fipc_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::ChromeLegacyIpc*
Arena::CreateMaybeMessage< ::perfetto::protos::ChromeLegacyIpc >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::ChromeLegacyIpc >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
