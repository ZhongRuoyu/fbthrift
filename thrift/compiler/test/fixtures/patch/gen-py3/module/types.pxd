#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
    uint32_t as cuint32_t,
)
from libcpp.string cimport string
from libcpp cimport bool as cbool, nullptr, nullptr_t
from cpython cimport bool as pbool
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.utility cimport move as cmove
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from thrift.py3.exceptions cimport cTException
cimport folly.iobuf as _fbthrift_iobuf
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.py3.types cimport (
    bstring,
    bytes_to_string,
    field_ref as __field_ref,
    optional_field_ref as __optional_field_ref,
    required_field_ref as __required_field_ref,
)
from thrift.py3.common cimport (
    RpcOptions as __RpcOptions,
    Protocol as __Protocol,
    cThriftMetadata as __fbthrift_cThriftMetadata,
    MetadataBox as __MetadataBox,
)
from folly.optional cimport cOptional as __cOptional
cimport patch.types as _patch_types

cimport module.types_fields as _fbthrift_types_fields

cdef extern from "src/gen-py3/module/types.h":
  pass

cdef extern from *:
    ctypedef bstring _folly_IOBuf "::folly::IOBuf"




cdef extern from "src/gen-cpp2/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass ExceptionMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "src/gen-cpp2/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass StructMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "src/gen-cpp2/module_types_custom_protocol.h" namespace "::cpp2":

    cdef cppclass cMyData "::cpp2::MyData":
        cMyData() except +
        cMyData(const cMyData&) except +
        bint operator==(cMyData&)
        bint operator!=(cMyData&)
        bint operator<(cMyData&)
        bint operator>(cMyData&)
        bint operator<=(cMyData&)
        bint operator>=(cMyData&)
        __field_ref[string] data1_ref()
        __field_ref[cint32_t] data2_ref()


    cdef cppclass cMyStruct "::cpp2::MyStruct":
        cMyStruct() except +
        cMyStruct(const cMyStruct&) except +
        bint operator==(cMyStruct&)
        bint operator!=(cMyStruct&)
        bint operator<(cMyStruct&)
        bint operator>(cMyStruct&)
        bint operator<=(cMyStruct&)
        bint operator>=(cMyStruct&)
        __field_ref[cbool] boolVal_ref()
        __field_ref[cint8_t] byteVal_ref()
        __field_ref[cint16_t] i16Val_ref()
        __field_ref[cint32_t] i32Val_ref()
        __field_ref[cint64_t] i64Val_ref()
        __field_ref[float] floatVal_ref()
        __field_ref[double] doubleVal_ref()
        __field_ref[string] stringVal_ref()
        __field_ref[_folly_IOBuf] binaryVal_ref()
        __field_ref[cMyData] structVal_ref()
        __optional_field_ref[cbool] optBoolVal_ref()
        __optional_field_ref[cint8_t] optByteVal_ref()
        __optional_field_ref[cint16_t] optI16Val_ref()
        __optional_field_ref[cint32_t] optI32Val_ref()
        __optional_field_ref[cint64_t] optI64Val_ref()
        __optional_field_ref[float] optFloatVal_ref()
        __optional_field_ref[double] optDoubleVal_ref()
        __optional_field_ref[string] optStringVal_ref()
        __optional_field_ref[_folly_IOBuf] optBinaryVal_ref()
        __optional_field_ref[cMyData] optStructVal_ref()
        __optional_field_ref[vector[cint16_t]] optListVal_ref()
        __optional_field_ref[cset[string]] optSetVal_ref()
        __optional_field_ref[cmap[string,string]] optMapVal_ref()


    cdef cppclass cMyDataPatch "::cpp2::MyDataPatch":
        cMyDataPatch() except +
        cMyDataPatch(const cMyDataPatch&) except +
        bint operator==(cMyDataPatch&)
        bint operator!=(cMyDataPatch&)
        bint operator<(cMyDataPatch&)
        bint operator>(cMyDataPatch&)
        bint operator<=(cMyDataPatch&)
        bint operator>=(cMyDataPatch&)
        __field_ref[_patch_types.cStringPatch] data1_ref()
        __field_ref[_patch_types.cI32Patch] data2_ref()


    cdef cppclass cMyDataValuePatch "::cpp2::MyDataValuePatch":
        cMyDataValuePatch() except +
        cMyDataValuePatch(const cMyDataValuePatch&) except +
        bint operator==(cMyDataValuePatch&)
        bint operator!=(cMyDataValuePatch&)
        bint operator<(cMyDataValuePatch&)
        bint operator>(cMyDataValuePatch&)
        bint operator<=(cMyDataValuePatch&)
        bint operator>=(cMyDataValuePatch&)
        __optional_field_ref[cMyData] assign_ref()
        __field_ref[cbool] clear_ref()
        __field_ref[cMyDataPatch] patch_ref()


    cdef cppclass cOptionalMyDataValuePatch "::cpp2::OptionalMyDataValuePatch":
        cOptionalMyDataValuePatch() except +
        cOptionalMyDataValuePatch(const cOptionalMyDataValuePatch&) except +
        bint operator==(cOptionalMyDataValuePatch&)
        bint operator!=(cOptionalMyDataValuePatch&)
        bint operator<(cOptionalMyDataValuePatch&)
        bint operator>(cOptionalMyDataValuePatch&)
        bint operator<=(cOptionalMyDataValuePatch&)
        bint operator>=(cOptionalMyDataValuePatch&)
        __field_ref[cbool] clear_ref()
        __field_ref[cMyDataValuePatch] patch_ref()
        __optional_field_ref[cMyData] ensure_ref()
        __field_ref[cMyDataValuePatch] patchAfter_ref()


    cdef cppclass cMyStructPatch "::cpp2::MyStructPatch":
        cMyStructPatch() except +
        cMyStructPatch(const cMyStructPatch&) except +
        bint operator==(cMyStructPatch&)
        bint operator!=(cMyStructPatch&)
        bint operator<(cMyStructPatch&)
        bint operator>(cMyStructPatch&)
        bint operator<=(cMyStructPatch&)
        bint operator>=(cMyStructPatch&)
        __field_ref[_patch_types.cBoolPatch] boolVal_ref()
        __field_ref[_patch_types.cBytePatch] byteVal_ref()
        __field_ref[_patch_types.cI16Patch] i16Val_ref()
        __field_ref[_patch_types.cI32Patch] i32Val_ref()
        __field_ref[_patch_types.cI64Patch] i64Val_ref()
        __field_ref[_patch_types.cFloatPatch] floatVal_ref()
        __field_ref[_patch_types.cDoublePatch] doubleVal_ref()
        __field_ref[_patch_types.cStringPatch] stringVal_ref()
        __field_ref[_patch_types.cBinaryPatch] binaryVal_ref()
        __field_ref[cMyDataValuePatch] structVal_ref()
        __field_ref[_patch_types.cOptionalBoolPatch] optBoolVal_ref()
        __field_ref[_patch_types.cOptionalBytePatch] optByteVal_ref()
        __field_ref[_patch_types.cOptionalI16Patch] optI16Val_ref()
        __field_ref[_patch_types.cOptionalI32Patch] optI32Val_ref()
        __field_ref[_patch_types.cOptionalI64Patch] optI64Val_ref()
        __field_ref[_patch_types.cOptionalFloatPatch] optFloatVal_ref()
        __field_ref[_patch_types.cOptionalDoublePatch] optDoubleVal_ref()
        __field_ref[_patch_types.cOptionalStringPatch] optStringVal_ref()
        __field_ref[_patch_types.cOptionalBinaryPatch] optBinaryVal_ref()
        __field_ref[cOptionalMyDataValuePatch] optStructVal_ref()
        __field_ref[cOptionalMyStructField21Patch] optListVal_ref()
        __field_ref[cOptionalMyStructField22Patch] optSetVal_ref()
        __field_ref[cOptionalMyStructField23Patch] optMapVal_ref()


    cdef cppclass cMyStructField21Patch "::cpp2::MyStructField21Patch":
        cMyStructField21Patch() except +
        cMyStructField21Patch(const cMyStructField21Patch&) except +
        bint operator==(cMyStructField21Patch&)
        bint operator!=(cMyStructField21Patch&)
        bint operator<(cMyStructField21Patch&)
        bint operator>(cMyStructField21Patch&)
        bint operator<=(cMyStructField21Patch&)
        bint operator>=(cMyStructField21Patch&)
        __optional_field_ref[vector[cint16_t]] assign_ref()
        __field_ref[cbool] clear_ref()
        __field_ref[vector[cint16_t]] prepend_ref()
        __field_ref[vector[cint16_t]] append_ref()


    cdef cppclass cOptionalMyStructField21Patch "::cpp2::OptionalMyStructField21Patch":
        cOptionalMyStructField21Patch() except +
        cOptionalMyStructField21Patch(const cOptionalMyStructField21Patch&) except +
        bint operator==(cOptionalMyStructField21Patch&)
        bint operator!=(cOptionalMyStructField21Patch&)
        bint operator<(cOptionalMyStructField21Patch&)
        bint operator>(cOptionalMyStructField21Patch&)
        bint operator<=(cOptionalMyStructField21Patch&)
        bint operator>=(cOptionalMyStructField21Patch&)
        __field_ref[cbool] clear_ref()
        __field_ref[cMyStructField21Patch] patch_ref()
        __optional_field_ref[vector[cint16_t]] ensure_ref()
        __field_ref[cMyStructField21Patch] patchAfter_ref()


    cdef cppclass cMyStructField22Patch "::cpp2::MyStructField22Patch":
        cMyStructField22Patch() except +
        cMyStructField22Patch(const cMyStructField22Patch&) except +
        bint operator==(cMyStructField22Patch&)
        bint operator!=(cMyStructField22Patch&)
        bint operator<(cMyStructField22Patch&)
        bint operator>(cMyStructField22Patch&)
        bint operator<=(cMyStructField22Patch&)
        bint operator>=(cMyStructField22Patch&)
        __optional_field_ref[cset[string]] assign_ref()
        __field_ref[cbool] clear_ref()
        __field_ref[cset[string]] remove_ref()
        __field_ref[cset[string]] add_ref()


    cdef cppclass cOptionalMyStructField22Patch "::cpp2::OptionalMyStructField22Patch":
        cOptionalMyStructField22Patch() except +
        cOptionalMyStructField22Patch(const cOptionalMyStructField22Patch&) except +
        bint operator==(cOptionalMyStructField22Patch&)
        bint operator!=(cOptionalMyStructField22Patch&)
        bint operator<(cOptionalMyStructField22Patch&)
        bint operator>(cOptionalMyStructField22Patch&)
        bint operator<=(cOptionalMyStructField22Patch&)
        bint operator>=(cOptionalMyStructField22Patch&)
        __field_ref[cbool] clear_ref()
        __field_ref[cMyStructField22Patch] patch_ref()
        __optional_field_ref[cset[string]] ensure_ref()
        __field_ref[cMyStructField22Patch] patchAfter_ref()


    cdef cppclass cMyStructField23Patch "::cpp2::MyStructField23Patch":
        cMyStructField23Patch() except +
        cMyStructField23Patch(const cMyStructField23Patch&) except +
        bint operator==(cMyStructField23Patch&)
        bint operator!=(cMyStructField23Patch&)
        bint operator<(cMyStructField23Patch&)
        bint operator>(cMyStructField23Patch&)
        bint operator<=(cMyStructField23Patch&)
        bint operator>=(cMyStructField23Patch&)
        __optional_field_ref[cmap[string,string]] assign_ref()
        __field_ref[cbool] clear_ref()
        __field_ref[cmap[string,string]] put_ref()
        __field_ref[cmap[string,string]] add_ref()


    cdef cppclass cOptionalMyStructField23Patch "::cpp2::OptionalMyStructField23Patch":
        cOptionalMyStructField23Patch() except +
        cOptionalMyStructField23Patch(const cOptionalMyStructField23Patch&) except +
        bint operator==(cOptionalMyStructField23Patch&)
        bint operator!=(cOptionalMyStructField23Patch&)
        bint operator<(cOptionalMyStructField23Patch&)
        bint operator>(cOptionalMyStructField23Patch&)
        bint operator<=(cOptionalMyStructField23Patch&)
        bint operator>=(cOptionalMyStructField23Patch&)
        __field_ref[cbool] clear_ref()
        __field_ref[cMyStructField23Patch] patch_ref()
        __optional_field_ref[cmap[string,string]] ensure_ref()
        __field_ref[cMyStructField23Patch] patchAfter_ref()


    cdef cppclass cMyStructValuePatch "::cpp2::MyStructValuePatch":
        cMyStructValuePatch() except +
        cMyStructValuePatch(const cMyStructValuePatch&) except +
        bint operator==(cMyStructValuePatch&)
        bint operator!=(cMyStructValuePatch&)
        bint operator<(cMyStructValuePatch&)
        bint operator>(cMyStructValuePatch&)
        bint operator<=(cMyStructValuePatch&)
        bint operator>=(cMyStructValuePatch&)
        __optional_field_ref[cMyStruct] assign_ref()
        __field_ref[cbool] clear_ref()
        __field_ref[cMyStructPatch] patch_ref()


    cdef cppclass cOptionalMyStructValuePatch "::cpp2::OptionalMyStructValuePatch":
        cOptionalMyStructValuePatch() except +
        cOptionalMyStructValuePatch(const cOptionalMyStructValuePatch&) except +
        bint operator==(cOptionalMyStructValuePatch&)
        bint operator!=(cOptionalMyStructValuePatch&)
        bint operator<(cOptionalMyStructValuePatch&)
        bint operator>(cOptionalMyStructValuePatch&)
        bint operator<=(cOptionalMyStructValuePatch&)
        bint operator>=(cOptionalMyStructValuePatch&)
        __field_ref[cbool] clear_ref()
        __field_ref[cMyStructValuePatch] patch_ref()
        __optional_field_ref[cMyStruct] ensure_ref()
        __field_ref[cMyStructValuePatch] patchAfter_ref()




