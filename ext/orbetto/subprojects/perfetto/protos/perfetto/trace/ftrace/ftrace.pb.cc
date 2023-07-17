// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/ftrace.proto

#include "protos/perfetto/trace/ftrace/ftrace.pb.h"

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
PROTOBUF_CONSTEXPR PrintFtraceEvent::PrintFtraceEvent(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.buf_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.ip_)*/ ::uint64_t{0u}
} {}
struct PrintFtraceEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PrintFtraceEventDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~PrintFtraceEventDefaultTypeInternal() {}
  union {
    PrintFtraceEvent _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PrintFtraceEventDefaultTypeInternal _PrintFtraceEvent_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR FuncgraphEntryFtraceEvent::FuncgraphEntryFtraceEvent(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.func_)*/ ::uint64_t{0u}

  , /*decltype(_impl_.depth_)*/ 0
} {}
struct FuncgraphEntryFtraceEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FuncgraphEntryFtraceEventDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~FuncgraphEntryFtraceEventDefaultTypeInternal() {}
  union {
    FuncgraphEntryFtraceEvent _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FuncgraphEntryFtraceEventDefaultTypeInternal _FuncgraphEntryFtraceEvent_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR FuncgraphExitFtraceEvent::FuncgraphExitFtraceEvent(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.calltime_)*/ ::uint64_t{0u}

  , /*decltype(_impl_.func_)*/ ::uint64_t{0u}

  , /*decltype(_impl_.overrun_)*/ ::uint64_t{0u}

  , /*decltype(_impl_.rettime_)*/ ::uint64_t{0u}

  , /*decltype(_impl_.depth_)*/ 0
} {}
struct FuncgraphExitFtraceEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FuncgraphExitFtraceEventDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~FuncgraphExitFtraceEventDefaultTypeInternal() {}
  union {
    FuncgraphExitFtraceEvent _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FuncgraphExitFtraceEventDefaultTypeInternal _FuncgraphExitFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
static ::_pb::Metadata file_level_metadata_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto[3];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto = nullptr;
const ::uint32_t TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::PrintFtraceEvent, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::PrintFtraceEvent, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::PrintFtraceEvent, _impl_.ip_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::PrintFtraceEvent, _impl_.buf_),
    1,
    0,
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::FuncgraphEntryFtraceEvent, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::FuncgraphEntryFtraceEvent, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::FuncgraphEntryFtraceEvent, _impl_.depth_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::FuncgraphEntryFtraceEvent, _impl_.func_),
    1,
    0,
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::FuncgraphExitFtraceEvent, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::FuncgraphExitFtraceEvent, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::FuncgraphExitFtraceEvent, _impl_.calltime_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::FuncgraphExitFtraceEvent, _impl_.depth_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::FuncgraphExitFtraceEvent, _impl_.func_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::FuncgraphExitFtraceEvent, _impl_.overrun_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::FuncgraphExitFtraceEvent, _impl_.rettime_),
    0,
    4,
    1,
    2,
    3,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 10, -1, sizeof(::perfetto::protos::PrintFtraceEvent)},
        { 12, 22, -1, sizeof(::perfetto::protos::FuncgraphEntryFtraceEvent)},
        { 24, 37, -1, sizeof(::perfetto::protos::FuncgraphExitFtraceEvent)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::perfetto::protos::_PrintFtraceEvent_default_instance_._instance,
    &::perfetto::protos::_FuncgraphEntryFtraceEvent_default_instance_._instance,
    &::perfetto::protos::_FuncgraphExitFtraceEvent_default_instance_._instance,
};
const char descriptor_table_protodef_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n)protos/perfetto/trace/ftrace/ftrace.pr"
    "oto\022\017perfetto.protos\"+\n\020PrintFtraceEvent"
    "\022\n\n\002ip\030\001 \001(\004\022\013\n\003buf\030\002 \001(\t\"8\n\031FuncgraphEn"
    "tryFtraceEvent\022\r\n\005depth\030\001 \001(\005\022\014\n\004func\030\002 "
    "\001(\004\"k\n\030FuncgraphExitFtraceEvent\022\020\n\010callt"
    "ime\030\001 \001(\004\022\r\n\005depth\030\002 \001(\005\022\014\n\004func\030\003 \001(\004\022\017"
    "\n\007overrun\030\004 \001(\004\022\017\n\007rettime\030\005 \001(\004"
};
static ::absl::once_flag descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto = {
    false,
    false,
    272,
    descriptor_table_protodef_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto,
    "protos/perfetto/trace/ftrace/ftrace.proto",
    &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto_once,
    nullptr,
    0,
    3,
    schemas,
    file_default_instances,
    TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto::offsets,
    file_level_metadata_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto,
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto,
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto_getter() {
  return &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto(&descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto);
namespace perfetto {
namespace protos {
// ===================================================================

class PrintFtraceEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<PrintFtraceEvent>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(PrintFtraceEvent, _impl_._has_bits_);
  static void set_has_ip(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_buf(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

PrintFtraceEvent::PrintFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.PrintFtraceEvent)
}
PrintFtraceEvent::PrintFtraceEvent(const PrintFtraceEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  PrintFtraceEvent* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.buf_) {}

    , decltype(_impl_.ip_) {}
  };

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.buf_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.buf_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.buf_.Set(from._internal_buf(), _this->GetArenaForAllocation());
  }
  _this->_impl_.ip_ = from._impl_.ip_;
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.PrintFtraceEvent)
}

