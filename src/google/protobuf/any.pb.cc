// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/any.proto

#include "google/protobuf/any.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
#if defined(__llvm__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wuninitialized"
#endif  // __llvm__
namespace google {
namespace protobuf {
PROTOBUF_CONSTEXPR Any::Any(::_pbi::ConstantInitialized)
    : _impl_{
      /*decltype(_impl_.type_url_)*/ {
          &::_pbi::fixed_address_empty_string,
          ::_pbi::ConstantInitialized{},
      },
      /*decltype(_impl_.value_)*/ {
          &::_pbi::fixed_address_empty_string,
          ::_pbi::ConstantInitialized{},
      },
      /*decltype(_impl_._cached_size_)*/ {},
      /*decltype(_impl_._any_metadata_)*/ {&_impl_.type_url_,
                                    &_impl_.value_},
    } {}
struct AnyDefaultTypeInternal {
  PROTOBUF_CONSTEXPR AnyDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~AnyDefaultTypeInternal() {}
  union {
    Any _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 AnyDefaultTypeInternal _Any_default_instance_;
}  // namespace protobuf
}  // namespace google
static ::_pb::Metadata file_level_metadata_google_2fprotobuf_2fany_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_google_2fprotobuf_2fany_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_google_2fprotobuf_2fany_2eproto = nullptr;
const ::uint32_t TableStruct_google_2fprotobuf_2fany_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::google::protobuf::Any, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::google::protobuf::Any, _impl_.type_url_),
    PROTOBUF_FIELD_OFFSET(::google::protobuf::Any, _impl_.value_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::google::protobuf::Any)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::google::protobuf::_Any_default_instance_._instance,
};
const char descriptor_table_protodef_google_2fprotobuf_2fany_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\031google/protobuf/any.proto\022\017google.prot"
    "obuf\"&\n\003Any\022\020\n\010type_url\030\001 \001(\t\022\r\n\005value\030\002"
    " \001(\014Bv\n\023com.google.protobufB\010AnyProtoP\001Z"
    ",google.golang.org/protobuf/types/known/"
    "anypb\242\002\003GPB\252\002\036Google.Protobuf.WellKnownT"
    "ypesb\006proto3"
};
static ::absl::once_flag descriptor_table_google_2fprotobuf_2fany_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_google_2fprotobuf_2fany_2eproto = {
    false,
    false,
    212,
    descriptor_table_protodef_google_2fprotobuf_2fany_2eproto,
    "google/protobuf/any.proto",
    &descriptor_table_google_2fprotobuf_2fany_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_google_2fprotobuf_2fany_2eproto::offsets,
    file_level_metadata_google_2fprotobuf_2fany_2eproto,
    file_level_enum_descriptors_google_2fprotobuf_2fany_2eproto,
    file_level_service_descriptors_google_2fprotobuf_2fany_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_google_2fprotobuf_2fany_2eproto_getter() {
  return &descriptor_table_google_2fprotobuf_2fany_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_google_2fprotobuf_2fany_2eproto(&descriptor_table_google_2fprotobuf_2fany_2eproto);
namespace google {
namespace protobuf {
// ===================================================================

bool Any::GetAnyFieldDescriptors(
    const ::google::protobuf::Message& message,
    const ::google::protobuf::FieldDescriptor** type_url_field,
    const ::google::protobuf::FieldDescriptor** value_field) {
  return ::_pbi::GetAnyFieldDescriptors(
      message, type_url_field, value_field);
}
bool Any::ParseAnyTypeUrl(
    ::absl::string_view type_url,
    std::string* full_type_name) {
  return ::_pbi::ParseAnyTypeUrl(type_url, full_type_name);
}

class Any::_Internal {
 public:
};

Any::Any(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.protobuf.Any)
}
Any::Any(const Any& from) : ::google::protobuf::Message() {
  Any* const _this = this;
  (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.type_url_){},
      decltype(_impl_.value_){},
      /*decltype(_impl_._cached_size_)*/ {},
      /*decltype(_impl_._any_metadata_)*/ {
          &_impl_.type_url_,
          &_impl_.value_,
      },
  };
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  _impl_.type_url_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.type_url_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_type_url().empty()) {
    _this->_impl_.type_url_.Set(from._internal_type_url(), _this->GetArenaForAllocation());
  }
  _impl_.value_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.value_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_value().empty()) {
    _this->_impl_.value_.Set(from._internal_value(), _this->GetArenaForAllocation());
  }

  // @@protoc_insertion_point(copy_constructor:google.protobuf.Any)
}
inline void Any::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.type_url_){},
      decltype(_impl_.value_){},
      /*decltype(_impl_._cached_size_)*/ {},
      /*decltype(_impl_._any_metadata_)*/ {&_impl_.type_url_,
                                    &_impl_.value_},
  };
  _impl_.type_url_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.type_url_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.value_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.value_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}