cdef class MyData(thrift.py3.types.Struct):
    cdef shared_ptr[cMyData] _cpp_obj
    cdef _fbthrift_types_fields.__MyData_FieldsSetter _fields_setter
    cdef inline object data1_impl(self)
    cdef inline object data2_impl(self)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cMyData])



cdef class MyStruct(thrift.py3.types.Struct):
    cdef shared_ptr[cMyStruct] _cpp_obj
    cdef _fbthrift_types_fields.__MyStruct_FieldsSetter _fields_setter
    cdef inline object boolVal_impl(self)
    cdef inline object byteVal_impl(self)
    cdef inline object i16Val_impl(self)
    cdef inline object i32Val_impl(self)
    cdef inline object i64Val_impl(self)
    cdef inline object floatVal_impl(self)
    cdef inline object doubleVal_impl(self)
    cdef inline object stringVal_impl(self)
    cdef inline object binaryVal_impl(self)
    cdef inline object structVal_impl(self)
    cdef inline object optBoolVal_impl(self)
    cdef inline object optByteVal_impl(self)
    cdef inline object optI16Val_impl(self)
    cdef inline object optI32Val_impl(self)
    cdef inline object optI64Val_impl(self)
    cdef inline object optFloatVal_impl(self)
    cdef inline object optDoubleVal_impl(self)
    cdef inline object optStringVal_impl(self)
    cdef inline object optBinaryVal_impl(self)
    cdef inline object optStructVal_impl(self)
    cdef inline object optListVal_impl(self)
    cdef inline object optSetVal_impl(self)
    cdef inline object optMapVal_impl(self)
    cdef MyData __fbthrift_cached_structVal
    cdef MyData __fbthrift_cached_optStructVal
    cdef List__i16 __fbthrift_cached_optListVal
    cdef Set__string __fbthrift_cached_optSetVal
    cdef Map__string_string __fbthrift_cached_optMapVal

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cMyStruct])



