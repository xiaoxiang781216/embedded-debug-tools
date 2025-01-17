// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/track_event/process_descriptor.proto

#include "protos/perfetto/trace/track_event/process_descriptor.pb.h"

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
PROTOBUF_CONSTEXPR ProcessDescriptor::ProcessDescriptor(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.cmdline_)*/{}
  , /*decltype(_impl_.process_labels_)*/{}
  , /*decltype(_impl_.process_name_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.pid_)*/ 0

  , /*decltype(_impl_.legacy_sort_index_)*/ 0

  , /*decltype(_impl_.chrome_process_type_)*/ 0

  , /*decltype(_impl_.process_priority_)*/ 0

  , /*decltype(_impl_.start_timestamp_ns_)*/ ::int64_t{0}
} {}
struct ProcessDescriptorDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ProcessDescriptorDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ProcessDescriptorDefaultTypeInternal() {}
  union {
    ProcessDescriptor _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ProcessDescriptorDefaultTypeInternal _ProcessDescriptor_default_instance_;
}  // namespace protos
}  // namespace perfetto
static ::_pb::Metadata file_level_metadata_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto[1];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto[1];
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto = nullptr;
const ::uint32_t TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ProcessDescriptor, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ProcessDescriptor, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ProcessDescriptor, _impl_.pid_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ProcessDescriptor, _impl_.cmdline_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ProcessDescriptor, _impl_.process_name_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ProcessDescriptor, _impl_.process_priority_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ProcessDescriptor, _impl_.start_timestamp_ns_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ProcessDescriptor, _impl_.chrome_process_type_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ProcessDescriptor, _impl_.legacy_sort_index_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ProcessDescriptor, _impl_.process_labels_),
    1,
    ~0u,
    0,
    4,
    5,
    3,
    2,
    ~0u,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 16, -1, sizeof(::perfetto::protos::ProcessDescriptor)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::perfetto::protos::_ProcessDescriptor_default_instance_._instance,
};
const char descriptor_table_protodef_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n:protos/perfetto/trace/track_event/proc"
    "ess_descriptor.proto\022\017perfetto.protos\"\347\003"
    "\n\021ProcessDescriptor\022\013\n\003pid\030\001 \001(\005\022\017\n\007cmdl"
    "ine\030\002 \003(\t\022\024\n\014process_name\030\006 \001(\t\022\030\n\020proce"
    "ss_priority\030\005 \001(\005\022\032\n\022start_timestamp_ns\030"
    "\007 \001(\003\022Q\n\023chrome_process_type\030\004 \001(\01624.per"
    "fetto.protos.ProcessDescriptor.ChromePro"
    "cessType\022\031\n\021legacy_sort_index\030\003 \001(\005\022\026\n\016p"
    "rocess_labels\030\010 \003(\t\"\341\001\n\021ChromeProcessTyp"
    "e\022\027\n\023PROCESS_UNSPECIFIED\020\000\022\023\n\017PROCESS_BR"
    "OWSER\020\001\022\024\n\020PROCESS_RENDERER\020\002\022\023\n\017PROCESS"
    "_UTILITY\020\003\022\022\n\016PROCESS_ZYGOTE\020\004\022\032\n\026PROCES"
    "S_SANDBOX_HELPER\020\005\022\017\n\013PROCESS_GPU\020\006\022\030\n\024P"
    "ROCESS_PPAPI_PLUGIN\020\007\022\030\n\024PROCESS_PPAPI_B"
    "ROKER\020\010"
};
static ::absl::once_flag descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto = {
    false,
    false,
    567,
    descriptor_table_protodef_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto,
    "protos/perfetto/trace/track_event/process_descriptor.proto",
    &descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto::offsets,
    file_level_metadata_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto,
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto,
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto_getter() {
  return &descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto(&descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto);
namespace perfetto {
namespace protos {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ProcessDescriptor_ChromeProcessType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto);
  return file_level_enum_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto[0];
}
bool ProcessDescriptor_ChromeProcessType_IsValid(int value) {
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
      return true;
    default:
      return false;
  }
}
#if (__cplusplus < 201703) && \
  (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

constexpr ProcessDescriptor_ChromeProcessType ProcessDescriptor::PROCESS_UNSPECIFIED;
constexpr ProcessDescriptor_ChromeProcessType ProcessDescriptor::PROCESS_BROWSER;
constexpr ProcessDescriptor_ChromeProcessType ProcessDescriptor::PROCESS_RENDERER;
constexpr ProcessDescriptor_ChromeProcessType ProcessDescriptor::PROCESS_UTILITY;
constexpr ProcessDescriptor_ChromeProcessType ProcessDescriptor::PROCESS_ZYGOTE;
constexpr ProcessDescriptor_ChromeProcessType ProcessDescriptor::PROCESS_SANDBOX_HELPER;
constexpr ProcessDescriptor_ChromeProcessType ProcessDescriptor::PROCESS_GPU;
constexpr ProcessDescriptor_ChromeProcessType ProcessDescriptor::PROCESS_PPAPI_PLUGIN;
constexpr ProcessDescriptor_ChromeProcessType ProcessDescriptor::PROCESS_PPAPI_BROKER;
constexpr ProcessDescriptor_ChromeProcessType ProcessDescriptor::ChromeProcessType_MIN;
constexpr ProcessDescriptor_ChromeProcessType ProcessDescriptor::ChromeProcessType_MAX;
constexpr int ProcessDescriptor::ChromeProcessType_ARRAYSIZE;

#endif  // (__cplusplus < 201703) &&
        // (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
// ===================================================================

class ProcessDescriptor::_Internal {
 public:
  using HasBits = decltype(std::declval<ProcessDescriptor>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(ProcessDescriptor, _impl_._has_bits_);
  static void set_has_pid(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_process_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_process_priority(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_start_timestamp_ns(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_chrome_process_type(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_legacy_sort_index(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

ProcessDescriptor::ProcessDescriptor(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.ProcessDescriptor)
}
ProcessDescriptor::ProcessDescriptor(const ProcessDescriptor& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ProcessDescriptor* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.cmdline_){from._impl_.cmdline_}
    , decltype(_impl_.process_labels_){from._impl_.process_labels_}
    , decltype(_impl_.process_name_) {}

    , decltype(_impl_.pid_) {}

    , decltype(_impl_.legacy_sort_index_) {}

    , decltype(_impl_.chrome_process_type_) {}

    , decltype(_impl_.process_priority_) {}

    , decltype(_impl_.start_timestamp_ns_) {}
  };

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.process_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.process_name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.process_name_.Set(from._internal_process_name(), _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.pid_, &from._impl_.pid_,
    static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.start_timestamp_ns_) -
    reinterpret_cast<char*>(&_impl_.pid_)) + sizeof(_impl_.start_timestamp_ns_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.ProcessDescriptor)
}

inline void ProcessDescriptor::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.cmdline_){arena}
    , decltype(_impl_.process_labels_){arena}
    , decltype(_impl_.process_name_) {}

    , decltype(_impl_.pid_) { 0 }

    , decltype(_impl_.legacy_sort_index_) { 0 }

    , decltype(_impl_.chrome_process_type_) { 0 }

    , decltype(_impl_.process_priority_) { 0 }

    , decltype(_impl_.start_timestamp_ns_) { ::int64_t{0} }

  };
  _impl_.process_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.process_name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

ProcessDescriptor::~ProcessDescriptor() {
  // @@protoc_insertion_point(destructor:perfetto.protos.ProcessDescriptor)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ProcessDescriptor::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _internal_mutable_cmdline()->~RepeatedPtrField();
  _internal_mutable_process_labels()->~RepeatedPtrField();
  _impl_.process_name_.Destroy();
}

void ProcessDescriptor::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ProcessDescriptor::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.ProcessDescriptor)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_mutable_cmdline()->Clear();
  _internal_mutable_process_labels()->Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.process_name_.ClearNonDefaultToEmpty();
  }
  if (cached_has_bits & 0x0000003eu) {
    ::memset(&_impl_.pid_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.start_timestamp_ns_) -
        reinterpret_cast<char*>(&_impl_.pid_)) + sizeof(_impl_.start_timestamp_ns_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ProcessDescriptor::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int32 pid = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _Internal::set_has_pid(&has_bits);
          _impl_.pid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // repeated string cmdline = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_cmdline();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            #ifndef NDEBUG
            ::_pbi::VerifyUTF8(str, "perfetto.protos.ProcessDescriptor.cmdline");
            #endif  // !NDEBUG
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else {
          goto handle_unusual;
        }
        continue;
      // optional int32 legacy_sort_index = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 24)) {
          _Internal::set_has_legacy_sort_index(&has_bits);
          _impl_.legacy_sort_index_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional .perfetto.protos.ProcessDescriptor.ChromeProcessType chrome_process_type = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 32)) {
          ::int32_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::perfetto::protos::ProcessDescriptor_ChromeProcessType_IsValid(static_cast<int>(val)))) {
            _internal_set_chrome_process_type(static_cast<::perfetto::protos::ProcessDescriptor_ChromeProcessType>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(4, val, mutable_unknown_fields());
          }
        } else {
          goto handle_unusual;
        }
        continue;
      // optional int32 process_priority = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 40)) {
          _Internal::set_has_process_priority(&has_bits);
          _impl_.process_priority_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional string process_name = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 50)) {
          auto str = _internal_mutable_process_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "perfetto.protos.ProcessDescriptor.process_name");
          #endif  // !NDEBUG
        } else {
          goto handle_unusual;
        }
        continue;
      // optional int64 start_timestamp_ns = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 56)) {
          _Internal::set_has_start_timestamp_ns(&has_bits);
          _impl_.start_timestamp_ns_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // repeated string process_labels = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 66)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_process_labels();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            #ifndef NDEBUG
            ::_pbi::VerifyUTF8(str, "perfetto.protos.ProcessDescriptor.process_labels");
            #endif  // !NDEBUG
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<66>(ptr));
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

