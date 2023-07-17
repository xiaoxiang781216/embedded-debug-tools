// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/filesystem/inode_file_map.proto

#include "protos/perfetto/trace/filesystem/inode_file_map.pb.h"

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
PROTOBUF_CONSTEXPR InodeFileMap_Entry::InodeFileMap_Entry(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.paths_)*/{}
  , /*decltype(_impl_.inode_number_)*/ ::uint64_t{0u}

  , /*decltype(_impl_.type_)*/ 0
} {}
struct InodeFileMap_EntryDefaultTypeInternal {
  PROTOBUF_CONSTEXPR InodeFileMap_EntryDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~InodeFileMap_EntryDefaultTypeInternal() {}
  union {
    InodeFileMap_Entry _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 InodeFileMap_EntryDefaultTypeInternal _InodeFileMap_Entry_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR InodeFileMap::InodeFileMap(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.mount_points_)*/{}
  , /*decltype(_impl_.entries_)*/{}
  , /*decltype(_impl_.block_device_id_)*/ ::uint64_t{0u}
} {}
struct InodeFileMapDefaultTypeInternal {
  PROTOBUF_CONSTEXPR InodeFileMapDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~InodeFileMapDefaultTypeInternal() {}
  union {
    InodeFileMap _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 InodeFileMapDefaultTypeInternal _InodeFileMap_default_instance_;
}  // namespace protos
}  // namespace perfetto
static ::_pb::Metadata file_level_metadata_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto[2];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto[1];
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto = nullptr;
const ::uint32_t TableStruct_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::InodeFileMap_Entry, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::InodeFileMap_Entry, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::InodeFileMap_Entry, _impl_.inode_number_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::InodeFileMap_Entry, _impl_.paths_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::InodeFileMap_Entry, _impl_.type_),
    0,
    ~0u,
    1,
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::InodeFileMap, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::InodeFileMap, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::InodeFileMap, _impl_.block_device_id_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::InodeFileMap, _impl_.mount_points_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::InodeFileMap, _impl_.entries_),
    0,
    ~0u,
    ~0u,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 11, -1, sizeof(::perfetto::protos::InodeFileMap_Entry)},
        { 14, 25, -1, sizeof(::perfetto::protos::InodeFileMap)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::perfetto::protos::_InodeFileMap_Entry_default_instance_._instance,
    &::perfetto::protos::_InodeFileMap_default_instance_._instance,
};
const char descriptor_table_protodef_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n5protos/perfetto/trace/filesystem/inode"
    "_file_map.proto\022\017perfetto.protos\"\210\002\n\014Ino"
    "deFileMap\022\027\n\017block_device_id\030\001 \001(\004\022\024\n\014mo"
    "unt_points\030\002 \003(\t\0224\n\007entries\030\003 \003(\0132#.perf"
    "etto.protos.InodeFileMap.Entry\032\222\001\n\005Entry"
    "\022\024\n\014inode_number\030\001 \001(\004\022\r\n\005paths\030\002 \003(\t\0226\n"
    "\004type\030\003 \001(\0162(.perfetto.protos.InodeFileM"
    "ap.Entry.Type\",\n\004Type\022\013\n\007UNKNOWN\020\000\022\010\n\004FI"
    "LE\020\001\022\r\n\tDIRECTORY\020\002"
};
static ::absl::once_flag descriptor_table_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto = {
    false,
    false,
    339,
    descriptor_table_protodef_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto,
    "protos/perfetto/trace/filesystem/inode_file_map.proto",
    &descriptor_table_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto::offsets,
    file_level_metadata_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto,
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto,
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto_getter() {
  return &descriptor_table_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto(&descriptor_table_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto);
namespace perfetto {
namespace protos {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* InodeFileMap_Entry_Type_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto);
  return file_level_enum_descriptors_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto[0];
}
bool InodeFileMap_Entry_Type_IsValid(int value) {
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

constexpr InodeFileMap_Entry_Type InodeFileMap_Entry::UNKNOWN;
constexpr InodeFileMap_Entry_Type InodeFileMap_Entry::FILE;
constexpr InodeFileMap_Entry_Type InodeFileMap_Entry::DIRECTORY;
constexpr InodeFileMap_Entry_Type InodeFileMap_Entry::Type_MIN;
constexpr InodeFileMap_Entry_Type InodeFileMap_Entry::Type_MAX;
constexpr int InodeFileMap_Entry::Type_ARRAYSIZE;

#endif  // (__cplusplus < 201703) &&
        // (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
// ===================================================================

class InodeFileMap_Entry::_Internal {
 public:
  using HasBits = decltype(std::declval<InodeFileMap_Entry>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(InodeFileMap_Entry, _impl_._has_bits_);
  static void set_has_inode_number(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_type(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

InodeFileMap_Entry::InodeFileMap_Entry(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.InodeFileMap.Entry)
}
InodeFileMap_Entry::InodeFileMap_Entry(const InodeFileMap_Entry& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  InodeFileMap_Entry* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.paths_){from._impl_.paths_}
    , decltype(_impl_.inode_number_) {}

    , decltype(_impl_.type_) {}
  };

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.inode_number_, &from._impl_.inode_number_,
    static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.type_) -
    reinterpret_cast<char*>(&_impl_.inode_number_)) + sizeof(_impl_.type_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.InodeFileMap.Entry)
}

inline void InodeFileMap_Entry::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.paths_){arena}
    , decltype(_impl_.inode_number_) { ::uint64_t{0u} }

    , decltype(_impl_.type_) { 0 }

  };
}