cdef class MyDataPatch(thrift.py3.types.Struct):
    cdef shared_ptr[cMyDataPatch] _cpp_obj
    cdef _fbthrift_types_fields.__MyDataPatch_FieldsSetter _fields_setter
    cdef inline object data1_impl(self)
    cdef inline object data2_impl(self)
    cdef _patch_types.StringPatch __fbthrift_cached_data1
    cdef _patch_types.I32Patch __fbthrift_cached_data2

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cMyDataPatch])



cdef class MyDataValuePatch(thrift.py3.types.Struct):
    cdef shared_ptr[cMyDataValuePatch] _cpp_obj
    cdef _fbthrift_types_fields.__MyDataValuePatch_FieldsSetter _fields_setter
    cdef inline object assign_impl(self)
    cdef inline object clear_impl(self)
    cdef inline object patch_impl(self)
    cdef MyData __fbthrift_cached_assign
    cdef MyDataPatch __fbthrift_cached_patch

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cMyDataValuePatch])



cdef class OptionalMyDataValuePatch(thrift.py3.types.Struct):
    cdef shared_ptr[cOptionalMyDataValuePatch] _cpp_obj
    cdef _fbthrift_types_fields.__OptionalMyDataValuePatch_FieldsSetter _fields_setter
    cdef inline object clear_impl(self)
    cdef inline object patch_impl(self)
    cdef inline object ensure_impl(self)
    cdef inline object patchAfter_impl(self)
    cdef MyDataValuePatch __fbthrift_cached_patch
    cdef MyData __fbthrift_cached_ensure
    cdef MyDataValuePatch __fbthrift_cached_patchAfter

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cOptionalMyDataValuePatch])



