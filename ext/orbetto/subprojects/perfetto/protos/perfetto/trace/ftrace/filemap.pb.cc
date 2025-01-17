// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/filemap.proto

#include "protos/perfetto/trace/ftrace/filemap.pb.h"

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
PROTOBUF_CONSTEXPR MmFilemapAddToPageCacheFtraceEvent::MmFilemapAddToPageCacheFtraceEvent(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.pfn_)*/ ::uint64_t{0u}

  , /*decltype(_impl_.i_ino_)*/ ::uint64_t{0u}

  , /*decltype(_impl_.index_)*/ ::uint64_t{0u}

  , /*decltype(_impl_.s_dev_)*/ ::uint64_t{0u}

  , /*decltype(_impl_.page_)*/ ::uint64_t{0u}
} {}
struct MmFilemapAddToPageCacheFtraceEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MmFilemapAddToPageCacheFtraceEventDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~MmFilemapAddToPageCacheFtraceEventDefaultTypeInternal() {}
  union {
    MmFilemapAddToPageCacheFtraceEvent _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MmFilemapAddToPageCacheFtraceEventDefaultTypeInternal _MmFilemapAddToPageCacheFtraceEvent_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR MmFilemapDeleteFromPageCacheFtraceEvent::MmFilemapDeleteFromPageCacheFtraceEvent(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.pfn_)*/ ::uint64_t{0u}

  , /*decltype(_impl_.i_ino_)*/ ::uint64_t{0u}

  , /*decltype(_impl_.index_)*/ ::uint64_t{0u}

  , /*decltype(_impl_.s_dev_)*/ ::uint64_t{0u}

  , /*decltype(_impl_.page_)*/ ::uint64_t{0u}
} {}
struct MmFilemapDeleteFromPageCacheFtraceEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MmFilemapDeleteFromPageCacheFtraceEventDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~MmFilemapDeleteFromPageCacheFtraceEventDefaultTypeInternal() {}
  union {
    MmFilemapDeleteFromPageCacheFtraceEvent _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MmFilemapDeleteFromPageCacheFtraceEventDefaultTypeInternal _MmFilemapDeleteFromPageCacheFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
static ::_pb::Metadata file_level_metadata_protos_2fperfetto_2ftrace_2fftrace_2ffilemap_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2fftrace_2ffilemap_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2fftrace_2ffilemap_2eproto = nullptr;
const ::uint32_t TableStruct_protos_2fperfetto_2ftrace_2fftrace_2ffilemap_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::MmFilemapAddToPageCacheFtraceEvent, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::MmFilemapAddToPageCacheFtraceEvent, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::MmFilemapAddToPageCacheFtraceEvent, _impl_.pfn_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::MmFilemapAddToPageCacheFtraceEvent, _impl_.i_ino_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::MmFilemapAddToPageCacheFtraceEvent, _impl_.index_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::MmFilemapAddToPageCacheFtraceEvent, _impl_.s_dev_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::MmFilemapAddToPageCacheFtraceEvent, _impl_.page_),
    0,
    1,
    2,
    3,
    4,
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::MmFilemapDeleteFromPageCacheFtraceEvent, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::MmFilemapDeleteFromPageCacheFtraceEvent, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::MmFilemapDeleteFromPageCacheFtraceEvent, _impl_.pfn_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::MmFilemapDeleteFromPageCacheFtraceEvent, _impl_.i_ino_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::MmFilemapDeleteFromPageCacheFtraceEvent, _impl_.index_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::MmFilemapDeleteFromPageCacheFtraceEvent, _impl_.s_dev_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::MmFilemapDeleteFromPageCacheFtraceEvent, _impl_.page_),
    0,
    1,
    2,
    3,
    4,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 13, -1, sizeof(::perfetto::protos::MmFilemapAddToPageCacheFtraceEvent)},
        { 18, 31, -1, sizeof(::perfetto::protos::MmFilemapDeleteFromPageCacheFtraceEvent)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::perfetto::protos::_MmFilemapAddToPageCacheFtraceEvent_default_instance_._instance,
    &::perfetto::protos::_MmFilemapDeleteFromPageCacheFtraceEvent_default_instance_._instance,
};
const char descriptor_table_protodef_protos_2fperfetto_2ftrace_2fftrace_2ffilemap_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n*protos/perfetto/trace/ftrace/filemap.p"
    "roto\022\017perfetto.protos\"l\n\"MmFilemapAddToP"
    "ageCacheFtraceEvent\022\013\n\003pfn\030\001 \001(\004\022\r\n\005i_in"
    "o\030\002 \001(\004\022\r\n\005index\030\003 \001(\004\022\r\n\005s_dev\030\004 \001(\004\022\014\n"
    "\004page\030\005 \001(\004\"q\n\'MmFilemapDeleteFromPageCa"
    "cheFtraceEvent\022\013\n\003pfn\030\001 \001(\004\022\r\n\005i_ino\030\002 \001"
    "(\004\022\r\n\005index\030\003 \001(\004\022\r\n\005s_dev\030\004 \001(\004\022\014\n\004page"
    "\030\005 \001(\004"
};
static ::absl::once_flag descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2ffilemap_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2ffilemap_2eproto = {
    false,
    false,
    286,
    descriptor_table_protodef_protos_2fperfetto_2ftrace_2fftrace_2ffilemap_2eproto,
    "protos/perfetto/trace/ftrace/filemap.proto",
    &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2ffilemap_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_protos_2fperfetto_2ftrace_2fftrace_2ffilemap_2eproto::offsets,
    file_level_metadata_protos_2fperfetto_2ftrace_2fftrace_2ffilemap_2eproto,
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2fftrace_2ffilemap_2eproto,
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2fftrace_2ffilemap_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2ffilemap_2eproto_getter() {
  return &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2ffilemap_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_protos_2fperfetto_2ftrace_2fftrace_2ffilemap_2eproto(&descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2ffilemap_2eproto);
namespace perfetto {
namespace protos {
// ===================================================================

class MmFilemapAddToPageCacheFtraceEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<MmFilemapAddToPageCacheFtraceEvent>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(MmFilemapAddToPageCacheFtraceEvent, _impl_._has_bits_);
  static void set_has_pfn(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_i_ino(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_index(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_s_dev(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_page(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
};

MmFilemapAddToPageCacheFtraceEvent::MmFilemapAddToPageCacheFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.MmFilemapAddToPageCacheFtraceEvent)
}
MmFilemapAddToPageCacheFtraceEvent::MmFilemapAddToPageCacheFtraceEvent(const MmFilemapAddToPageCacheFtraceEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(), _impl_(from._impl_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.MmFilemapAddToPageCacheFtraceEvent)
}

inline void MmFilemapAddToPageCacheFtraceEvent::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.pfn_) { ::uint64_t{0u} }

    , decltype(_impl_.i_ino_) { ::uint64_t{0u} }

    , decltype(_impl_.index_) { ::uint64_t{0u} }

    , decltype(_impl_.s_dev_) { ::uint64_t{0u} }

    , decltype(_impl_.page_) { ::uint64_t{0u} }

  };
}

MmFilemapAddToPageCacheFtraceEvent::~MmFilemapAddToPageCacheFtraceEvent() {
  // @@protoc_insertion_point(destructor:perfetto.protos.MmFilemapAddToPageCacheFtraceEvent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MmFilemapAddToPageCacheFtraceEvent::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
}

void MmFilemapAddToPageCacheFtraceEvent::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MmFilemapAddToPageCacheFtraceEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.MmFilemapAddToPageCacheFtraceEvent)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    ::memset(&_impl_.pfn_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.page_) -
        reinterpret_cast<char*>(&_impl_.pfn_)) + sizeof(_impl_.page_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MmFilemapAddToPageCacheFtraceEvent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint64 pfn = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _Internal::set_has_pfn(&has_bits);
          _impl_.pfn_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional uint64 i_ino = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 16)) {
          _Internal::set_has_i_ino(&has_bits);
          _impl_.i_ino_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional uint64 index = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 24)) {
          _Internal::set_has_index(&has_bits);
          _impl_.index_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional uint64 s_dev = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 32)) {
          _Internal::set_has_s_dev(&has_bits);
          _impl_.s_dev_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional uint64 page = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 40)) {
          _Internal::set_has_page(&has_bits);
          _impl_.page_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::uint8_t* MmFilemapAddToPageCacheFtraceEvent::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.MmFilemapAddToPageCacheFtraceEvent)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional uint64 pfn = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        1, this->_internal_pfn(), target);
  }

  // optional uint64 i_ino = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        2, this->_internal_i_ino(), target);
  }

  // optional uint64 index = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        3, this->_internal_index(), target);
  }

  // optional uint64 s_dev = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        4, this->_internal_s_dev(), target);
  }

  // optional uint64 page = 5;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        5, this->_internal_page(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.MmFilemapAddToPageCacheFtraceEvent)
  return target;
}