InodeFileMap_Entry::~InodeFileMap_Entry() {
  // @@protoc_insertion_point(destructor:perfetto.protos.InodeFileMap.Entry)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void InodeFileMap_Entry::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _internal_mutable_paths()->~RepeatedPtrField();
}

void InodeFileMap_Entry::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void InodeFileMap_Entry::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.InodeFileMap.Entry)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_mutable_paths()->Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&_impl_.inode_number_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.type_) -
        reinterpret_cast<char*>(&_impl_.inode_number_)) + sizeof(_impl_.type_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* InodeFileMap_Entry::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint64 inode_number = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _Internal::set_has_inode_number(&has_bits);
          _impl_.inode_number_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // repeated string paths = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_paths();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            #ifndef NDEBUG
            ::_pbi::VerifyUTF8(str, "perfetto.protos.InodeFileMap.Entry.paths");
            #endif  // !NDEBUG
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else {
          goto handle_unusual;
        }
        continue;
      // optional .perfetto.protos.InodeFileMap.Entry.Type type = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 24)) {
          ::int32_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::perfetto::protos::InodeFileMap_Entry_Type_IsValid(static_cast<int>(val)))) {
            _internal_set_type(static_cast<::perfetto::protos::InodeFileMap_Entry_Type>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(3, val, mutable_unknown_fields());
          }
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

::uint8_t* InodeFileMap_Entry::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.InodeFileMap.Entry)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional uint64 inode_number = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        1, this->_internal_inode_number(), target);
  }

  // repeated string paths = 2;
  for (int i = 0, n = this->_internal_paths_size(); i < n; ++i) {
    const auto& s = this->_internal_paths(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(s.data(), static_cast<int>(s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
                                "perfetto.protos.InodeFileMap.Entry.paths");
    target = stream->WriteString(2, s, target);
  }

  // optional .perfetto.protos.InodeFileMap.Entry.Type type = 3;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        3, this->_internal_type(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.InodeFileMap.Entry)
  return target;
}

::size_t InodeFileMap_Entry::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.InodeFileMap.Entry)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string paths = 2;
  total_size += 1 * ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_internal_paths().size());
  for (int i = 0, n = _internal_paths().size(); i < n; ++i) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        _internal_paths().Get(i));
  }

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional uint64 inode_number = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_inode_number());
    }

    // optional .perfetto.protos.InodeFileMap.Entry.Type type = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
                    ::_pbi::WireFormatLite::EnumSize(this->_internal_type());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData InodeFileMap_Entry::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    InodeFileMap_Entry::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*InodeFileMap_Entry::GetClassData() const { return &_class_data_; }


void InodeFileMap_Entry::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<InodeFileMap_Entry*>(&to_msg);
  auto& from = static_cast<const InodeFileMap_Entry&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.InodeFileMap.Entry)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_paths()->MergeFrom(from._internal_paths());
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.inode_number_ = from._impl_.inode_number_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.type_ = from._impl_.type_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void InodeFileMap_Entry::CopyFrom(const InodeFileMap_Entry& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.InodeFileMap.Entry)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InodeFileMap_Entry::IsInitialized() const {
  return true;
}

void InodeFileMap_Entry::InternalSwap(InodeFileMap_Entry* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _internal_mutable_paths()->InternalSwap(
      other->_internal_mutable_paths());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(InodeFileMap_Entry, _impl_.type_)
      + sizeof(InodeFileMap_Entry::_impl_.type_)
      - PROTOBUF_FIELD_OFFSET(InodeFileMap_Entry, _impl_.inode_number_)>(
          reinterpret_cast<char*>(&_impl_.inode_number_),
          reinterpret_cast<char*>(&other->_impl_.inode_number_));
}

