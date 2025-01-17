// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/thermal.proto

#include "protos/perfetto/trace/ftrace/thermal.pb.h"

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
PROTOBUF_CONSTEXPR ThermalTemperatureFtraceEvent::ThermalTemperatureFtraceEvent(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.thermal_zone_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.id_)*/ 0

  , /*decltype(_impl_.temp_)*/ 0

  , /*decltype(_impl_.temp_prev_)*/ 0
} {}
struct ThermalTemperatureFtraceEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ThermalTemperatureFtraceEventDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ThermalTemperatureFtraceEventDefaultTypeInternal() {}
  union {
    ThermalTemperatureFtraceEvent _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ThermalTemperatureFtraceEventDefaultTypeInternal _ThermalTemperatureFtraceEvent_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR CdevUpdateFtraceEvent::CdevUpdateFtraceEvent(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.type_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.target_)*/ ::uint64_t{0u}
} {}
struct CdevUpdateFtraceEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CdevUpdateFtraceEventDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~CdevUpdateFtraceEventDefaultTypeInternal() {}
  union {
    CdevUpdateFtraceEvent _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CdevUpdateFtraceEventDefaultTypeInternal _CdevUpdateFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
static ::_pb::Metadata file_level_metadata_protos_2fperfetto_2ftrace_2fftrace_2fthermal_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2fftrace_2fthermal_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2fftrace_2fthermal_2eproto = nullptr;
const ::uint32_t TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fthermal_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ThermalTemperatureFtraceEvent, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ThermalTemperatureFtraceEvent, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ThermalTemperatureFtraceEvent, _impl_.id_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ThermalTemperatureFtraceEvent, _impl_.temp_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ThermalTemperatureFtraceEvent, _impl_.temp_prev_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ThermalTemperatureFtraceEvent, _impl_.thermal_zone_),
    1,
    2,
    3,
    0,
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::CdevUpdateFtraceEvent, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::CdevUpdateFtraceEvent, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::CdevUpdateFtraceEvent, _impl_.target_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::CdevUpdateFtraceEvent, _impl_.type_),
    1,
    0,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 12, -1, sizeof(::perfetto::protos::ThermalTemperatureFtraceEvent)},
        { 16, 26, -1, sizeof(::perfetto::protos::CdevUpdateFtraceEvent)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::perfetto::protos::_ThermalTemperatureFtraceEvent_default_instance_._instance,
    &::perfetto::protos::_CdevUpdateFtraceEvent_default_instance_._instance,
};
const char descriptor_table_protodef_protos_2fperfetto_2ftrace_2fftrace_2fthermal_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n*protos/perfetto/trace/ftrace/thermal.p"
    "roto\022\017perfetto.protos\"b\n\035ThermalTemperat"
    "ureFtraceEvent\022\n\n\002id\030\001 \001(\005\022\014\n\004temp\030\002 \001(\005"
    "\022\021\n\ttemp_prev\030\003 \001(\005\022\024\n\014thermal_zone\030\004 \001("
    "\t\"5\n\025CdevUpdateFtraceEvent\022\016\n\006target\030\001 \001"
    "(\004\022\014\n\004type\030\002 \001(\t"
};
static ::absl::once_flag descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fthermal_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fthermal_2eproto = {
    false,
    false,
    216,
    descriptor_table_protodef_protos_2fperfetto_2ftrace_2fftrace_2fthermal_2eproto,
    "protos/perfetto/trace/ftrace/thermal.proto",
    &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fthermal_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fthermal_2eproto::offsets,
    file_level_metadata_protos_2fperfetto_2ftrace_2fftrace_2fthermal_2eproto,
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2fftrace_2fthermal_2eproto,
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2fftrace_2fthermal_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fthermal_2eproto_getter() {
  return &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fthermal_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_protos_2fperfetto_2ftrace_2fftrace_2fthermal_2eproto(&descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fthermal_2eproto);
namespace perfetto {
namespace protos {
// ===================================================================

class ThermalTemperatureFtraceEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<ThermalTemperatureFtraceEvent>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(ThermalTemperatureFtraceEvent, _impl_._has_bits_);
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_temp(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_temp_prev(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_thermal_zone(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

ThermalTemperatureFtraceEvent::ThermalTemperatureFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.ThermalTemperatureFtraceEvent)
}
ThermalTemperatureFtraceEvent::ThermalTemperatureFtraceEvent(const ThermalTemperatureFtraceEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ThermalTemperatureFtraceEvent* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.thermal_zone_) {}

    , decltype(_impl_.id_) {}

    , decltype(_impl_.temp_) {}

    , decltype(_impl_.temp_prev_) {}
  };

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.thermal_zone_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.thermal_zone_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.thermal_zone_.Set(from._internal_thermal_zone(), _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.id_, &from._impl_.id_,
    static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.temp_prev_) -
    reinterpret_cast<char*>(&_impl_.id_)) + sizeof(_impl_.temp_prev_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.ThermalTemperatureFtraceEvent)
}

inline void ThermalTemperatureFtraceEvent::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.thermal_zone_) {}

    , decltype(_impl_.id_) { 0 }

    , decltype(_impl_.temp_) { 0 }

    , decltype(_impl_.temp_prev_) { 0 }

  };
  _impl_.thermal_zone_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.thermal_zone_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

