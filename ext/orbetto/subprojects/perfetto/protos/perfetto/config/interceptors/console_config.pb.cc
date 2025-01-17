// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/config/interceptors/console_config.proto

#include "protos/perfetto/config/interceptors/console_config.pb.h"

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
PROTOBUF_CONSTEXPR ConsoleConfig::ConsoleConfig(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.output_)*/ 0

  , /*decltype(_impl_.enable_colors_)*/ false
} {}
struct ConsoleConfigDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ConsoleConfigDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ConsoleConfigDefaultTypeInternal() {}
  union {
    ConsoleConfig _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ConsoleConfigDefaultTypeInternal _ConsoleConfig_default_instance_;
}  // namespace protos
}  // namespace perfetto
static ::_pb::Metadata file_level_metadata_protos_2fperfetto_2fconfig_2finterceptors_2fconsole_5fconfig_2eproto[1];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_protos_2fperfetto_2fconfig_2finterceptors_2fconsole_5fconfig_2eproto[1];
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_protos_2fperfetto_2fconfig_2finterceptors_2fconsole_5fconfig_2eproto = nullptr;
const ::uint32_t TableStruct_protos_2fperfetto_2fconfig_2finterceptors_2fconsole_5fconfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ConsoleConfig, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ConsoleConfig, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ConsoleConfig, _impl_.output_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ConsoleConfig, _impl_.enable_colors_),
    0,
    1,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 10, -1, sizeof(::perfetto::protos::ConsoleConfig)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::perfetto::protos::_ConsoleConfig_default_instance_._instance,
};
const char descriptor_table_protodef_protos_2fperfetto_2fconfig_2finterceptors_2fconsole_5fconfig_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n8protos/perfetto/config/interceptors/co"
    "nsole_config.proto\022\017perfetto.protos\"\245\001\n\r"
    "ConsoleConfig\0225\n\006output\030\001 \001(\0162%.perfetto"
    ".protos.ConsoleConfig.Output\022\025\n\renable_c"
    "olors\030\002 \001(\010\"F\n\006Output\022\026\n\022OUTPUT_UNSPECIF"
    "IED\020\000\022\021\n\rOUTPUT_STDOUT\020\001\022\021\n\rOUTPUT_STDER"
    "R\020\002"
};
static ::absl::once_flag descriptor_table_protos_2fperfetto_2fconfig_2finterceptors_2fconsole_5fconfig_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_protos_2fperfetto_2fconfig_2finterceptors_2fconsole_5fconfig_2eproto = {
    false,
    false,
    243,
    descriptor_table_protodef_protos_2fperfetto_2fconfig_2finterceptors_2fconsole_5fconfig_2eproto,
    "protos/perfetto/config/interceptors/console_config.proto",
    &descriptor_table_protos_2fperfetto_2fconfig_2finterceptors_2fconsole_5fconfig_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_protos_2fperfetto_2fconfig_2finterceptors_2fconsole_5fconfig_2eproto::offsets,
    file_level_metadata_protos_2fperfetto_2fconfig_2finterceptors_2fconsole_5fconfig_2eproto,
    file_level_enum_descriptors_protos_2fperfetto_2fconfig_2finterceptors_2fconsole_5fconfig_2eproto,
    file_level_service_descriptors_protos_2fperfetto_2fconfig_2finterceptors_2fconsole_5fconfig_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_protos_2fperfetto_2fconfig_2finterceptors_2fconsole_5fconfig_2eproto_getter() {
  return &descriptor_table_protos_2fperfetto_2fconfig_2finterceptors_2fconsole_5fconfig_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_protos_2fperfetto_2fconfig_2finterceptors_2fconsole_5fconfig_2eproto(&descriptor_table_protos_2fperfetto_2fconfig_2finterceptors_2fconsole_5fconfig_2eproto);
namespace perfetto {
namespace protos {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ConsoleConfig_Output_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_protos_2fperfetto_2fconfig_2finterceptors_2fconsole_5fconfig_2eproto);
  return file_level_enum_descriptors_protos_2fperfetto_2fconfig_2finterceptors_2fconsole_5fconfig_2eproto[0];
}
bool ConsoleConfig_Output_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}
#if (__cplusplus < 201703) && \
  (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

constexpr ConsoleConfig_Output ConsoleConfig::OUTPUT_UNSPECIFIED;
constexpr ConsoleConfig_Output ConsoleConfig::OUTPUT_STDOUT;
constexpr ConsoleConfig_Output ConsoleConfig::OUTPUT_STDERR;
constexpr ConsoleConfig_Output ConsoleConfig::Output_MIN;
constexpr ConsoleConfig_Output ConsoleConfig::Output_MAX;
constexpr int ConsoleConfig::Output_ARRAYSIZE;

#endif  // (__cplusplus < 201703) &&
        // (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
// ===================================================================

class ConsoleConfig::_Internal {
 public:
  using HasBits = decltype(std::declval<ConsoleConfig>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(ConsoleConfig, _impl_._has_bits_);
  static void set_has_output(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_enable_colors(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

ConsoleConfig::ConsoleConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.ConsoleConfig)
}
ConsoleConfig::ConsoleConfig(const ConsoleConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(), _impl_(from._impl_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.ConsoleConfig)
}

inline void ConsoleConfig::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.output_) { 0 }

    , decltype(_impl_.enable_colors_) { false }

  };
}

ConsoleConfig::~ConsoleConfig() {
  // @@protoc_insertion_point(destructor:perfetto.protos.ConsoleConfig)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ConsoleConfig::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
}

void ConsoleConfig::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ConsoleConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.ConsoleConfig)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&_impl_.output_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.enable_colors_) -
        reinterpret_cast<char*>(&_impl_.output_)) + sizeof(_impl_.enable_colors_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ConsoleConfig::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional .perfetto.protos.ConsoleConfig.Output output = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          ::int32_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::perfetto::protos::ConsoleConfig_Output_IsValid(static_cast<int>(val)))) {
            _internal_set_output(static_cast<::perfetto::protos::ConsoleConfig_Output>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
        } else {
          goto handle_unusual;
        }
        continue;
      // optional bool enable_colors = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 16)) {
          _Internal::set_has_enable_colors(&has_bits);
          _impl_.enable_colors_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::uint8_t* ConsoleConfig::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.ConsoleConfig)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional .perfetto.protos.ConsoleConfig.Output output = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        1, this->_internal_output(), target);
  }

  // optional bool enable_colors = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        2, this->_internal_enable_colors(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.ConsoleConfig)
  return target;
}

