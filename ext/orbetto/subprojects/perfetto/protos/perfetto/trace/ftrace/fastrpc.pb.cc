// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/fastrpc.proto

#include "protos/perfetto/trace/ftrace/fastrpc.pb.h"

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
PROTOBUF_CONSTEXPR FastrpcDmaStatFtraceEvent::FastrpcDmaStatFtraceEvent(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.len_)*/ ::int64_t{0}

  , /*decltype(_impl_.total_allocated_)*/ ::uint64_t{0u}

  , /*decltype(_impl_.cid_)*/ 0
} {}
struct FastrpcDmaStatFtraceEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FastrpcDmaStatFtraceEventDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~FastrpcDmaStatFtraceEventDefaultTypeInternal() {}
  union {
    FastrpcDmaStatFtraceEvent _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FastrpcDmaStatFtraceEventDefaultTypeInternal _FastrpcDmaStatFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
static ::_pb::Metadata file_level_metadata_protos_2fperfetto_2ftrace_2fftrace_2ffastrpc_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2fftrace_2ffastrpc_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2fftrace_2ffastrpc_2eproto = nullptr;
const ::uint32_t TableStruct_protos_2fperfetto_2ftrace_2fftrace_2ffastrpc_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::FastrpcDmaStatFtraceEvent, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::FastrpcDmaStatFtraceEvent, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::FastrpcDmaStatFtraceEvent, _impl_.cid_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::FastrpcDmaStatFtraceEvent, _impl_.len_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::FastrpcDmaStatFtraceEvent, _impl_.total_allocated_),
    2,
    0,
    1,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 11, -1, sizeof(::perfetto::protos::FastrpcDmaStatFtraceEvent)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::perfetto::protos::_FastrpcDmaStatFtraceEvent_default_instance_._instance,
};
const char descriptor_table_protodef_protos_2fperfetto_2ftrace_2fftrace_2ffastrpc_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n*protos/perfetto/trace/ftrace/fastrpc.p"
    "roto\022\017perfetto.protos\"N\n\031FastrpcDmaStatF"
    "traceEvent\022\013\n\003cid\030\001 \001(\005\022\013\n\003len\030\002 \001(\003\022\027\n\017"
    "total_allocated\030\003 \001(\004"
};
static ::absl::once_flag descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2ffastrpc_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2ffastrpc_2eproto = {
    false,
    false,
    141,
    descriptor_table_protodef_protos_2fperfetto_2ftrace_2fftrace_2ffastrpc_2eproto,
    "protos/perfetto/trace/ftrace/fastrpc.proto",
    &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2ffastrpc_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_protos_2fperfetto_2ftrace_2fftrace_2ffastrpc_2eproto::offsets,
    file_level_metadata_protos_2fperfetto_2ftrace_2fftrace_2ffastrpc_2eproto,
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2fftrace_2ffastrpc_2eproto,
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2fftrace_2ffastrpc_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2ffastrpc_2eproto_getter() {
  return &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2ffastrpc_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_protos_2fperfetto_2ftrace_2fftrace_2ffastrpc_2eproto(&descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2ffastrpc_2eproto);
namespace perfetto {
namespace protos {
// ===================================================================

class FastrpcDmaStatFtraceEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<FastrpcDmaStatFtraceEvent>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(FastrpcDmaStatFtraceEvent, _impl_._has_bits_);
  static void set_has_cid(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_len(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_total_allocated(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

FastrpcDmaStatFtraceEvent::FastrpcDmaStatFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.FastrpcDmaStatFtraceEvent)
}
FastrpcDmaStatFtraceEvent::FastrpcDmaStatFtraceEvent(const FastrpcDmaStatFtraceEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(), _impl_(from._impl_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.FastrpcDmaStatFtraceEvent)
}

inline void FastrpcDmaStatFtraceEvent::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.len_) { ::int64_t{0} }

    , decltype(_impl_.total_allocated_) { ::uint64_t{0u} }

    , decltype(_impl_.cid_) { 0 }

  };
}

FastrpcDmaStatFtraceEvent::~FastrpcDmaStatFtraceEvent() {
  // @@protoc_insertion_point(destructor:perfetto.protos.FastrpcDmaStatFtraceEvent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void FastrpcDmaStatFtraceEvent::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
}

void FastrpcDmaStatFtraceEvent::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void FastrpcDmaStatFtraceEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.FastrpcDmaStatFtraceEvent)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    ::memset(&_impl_.len_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.cid_) -
        reinterpret_cast<char*>(&_impl_.len_)) + sizeof(_impl_.cid_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* FastrpcDmaStatFtraceEvent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int32 cid = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _Internal::set_has_cid(&has_bits);
          _impl_.cid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional int64 len = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 16)) {
          _Internal::set_has_len(&has_bits);
          _impl_.len_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional uint64 total_allocated = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 24)) {
          _Internal::set_has_total_allocated(&has_bits);
          _impl_.total_allocated_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::uint8_t* FastrpcDmaStatFtraceEvent::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.FastrpcDmaStatFtraceEvent)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional int32 cid = 1;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(
        1, this->_internal_cid(), target);
  }

  // optional int64 len = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(
        2, this->_internal_len(), target);
  }

  // optional uint64 total_allocated = 3;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        3, this->_internal_total_allocated(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.FastrpcDmaStatFtraceEvent)
  return target;
}

::size_t FastrpcDmaStatFtraceEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.FastrpcDmaStatFtraceEvent)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional int64 len = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
          this->_internal_len());
    }

    // optional uint64 total_allocated = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_total_allocated());
    }

    // optional int32 cid = 1;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
          this->_internal_cid());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData FastrpcDmaStatFtraceEvent::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    FastrpcDmaStatFtraceEvent::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*FastrpcDmaStatFtraceEvent::GetClassData() const { return &_class_data_; }


void FastrpcDmaStatFtraceEvent::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<FastrpcDmaStatFtraceEvent*>(&to_msg);
  auto& from = static_cast<const FastrpcDmaStatFtraceEvent&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.FastrpcDmaStatFtraceEvent)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.len_ = from._impl_.len_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.total_allocated_ = from._impl_.total_allocated_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.cid_ = from._impl_.cid_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void FastrpcDmaStatFtraceEvent::CopyFrom(const FastrpcDmaStatFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.FastrpcDmaStatFtraceEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FastrpcDmaStatFtraceEvent::IsInitialized() const {
  return true;
}

void FastrpcDmaStatFtraceEvent::InternalSwap(FastrpcDmaStatFtraceEvent* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(FastrpcDmaStatFtraceEvent, _impl_.cid_)
      + sizeof(FastrpcDmaStatFtraceEvent::_impl_.cid_)
      - PROTOBUF_FIELD_OFFSET(FastrpcDmaStatFtraceEvent, _impl_.len_)>(
          reinterpret_cast<char*>(&_impl_.len_),
          reinterpret_cast<char*>(&other->_impl_.len_));
}

::PROTOBUF_NAMESPACE_ID::Metadata FastrpcDmaStatFtraceEvent::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2ffastrpc_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2ffastrpc_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2fftrace_2ffastrpc_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::FastrpcDmaStatFtraceEvent*
Arena::CreateMaybeMessage< ::perfetto::protos::FastrpcDmaStatFtraceEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::FastrpcDmaStatFtraceEvent >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"