inline void PrintFtraceEvent::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.buf_) {}

    , decltype(_impl_.ip_) { ::uint64_t{0u} }

  };
  _impl_.buf_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.buf_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

PrintFtraceEvent::~PrintFtraceEvent() {
  // @@protoc_insertion_point(destructor:perfetto.protos.PrintFtraceEvent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void PrintFtraceEvent::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.buf_.Destroy();
}

void PrintFtraceEvent::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void PrintFtraceEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.PrintFtraceEvent)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.buf_.ClearNonDefaultToEmpty();
  }
  _impl_.ip_ = ::uint64_t{0u};
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PrintFtraceEvent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint64 ip = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _Internal::set_has_ip(&has_bits);
          _impl_.ip_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional string buf = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_buf();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "perfetto.protos.PrintFtraceEvent.buf");
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

::uint8_t* PrintFtraceEvent::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.PrintFtraceEvent)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional uint64 ip = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        1, this->_internal_ip(), target);
  }

  // optional string buf = 2;
  if (cached_has_bits & 0x00000001u) {
    const std::string& _s = this->_internal_buf();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(_s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
                                "perfetto.protos.PrintFtraceEvent.buf");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.PrintFtraceEvent)
  return target;
}

::size_t PrintFtraceEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.PrintFtraceEvent)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string buf = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                      this->_internal_buf());
    }

    // optional uint64 ip = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_ip());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData PrintFtraceEvent::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    PrintFtraceEvent::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*PrintFtraceEvent::GetClassData() const { return &_class_data_; }


void PrintFtraceEvent::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<PrintFtraceEvent*>(&to_msg);
  auto& from = static_cast<const PrintFtraceEvent&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.PrintFtraceEvent)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_buf(from._internal_buf());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.ip_ = from._impl_.ip_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void PrintFtraceEvent::CopyFrom(const PrintFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.PrintFtraceEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PrintFtraceEvent::IsInitialized() const {
  return true;
}

void PrintFtraceEvent::InternalSwap(PrintFtraceEvent* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.buf_, lhs_arena,
                                       &other->_impl_.buf_, rhs_arena);

  swap(_impl_.ip_, other->_impl_.ip_);
}

::PROTOBUF_NAMESPACE_ID::Metadata PrintFtraceEvent::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto[0]);
}
// ===================================================================

class FuncgraphEntryFtraceEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<FuncgraphEntryFtraceEvent>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(FuncgraphEntryFtraceEvent, _impl_._has_bits_);
  static void set_has_depth(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_func(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

FuncgraphEntryFtraceEvent::FuncgraphEntryFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.FuncgraphEntryFtraceEvent)
}
FuncgraphEntryFtraceEvent::FuncgraphEntryFtraceEvent(const FuncgraphEntryFtraceEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(), _impl_(from._impl_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.FuncgraphEntryFtraceEvent)
}

