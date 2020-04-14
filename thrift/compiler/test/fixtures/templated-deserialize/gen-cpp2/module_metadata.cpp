/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/templated-deserialize/gen-cpp2/module_metadata.h"

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;
using ThriftService = ::apache::thrift::metadata::ThriftService;
using ThriftServiceContext = ::apache::thrift::metadata::ThriftServiceContext;
using ThriftFunctionGenerator = void (*)(ThriftMetadata&, ThriftService&);

void EnumMetadata<::cpp2::MyEnumA>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("module.MyEnumA", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name = "module.MyEnumA";
  using EnumTraits = TEnumTraits<::cpp2::MyEnumA>;
  for (std::size_t i = 0; i < EnumTraits::size; ++i) {
    enum_metadata.elements.emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i].str());
  }
}

void StructMetadata<::cpp2::SmallStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.SmallStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_SmallStruct = res.first->second;
  module_SmallStruct.name = "module.SmallStruct";
  module_SmallStruct.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_SmallStruct_fields[] = {
    std::make_tuple(1, "small_A", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE)),
    std::make_tuple(2, "small_B", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)),
  };
  for (const auto& f : module_SmallStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(field.type, metadata);
    module_SmallStruct.fields.push_back(std::move(field));
  }
}
void StructMetadata<::cpp2::containerStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.containerStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_containerStruct = res.first->second;
  module_containerStruct.name = "module.containerStruct";
  module_containerStruct.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_containerStruct_fields[] = {
    std::make_tuple(1, "fieldA", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE)),
    std::make_tuple(2, "fieldB", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE))),
    std::make_tuple(3, "fieldC", false, std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE))),
    std::make_tuple(4, "fieldD", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
    std::make_tuple(5, "fieldE", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
    std::make_tuple(6, "fieldF", false, std::make_unique<List>(std::make_unique<List>(std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE))))),
    std::make_tuple(7, "fieldG", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE))))),
    std::make_tuple(8, "fieldH", false, std::make_unique<List>(std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)))),
    std::make_tuple(9, "fieldI", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE)),
    std::make_tuple(10, "fieldJ", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)))),
    std::make_tuple(11, "fieldK", false, std::make_unique<List>(std::make_unique<List>(std::make_unique<List>(std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)))))),
    std::make_tuple(12, "fieldL", false, std::make_unique<Set>(std::make_unique<Set>(std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE))))),
    std::make_tuple(13, "fieldM", false, std::make_unique<Map>(std::make_unique<Set>(std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE))), std::make_unique<Map>(std::make_unique<List>(std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE))), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)))),
    std::make_tuple(14, "fieldN", false, std::make_unique<List>(std::make_unique<Typedef>("module.IndirectionA", std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE)))),
    std::make_tuple(15, "fieldO", false, std::make_unique<List>(std::make_unique<Typedef>("module.IndirectionB", std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_DOUBLE_TYPE)))),
    std::make_tuple(16, "fieldP", false, std::make_unique<List>(std::make_unique<Typedef>("module.IndirectionC", std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)))),
    std::make_tuple(17, "fieldQ", false, std::make_unique<Enum< ::cpp2::MyEnumA>>("module.MyEnumA")),
    std::make_tuple(18, "fieldR", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE))),
    std::make_tuple(19, "fieldS", false, std::make_unique<Struct< ::cpp2::SmallStruct>>("module.SmallStruct")),
    std::make_tuple(20, "fieldT", false, std::make_unique<Struct< ::cpp2::SmallStruct>>("module.SmallStruct")),
    std::make_tuple(21, "fieldU", false, std::make_unique<Struct< ::cpp2::SmallStruct>>("module.SmallStruct")),
    std::make_tuple(23, "fieldX", false, std::make_unique<Struct< ::cpp2::SmallStruct>>("module.SmallStruct")),
  };
  for (const auto& f : module_containerStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(field.type, metadata);
    module_containerStruct.fields.push_back(std::move(field));
  }
}

} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
