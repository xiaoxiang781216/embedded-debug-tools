// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/synthetic.proto

#include "protos/perfetto/trace/ftrace/synthetic.pb.h"

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
PROTOBUF_CONSTEXPR RssStatThrottledFtraceEvent::RssStatThrottledFtraceEvent(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.curr_)*/ 0u

  , /*decltype(_impl_.member_)*/ 0

  , /*decltype(_impl_.size_)*/ ::int64_t{0}

  , /*decltype(_impl_.mm_id_)*/ 0u
} {}
struct RssStatThrottledFtraceEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR RssStatThrottledFtraceEventDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~RssStatThrottledFtraceEventDefaultTypeInternal() {}
  union {
    RssStatThrottledFtraceEvent _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 RssStatThrottledFtraceEventDefaultTypeInternal _RssStatThrottledFtraceEvent_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR SuspendResumeMinimalFtraceEvent::SuspendResumeMinimalFtraceEvent(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.start_)*/ 0u
} {}
struct SuspendResumeMinimalFtraceEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SuspendResumeMinimalFtraceEventDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~SuspendResumeMinimalFtraceEventDefaultTypeInternal() {}
  union {
    SuspendResumeMinimalFtraceEvent _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SuspendResumeMinimalFtraceEventDefaultTypeInternal _SuspendResumeMinimalFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
static ::_pb::Metadata file_level_metadata_protos_2fperfetto_2ftrace_2fftrace_2fsynthetic_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2fftrace_2fsynthetic_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2fftrace_2fsynthetic_2eproto = nullptr;
const ::uint32_t TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fsynthetic_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::RssStatThrottledFtraceEvent, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::RssStatThrottledFtraceEvent, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::RssStatThrottledFtraceEvent, _impl_.curr_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::RssStatThrottledFtraceEvent, _impl_.member_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::RssStatThrottledFtraceEvent, _impl_.mm_id_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::RssStatThrottledFtraceEvent, _impl_.size_),
    0,
    1,
    3,
    2,
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::SuspendResumeMinimalFtraceEvent, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::SuspendResumeMinimalFtraceEvent, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::SuspendResumeMinimalFtraceEvent, _impl_.start_),
    0,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 12, -1, sizeof(::perfetto::protos::RssStatThrottledFtraceEvent)},
        { 16, 25, -1, sizeof(::perfetto::protos::SuspendResumeMinimalFtraceEvent)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::perfetto::protos::_RssStatThrottledFtraceEvent_default_instance_._instance,
    &::perfetto::protos::_SuspendResumeMinimalFtraceEvent_default_instance_._instance,
};
const char descriptor_table_protodef_protos_2fperfetto_2ftrace_2fftrace_2fsynthetic_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n,protos/perfetto/trace/ftrace/synthetic"
    ".proto\022\017perfetto.protos\"X\n\033RssStatThrott"
    "ledFtraceEvent\022\014\n\004curr\030\001 \001(\r\022\016\n\006member\030\002"
    " \001(\005\022\r\n\005mm_id\030\003 \001(\r\022\014\n\004size\030\004 \001(\003\"0\n\037Sus"
    "pendResumeMinimalFtraceEvent\022\r\n\005start\030\001 "
    "\001(\r"
};
static ::absl::once_flag descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fsynthetic_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fsynthetic_2eproto = {
    false,
    false,
    203,
    descriptor_table_protodef_protos_2fperfetto_2ftrace_2fftrace_2fsynthetic_2eproto,
    "protos/perfetto/trace/ftrace/synthetic.proto",
    &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fsynthetic_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fsynthetic_2eproto::offsets,
    file_level_metadata_protos_2fperfetto_2ftrace_2fftrace_2fsynthetic_2eproto,
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2fftrace_2fsynthetic_2eproto,
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2fftrace_2fsynthetic_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fsynthetic_2eproto_getter() {
  return &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fsynthetic_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_protos_2fperfetto_2ftrace_2fftrace_2fsynthetic_2eproto(&descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fsynthetic_2eproto);
namespace perfetto {
namespace protos {
// ===================================================================

class RssStatThrottledFtraceEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<RssStatThrottledFtraceEvent>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(RssStatThrottledFtraceEvent, _impl_._has_bits_);
  static void set_has_curr(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_member(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_mm_id(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_size(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

RssStatThrottledFtraceEvent::RssStatThrottledFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.RssStatThrottledFtraceEvent)
}
RssStatThrottledFtraceEvent::RssStatThrottledFtraceEvent(const RssStatThrottledFtraceEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(), _impl_(from._impl_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.RssStatThrottledFtraceEvent)
}

inline void RssStatThrottledFtraceEvent::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.curr_) { 0u }

    , decltype(_impl_.member_) { 0 }

    , decltype(_impl_.size_) { ::int64_t{0} }

    , decltype(_impl_.mm_id_) { 0u }

  };
}

RssStatThrottledFtraceEvent::~RssStatThrottledFtraceEvent() {
  // @@protoc_insertion_point(destructor:perfetto.protos.RssStatThrottledFtraceEvent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void RssStatThrottledFtraceEvent::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
}

void RssStatThrottledFtraceEvent::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void RssStatThrottledFtraceEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.RssStatThrottledFtraceEvent)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    ::memset(&_impl_.curr_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.mm_id_) -
        reinterpret_cast<char*>(&_impl_.curr_)) + sizeof(_impl_.mm_id_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* RssStatThrottledFtraceEvent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint32 curr = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _Internal::set_has_curr(&has_bits);
          _impl_.curr_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional int32 member = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 16)) {
          _Internal::set_has_member(&has_bits);
          _impl_.member_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional uint32 mm_id = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 24)) {
          _Internal::set_has_mm_id(&has_bits);
          _impl_.mm_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional int64 size = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 32)) {
          _Internal::set_has_size(&has_bits);
          _impl_.size_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::uint8_t* RssStatThrottledFtraceEvent::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.RssStatThrottledFtraceEvent)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional uint32 curr = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        1, this->_internal_curr(), target);
  }

  // optional int32 member = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(
        2, this->_internal_member(), target);
  }

  // optional uint32 mm_id = 3;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        3, this->_internal_mm_id(), target);
  }

  // optional int64 size = 4;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(
        4, this->_internal_size(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.RssStatThrottledFtraceEvent)
  return target;
}

::size_t RssStatThrottledFtraceEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.RssStatThrottledFtraceEvent)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional uint32 curr = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
          this->_internal_curr());
    }

    // optional int32 member = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
          this->_internal_member());
    }

    // optional int64 size = 4;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
          this->_internal_size());
    }

    // optional uint32 mm_id = 3;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
          this->_internal_mm_id());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData RssStatThrottledFtraceEvent::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    RssStatThrottledFtraceEvent::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*RssStatThrottledFtraceEvent::GetClassData() const { return &_class_data_; }


void RssStatThrottledFtraceEvent::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<RssStatThrottledFtraceEvent*>(&to_msg);
  auto& from = static_cast<const RssStatThrottledFtraceEvent&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.RssStatThrottledFtraceEvent)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.curr_ = from._impl_.curr_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.member_ = from._impl_.member_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.size_ = from._impl_.size_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.mm_id_ = from._impl_.mm_id_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void RssStatThrottledFtraceEvent::CopyFrom(const RssStatThrottledFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.RssStatThrottledFtraceEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RssStatThrottledFtraceEvent::IsInitialized() const {
  return true;
}

void RssStatThrottledFtraceEvent::InternalSwap(RssStatThrottledFtraceEvent* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(RssStatThrottledFtraceEvent, _impl_.mm_id_)
      + sizeof(RssStatThrottledFtraceEvent::_impl_.mm_id_)
      - PROTOBUF_FIELD_OFFSET(RssStatThrottledFtraceEvent, _impl_.curr_)>(
          reinterpret_cast<char*>(&_impl_.curr_),
          reinterpret_cast<char*>(&other->_impl_.curr_));
}

::PROTOBUF_NAMESPACE_ID::Metadata RssStatThrottledFtraceEvent::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fsynthetic_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fsynthetic_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2fftrace_2fsynthetic_2eproto[0]);
}
// ===================================================================

class SuspendResumeMinimalFtraceEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<SuspendResumeMinimalFtraceEvent>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(SuspendResumeMinimalFtraceEvent, _impl_._has_bits_);
  static void set_has_start(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

SuspendResumeMinimalFtraceEvent::SuspendResumeMinimalFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.SuspendResumeMinimalFtraceEvent)
}
SuspendResumeMinimalFtraceEvent::SuspendResumeMinimalFtraceEvent(const SuspendResumeMinimalFtraceEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(), _impl_(from._impl_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.SuspendResumeMinimalFtraceEvent)
}

inline void SuspendResumeMinimalFtraceEvent::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.start_) { 0u }

  };
}

SuspendResumeMinimalFtraceEvent::~SuspendResumeMinimalFtraceEvent() {
  // @@protoc_insertion_point(destructor:perfetto.protos.SuspendResumeMinimalFtraceEvent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SuspendResumeMinimalFtraceEvent::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
}

void SuspendResumeMinimalFtraceEvent::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SuspendResumeMinimalFtraceEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.SuspendResumeMinimalFtraceEvent)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.start_ = 0u;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SuspendResumeMinimalFtraceEvent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint32 start = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _Internal::set_has_start(&has_bits);
          _impl_.start_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

::uint8_t* SuspendResumeMinimalFtraceEvent::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.SuspendResumeMinimalFtraceEvent)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional uint32 start = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        1, this->_internal_start(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.SuspendResumeMinimalFtraceEvent)
  return target;
}

::size_t SuspendResumeMinimalFtraceEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.SuspendResumeMinimalFtraceEvent)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional uint32 start = 1;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
        this->_internal_start());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SuspendResumeMinimalFtraceEvent::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SuspendResumeMinimalFtraceEvent::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SuspendResumeMinimalFtraceEvent::GetClassData() const { return &_class_data_; }


void SuspendResumeMinimalFtraceEvent::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SuspendResumeMinimalFtraceEvent*>(&to_msg);
  auto& from = static_cast<const SuspendResumeMinimalFtraceEvent&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.SuspendResumeMinimalFtraceEvent)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_internal_set_start(from._internal_start());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SuspendResumeMinimalFtraceEvent::CopyFrom(const SuspendResumeMinimalFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.SuspendResumeMinimalFtraceEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SuspendResumeMinimalFtraceEvent::IsInitialized() const {
  return true;
}

void SuspendResumeMinimalFtraceEvent::InternalSwap(SuspendResumeMinimalFtraceEvent* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);

  swap(_impl_.start_, other->_impl_.start_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SuspendResumeMinimalFtraceEvent::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fsynthetic_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fsynthetic_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2fftrace_2fsynthetic_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::RssStatThrottledFtraceEvent*
Arena::CreateMaybeMessage< ::perfetto::protos::RssStatThrottledFtraceEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::RssStatThrottledFtraceEvent >(arena);
}
template<> PROTOBUF_NOINLINE ::perfetto::protos::SuspendResumeMinimalFtraceEvent*
Arena::CreateMaybeMessage< ::perfetto::protos::SuspendResumeMinimalFtraceEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::SuspendResumeMinimalFtraceEvent >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"