// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/system_info/cpu_info.proto

#include "protos/perfetto/trace/system_info/cpu_info.pb.h"

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
PROTOBUF_CONSTEXPR CpuInfo_Cpu::CpuInfo_Cpu(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.frequencies_)*/ {}

  , /*decltype(_impl_.processor_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }
} {}
struct CpuInfo_CpuDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CpuInfo_CpuDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~CpuInfo_CpuDefaultTypeInternal() {}
  union {
    CpuInfo_Cpu _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CpuInfo_CpuDefaultTypeInternal _CpuInfo_Cpu_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR CpuInfo::CpuInfo(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.cpus_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct CpuInfoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CpuInfoDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~CpuInfoDefaultTypeInternal() {}
  union {
    CpuInfo _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CpuInfoDefaultTypeInternal _CpuInfo_default_instance_;
}  // namespace protos
}  // namespace perfetto
static ::_pb::Metadata file_level_metadata_protos_2fperfetto_2ftrace_2fsystem_5finfo_2fcpu_5finfo_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2fsystem_5finfo_2fcpu_5finfo_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2fsystem_5finfo_2fcpu_5finfo_2eproto = nullptr;
const ::uint32_t TableStruct_protos_2fperfetto_2ftrace_2fsystem_5finfo_2fcpu_5finfo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::CpuInfo_Cpu, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::CpuInfo_Cpu, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::CpuInfo_Cpu, _impl_.processor_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::CpuInfo_Cpu, _impl_.frequencies_),
    0,
    ~0u,
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::CpuInfo, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::CpuInfo, _impl_.cpus_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 10, -1, sizeof(::perfetto::protos::CpuInfo_Cpu)},
        { 12, -1, -1, sizeof(::perfetto::protos::CpuInfo)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::perfetto::protos::_CpuInfo_Cpu_default_instance_._instance,
    &::perfetto::protos::_CpuInfo_default_instance_._instance,
};
const char descriptor_table_protodef_protos_2fperfetto_2ftrace_2fsystem_5finfo_2fcpu_5finfo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n0protos/perfetto/trace/system_info/cpu_"
    "info.proto\022\017perfetto.protos\"d\n\007CpuInfo\022*"
    "\n\004cpus\030\001 \003(\0132\034.perfetto.protos.CpuInfo.C"
    "pu\032-\n\003Cpu\022\021\n\tprocessor\030\001 \001(\t\022\023\n\013frequenc"
    "ies\030\002 \003(\r"
};
static ::absl::once_flag descriptor_table_protos_2fperfetto_2ftrace_2fsystem_5finfo_2fcpu_5finfo_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_protos_2fperfetto_2ftrace_2fsystem_5finfo_2fcpu_5finfo_2eproto = {
    false,
    false,
    169,
    descriptor_table_protodef_protos_2fperfetto_2ftrace_2fsystem_5finfo_2fcpu_5finfo_2eproto,
    "protos/perfetto/trace/system_info/cpu_info.proto",
    &descriptor_table_protos_2fperfetto_2ftrace_2fsystem_5finfo_2fcpu_5finfo_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_protos_2fperfetto_2ftrace_2fsystem_5finfo_2fcpu_5finfo_2eproto::offsets,
    file_level_metadata_protos_2fperfetto_2ftrace_2fsystem_5finfo_2fcpu_5finfo_2eproto,
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2fsystem_5finfo_2fcpu_5finfo_2eproto,
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2fsystem_5finfo_2fcpu_5finfo_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_protos_2fperfetto_2ftrace_2fsystem_5finfo_2fcpu_5finfo_2eproto_getter() {
  return &descriptor_table_protos_2fperfetto_2ftrace_2fsystem_5finfo_2fcpu_5finfo_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_protos_2fperfetto_2ftrace_2fsystem_5finfo_2fcpu_5finfo_2eproto(&descriptor_table_protos_2fperfetto_2ftrace_2fsystem_5finfo_2fcpu_5finfo_2eproto);
namespace perfetto {
namespace protos {
// ===================================================================

class CpuInfo_Cpu::_Internal {
 public:
  using HasBits = decltype(std::declval<CpuInfo_Cpu>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(CpuInfo_Cpu, _impl_._has_bits_);
  static void set_has_processor(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

CpuInfo_Cpu::CpuInfo_Cpu(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.CpuInfo.Cpu)
}
CpuInfo_Cpu::CpuInfo_Cpu(const CpuInfo_Cpu& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  CpuInfo_Cpu* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.frequencies_) { from._impl_.frequencies_ }

    , decltype(_impl_.processor_) {}
  };

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.processor_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.processor_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.processor_.Set(from._internal_processor(), _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.CpuInfo.Cpu)
}

inline void CpuInfo_Cpu::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.frequencies_) { arena }

    , decltype(_impl_.processor_) {}

  };
  _impl_.processor_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.processor_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

CpuInfo_Cpu::~CpuInfo_Cpu() {
  // @@protoc_insertion_point(destructor:perfetto.protos.CpuInfo.Cpu)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void CpuInfo_Cpu::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.frequencies_.~RepeatedField();
  _impl_.processor_.Destroy();
}

void CpuInfo_Cpu::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void CpuInfo_Cpu::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.CpuInfo.Cpu)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_mutable_frequencies()->Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.processor_.ClearNonDefaultToEmpty();
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CpuInfo_Cpu::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string processor = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_processor();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "perfetto.protos.CpuInfo.Cpu.processor");
          #endif  // !NDEBUG
        } else {
          goto handle_unusual;
        }
        continue;
      // repeated uint32 frequencies = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 16)) {
          ptr -= 1;
          do {
            ptr += 1;
            _internal_add_frequencies(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<16>(ptr));
        } else if (static_cast<::uint8_t>(tag) == 18) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedUInt32Parser(_internal_mutable_frequencies(), ptr, ctx);
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

::uint8_t* CpuInfo_Cpu::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.CpuInfo.Cpu)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional string processor = 1;
  if (cached_has_bits & 0x00000001u) {
    const std::string& _s = this->_internal_processor();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(_s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
                                "perfetto.protos.CpuInfo.Cpu.processor");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // repeated uint32 frequencies = 2;
  for (int i = 0, n = this->_internal_frequencies_size(); i < n; ++i) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        2, this->_internal_frequencies(i), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.CpuInfo.Cpu)
  return target;
}

::size_t CpuInfo_Cpu::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.CpuInfo.Cpu)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated uint32 frequencies = 2;
  {
    std::size_t data_size = ::_pbi::WireFormatLite::UInt32Size(
        this->_internal_frequencies())
    ;
    std::size_t tag_size = std::size_t{1} *
        ::_pbi::FromIntSize(this->_internal_frequencies_size());
    ;
    total_size += tag_size + data_size;
  }

  // optional string processor = 1;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_processor());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData CpuInfo_Cpu::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    CpuInfo_Cpu::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*CpuInfo_Cpu::GetClassData() const { return &_class_data_; }


void CpuInfo_Cpu::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<CpuInfo_Cpu*>(&to_msg);
  auto& from = static_cast<const CpuInfo_Cpu&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.CpuInfo.Cpu)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.frequencies_.MergeFrom(from._impl_.frequencies_);
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_internal_set_processor(from._internal_processor());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void CpuInfo_Cpu::CopyFrom(const CpuInfo_Cpu& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.CpuInfo.Cpu)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CpuInfo_Cpu::IsInitialized() const {
  return true;
}

void CpuInfo_Cpu::InternalSwap(CpuInfo_Cpu* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.frequencies_.InternalSwap(&other->_impl_.frequencies_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.processor_, lhs_arena,
                                       &other->_impl_.processor_, rhs_arena);
}

::PROTOBUF_NAMESPACE_ID::Metadata CpuInfo_Cpu::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2fsystem_5finfo_2fcpu_5finfo_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2fsystem_5finfo_2fcpu_5finfo_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2fsystem_5finfo_2fcpu_5finfo_2eproto[0]);
}
// ===================================================================

class CpuInfo::_Internal {
 public:
};

CpuInfo::CpuInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.CpuInfo)
}
CpuInfo::CpuInfo(const CpuInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  CpuInfo* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.cpus_){from._impl_.cpus_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.CpuInfo)
}

inline void CpuInfo::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.cpus_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

CpuInfo::~CpuInfo() {
  // @@protoc_insertion_point(destructor:perfetto.protos.CpuInfo)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void CpuInfo::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _internal_mutable_cpus()->~RepeatedPtrField();
}

void CpuInfo::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void CpuInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.CpuInfo)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_mutable_cpus()->Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CpuInfo::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .perfetto.protos.CpuInfo.Cpu cpus = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_cpus(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
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

::uint8_t* CpuInfo::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.CpuInfo)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .perfetto.protos.CpuInfo.Cpu cpus = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_cpus_size()); i < n; i++) {
    const auto& repfield = this->_internal_cpus(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.CpuInfo)
  return target;
}

::size_t CpuInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.CpuInfo)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .perfetto.protos.CpuInfo.Cpu cpus = 1;
  total_size += 1UL * this->_internal_cpus_size();
  for (const auto& msg : this->_internal_cpus()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData CpuInfo::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    CpuInfo::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*CpuInfo::GetClassData() const { return &_class_data_; }


void CpuInfo::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<CpuInfo*>(&to_msg);
  auto& from = static_cast<const CpuInfo&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.CpuInfo)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_cpus()->MergeFrom(from._internal_cpus());
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void CpuInfo::CopyFrom(const CpuInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.CpuInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CpuInfo::IsInitialized() const {
  return true;
}

void CpuInfo::InternalSwap(CpuInfo* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _internal_mutable_cpus()->InternalSwap(other->_internal_mutable_cpus());
}

::PROTOBUF_NAMESPACE_ID::Metadata CpuInfo::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2fsystem_5finfo_2fcpu_5finfo_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2fsystem_5finfo_2fcpu_5finfo_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2fsystem_5finfo_2fcpu_5finfo_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::CpuInfo_Cpu*
Arena::CreateMaybeMessage< ::perfetto::protos::CpuInfo_Cpu >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::CpuInfo_Cpu >(arena);
}
template<> PROTOBUF_NOINLINE ::perfetto::protos::CpuInfo*
Arena::CreateMaybeMessage< ::perfetto::protos::CpuInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::CpuInfo >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"