::PROTOBUF_NAMESPACE_ID::Metadata InodeFileMap_Entry::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto[0]);
}
// ===================================================================

class InodeFileMap::_Internal {
 public:
  using HasBits = decltype(std::declval<InodeFileMap>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(InodeFileMap, _impl_._has_bits_);
  static void set_has_block_device_id(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

InodeFileMap::InodeFileMap(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.InodeFileMap)
}
InodeFileMap::InodeFileMap(const InodeFileMap& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  InodeFileMap* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.mount_points_){from._impl_.mount_points_}
    , decltype(_impl_.entries_){from._impl_.entries_}
    , decltype(_impl_.block_device_id_) {}
  };

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.block_device_id_ = from._impl_.block_device_id_;
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.InodeFileMap)
}

inline void InodeFileMap::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.mount_points_){arena}
    , decltype(_impl_.entries_){arena}
    , decltype(_impl_.block_device_id_) { ::uint64_t{0u} }

  };
}

InodeFileMap::~InodeFileMap() {
  // @@protoc_insertion_point(destructor:perfetto.protos.InodeFileMap)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void InodeFileMap::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _internal_mutable_mount_points()->~RepeatedPtrField();
  _internal_mutable_entries()->~RepeatedPtrField();
}

void InodeFileMap::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void InodeFileMap::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.InodeFileMap)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_mutable_mount_points()->Clear();
  _internal_mutable_entries()->Clear();
  _impl_.block_device_id_ = ::uint64_t{0u};
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* InodeFileMap::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint64 block_device_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _Internal::set_has_block_device_id(&has_bits);
          _impl_.block_device_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // repeated string mount_points = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_mount_points();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            #ifndef NDEBUG
            ::_pbi::VerifyUTF8(str, "perfetto.protos.InodeFileMap.mount_points");
            #endif  // !NDEBUG
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else {
          goto handle_unusual;
        }
        continue;
      // repeated .perfetto.protos.InodeFileMap.Entry entries = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_entries(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
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

::uint8_t* InodeFileMap::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.InodeFileMap)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional uint64 block_device_id = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        1, this->_internal_block_device_id(), target);
  }

  // repeated string mount_points = 2;
  for (int i = 0, n = this->_internal_mount_points_size(); i < n; ++i) {
    const auto& s = this->_internal_mount_points(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(s.data(), static_cast<int>(s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
                                "perfetto.protos.InodeFileMap.mount_points");
    target = stream->WriteString(2, s, target);
  }

  // repeated .perfetto.protos.InodeFileMap.Entry entries = 3;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_entries_size()); i < n; i++) {
    const auto& repfield = this->_internal_entries(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(3, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.InodeFileMap)
  return target;
}

::size_t InodeFileMap::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.InodeFileMap)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string mount_points = 2;
  total_size += 1 * ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_internal_mount_points().size());
  for (int i = 0, n = _internal_mount_points().size(); i < n; ++i) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        _internal_mount_points().Get(i));
  }

  // repeated .perfetto.protos.InodeFileMap.Entry entries = 3;
  total_size += 1UL * this->_internal_entries_size();
  for (const auto& msg : this->_internal_entries()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // optional uint64 block_device_id = 1;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
        this->_internal_block_device_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData InodeFileMap::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    InodeFileMap::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*InodeFileMap::GetClassData() const { return &_class_data_; }


void InodeFileMap::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<InodeFileMap*>(&to_msg);
  auto& from = static_cast<const InodeFileMap&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.InodeFileMap)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_mount_points()->MergeFrom(from._internal_mount_points());
  _this->_internal_mutable_entries()->MergeFrom(from._internal_entries());
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_internal_set_block_device_id(from._internal_block_device_id());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void InodeFileMap::CopyFrom(const InodeFileMap& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.InodeFileMap)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InodeFileMap::IsInitialized() const {
  return true;
}

void InodeFileMap::InternalSwap(InodeFileMap* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _internal_mutable_mount_points()->InternalSwap(
      other->_internal_mutable_mount_points());
  _internal_mutable_entries()->InternalSwap(other->_internal_mutable_entries());

  swap(_impl_.block_device_id_, other->_impl_.block_device_id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata InodeFileMap::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::InodeFileMap_Entry*
Arena::CreateMaybeMessage< ::perfetto::protos::InodeFileMap_Entry >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::InodeFileMap_Entry >(arena);
}
template<> PROTOBUF_NOINLINE ::perfetto::protos::InodeFileMap*
Arena::CreateMaybeMessage< ::perfetto::protos::InodeFileMap >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::InodeFileMap >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"