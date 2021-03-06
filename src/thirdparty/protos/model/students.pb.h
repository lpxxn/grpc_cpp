// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/model/students.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fmodel_2fstudents_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fmodel_2fstudents_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3013000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3013000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protos_2fmodel_2fstudents_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fmodel_2fstudents_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protos_2fmodel_2fstudents_2eproto;
namespace model {
class Student;
class StudentDefaultTypeInternal;
extern StudentDefaultTypeInternal _Student_default_instance_;
class StudentList;
class StudentListDefaultTypeInternal;
extern StudentListDefaultTypeInternal _StudentList_default_instance_;
}  // namespace model
PROTOBUF_NAMESPACE_OPEN
template<> ::model::Student* Arena::CreateMaybeMessage<::model::Student>(Arena*);
template<> ::model::StudentList* Arena::CreateMaybeMessage<::model::StudentList>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace model {

// ===================================================================

class Student PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:model.Student) */ {
 public:
  inline Student() : Student(nullptr) {}
  virtual ~Student();

  Student(const Student& from);
  Student(Student&& from) noexcept
    : Student() {
    *this = ::std::move(from);
  }

  inline Student& operator=(const Student& from) {
    CopyFrom(from);
    return *this;
  }
  inline Student& operator=(Student&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Student& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Student* internal_default_instance() {
    return reinterpret_cast<const Student*>(
               &_Student_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Student& a, Student& b) {
    a.Swap(&b);
  }
  inline void Swap(Student* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Student* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Student* New() const final {
    return CreateMaybeMessage<Student>(nullptr);
  }

  Student* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Student>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Student& from);
  void MergeFrom(const Student& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Student* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "model.Student";
  }
  protected:
  explicit Student(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_protos_2fmodel_2fstudents_2eproto);
    return ::descriptor_table_protos_2fmodel_2fstudents_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 2,
    kIdFieldNumber = 1,
    kAgeFieldNumber = 3,
  };
  // string name = 2;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // int64 id = 1;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::int64 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // int32 age = 3;
  void clear_age();
  ::PROTOBUF_NAMESPACE_ID::int32 age() const;
  void set_age(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_age() const;
  void _internal_set_age(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:model.Student)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::int64 id_;
  ::PROTOBUF_NAMESPACE_ID::int32 age_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_protos_2fmodel_2fstudents_2eproto;
};
// -------------------------------------------------------------------

class StudentList PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:model.StudentList) */ {
 public:
  inline StudentList() : StudentList(nullptr) {}
  virtual ~StudentList();

  StudentList(const StudentList& from);
  StudentList(StudentList&& from) noexcept
    : StudentList() {
    *this = ::std::move(from);
  }

