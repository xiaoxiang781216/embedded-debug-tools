// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/track_event/chrome_mojo_event_info.proto

#include "protos/perfetto/trace/track_event/chrome_mojo_event_info.pb.h"

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
PROTOBUF_CONSTEXPR ChromeMojoEventInfo::ChromeMojoEventInfo(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.watcher_notify_interface_tag_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.mojo_interface_tag_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.ipc_hash_)*/ 0u

  , /*decltype(_impl_.is_reply_)*/ false

  , /*decltype(_impl_.mojo_interface_method_iid_)*/ ::uint64_t{0u}

  , /*decltype(_impl_.payload_size_)*/ ::uint64_t{0u}

  , /*decltype(_impl_.data_num_bytes_)*/ ::uint64_t{0u}
} {}
struct ChromeMojoEventInfoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ChromeMojoEventInfoDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ChromeMojoEventInfoDefaultTypeInternal() {}
  union {
    ChromeMojoEventInfo _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ChromeMojoEventInfoDefaultTypeInternal _ChromeMojoEventInfo_default_instance_;
}  // namespace protos
}  // namespace perfetto
static ::_pb::Metadata file_level_metadata_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmojo_5fevent_5finfo_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmojo_5fevent_5finfo_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmojo_5fevent_5finfo_2eproto = nullptr;
const ::uint32_t TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmojo_5fevent_5finfo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeMojoEventInfo, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeMojoEventInfo, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeMojoEventInfo, _impl_.watcher_notify_interface_tag_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeMojoEventInfo, _impl_.ipc_hash_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeMojoEventInfo, _impl_.mojo_interface_tag_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeMojoEventInfo, _impl_.mojo_interface_method_iid_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeMojoEventInfo, _impl_.is_reply_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeMojoEventInfo, _impl_.payload_size_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeMojoEventInfo, _impl_.data_num_bytes_),
    0,
    2,
    1,
    4,
    3,
    5,
    6,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 15, -1, sizeof(::perfetto::protos::ChromeMojoEventInfo)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::perfetto::protos::_ChromeMojoEventInfo_default_instance_._instance,
};
const char descriptor_table_protodef_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmojo_5fevent_5finfo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n>protos/perfetto/trace/track_event/chro"
    "me_mojo_event_info.proto\022\017perfetto.proto"
    "s\"\314\001\n\023ChromeMojoEventInfo\022$\n\034watcher_not"
    "ify_interface_tag\030\001 \001(\t\022\020\n\010ipc_hash\030\002 \001("
    "\r\022\032\n\022mojo_interface_tag\030\003 \001(\t\022!\n\031mojo_in"
    "terface_method_iid\030\004 \001(\004\022\020\n\010is_reply\030\005 \001"
    "(\010\022\024\n\014payload_size\030\006 \001(\004\022\026\n\016data_num_byt"
    "es\030\007 \001(\004"
};
static ::absl::once_flag descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmojo_5fevent_5finfo_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmojo_5fevent_5finfo_2eproto = {
    false,
    false,
    288,
    descriptor_table_protodef_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmojo_5fevent_5finfo_2eproto,
    "protos/perfetto/trace/track_event/chrome_mojo_event_info.proto",
    &descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmojo_5fevent_5finfo_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmojo_5fevent_5finfo_2eproto::offsets,
    file_level_metadata_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmojo_5fevent_5finfo_2eproto,
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmojo_5fevent_5finfo_2eproto,
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmojo_5fevent_5finfo_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmojo_5fevent_5finfo_2eproto_getter() {
  return &descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmojo_5fevent_5finfo_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmojo_5fevent_5finfo_2eproto(&descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmojo_5fevent_5finfo_2eproto);
namespace perfetto {
namespace protos {
// ===================================================================

class ChromeMojoEventInfo::_Internal {
 public:
  using HasBits = decltype(std::declval<ChromeMojoEventInfo>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(ChromeMojoEventInfo, _impl_._has_bits_);
  static void set_has_watcher_notify_interface_tag(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_ipc_hash(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_mojo_interface_tag(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_mojo_interface_method_iid(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_is_reply(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_payload_size(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_data_num_bytes(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
};

ChromeMojoEventInfo::ChromeMojoEventInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.ChromeMojoEventInfo)
}
ChromeMojoEventInfo::ChromeMojoEventInfo(const ChromeMojoEventInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ChromeMojoEventInfo* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.watcher_notify_interface_tag_) {}

    , decltype(_impl_.mojo_interface_tag_) {}

    , decltype(_impl_.ipc_hash_) {}

    , decltype(_impl_.is_reply_) {}

    , decltype(_impl_.mojo_interface_method_iid_) {}

    , decltype(_impl_.payload_size_) {}

    , decltype(_impl_.data_num_bytes_) {}
  };

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.watcher_notify_interface_tag_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.watcher_notify_interface_tag_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.watcher_notify_interface_tag_.Set(from._internal_watcher_notify_interface_tag(), _this->GetArenaForAllocation());
  }
  _impl_.mojo_interface_tag_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.mojo_interface_tag_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000002u) != 0) {
    _this->_impl_.mojo_interface_tag_.Set(from._internal_mojo_interface_tag(), _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.ipc_hash_, &from._impl_.ipc_hash_,
    static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.data_num_bytes_) -
    reinterpret_cast<char*>(&_impl_.ipc_hash_)) + sizeof(_impl_.data_num_bytes_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.ChromeMojoEventInfo)
}

inline void ChromeMojoEventInfo::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.watcher_notify_interface_tag_) {}

    , decltype(_impl_.mojo_interface_tag_) {}

    , decltype(_impl_.ipc_hash_) { 0u }

    , decltype(_impl_.is_reply_) { false }

    , decltype(_impl_.mojo_interface_method_iid_) { ::uint64_t{0u} }

    , decltype(_impl_.payload_size_) { ::uint64_t{0u} }

    , decltype(_impl_.data_num_bytes_) { ::uint64_t{0u} }

  };
  _impl_.watcher_notify_interface_tag_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.watcher_notify_interface_tag_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.mojo_interface_tag_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.mojo_interface_tag_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

ChromeMojoEventInfo::~ChromeMojoEventInfo() {
  // @@protoc_insertion_point(destructor:perfetto.protos.ChromeMojoEventInfo)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ChromeMojoEventInfo::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.watcher_notify_interface_tag_.Destroy();
  _impl_.mojo_interface_tag_.Destroy();
}

void ChromeMojoEventInfo::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ChromeMojoEventInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.ChromeMojoEventInfo)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.watcher_notify_interface_tag_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.mojo_interface_tag_.ClearNonDefaultToEmpty();
    }
  }
  if (cached_has_bits & 0x0000007cu) {
    ::memset(&_impl_.ipc_hash_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.data_num_bytes_) -
        reinterpret_cast<char*>(&_impl_.ipc_hash_)) + sizeof(_impl_.data_num_bytes_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ChromeMojoEventInfo::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string watcher_notify_interface_tag = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_watcher_notify_interface_tag();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "perfetto.protos.ChromeMojoEventInfo.watcher_notify_interface_tag");
          #endif  // !NDEBUG
        } else {
          goto handle_unusual;
        }
        continue;
      // optional uint32 ipc_hash = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 16)) {
          _Internal::set_has_ipc_hash(&has_bits);
          _impl_.ipc_hash_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional string mojo_interface_tag = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_mojo_interface_tag();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "perfetto.protos.ChromeMojoEventInfo.mojo_interface_tag");
          #endif  // !NDEBUG
        } else {
          goto handle_unusual;
        }
        continue;
      // optional uint64 mojo_interface_method_iid = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 32)) {
          _Internal::set_has_mojo_interface_method_iid(&has_bits);
          _impl_.mojo_interface_method_iid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional bool is_reply = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 40)) {
          _Internal::set_has_is_reply(&has_bits);
          _impl_.is_reply_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional uint64 payload_size = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 48)) {
          _Internal::set_has_payload_size(&has_bits);
          _impl_.payload_size_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional uint64 data_num_bytes = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 56)) {
          _Internal::set_has_data_num_bytes(&has_bits);
          _impl_.data_num_bytes_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::uint8_t* ChromeMojoEventInfo::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.ChromeMojoEventInfo)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional string watcher_notify_interface_tag = 1;
  if (cached_has_bits & 0x00000001u) {
    const std::string& _s = this->_internal_watcher_notify_interface_tag();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(_s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
                                "perfetto.protos.ChromeMojoEventInfo.watcher_notify_interface_tag");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // optional uint32 ipc_hash = 2;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        2, this->_internal_ipc_hash(), target);
  }

  // optional string mojo_interface_tag = 3;
  if (cached_has_bits & 0x00000002u) {
    const std::string& _s = this->_internal_mojo_interface_tag();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(_s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
                                "perfetto.protos.ChromeMojoEventInfo.mojo_interface_tag");
    target = stream->WriteStringMaybeAliased(3, _s, target);
  }

  // optional uint64 mojo_interface_method_iid = 4;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        4, this->_internal_mojo_interface_method_iid(), target);
  }

  // optional bool is_reply = 5;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        5, this->_internal_is_reply(), target);
  }

  // optional uint64 payload_size = 6;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        6, this->_internal_payload_size(), target);
  }

  // optional uint64 data_num_bytes = 7;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        7, this->_internal_data_num_bytes(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.ChromeMojoEventInfo)
  return target;
}

