// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/config/android/android_polled_state_config.proto

#include "protos/perfetto/config/android/android_polled_state_config.pb.h"

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
PROTOBUF_CONSTEXPR AndroidPolledStateConfig::AndroidPolledStateConfig(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.poll_ms_)*/ 0u
} {}
struct AndroidPolledStateConfigDefaultTypeInternal {
  PROTOBUF_CONSTEXPR AndroidPolledStateConfigDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~AndroidPolledStateConfigDefaultTypeInternal() {}
  union {
    AndroidPolledStateConfig _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 AndroidPolledStateConfigDefaultTypeInternal _AndroidPolledStateConfig_default_instance_;
}  // namespace protos
}  // namespace perfetto
static ::_pb::Metadata file_level_metadata_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fpolled_5fstate_5fconfig_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fpolled_5fstate_5fconfig_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fpolled_5fstate_5fconfig_2eproto = nullptr;
const ::uint32_t TableStruct_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fpolled_5fstate_5fconfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::AndroidPolledStateConfig, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::AndroidPolledStateConfig, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::AndroidPolledStateConfig, _impl_.poll_ms_),
    0,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 9, -1, sizeof(::perfetto::protos::AndroidPolledStateConfig)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::perfetto::protos::_AndroidPolledStateConfig_default_instance_._instance,
};
const char descriptor_table_protodef_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fpolled_5fstate_5fconfig_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n@protos/perfetto/config/android/android"
    "_polled_state_config.proto\022\017perfetto.pro"
    "tos\"+\n\030AndroidPolledStateConfig\022\017\n\007poll_"
    "ms\030\001 \001(\r"
};
static ::absl::once_flag descriptor_table_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fpolled_5fstate_5fconfig_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fpolled_5fstate_5fconfig_2eproto = {
    false,
    false,
    128,
    descriptor_table_protodef_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fpolled_5fstate_5fconfig_2eproto,
    "protos/perfetto/config/android/android_polled_state_config.proto",
    &descriptor_table_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fpolled_5fstate_5fconfig_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fpolled_5fstate_5fconfig_2eproto::offsets,
    file_level_metadata_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fpolled_5fstate_5fconfig_2eproto,
    file_level_enum_descriptors_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fpolled_5fstate_5fconfig_2eproto,
    file_level_service_descriptors_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fpolled_5fstate_5fconfig_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fpolled_5fstate_5fconfig_2eproto_getter() {
  return &descriptor_table_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fpolled_5fstate_5fconfig_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fpolled_5fstate_5fconfig_2eproto(&descriptor_table_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fpolled_5fstate_5fconfig_2eproto);
namespace perfetto {
namespace protos {
// ===================================================================

class AndroidPolledStateConfig::_Internal {
 public:
  using HasBits = decltype(std::declval<AndroidPolledStateConfig>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(AndroidPolledStateConfig, _impl_._has_bits_);
  static void set_has_poll_ms(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

AndroidPolledStateConfig::AndroidPolledStateConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.AndroidPolledStateConfig)
}
AndroidPolledStateConfig::AndroidPolledStateConfig(const AndroidPolledStateConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(), _impl_(from._impl_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.AndroidPolledStateConfig)
}

inline void AndroidPolledStateConfig::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.poll_ms_) { 0u }

  };
}

AndroidPolledStateConfig::~AndroidPolledStateConfig() {
  // @@protoc_insertion_point(destructor:perfetto.protos.AndroidPolledStateConfig)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void AndroidPolledStateConfig::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
}

void AndroidPolledStateConfig::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void AndroidPolledStateConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.AndroidPolledStateConfig)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.poll_ms_ = 0u;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AndroidPolledStateConfig::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint32 poll_ms = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _Internal::set_has_poll_ms(&has_bits);
          _impl_.poll_ms_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

::uint8_t* AndroidPolledStateConfig::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.AndroidPolledStateConfig)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional uint32 poll_ms = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        1, this->_internal_poll_ms(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.AndroidPolledStateConfig)
  return target;
}

::size_t AndroidPolledStateConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.AndroidPolledStateConfig)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional uint32 poll_ms = 1;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
        this->_internal_poll_ms());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData AndroidPolledStateConfig::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    AndroidPolledStateConfig::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*AndroidPolledStateConfig::GetClassData() const { return &_class_data_; }


void AndroidPolledStateConfig::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<AndroidPolledStateConfig*>(&to_msg);
  auto& from = static_cast<const AndroidPolledStateConfig&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.AndroidPolledStateConfig)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_internal_set_poll_ms(from._internal_poll_ms());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void AndroidPolledStateConfig::CopyFrom(const AndroidPolledStateConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.AndroidPolledStateConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AndroidPolledStateConfig::IsInitialized() const {
  return true;
}

void AndroidPolledStateConfig::InternalSwap(AndroidPolledStateConfig* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);

  swap(_impl_.poll_ms_, other->_impl_.poll_ms_);
}

::PROTOBUF_NAMESPACE_ID::Metadata AndroidPolledStateConfig::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fpolled_5fstate_5fconfig_2eproto_getter, &descriptor_table_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fpolled_5fstate_5fconfig_2eproto_once,
      file_level_metadata_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fpolled_5fstate_5fconfig_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::AndroidPolledStateConfig*
Arena::CreateMaybeMessage< ::perfetto::protos::AndroidPolledStateConfig >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::AndroidPolledStateConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