  inline StudentList& operator=(const StudentList& from) {
    CopyFrom(from);
    return *this;
  }
  inline StudentList& operator=(StudentList&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const StudentList& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StudentList* internal_default_instance() {
    return reinterpret_cast<const StudentList*>(
               &_StudentList_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(StudentList& a, StudentList& b) {
    a.Swap(&b);
  }
  inline void Swap(StudentList* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StudentList* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline StudentList* New() const final {
    return CreateMaybeMessage<StudentList>(nullptr);
  }

  StudentList* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<StudentList>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const StudentList& from);
  void MergeFrom(const StudentList& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StudentList* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "model.StudentList";
  }
  protected:
  explicit StudentList(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_protos_2fmodel_2fstudents_2eproto);
    return ::descriptor_table_protos_2fmodel_2fstudents_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStudentsFieldNumber = 2,
    kScoreFieldNumber = 4,
    kClassFieldNumber = 1,
    kTeacherFieldNumber = 3,
  };
  // repeated .model.Student students = 2;
  int students_size() const;
  private:
  int _internal_students_size() const;
  public:
  void clear_students();
  ::model::Student* mutable_students(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::model::Student >*
      mutable_students();
  private:
  const ::model::Student& _internal_students(int index) const;
  ::model::Student* _internal_add_students();
  public:
  const ::model::Student& students(int index) const;
  ::model::Student* add_students();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::model::Student >&
      students() const;

  // repeated int64 score = 4;
  int score_size() const;
  private:
  int _internal_score_size() const;
  public:
  void clear_score();
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_score(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >&
      _internal_score() const;
  void _internal_add_score(::PROTOBUF_NAMESPACE_ID::int64 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >*
      _internal_mutable_score();
  public:
  ::PROTOBUF_NAMESPACE_ID::int64 score(int index) const;
  void set_score(int index, ::PROTOBUF_NAMESPACE_ID::int64 value);
  void add_score(::PROTOBUF_NAMESPACE_ID::int64 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >&
      score() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >*
      mutable_score();

  // string class = 1;
  void clear_class_();
  const std::string& class_() const;
  void set_class_(const std::string& value);
  void set_class_(std::string&& value);
  void set_class_(const char* value);
  void set_class_(const char* value, size_t size);
  std::string* mutable_class_();
  std::string* release_class_();
  void set_allocated_class_(std::string* class_);
  private:
  const std::string& _internal_class_() const;
  void _internal_set_class_(const std::string& value);
  std::string* _internal_mutable_class_();
  public:

  // string teacher = 3;
  void clear_teacher();
  const std::string& teacher() const;
  void set_teacher(const std::string& value);
  void set_teacher(std::string&& value);
  void set_teacher(const char* value);
  void set_teacher(const char* value, size_t size);
  std::string* mutable_teacher();
  std::string* release_teacher();
  void set_allocated_teacher(std::string* teacher);
  private:
  const std::string& _internal_teacher() const;
  void _internal_set_teacher(const std::string& value);
  std::string* _internal_mutable_teacher();
  public:

  // @@protoc_insertion_point(class_scope:model.StudentList)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::model::Student > students_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 > score_;
  mutable std::atomic<int> _score_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr class__;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr teacher_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_protos_2fmodel_2fstudents_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Student

// int64 id = 1;
inline void Student::clear_id() {
  id_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Student::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Student::id() const {
  // @@protoc_insertion_point(field_get:model.Student.id)
  return _internal_id();
}
inline void Student::_internal_set_id(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  id_ = value;
}
inline void Student::set_id(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:model.Student.id)
}

// string name = 2;
inline void Student::clear_name() {
  name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& Student::name() const {
  // @@protoc_insertion_point(field_get:model.Student.name)
  return _internal_name();
}
inline void Student::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:model.Student.name)
}
inline std::string* Student::mutable_name() {
  // @@protoc_insertion_point(field_mutable:model.Student.name)
  return _internal_mutable_name();
}
inline const std::string& Student::_internal_name() const {
  return name_.Get();
}
inline void Student::_internal_set_name(const std::string& value) {
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Student::set_name(std::string&& value) {
  
  name_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:model.Student.name)
}
inline void Student::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:model.Student.name)
}
inline void Student::set_name(const char* value,
    size_t size) {
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:model.Student.name)
}
inline std::string* Student::_internal_mutable_name() {
  
  return name_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Student::release_name() {
  // @@protoc_insertion_point(field_release:model.Student.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Student::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:model.Student.name)
}

// int32 age = 3;
inline void Student::clear_age() {
  age_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::_internal_age() const {
  return age_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::age() const {
  // @@protoc_insertion_point(field_get:model.Student.age)
  return _internal_age();
}
inline void Student::_internal_set_age(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  age_ = value;
}
inline void Student::set_age(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_age(value);
  // @@protoc_insertion_point(field_set:model.Student.age)
}

// -------------------------------------------------------------------

// StudentList

// string class = 1;
inline void StudentList::clear_class_() {
  class__.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& StudentList::class_() const {
  // @@protoc_insertion_point(field_get:model.StudentList.class)
  return _internal_class_();
}
inline void StudentList::set_class_(const std::string& value) {
  _internal_set_class_(value);
  // @@protoc_insertion_point(field_set:model.StudentList.class)
}
inline std::string* StudentList::mutable_class_() {
  // @@protoc_insertion_point(field_mutable:model.StudentList.class)
  return _internal_mutable_class_();
}
inline const std::string& StudentList::_internal_class_() const {
  return class__.Get();
}
inline void StudentList::_internal_set_class_(const std::string& value) {
  
  class__.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void StudentList::set_class_(std::string&& value) {
  
  class__.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:model.StudentList.class)
}
inline void StudentList::set_class_(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  class__.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:model.StudentList.class)
}
inline void StudentList::set_class_(const char* value,
    size_t size) {
  
  class__.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:model.StudentList.class)
}
inline std::string* StudentList::_internal_mutable_class_() {
  
  return class__.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* StudentList::release_class_() {
  // @@protoc_insertion_point(field_release:model.StudentList.class)
  return class__.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void StudentList::set_allocated_class_(std::string* class_) {
  if (class_ != nullptr) {
    
  } else {
    
  }
  class__.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), class_,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:model.StudentList.class)
}

// repeated .model.Student students = 2;
inline int StudentList::_internal_students_size() const {
  return students_.size();
}
inline int StudentList::students_size() const {
  return _internal_students_size();
}
inline void StudentList::clear_students() {
  students_.Clear();
}
inline ::model::Student* StudentList::mutable_students(int index) {
  // @@protoc_insertion_point(field_mutable:model.StudentList.students)
  return students_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::model::Student >*
StudentList::mutable_students() {
  // @@protoc_insertion_point(field_mutable_list:model.StudentList.students)
  return &students_;
}
inline const ::model::Student& StudentList::_internal_students(int index) const {
  return students_.Get(index);
}
inline const ::model::Student& StudentList::students(int index) const {
  // @@protoc_insertion_point(field_get:model.StudentList.students)
  return _internal_students(index);
}
inline ::model::Student* StudentList::_internal_add_students() {
  return students_.Add();
}
inline ::model::Student* StudentList::add_students() {
  // @@protoc_insertion_point(field_add:model.StudentList.students)
  return _internal_add_students();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::model::Student >&
StudentList::students() const {
  // @@protoc_insertion_point(field_list:model.StudentList.students)
  return students_;
}

// string teacher = 3;
inline void StudentList::clear_teacher() {
  teacher_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& StudentList::teacher() const {
  // @@protoc_insertion_point(field_get:model.StudentList.teacher)
  return _internal_teacher();
}
inline void StudentList::set_teacher(const std::string& value) {
  _internal_set_teacher(value);
  // @@protoc_insertion_point(field_set:model.StudentList.teacher)
}
inline std::string* StudentList::mutable_teacher() {
  // @@protoc_insertion_point(field_mutable:model.StudentList.teacher)
  return _internal_mutable_teacher();
}
inline const std::string& StudentList::_internal_teacher() const {
  return teacher_.Get();
}
inline void StudentList::_internal_set_teacher(const std::string& value) {
  
  teacher_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void StudentList::set_teacher(std::string&& value) {
  
  teacher_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:model.StudentList.teacher)
}
inline void StudentList::set_teacher(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  teacher_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:model.StudentList.teacher)
}
inline void StudentList::set_teacher(const char* value,
    size_t size) {
  
  teacher_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:model.StudentList.teacher)
}
inline std::string* StudentList::_internal_mutable_teacher() {
  
  return teacher_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* StudentList::release_teacher() {
  // @@protoc_insertion_point(field_release:model.StudentList.teacher)
  return teacher_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void StudentList::set_allocated_teacher(std::string* teacher) {
  if (teacher != nullptr) {
    
  } else {
    
  }
  teacher_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), teacher,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:model.StudentList.teacher)
}

// repeated int64 score = 4;
inline int StudentList::_internal_score_size() const {
  return score_.size();
}
inline int StudentList::score_size() const {
  return _internal_score_size();
}
inline void StudentList::clear_score() {
  score_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int64 StudentList::_internal_score(int index) const {
  return score_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 StudentList::score(int index) const {
  // @@protoc_insertion_point(field_get:model.StudentList.score)
  return _internal_score(index);
}
inline void StudentList::set_score(int index, ::PROTOBUF_NAMESPACE_ID::int64 value) {
  score_.Set(index, value);
  // @@protoc_insertion_point(field_set:model.StudentList.score)
}
inline void StudentList::_internal_add_score(::PROTOBUF_NAMESPACE_ID::int64 value) {
  score_.Add(value);
}
inline void StudentList::add_score(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_add_score(value);
  // @@protoc_insertion_point(field_add:model.StudentList.score)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >&
StudentList::_internal_score() const {
  return score_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >&
StudentList::score() const {
  // @@protoc_insertion_point(field_list:model.StudentList.score)
  return _internal_score();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >*
StudentList::_internal_mutable_score() {
  return &score_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >*
StudentList::mutable_score() {
  // @@protoc_insertion_point(field_mutable_list:model.StudentList.score)
  return _internal_mutable_score();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace model

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fmodel_2fstudents_2eproto