inline void FuncgraphEntryFtraceEvent::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.func_) { ::uint64_t{0u} }

    , decltype(_impl_.depth_) { 0 }

  };
}

FuncgraphEntryFtraceEvent::~FuncgraphEntryFtraceEvent() {
  // @@protoc_insertion_point(destructor:perfetto.protos.FuncgraphEntryFtraceEvent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void FuncgraphEntryFtraceEvent::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
}

void FuncgraphEntryFtraceEvent::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void FuncgraphEntryFtraceEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.FuncgraphEntryFtraceEvent)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&_impl_.func_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.depth_) -
        reinterpret_cast<char*>(&_impl_.func_)) + sizeof(_impl_.depth_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* FuncgraphEntryFtraceEvent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int32 depth = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _Internal::set_has_depth(&has_bits);
          _impl_.depth_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional uint64 func = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 16)) {
          _Internal::set_has_func(&has_bits);
          _impl_.func_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::uint8_t* FuncgraphEntryFtraceEvent::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.FuncgraphEntryFtraceEvent)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional int32 depth = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(
        1, this->_internal_depth(), target);
  }

  // optional uint64 func = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        2, this->_internal_func(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.FuncgraphEntryFtraceEvent)
  return target;
}

::size_t FuncgraphEntryFtraceEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.FuncgraphEntryFtraceEvent)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional uint64 func = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_func());
    }

    // optional int32 depth = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
          this->_internal_depth());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData FuncgraphEntryFtraceEvent::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    FuncgraphEntryFtraceEvent::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*FuncgraphEntryFtraceEvent::GetClassData() const { return &_class_data_; }


void FuncgraphEntryFtraceEvent::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<FuncgraphEntryFtraceEvent*>(&to_msg);
  auto& from = static_cast<const FuncgraphEntryFtraceEvent&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.FuncgraphEntryFtraceEvent)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.func_ = from._impl_.func_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.depth_ = from._impl_.depth_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void FuncgraphEntryFtraceEvent::CopyFrom(const FuncgraphEntryFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.FuncgraphEntryFtraceEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FuncgraphEntryFtraceEvent::IsInitialized() const {
  return true;
}

void FuncgraphEntryFtraceEvent::InternalSwap(FuncgraphEntryFtraceEvent* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(FuncgraphEntryFtraceEvent, _impl_.depth_)
      + sizeof(FuncgraphEntryFtraceEvent::_impl_.depth_)
      - PROTOBUF_FIELD_OFFSET(FuncgraphEntryFtraceEvent, _impl_.func_)>(
          reinterpret_cast<char*>(&_impl_.func_),
          reinterpret_cast<char*>(&other->_impl_.func_));
}

::PROTOBUF_NAMESPACE_ID::Metadata FuncgraphEntryFtraceEvent::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto[1]);
}
// ===================================================================

class FuncgraphExitFtraceEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<FuncgraphExitFtraceEvent>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(FuncgraphExitFtraceEvent, _impl_._has_bits_);
  static void set_has_calltime(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_depth(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_func(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_overrun(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_rettime(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

FuncgraphExitFtraceEvent::FuncgraphExitFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.FuncgraphExitFtraceEvent)
}
FuncgraphExitFtraceEvent::FuncgraphExitFtraceEvent(const FuncgraphExitFtraceEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(), _impl_(from._impl_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.FuncgraphExitFtraceEvent)
}

inline void FuncgraphExitFtraceEvent::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.calltime_) { ::uint64_t{0u} }

    , decltype(_impl_.func_) { ::uint64_t{0u} }

    , decltype(_impl_.overrun_) { ::uint64_t{0u} }

    , decltype(_impl_.rettime_) { ::uint64_t{0u} }

    , decltype(_impl_.depth_) { 0 }

  };
}

FuncgraphExitFtraceEvent::~FuncgraphExitFtraceEvent() {
  // @@protoc_insertion_point(destructor:perfetto.protos.FuncgraphExitFtraceEvent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void FuncgraphExitFtraceEvent::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
}