cdef class MyStructPatch(thrift.py3.types.Struct):
    cdef shared_ptr[cMyStructPatch] _cpp_obj
    cdef _fbthrift_types_fields.__MyStructPatch_FieldsSetter _fields_setter
    cdef inline object boolVal_impl(self)
    cdef inline object byteVal_impl(self)
    cdef inline object i16Val_impl(self)
    cdef inline object i32Val_impl(self)
    cdef inline object i64Val_impl(self)
    cdef inline object floatVal_impl(self)
    cdef inline object doubleVal_impl(self)
    cdef inline object stringVal_impl(self)
    cdef inline object binaryVal_impl(self)
    cdef inline object structVal_impl(self)
    cdef inline object optBoolVal_impl(self)
    cdef inline object optByteVal_impl(self)
    cdef inline object optI16Val_impl(self)
    cdef inline object optI32Val_impl(self)
    cdef inline object optI64Val_impl(self)
    cdef inline object optFloatVal_impl(self)
    cdef inline object optDoubleVal_impl(self)
    cdef inline object optStringVal_impl(self)
    cdef inline object optBinaryVal_impl(self)
    cdef inline object optStructVal_impl(self)
    cdef inline object optListVal_impl(self)
    cdef inline object optSetVal_impl(self)
    cdef inline object optMapVal_impl(self)
    cdef _patch_types.BoolPatch __fbthrift_cached_boolVal
    cdef _patch_types.BytePatch __fbthrift_cached_byteVal
    cdef _patch_types.I16Patch __fbthrift_cached_i16Val
    cdef _patch_types.I32Patch __fbthrift_cached_i32Val
    cdef _patch_types.I64Patch __fbthrift_cached_i64Val
    cdef _patch_types.FloatPatch __fbthrift_cached_floatVal
    cdef _patch_types.DoublePatch __fbthrift_cached_doubleVal
    cdef _patch_types.StringPatch __fbthrift_cached_stringVal
    cdef _patch_types.BinaryPatch __fbthrift_cached_binaryVal
    cdef MyDataValuePatch __fbthrift_cached_structVal
    cdef _patch_types.OptionalBoolPatch __fbthrift_cached_optBoolVal
    cdef _patch_types.OptionalBytePatch __fbthrift_cached_optByteVal
    cdef _patch_types.OptionalI16Patch __fbthrift_cached_optI16Val
    cdef _patch_types.OptionalI32Patch __fbthrift_cached_optI32Val
    cdef _patch_types.OptionalI64Patch __fbthrift_cached_optI64Val
    cdef _patch_types.OptionalFloatPatch __fbthrift_cached_optFloatVal
    cdef _patch_types.OptionalDoublePatch __fbthrift_cached_optDoubleVal
    cdef _patch_types.OptionalStringPatch __fbthrift_cached_optStringVal
    cdef _patch_types.OptionalBinaryPatch __fbthrift_cached_optBinaryVal
    cdef OptionalMyDataValuePatch __fbthrift_cached_optStructVal
    cdef OptionalMyStructField21Patch __fbthrift_cached_optListVal
    cdef OptionalMyStructField22Patch __fbthrift_cached_optSetVal
    cdef OptionalMyStructField23Patch __fbthrift_cached_optMapVal

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cMyStructPatch])



