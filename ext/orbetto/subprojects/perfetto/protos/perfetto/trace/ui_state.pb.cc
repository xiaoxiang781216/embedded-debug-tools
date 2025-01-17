// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ui_state.proto

#include "protos/perfetto/trace/ui_state.pb.h"

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
PROTOBUF_CONSTEXPR UiState_HighlightProcess::UiState_HighlightProcess(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.selector_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_._oneof_case_)*/{}} {}
struct UiState_HighlightProcessDefaultTypeInternal {
  PROTOBUF_CONSTEXPR UiState_HighlightProcessDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~UiState_HighlightProcessDefaultTypeInternal() {}
  union {
    UiState_HighlightProcess _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 UiState_HighlightProcessDefaultTypeInternal _UiState_HighlightProcess_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR UiState::UiState(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.highlight_process_)*/nullptr
  , /*decltype(_impl_.timeline_start_ts_)*/ ::int64_t{0}

  , /*decltype(_impl_.timeline_end_ts_)*/ ::int64_t{0}
} {}
struct UiStateDefaultTypeInternal {
  PROTOBUF_CONSTEXPR UiStateDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~UiStateDefaultTypeInternal() {}
  union {
    UiState _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 UiStateDefaultTypeInternal _UiState_default_instance_;
}  // namespace protos
}  // namespace perfetto
static ::_pb::Metadata file_level_metadata_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto = nullptr;
const ::uint32_t TableStruct_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::UiState_HighlightProcess, _internal_metadata_),
    ~0u,  // no _extensions_
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::UiState_HighlightProcess, _impl_._oneof_case_[0]),
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    ::_pbi::kInvalidFieldOffsetTag,
    ::_pbi::kInvalidFieldOffsetTag,
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::UiState_HighlightProcess, _impl_.selector_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::UiState, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::UiState, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::UiState, _impl_.timeline_start_ts_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::UiState, _impl_.timeline_end_ts_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::UiState, _impl_.highlight_process_),
    1,
    2,
    0,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, -1, -1, sizeof(::perfetto::protos::UiState_HighlightProcess)},
        { 11, 22, -1, sizeof(::perfetto::protos::UiState)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::perfetto::protos::_UiState_HighlightProcess_default_instance_._instance,
    &::perfetto::protos::_UiState_default_instance_._instance,
};
const char descriptor_table_protodef_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n$protos/perfetto/trace/ui_state.proto\022\017"
    "perfetto.protos\"\305\001\n\007UiState\022\031\n\021timeline_"
    "start_ts\030\001 \001(\003\022\027\n\017timeline_end_ts\030\002 \001(\003\022"
    "D\n\021highlight_process\030\003 \001(\0132).perfetto.pr"
    "otos.UiState.HighlightProcess\032@\n\020Highlig"
    "htProcess\022\r\n\003pid\030\001 \001(\rH\000\022\021\n\007cmdline\030\002 \001("
    "\tH\000B\n\n\010selector"
};
static ::absl::once_flag descriptor_table_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto = {
    false,
    false,
    255,
    descriptor_table_protodef_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto,
    "protos/perfetto/trace/ui_state.proto",
    &descriptor_table_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto::offsets,
    file_level_metadata_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto,
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto,
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto_getter() {
  return &descriptor_table_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto(&descriptor_table_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto);
namespace perfetto {
namespace protos {
// ===================================================================

class UiState_HighlightProcess::_Internal {
 public:
  static constexpr ::int32_t kOneofCaseOffset =
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::UiState_HighlightProcess, _impl_._oneof_case_);
};

UiState_HighlightProcess::UiState_HighlightProcess(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.UiState.HighlightProcess)
}
UiState_HighlightProcess::UiState_HighlightProcess(const UiState_HighlightProcess& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  UiState_HighlightProcess* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.selector_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , /*decltype(_impl_._oneof_case_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  clear_has_selector();
  switch (from.selector_case()) {
    case kPid: {
      _this->_internal_set_pid(from._internal_pid());
      break;
    }
    case kCmdline: {
      _this->_internal_set_cmdline(from._internal_cmdline());
      break;
    }
    case SELECTOR_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.UiState.HighlightProcess)
}

inline void UiState_HighlightProcess::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.selector_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , /*decltype(_impl_._oneof_case_)*/{}
  };
  clear_has_selector();
}

UiState_HighlightProcess::~UiState_HighlightProcess() {
  // @@protoc_insertion_point(destructor:perfetto.protos.UiState.HighlightProcess)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void UiState_HighlightProcess::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  if (has_selector()) {
    clear_selector();
  }
}