void FuncgraphExitFtraceEvent::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void FuncgraphExitFtraceEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.FuncgraphExitFtraceEvent)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    ::memset(&_impl_.calltime_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.depth_) -
        reinterpret_cast<char*>(&_impl_.calltime_)) + sizeof(_impl_.depth_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* FuncgraphExitFtraceEvent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint64 calltime = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _Internal::set_has_calltime(&has_bits);
          _impl_.calltime_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional int32 depth = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 16)) {
          _Internal::set_has_depth(&has_bits);
          _impl_.depth_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional uint64 func = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 24)) {
          _Internal::set_has_func(&has_bits);
          _impl_.func_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional uint64 overrun = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 32)) {
          _Internal::set_has_overrun(&has_bits);
          _impl_.overrun_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional uint64 rettime = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 40)) {
          _Internal::set_has_rettime(&has_bits);
          _impl_.rettime_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::uint8_t* FuncgraphExitFtraceEvent::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.FuncgraphExitFtraceEvent)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional uint64 calltime = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        1, this->_internal_calltime(), target);
  }

  // optional int32 depth = 2;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(
        2, this->_internal_depth(), target);
  }

  // optional uint64 func = 3;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        3, this->_internal_func(), target);
  }

  // optional uint64 overrun = 4;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        4, this->_internal_overrun(), target);
  }

  // optional uint64 rettime = 5;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        5, this->_internal_rettime(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.FuncgraphExitFtraceEvent)
  return target;
}

::size_t FuncgraphExitFtraceEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.FuncgraphExitFtraceEvent)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional uint64 calltime = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_calltime());
    }

    // optional uint64 func = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_func());
    }

    // optional uint64 overrun = 4;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_overrun());
    }

    // optional uint64 rettime = 5;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_rettime());
    }

    // optional int32 depth = 2;
    if (cached_has_bits & 0x00000010u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
          this->_internal_depth());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData FuncgraphExitFtraceEvent::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    FuncgraphExitFtraceEvent::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*FuncgraphExitFtraceEvent::GetClassData() const { return &_class_data_; }


void FuncgraphExitFtraceEvent::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<FuncgraphExitFtraceEvent*>(&to_msg);
  auto& from = static_cast<const FuncgraphExitFtraceEvent&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.FuncgraphExitFtraceEvent)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.calltime_ = from._impl_.calltime_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.func_ = from._impl_.func_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.overrun_ = from._impl_.overrun_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.rettime_ = from._impl_.rettime_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.depth_ = from._impl_.depth_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void FuncgraphExitFtraceEvent::CopyFrom(const FuncgraphExitFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.FuncgraphExitFtraceEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FuncgraphExitFtraceEvent::IsInitialized() const {
  return true;
}

void FuncgraphExitFtraceEvent::InternalSwap(FuncgraphExitFtraceEvent* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(FuncgraphExitFtraceEvent, _impl_.depth_)
      + sizeof(FuncgraphExitFtraceEvent::_impl_.depth_)
      - PROTOBUF_FIELD_OFFSET(FuncgraphExitFtraceEvent, _impl_.calltime_)>(
          reinterpret_cast<char*>(&_impl_.calltime_),
          reinterpret_cast<char*>(&other->_impl_.calltime_));
}

::PROTOBUF_NAMESPACE_ID::Metadata FuncgraphExitFtraceEvent::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2fftrace_2fftrace_2eproto[2]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::PrintFtraceEvent*
Arena::CreateMaybeMessage< ::perfetto::protos::PrintFtraceEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::PrintFtraceEvent >(arena);
}
template<> PROTOBUF_NOINLINE ::perfetto::protos::FuncgraphEntryFtraceEvent*
Arena::CreateMaybeMessage< ::perfetto::protos::FuncgraphEntryFtraceEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::FuncgraphEntryFtraceEvent >(arena);
}
template<> PROTOBUF_NOINLINE ::perfetto::protos::FuncgraphExitFtraceEvent*
Arena::CreateMaybeMessage< ::perfetto::protos::FuncgraphExitFtraceEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::FuncgraphExitFtraceEvent >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"