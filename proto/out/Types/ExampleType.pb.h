// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Types/ExampleType.proto
// Protobuf C++ Version: 4.25.3

#ifndef GOOGLE_PROTOBUF_INCLUDED_Types_2fExampleType_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_Types_2fExampleType_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4025000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4025003 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_Types_2fExampleType_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_Types_2fExampleType_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_Types_2fExampleType_2eproto;
namespace YasashiiServer {
class ExampleType;
struct ExampleTypeDefaultTypeInternal;
extern ExampleTypeDefaultTypeInternal _ExampleType_default_instance_;
}  // namespace YasashiiServer
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace YasashiiServer {

// ===================================================================


// -------------------------------------------------------------------

class ExampleType final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:YasashiiServer.ExampleType) */ {
 public:
  inline ExampleType() : ExampleType(nullptr) {}
  ~ExampleType() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR ExampleType(::google::protobuf::internal::ConstantInitialized);

  inline ExampleType(const ExampleType& from)
      : ExampleType(nullptr, from) {}
  ExampleType(ExampleType&& from) noexcept
    : ExampleType() {
    *this = ::std::move(from);
  }

  inline ExampleType& operator=(const ExampleType& from) {
    CopyFrom(from);
    return *this;
  }
  inline ExampleType& operator=(ExampleType&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const ExampleType& default_instance() {
    return *internal_default_instance();
  }
  static inline const ExampleType* internal_default_instance() {
    return reinterpret_cast<const ExampleType*>(
               &_ExampleType_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ExampleType& a, ExampleType& b) {
    a.Swap(&b);
  }
  inline void Swap(ExampleType* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ExampleType* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ExampleType* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ExampleType>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const ExampleType& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const ExampleType& from) {
    ExampleType::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(ExampleType* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "YasashiiServer.ExampleType";
  }
  protected:
  explicit ExampleType(::google::protobuf::Arena* arena);
  ExampleType(::google::protobuf::Arena* arena, const ExampleType& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIdFieldNumber = 1,
    kBoolMessageFieldNumber = 2,
    kIntMessageFieldNumber = 3,
    kStringMessageFieldNumber = 4,
  };
  // uint64 id = 1;
  void clear_id() ;
  ::uint64_t id() const;
  void set_id(::uint64_t value);

  private:
  ::uint64_t _internal_id() const;
  void _internal_set_id(::uint64_t value);

  public:
  // bool bool_message = 2;
  void clear_bool_message() ;
  bool bool_message() const;
  void set_bool_message(bool value);

  private:
  bool _internal_bool_message() const;
  void _internal_set_bool_message(bool value);

  public:
  // int32 int_message = 3;
  void clear_int_message() ;
  ::int32_t int_message() const;
  void set_int_message(::int32_t value);

  private:
  ::int32_t _internal_int_message() const;
  void _internal_set_int_message(::int32_t value);

  public:
  // double string_message = 4;
  void clear_string_message() ;
  double string_message() const;
  void set_string_message(double value);

  private:
  double _internal_string_message() const;
  void _internal_set_string_message(double value);

  public:
  // @@protoc_insertion_point(class_scope:YasashiiServer.ExampleType)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 4, 0,
      0, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::uint64_t id_;
    bool bool_message_;
    ::int32_t int_message_;
    double string_message_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Types_2fExampleType_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// ExampleType

// uint64 id = 1;
inline void ExampleType::clear_id() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.id_ = ::uint64_t{0u};
}
inline ::uint64_t ExampleType::id() const {
  // @@protoc_insertion_point(field_get:YasashiiServer.ExampleType.id)
  return _internal_id();
}
inline void ExampleType::set_id(::uint64_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:YasashiiServer.ExampleType.id)
}
inline ::uint64_t ExampleType::_internal_id() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.id_;
}
inline void ExampleType::_internal_set_id(::uint64_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.id_ = value;
}

// bool bool_message = 2;
inline void ExampleType::clear_bool_message() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.bool_message_ = false;
}
inline bool ExampleType::bool_message() const {
  // @@protoc_insertion_point(field_get:YasashiiServer.ExampleType.bool_message)
  return _internal_bool_message();
}
inline void ExampleType::set_bool_message(bool value) {
  _internal_set_bool_message(value);
  // @@protoc_insertion_point(field_set:YasashiiServer.ExampleType.bool_message)
}
inline bool ExampleType::_internal_bool_message() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.bool_message_;
}
inline void ExampleType::_internal_set_bool_message(bool value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.bool_message_ = value;
}

// int32 int_message = 3;
inline void ExampleType::clear_int_message() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.int_message_ = 0;
}
inline ::int32_t ExampleType::int_message() const {
  // @@protoc_insertion_point(field_get:YasashiiServer.ExampleType.int_message)
  return _internal_int_message();
}
inline void ExampleType::set_int_message(::int32_t value) {
  _internal_set_int_message(value);
  // @@protoc_insertion_point(field_set:YasashiiServer.ExampleType.int_message)
}
inline ::int32_t ExampleType::_internal_int_message() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.int_message_;
}
inline void ExampleType::_internal_set_int_message(::int32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.int_message_ = value;
}

// double string_message = 4;
inline void ExampleType::clear_string_message() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.string_message_ = 0;
}
inline double ExampleType::string_message() const {
  // @@protoc_insertion_point(field_get:YasashiiServer.ExampleType.string_message)
  return _internal_string_message();
}
inline void ExampleType::set_string_message(double value) {
  _internal_set_string_message(value);
  // @@protoc_insertion_point(field_set:YasashiiServer.ExampleType.string_message)
}
inline double ExampleType::_internal_string_message() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.string_message_;
}
inline void ExampleType::_internal_set_string_message(double value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.string_message_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace YasashiiServer


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_Types_2fExampleType_2eproto_2epb_2eh