cdef class MyStructField21Patch(thrift.py3.types.Struct):
    cdef shared_ptr[cMyStructField21Patch] _cpp_obj
    cdef _fbthrift_types_fields.__MyStructField21Patch_FieldsSetter _fields_setter
    cdef inline object assign_impl(self)
    cdef inline object clear_impl(self)
    cdef inline object prepend_impl(self)
    cdef inline object append_impl(self)
    cdef List__i16 __fbthrift_cached_assign
    cdef List__i16 __fbthrift_cached_prepend
    cdef List__i16 __fbthrift_cached_append

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cMyStructField21Patch])



cdef class OptionalMyStructField21Patch(thrift.py3.types.Struct):
    cdef shared_ptr[cOptionalMyStructField21Patch] _cpp_obj
    cdef _fbthrift_types_fields.__OptionalMyStructField21Patch_FieldsSetter _fields_setter
    cdef inline object clear_impl(self)
    cdef inline object patch_impl(self)
    cdef inline object ensure_impl(self)
    cdef inline object patchAfter_impl(self)
    cdef MyStructField21Patch __fbthrift_cached_patch
    cdef List__i16 __fbthrift_cached_ensure
    cdef MyStructField21Patch __fbthrift_cached_patchAfter

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cOptionalMyStructField21Patch])