::uint8_t* ProcessDescriptor::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.ProcessDescriptor)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional int32 pid = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(
        1, this->_internal_pid(), target);
  }

  // repeated string cmdline = 2;
  for (int i = 0, n = this->_internal_cmdline_size(); i < n; ++i) {
    const auto& s = this->_internal_cmdline(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(s.data(), static_cast<int>(s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
                                "perfetto.protos.ProcessDescriptor.cmdline");
    target = stream->WriteString(2, s, target);
  }

  // optional int32 legacy_sort_index = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(
        3, this->_internal_legacy_sort_index(), target);
  }

  // optional .perfetto.protos.ProcessDescriptor.ChromeProcessType chrome_process_type = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        4, this->_internal_chrome_process_type(), target);
  }

  // optional int32 process_priority = 5;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(
        5, this->_internal_process_priority(), target);
  }

  // optional string process_name = 6;
  if (cached_has_bits & 0x00000001u) {
    const std::string& _s = this->_internal_process_name();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(_s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
                                "perfetto.protos.ProcessDescriptor.process_name");
    target = stream->WriteStringMaybeAliased(6, _s, target);
  }

  // optional int64 start_timestamp_ns = 7;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(
        7, this->_internal_start_timestamp_ns(), target);
  }

  // repeated string process_labels = 8;
  for (int i = 0, n = this->_internal_process_labels_size(); i < n; ++i) {
    const auto& s = this->_internal_process_labels(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(s.data(), static_cast<int>(s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
                                "perfetto.protos.ProcessDescriptor.process_labels");
    target = stream->WriteString(8, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.ProcessDescriptor)
  return target;
}

::size_t ProcessDescriptor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.ProcessDescriptor)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string cmdline = 2;
  total_size += 1 * ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_internal_cmdline().size());
  for (int i = 0, n = _internal_cmdline().size(); i < n; ++i) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        _internal_cmdline().Get(i));
  }

  // repeated string process_labels = 8;
  total_size += 1 * ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_internal_process_labels().size());
  for (int i = 0, n = _internal_process_labels().size(); i < n; ++i) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        _internal_process_labels().Get(i));
  }

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    // optional string process_name = 6;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                      this->_internal_process_name());
    }

    // optional int32 pid = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
          this->_internal_pid());
    }

    // optional int32 legacy_sort_index = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
          this->_internal_legacy_sort_index());
    }

    // optional .perfetto.protos.ProcessDescriptor.ChromeProcessType chrome_process_type = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
                    ::_pbi::WireFormatLite::EnumSize(this->_internal_chrome_process_type());
    }

    // optional int32 process_priority = 5;
    if (cached_has_bits & 0x00000010u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
          this->_internal_process_priority());
    }

    // optional int64 start_timestamp_ns = 7;
    if (cached_has_bits & 0x00000020u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
          this->_internal_start_timestamp_ns());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ProcessDescriptor::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ProcessDescriptor::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ProcessDescriptor::GetClassData() const { return &_class_data_; }