::size_t MmFilemapAddToPageCacheFtraceEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.MmFilemapAddToPageCacheFtraceEvent)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional uint64 pfn = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_pfn());
    }

    // optional uint64 i_ino = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_i_ino());
    }

    // optional uint64 index = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_index());
    }

    // optional uint64 s_dev = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_s_dev());
    }

    // optional uint64 page = 5;
    if (cached_has_bits & 0x00000010u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_page());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MmFilemapAddToPageCacheFtraceEvent::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MmFilemapAddToPageCacheFtraceEvent::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MmFilemapAddToPageCacheFtraceEvent::GetClassData() const { return &_class_data_; }


void MmFilemapAddToPageCacheFtraceEvent::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MmFilemapAddToPageCacheFtraceEvent*>(&to_msg);
  auto& from = static_cast<const MmFilemapAddToPageCacheFtraceEvent&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.MmFilemapAddToPageCacheFtraceEvent)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.pfn_ = from._impl_.pfn_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.i_ino_ = from._impl_.i_ino_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.index_ = from._impl_.index_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.s_dev_ = from._impl_.s_dev_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.page_ = from._impl_.page_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MmFilemapAddToPageCacheFtraceEvent::CopyFrom(const MmFilemapAddToPageCacheFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.MmFilemapAddToPageCacheFtraceEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MmFilemapAddToPageCacheFtraceEvent::IsInitialized() const {
  return true;
}

void MmFilemapAddToPageCacheFtraceEvent::InternalSwap(MmFilemapAddToPageCacheFtraceEvent* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(MmFilemapAddToPageCacheFtraceEvent, _impl_.page_)
      + sizeof(MmFilemapAddToPageCacheFtraceEvent::_impl_.page_)
      - PROTOBUF_FIELD_OFFSET(MmFilemapAddToPageCacheFtraceEvent, _impl_.pfn_)>(
          reinterpret_cast<char*>(&_impl_.pfn_),
          reinterpret_cast<char*>(&other->_impl_.pfn_));
}

::PROTOBUF_NAMESPACE_ID::Metadata MmFilemapAddToPageCacheFtraceEvent::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2ffilemap_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2ffilemap_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2fftrace_2ffilemap_2eproto[0]);
}
// ===================================================================

class MmFilemapDeleteFromPageCacheFtraceEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<MmFilemapDeleteFromPageCacheFtraceEvent>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(MmFilemapDeleteFromPageCacheFtraceEvent, _impl_._has_bits_);
  static void set_has_pfn(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_i_ino(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_index(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_s_dev(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_page(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
};

MmFilemapDeleteFromPageCacheFtraceEvent::MmFilemapDeleteFromPageCacheFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.MmFilemapDeleteFromPageCacheFtraceEvent)
}
MmFilemapDeleteFromPageCacheFtraceEvent::MmFilemapDeleteFromPageCacheFtraceEvent(const MmFilemapDeleteFromPageCacheFtraceEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(), _impl_(from._impl_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.MmFilemapDeleteFromPageCacheFtraceEvent)
}

inline void MmFilemapDeleteFromPageCacheFtraceEvent::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.pfn_) { ::uint64_t{0u} }

    , decltype(_impl_.i_ino_) { ::uint64_t{0u} }

    , decltype(_impl_.index_) { ::uint64_t{0u} }

    , decltype(_impl_.s_dev_) { ::uint64_t{0u} }

    , decltype(_impl_.page_) { ::uint64_t{0u} }

  };
}

MmFilemapDeleteFromPageCacheFtraceEvent::~MmFilemapDeleteFromPageCacheFtraceEvent() {
  // @@protoc_insertion_point(destructor:perfetto.protos.MmFilemapDeleteFromPageCacheFtraceEvent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MmFilemapDeleteFromPageCacheFtraceEvent::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
}