Any::~Any() {
  // @@protoc_insertion_point(destructor:google.protobuf.Any)
  if (auto *arena = _internal_metadata_
                        .DeleteReturnArena<::google::protobuf::UnknownFieldSet>()) {
    (void)arena;
    return;
  }
  SharedDtor();
}
inline void Any::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.type_url_.Destroy();
  _impl_.value_.Destroy();
  _impl_._any_metadata_.~AnyMetadata();
}

void Any::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

PROTOBUF_NOINLINE void Any::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.Any)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.type_url_.ClearToEmpty();
  _impl_.value_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* Any::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 36, 2> Any::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_Any_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // bytes value = 2;
    {::_pbi::TcParser::FastBS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(Any, _impl_.value_)}},
    // string type_url = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(Any, _impl_.type_url_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string type_url = 1;
    {PROTOBUF_FIELD_OFFSET(Any, _impl_.type_url_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // bytes value = 2;
    {PROTOBUF_FIELD_OFFSET(Any, _impl_.value_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kBytes | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\23\10\0\0\0\0\0\0"
    "google.protobuf.Any"
    "type_url"
  }},
};

::uint8_t* Any::_InternalSerialize(
    ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.Any)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string type_url = 1;
  if (!this->_internal_type_url().empty()) {
    const std::string& _s = this->_internal_type_url();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "google.protobuf.Any.type_url");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // bytes value = 2;
  if (!this->_internal_value().empty()) {
    const std::string& _s = this->_internal_value();
    target = stream->WriteBytesMaybeAliased(2, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.Any)
  return target;
}

::size_t Any::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.Any)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string type_url = 1;
  if (!this->_internal_type_url().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_type_url());
  }

  // bytes value = 2;
  if (!this->_internal_value().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                                    this->_internal_value());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData Any::_class_data_ = {
    ::google::protobuf::Message::CopyWithSourceCheck,
    Any::MergeImpl
};
const ::google::protobuf::Message::ClassData*Any::GetClassData() const { return &_class_data_; }


void Any::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<Any*>(&to_msg);
  auto& from = static_cast<const Any&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.Any)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_type_url().empty()) {
    _this->_internal_set_type_url(from._internal_type_url());
  }
  if (!from._internal_value().empty()) {
    _this->_internal_set_value(from._internal_value());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Any::CopyFrom(const Any& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.Any)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool Any::IsInitialized() const {
  return true;
}

void Any::InternalSwap(Any* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.type_url_, lhs_arena,
                                       &other->_impl_.type_url_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.value_, lhs_arena,
                                       &other->_impl_.value_, rhs_arena);
}

::google::protobuf::Metadata Any::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_google_2fprotobuf_2fany_2eproto_getter, &descriptor_table_google_2fprotobuf_2fany_2eproto_once,
      file_level_metadata_google_2fprotobuf_2fany_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protobuf
}  // namespace google
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::google::protobuf::Any*
Arena::CreateMaybeMessage< ::google::protobuf::Any >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::protobuf::Any >(arena);
}
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#if defined(__llvm__)
#pragma clang diagnostic pop
#endif  // __llvm__
#include "google/protobuf/port_undef.inc"