void ProcessDescriptor::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ProcessDescriptor*>(&to_msg);
  auto& from = static_cast<const ProcessDescriptor&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.ProcessDescriptor)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_cmdline()->MergeFrom(from._internal_cmdline());
  _this->_internal_mutable_process_labels()->MergeFrom(from._internal_process_labels());
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_process_name(from._internal_process_name());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.pid_ = from._impl_.pid_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.legacy_sort_index_ = from._impl_.legacy_sort_index_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.chrome_process_type_ = from._impl_.chrome_process_type_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.process_priority_ = from._impl_.process_priority_;
    }
    if (cached_has_bits & 0x00000020u) {
      _this->_impl_.start_timestamp_ns_ = from._impl_.start_timestamp_ns_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ProcessDescriptor::CopyFrom(const ProcessDescriptor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.ProcessDescriptor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProcessDescriptor::IsInitialized() const {
  return true;
}

void ProcessDescriptor::InternalSwap(ProcessDescriptor* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _internal_mutable_cmdline()->InternalSwap(
      other->_internal_mutable_cmdline());
  _internal_mutable_process_labels()->InternalSwap(
      other->_internal_mutable_process_labels());
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.process_name_, lhs_arena,
                                       &other->_impl_.process_name_, rhs_arena);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ProcessDescriptor, _impl_.start_timestamp_ns_)
      + sizeof(ProcessDescriptor::_impl_.start_timestamp_ns_)
      - PROTOBUF_FIELD_OFFSET(ProcessDescriptor, _impl_.pid_)>(
          reinterpret_cast<char*>(&_impl_.pid_),
          reinterpret_cast<char*>(&other->_impl_.pid_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ProcessDescriptor::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::ProcessDescriptor*
Arena::CreateMaybeMessage< ::perfetto::protos::ProcessDescriptor >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::ProcessDescriptor >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