::size_t ChromeMojoEventInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.ChromeMojoEventInfo)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    // optional string watcher_notify_interface_tag = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                      this->_internal_watcher_notify_interface_tag());
    }

    // optional string mojo_interface_tag = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                      this->_internal_mojo_interface_tag());
    }

    // optional uint32 ipc_hash = 2;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
          this->_internal_ipc_hash());
    }

    // optional bool is_reply = 5;
    if (cached_has_bits & 0x00000008u) {
      total_size += 2;
    }

    // optional uint64 mojo_interface_method_iid = 4;
    if (cached_has_bits & 0x00000010u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_mojo_interface_method_iid());
    }

    // optional uint64 payload_size = 6;
    if (cached_has_bits & 0x00000020u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_payload_size());
    }

    // optional uint64 data_num_bytes = 7;
    if (cached_has_bits & 0x00000040u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_data_num_bytes());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ChromeMojoEventInfo::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ChromeMojoEventInfo::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ChromeMojoEventInfo::GetClassData() const { return &_class_data_; }


void ChromeMojoEventInfo::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ChromeMojoEventInfo*>(&to_msg);
  auto& from = static_cast<const ChromeMojoEventInfo&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.ChromeMojoEventInfo)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_watcher_notify_interface_tag(from._internal_watcher_notify_interface_tag());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_mojo_interface_tag(from._internal_mojo_interface_tag());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.ipc_hash_ = from._impl_.ipc_hash_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.is_reply_ = from._impl_.is_reply_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.mojo_interface_method_iid_ = from._impl_.mojo_interface_method_iid_;
    }
    if (cached_has_bits & 0x00000020u) {
      _this->_impl_.payload_size_ = from._impl_.payload_size_;
    }
    if (cached_has_bits & 0x00000040u) {
      _this->_impl_.data_num_bytes_ = from._impl_.data_num_bytes_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ChromeMojoEventInfo::CopyFrom(const ChromeMojoEventInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.ChromeMojoEventInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChromeMojoEventInfo::IsInitialized() const {
  return true;
}

void ChromeMojoEventInfo::InternalSwap(ChromeMojoEventInfo* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.watcher_notify_interface_tag_, lhs_arena,
                                       &other->_impl_.watcher_notify_interface_tag_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.mojo_interface_tag_, lhs_arena,
                                       &other->_impl_.mojo_interface_tag_, rhs_arena);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ChromeMojoEventInfo, _impl_.data_num_bytes_)
      + sizeof(ChromeMojoEventInfo::_impl_.data_num_bytes_)
      - PROTOBUF_FIELD_OFFSET(ChromeMojoEventInfo, _impl_.ipc_hash_)>(
          reinterpret_cast<char*>(&_impl_.ipc_hash_),
          reinterpret_cast<char*>(&other->_impl_.ipc_hash_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ChromeMojoEventInfo::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmojo_5fevent_5finfo_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmojo_5fevent_5finfo_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmojo_5fevent_5finfo_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::ChromeMojoEventInfo*
Arena::CreateMaybeMessage< ::perfetto::protos::ChromeMojoEventInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::ChromeMojoEventInfo >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