void UiState_HighlightProcess::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void UiState_HighlightProcess::clear_selector() {
// @@protoc_insertion_point(one_of_clear_start:perfetto.protos.UiState.HighlightProcess)
  switch (selector_case()) {
    case kPid: {
      // No need to clear
      break;
    }
    case kCmdline: {
      _impl_.selector_.cmdline_.Destroy();
      break;
    }
    case SELECTOR_NOT_SET: {
      break;
    }
  }
  _impl_._oneof_case_[0] = SELECTOR_NOT_SET;
}


void UiState_HighlightProcess::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.UiState.HighlightProcess)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  clear_selector();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* UiState_HighlightProcess::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint32 pid = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _internal_set_pid(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // string cmdline = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_cmdline();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "perfetto.protos.UiState.HighlightProcess.cmdline");
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
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* UiState_HighlightProcess::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.UiState.HighlightProcess)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  switch (selector_case()) {
    case kPid: {
      target = stream->EnsureSpace(target);
      target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
          1, this->_internal_pid(), target);
      break;
    }
    case kCmdline: {
      const std::string& _s = this->_internal_cmdline();
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(_s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
                                  "perfetto.protos.UiState.HighlightProcess.cmdline");
      target = stream->WriteStringMaybeAliased(2, _s, target);
      break;
    }
    default: ;
  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.UiState.HighlightProcess)
  return target;
}

::size_t UiState_HighlightProcess::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.UiState.HighlightProcess)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  switch (selector_case()) {
    // uint32 pid = 1;
    case kPid: {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
          this->_internal_pid());
      break;
    }
    // string cmdline = 2;
    case kCmdline: {
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                      this->_internal_cmdline());
      break;
    }
    case SELECTOR_NOT_SET: {
      break;
    }
  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData UiState_HighlightProcess::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    UiState_HighlightProcess::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*UiState_HighlightProcess::GetClassData() const { return &_class_data_; }


void UiState_HighlightProcess::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<UiState_HighlightProcess*>(&to_msg);
  auto& from = static_cast<const UiState_HighlightProcess&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.UiState.HighlightProcess)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  switch (from.selector_case()) {
    case kPid: {
      _this->_internal_set_pid(from._internal_pid());
      break;
    }
    case kCmdline: {
      _this->_internal_set_cmdline(from._internal_cmdline());
      break;
    }
    case SELECTOR_NOT_SET: {
      break;
    }
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void UiState_HighlightProcess::CopyFrom(const UiState_HighlightProcess& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.UiState.HighlightProcess)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UiState_HighlightProcess::IsInitialized() const {
  return true;
}

void UiState_HighlightProcess::InternalSwap(UiState_HighlightProcess* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.selector_, other->_impl_.selector_);
  swap(_impl_._oneof_case_[0], other->_impl_._oneof_case_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata UiState_HighlightProcess::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto[0]);
}
// ===================================================================

class UiState::_Internal {
 public:
  using HasBits = decltype(std::declval<UiState>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(UiState, _impl_._has_bits_);
  static void set_has_timeline_start_ts(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_timeline_end_ts(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::perfetto::protos::UiState_HighlightProcess& highlight_process(const UiState* msg);
  static void set_has_highlight_process(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::perfetto::protos::UiState_HighlightProcess&
UiState::_Internal::highlight_process(const UiState* msg) {
  return *msg->_impl_.highlight_process_;
}
UiState::UiState(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.UiState)
}
UiState::UiState(const UiState& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  UiState* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.highlight_process_){nullptr}
    , decltype(_impl_.timeline_start_ts_) {}

    , decltype(_impl_.timeline_end_ts_) {}
  };

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.highlight_process_ = new ::perfetto::protos::UiState_HighlightProcess(*from._impl_.highlight_process_);
  }
  ::memcpy(&_impl_.timeline_start_ts_, &from._impl_.timeline_start_ts_,
    static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.timeline_end_ts_) -
    reinterpret_cast<char*>(&_impl_.timeline_start_ts_)) + sizeof(_impl_.timeline_end_ts_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.UiState)
}