ThermalTemperatureFtraceEvent::~ThermalTemperatureFtraceEvent() {
  // @@protoc_insertion_point(destructor:perfetto.protos.ThermalTemperatureFtraceEvent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ThermalTemperatureFtraceEvent::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.thermal_zone_.Destroy();
}

void ThermalTemperatureFtraceEvent::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ThermalTemperatureFtraceEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.ThermalTemperatureFtraceEvent)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.thermal_zone_.ClearNonDefaultToEmpty();
  }
  if (cached_has_bits & 0x0000000eu) {
    ::memset(&_impl_.id_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.temp_prev_) -
        reinterpret_cast<char*>(&_impl_.id_)) + sizeof(_impl_.temp_prev_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ThermalTemperatureFtraceEvent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int32 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _Internal::set_has_id(&has_bits);
          _impl_.id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional int32 temp = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 16)) {
          _Internal::set_has_temp(&has_bits);
          _impl_.temp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional int32 temp_prev = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 24)) {
          _Internal::set_has_temp_prev(&has_bits);
          _impl_.temp_prev_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional string thermal_zone = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_thermal_zone();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "perfetto.protos.ThermalTemperatureFtraceEvent.thermal_zone");
          #endif  // !NDEBUG
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

::uint8_t* ThermalTemperatureFtraceEvent::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.ThermalTemperatureFtraceEvent)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional int32 id = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(
        1, this->_internal_id(), target);
  }

  // optional int32 temp = 2;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(
        2, this->_internal_temp(), target);
  }

  // optional int32 temp_prev = 3;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(
        3, this->_internal_temp_prev(), target);
  }

  // optional string thermal_zone = 4;
  if (cached_has_bits & 0x00000001u) {
    const std::string& _s = this->_internal_thermal_zone();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(_s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
                                "perfetto.protos.ThermalTemperatureFtraceEvent.thermal_zone");
    target = stream->WriteStringMaybeAliased(4, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.ThermalTemperatureFtraceEvent)
  return target;
}

::size_t ThermalTemperatureFtraceEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.ThermalTemperatureFtraceEvent)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional string thermal_zone = 4;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                      this->_internal_thermal_zone());
    }

    // optional int32 id = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
          this->_internal_id());
    }

    // optional int32 temp = 2;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
          this->_internal_temp());
    }

    // optional int32 temp_prev = 3;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
          this->_internal_temp_prev());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ThermalTemperatureFtraceEvent::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ThermalTemperatureFtraceEvent::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ThermalTemperatureFtraceEvent::GetClassData() const { return &_class_data_; }


void ThermalTemperatureFtraceEvent::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ThermalTemperatureFtraceEvent*>(&to_msg);
  auto& from = static_cast<const ThermalTemperatureFtraceEvent&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.ThermalTemperatureFtraceEvent)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_thermal_zone(from._internal_thermal_zone());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.id_ = from._impl_.id_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.temp_ = from._impl_.temp_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.temp_prev_ = from._impl_.temp_prev_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ThermalTemperatureFtraceEvent::CopyFrom(const ThermalTemperatureFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.ThermalTemperatureFtraceEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ThermalTemperatureFtraceEvent::IsInitialized() const {
  return true;
}

void ThermalTemperatureFtraceEvent::InternalSwap(ThermalTemperatureFtraceEvent* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.thermal_zone_, lhs_arena,
                                       &other->_impl_.thermal_zone_, rhs_arena);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ThermalTemperatureFtraceEvent, _impl_.temp_prev_)
      + sizeof(ThermalTemperatureFtraceEvent::_impl_.temp_prev_)
      - PROTOBUF_FIELD_OFFSET(ThermalTemperatureFtraceEvent, _impl_.id_)>(
          reinterpret_cast<char*>(&_impl_.id_),
          reinterpret_cast<char*>(&other->_impl_.id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ThermalTemperatureFtraceEvent::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fthermal_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fthermal_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2fftrace_2fthermal_2eproto[0]);
}
// ===================================================================

class CdevUpdateFtraceEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<CdevUpdateFtraceEvent>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(CdevUpdateFtraceEvent, _impl_._has_bits_);
  static void set_has_target(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_type(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

CdevUpdateFtraceEvent::CdevUpdateFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.CdevUpdateFtraceEvent)
}
CdevUpdateFtraceEvent::CdevUpdateFtraceEvent(const CdevUpdateFtraceEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  CdevUpdateFtraceEvent* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.type_) {}

    , decltype(_impl_.target_) {}
  };

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.type_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.type_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.type_.Set(from._internal_type(), _this->GetArenaForAllocation());
  }
  _this->_impl_.target_ = from._impl_.target_;
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.CdevUpdateFtraceEvent)
}

inline void CdevUpdateFtraceEvent::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.type_) {}

    , decltype(_impl_.target_) { ::uint64_t{0u} }

  };
  _impl_.type_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.type_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

CdevUpdateFtraceEvent::~CdevUpdateFtraceEvent() {
  // @@protoc_insertion_point(destructor:perfetto.protos.CdevUpdateFtraceEvent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void CdevUpdateFtraceEvent::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.type_.Destroy();
}

void CdevUpdateFtraceEvent::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void CdevUpdateFtraceEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.CdevUpdateFtraceEvent)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.type_.ClearNonDefaultToEmpty();
  }
  _impl_.target_ = ::uint64_t{0u};
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CdevUpdateFtraceEvent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint64 target = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _Internal::set_has_target(&has_bits);
          _impl_.target_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional string type = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_type();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "perfetto.protos.CdevUpdateFtraceEvent.type");
          #endif  // !NDEBUG
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

::uint8_t* CdevUpdateFtraceEvent::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.CdevUpdateFtraceEvent)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional uint64 target = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        1, this->_internal_target(), target);
  }

  // optional string type = 2;
  if (cached_has_bits & 0x00000001u) {
    const std::string& _s = this->_internal_type();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(_s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
                                "perfetto.protos.CdevUpdateFtraceEvent.type");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.CdevUpdateFtraceEvent)
  return target;
}

::size_t CdevUpdateFtraceEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.CdevUpdateFtraceEvent)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string type = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                      this->_internal_type());
    }

    // optional uint64 target = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_target());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData CdevUpdateFtraceEvent::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    CdevUpdateFtraceEvent::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*CdevUpdateFtraceEvent::GetClassData() const { return &_class_data_; }


void CdevUpdateFtraceEvent::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<CdevUpdateFtraceEvent*>(&to_msg);
  auto& from = static_cast<const CdevUpdateFtraceEvent&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.CdevUpdateFtraceEvent)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_type(from._internal_type());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.target_ = from._impl_.target_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void CdevUpdateFtraceEvent::CopyFrom(const CdevUpdateFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.CdevUpdateFtraceEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CdevUpdateFtraceEvent::IsInitialized() const {
  return true;
}

void CdevUpdateFtraceEvent::InternalSwap(CdevUpdateFtraceEvent* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.type_, lhs_arena,
                                       &other->_impl_.type_, rhs_arena);

  swap(_impl_.target_, other->_impl_.target_);
}

::PROTOBUF_NAMESPACE_ID::Metadata CdevUpdateFtraceEvent::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fthermal_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fthermal_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2fftrace_2fthermal_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::ThermalTemperatureFtraceEvent*
Arena::CreateMaybeMessage< ::perfetto::protos::ThermalTemperatureFtraceEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::ThermalTemperatureFtraceEvent >(arena);
}
template<> PROTOBUF_NOINLINE ::perfetto::protos::CdevUpdateFtraceEvent*
Arena::CreateMaybeMessage< ::perfetto::protos::CdevUpdateFtraceEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::CdevUpdateFtraceEvent >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