void MmFilemapDeleteFromPageCacheFtraceEvent::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MmFilemapDeleteFromPageCacheFtraceEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.MmFilemapDeleteFromPageCacheFtraceEvent)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    ::memset(&_impl_.pfn_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.page_) -
        reinterpret_cast<char*>(&_impl_.pfn_)) + sizeof(_impl_.page_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MmFilemapDeleteFromPageCacheFtraceEvent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint64 pfn = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _Internal::set_has_pfn(&has_bits);
          _impl_.pfn_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional uint64 i_ino = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 16)) {
          _Internal::set_has_i_ino(&has_bits);
          _impl_.i_ino_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional uint64 index = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 24)) {
          _Internal::set_has_index(&has_bits);
          _impl_.index_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional uint64 s_dev = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 32)) {
          _Internal::set_has_s_dev(&has_bits);
          _impl_.s_dev_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional uint64 page = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 40)) {
          _Internal::set_has_page(&has_bits);
          _impl_.page_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::uint8_t* MmFilemapDeleteFromPageCacheFtraceEvent::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.MmFilemapDeleteFromPageCacheFtraceEvent)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional uint64 pfn = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        1, this->_internal_pfn(), target);
  }

  // optional uint64 i_ino = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        2, this->_internal_i_ino(), target);
  }

  // optional uint64 index = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        3, this->_internal_index(), target);
  }

  // optional uint64 s_dev = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        4, this->_internal_s_dev(), target);
  }

  // optional uint64 page = 5;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        5, this->_internal_page(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.MmFilemapDeleteFromPageCacheFtraceEvent)
  return target;
}

::size_t MmFilemapDeleteFromPageCacheFtraceEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.MmFilemapDeleteFromPageCacheFtraceEvent)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional uint64 pfn = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_pfn());
    }

    // optional uint64 i_ino = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_i_ino());
    }

    // optional uint64 index = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_index());
    }

    // optional uint64 s_dev = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_s_dev());
    }

    // optional uint64 page = 5;
    if (cached_has_bits & 0x00000010u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_page());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MmFilemapDeleteFromPageCacheFtraceEvent::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MmFilemapDeleteFromPageCacheFtraceEvent::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MmFilemapDeleteFromPageCacheFtraceEvent::GetClassData() const { return &_class_data_; }


void MmFilemapDeleteFromPageCacheFtraceEvent::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MmFilemapDeleteFromPageCacheFtraceEvent*>(&to_msg);
  auto& from = static_cast<const MmFilemapDeleteFromPageCacheFtraceEvent&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.MmFilemapDeleteFromPageCacheFtraceEvent)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.pfn_ = from._impl_.pfn_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.i_ino_ = from._impl_.i_ino_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.index_ = from._impl_.index_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.s_dev_ = from._impl_.s_dev_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.page_ = from._impl_.page_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MmFilemapDeleteFromPageCacheFtraceEvent::CopyFrom(const MmFilemapDeleteFromPageCacheFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.MmFilemapDeleteFromPageCacheFtraceEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MmFilemapDeleteFromPageCacheFtraceEvent::IsInitialized() const {
  return true;
}

void MmFilemapDeleteFromPageCacheFtraceEvent::InternalSwap(MmFilemapDeleteFromPageCacheFtraceEvent* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(MmFilemapDeleteFromPageCacheFtraceEvent, _impl_.page_)
      + sizeof(MmFilemapDeleteFromPageCacheFtraceEvent::_impl_.page_)
      - PROTOBUF_FIELD_OFFSET(MmFilemapDeleteFromPageCacheFtraceEvent, _impl_.pfn_)>(
          reinterpret_cast<char*>(&_impl_.pfn_),
          reinterpret_cast<char*>(&other->_impl_.pfn_));
}

::PROTOBUF_NAMESPACE_ID::Metadata MmFilemapDeleteFromPageCacheFtraceEvent::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2ffilemap_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2ffilemap_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2fftrace_2ffilemap_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::MmFilemapAddToPageCacheFtraceEvent*
Arena::CreateMaybeMessage< ::perfetto::protos::MmFilemapAddToPageCacheFtraceEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::MmFilemapAddToPageCacheFtraceEvent >(arena);
}
template<> PROTOBUF_NOINLINE ::perfetto::protos::MmFilemapDeleteFromPageCacheFtraceEvent*
Arena::CreateMaybeMessage< ::perfetto::protos::MmFilemapDeleteFromPageCacheFtraceEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::MmFilemapDeleteFromPageCacheFtraceEvent >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