inline void UiState::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.highlight_process_){nullptr}
    , decltype(_impl_.timeline_start_ts_) { ::int64_t{0} }

    , decltype(_impl_.timeline_end_ts_) { ::int64_t{0} }

  };
}

UiState::~UiState() {
  // @@protoc_insertion_point(destructor:perfetto.protos.UiState)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void UiState::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.highlight_process_;
}

void UiState::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void UiState::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.UiState)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(_impl_.highlight_process_ != nullptr);
    _impl_.highlight_process_->Clear();
  }
  if (cached_has_bits & 0x00000006u) {
    ::memset(&_impl_.timeline_start_ts_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.timeline_end_ts_) -
        reinterpret_cast<char*>(&_impl_.timeline_start_ts_)) + sizeof(_impl_.timeline_end_ts_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* UiState::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int64 timeline_start_ts = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _Internal::set_has_timeline_start_ts(&has_bits);
          _impl_.timeline_start_ts_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional int64 timeline_end_ts = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 16)) {
          _Internal::set_has_timeline_end_ts(&has_bits);
          _impl_.timeline_end_ts_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional .perfetto.protos.UiState.HighlightProcess highlight_process = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_highlight_process(), ptr);
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

::uint8_t* UiState::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.UiState)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional int64 timeline_start_ts = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(
        1, this->_internal_timeline_start_ts(), target);
  }

  // optional int64 timeline_end_ts = 2;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(
        2, this->_internal_timeline_end_ts(), target);
  }

  // optional .perfetto.protos.UiState.HighlightProcess highlight_process = 3;
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, _Internal::highlight_process(this),
        _Internal::highlight_process(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.UiState)
  return target;
}

::size_t UiState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.UiState)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional .perfetto.protos.UiState.HighlightProcess highlight_process = 3;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.highlight_process_);
    }

    // optional int64 timeline_start_ts = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
          this->_internal_timeline_start_ts());
    }

    // optional int64 timeline_end_ts = 2;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
          this->_internal_timeline_end_ts());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData UiState::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    UiState::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*UiState::GetClassData() const { return &_class_data_; }


void UiState::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<UiState*>(&to_msg);
  auto& from = static_cast<const UiState&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.UiState)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_mutable_highlight_process()->::perfetto::protos::UiState_HighlightProcess::MergeFrom(
          from._internal_highlight_process());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.timeline_start_ts_ = from._impl_.timeline_start_ts_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.timeline_end_ts_ = from._impl_.timeline_end_ts_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void UiState::CopyFrom(const UiState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.UiState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UiState::IsInitialized() const {
  return true;
}

void UiState::InternalSwap(UiState* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(UiState, _impl_.timeline_end_ts_)
      + sizeof(UiState::_impl_.timeline_end_ts_)
      - PROTOBUF_FIELD_OFFSET(UiState, _impl_.highlight_process_)>(
          reinterpret_cast<char*>(&_impl_.highlight_process_),
          reinterpret_cast<char*>(&other->_impl_.highlight_process_));
}

::PROTOBUF_NAMESPACE_ID::Metadata UiState::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::UiState_HighlightProcess*
Arena::CreateMaybeMessage< ::perfetto::protos::UiState_HighlightProcess >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::UiState_HighlightProcess >(arena);
}
template<> PROTOBUF_NOINLINE ::perfetto::protos::UiState*
Arena::CreateMaybeMessage< ::perfetto::protos::UiState >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::UiState >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