::size_t ConsoleConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.ConsoleConfig)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional .perfetto.protos.ConsoleConfig.Output output = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
                    ::_pbi::WireFormatLite::EnumSize(this->_internal_output());
    }

    // optional bool enable_colors = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 2;
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ConsoleConfig::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ConsoleConfig::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ConsoleConfig::GetClassData() const { return &_class_data_; }


void ConsoleConfig::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ConsoleConfig*>(&to_msg);
  auto& from = static_cast<const ConsoleConfig&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.ConsoleConfig)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.output_ = from._impl_.output_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.enable_colors_ = from._impl_.enable_colors_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ConsoleConfig::CopyFrom(const ConsoleConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.ConsoleConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ConsoleConfig::IsInitialized() const {
  return true;
}

void ConsoleConfig::InternalSwap(ConsoleConfig* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ConsoleConfig, _impl_.enable_colors_)
      + sizeof(ConsoleConfig::_impl_.enable_colors_)
      - PROTOBUF_FIELD_OFFSET(ConsoleConfig, _impl_.output_)>(
          reinterpret_cast<char*>(&_impl_.output_),
          reinterpret_cast<char*>(&other->_impl_.output_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ConsoleConfig::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2fconfig_2finterceptors_2fconsole_5fconfig_2eproto_getter, &descriptor_table_protos_2fperfetto_2fconfig_2finterceptors_2fconsole_5fconfig_2eproto_once,
      file_level_metadata_protos_2fperfetto_2fconfig_2finterceptors_2fconsole_5fconfig_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::ConsoleConfig*
Arena::CreateMaybeMessage< ::perfetto::protos::ConsoleConfig >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::ConsoleConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