cdef class MyStructField22Patch(thrift.py3.types.Struct):
    cdef shared_ptr[cMyStructField22Patch] _cpp_obj
    cdef _fbthrift_types_fields.__MyStructField22Patch_FieldsSetter _fields_setter
    cdef inline object assign_impl(self)
    cdef inline object clear_impl(self)
    cdef inline object remove_impl(self)
    cdef inline object add_impl(self)
    cdef Set__string __fbthrift_cached_assign
    cdef Set__string __fbthrift_cached_remove
    cdef Set__string __fbthrift_cached_add

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cMyStructField22Patch])



cdef class OptionalMyStructField22Patch(thrift.py3.types.Struct):
    cdef shared_ptr[cOptionalMyStructField22Patch] _cpp_obj
    cdef _fbthrift_types_fields.__OptionalMyStructField22Patch_FieldsSetter _fields_setter
    cdef inline object clear_impl(self)
    cdef inline object patch_impl(self)
    cdef inline object ensure_impl(self)
    cdef inline object patchAfter_impl(self)
    cdef MyStructField22Patch __fbthrift_cached_patch
    cdef Set__string __fbthrift_cached_ensure
    cdef MyStructField22Patch __fbthrift_cached_patchAfter

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cOptionalMyStructField22Patch])



cdef class MyStructField23Patch(thrift.py3.types.Struct):
    cdef shared_ptr[cMyStructField23Patch] _cpp_obj
    cdef _fbthrift_types_fields.__MyStructField23Patch_FieldsSetter _fields_setter
    cdef inline object assign_impl(self)
    cdef inline object clear_impl(self)
    cdef inline object put_impl(self)
    cdef inline object add_impl(self)
    cdef Map__string_string __fbthrift_cached_assign
    cdef Map__string_string __fbthrift_cached_put
    cdef Map__string_string __fbthrift_cached_add

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cMyStructField23Patch])



cdef class OptionalMyStructField23Patch(thrift.py3.types.Struct):
    cdef shared_ptr[cOptionalMyStructField23Patch] _cpp_obj
    cdef _fbthrift_types_fields.__OptionalMyStructField23Patch_FieldsSetter _fields_setter
    cdef inline object clear_impl(self)
    cdef inline object patch_impl(self)
    cdef inline object ensure_impl(self)
    cdef inline object patchAfter_impl(self)
    cdef MyStructField23Patch __fbthrift_cached_patch
    cdef Map__string_string __fbthrift_cached_ensure
    cdef MyStructField23Patch __fbthrift_cached_patchAfter

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cOptionalMyStructField23Patch])



cdef class MyStructValuePatch(thrift.py3.types.Struct):
    cdef shared_ptr[cMyStructValuePatch] _cpp_obj
    cdef _fbthrift_types_fields.__MyStructValuePatch_FieldsSetter _fields_setter
    cdef inline object assign_impl(self)
    cdef inline object clear_impl(self)
    cdef inline object patch_impl(self)
    cdef MyStruct __fbthrift_cached_assign
    cdef MyStructPatch __fbthrift_cached_patch

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cMyStructValuePatch])



cdef class OptionalMyStructValuePatch(thrift.py3.types.Struct):
    cdef shared_ptr[cOptionalMyStructValuePatch] _cpp_obj
    cdef _fbthrift_types_fields.__OptionalMyStructValuePatch_FieldsSetter _fields_setter
    cdef inline object clear_impl(self)
    cdef inline object patch_impl(self)
    cdef inline object ensure_impl(self)
    cdef inline object patchAfter_impl(self)
    cdef MyStructValuePatch __fbthrift_cached_patch
    cdef MyStruct __fbthrift_cached_ensure
    cdef MyStructValuePatch __fbthrift_cached_patchAfter

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cOptionalMyStructValuePatch])


cdef class List__i16(thrift.py3.types.List):
    cdef shared_ptr[vector[cint16_t]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[cint16_t]])
    @staticmethod
    cdef shared_ptr[vector[cint16_t]] _make_instance(object items) except *

cdef class Set__string(thrift.py3.types.Set):
    cdef shared_ptr[cset[string]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cset[string]])
    @staticmethod
    cdef shared_ptr[cset[string]] _make_instance(object items) except *

cdef class Map__string_string(thrift.py3.types.Map):
    cdef shared_ptr[cmap[string,string]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cmap[string,string]])
    @staticmethod
    cdef shared_ptr[cmap[string,string]] _make_instance(object items) except *


