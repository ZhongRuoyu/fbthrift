/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/frozen-struct/src/include1.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace ident {
struct i32Field;
struct strField;
} // namespace ident
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_i32Field
#define APACHE_THRIFT_ACCESSOR_i32Field
APACHE_THRIFT_DEFINE_ACCESSOR(i32Field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_strField
#define APACHE_THRIFT_ACCESSOR_strField
APACHE_THRIFT_DEFINE_ACCESSOR(strField);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace some { namespace ns {
class IncludedA;
}} // some::ns
// END forward_declare
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace some { namespace ns {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;


class IncludedA final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static const folly::StringPiece __fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord);
  static constexpr std::size_t __fbthrift_field_size_v = 2;

  template<class T>
  using __fbthrift_id = folly::type_pack_element_t<folly::to_underlying(T::value),
                                                   void,
                                                   ::apache::thrift::field_id<1>,
                                                   ::apache::thrift::field_id<2>>;

  template<class T>
  using __fbthrift_type_tag = folly::type_pack_element_t<folly::to_underlying(T::value),
                                                         void,
                                                         ::apache::thrift::type::i32_t,
                                                         ::apache::thrift::type::string_t>;

  template<class T>
  using __fbthrift_ident = folly::type_pack_element_t<folly::to_underlying(T::value),
                                                      void,
                                                      ::apache::thrift::ident::i32Field,
                                                      ::apache::thrift::ident::strField>;

  struct __fbthrift_ordinal_impl {
#if (defined(_MSC_VER) && _MSC_VER >= 1920) || defined(__clang__)
    template<class> static constexpr int value = 0;
    template<> static constexpr int value<::apache::thrift::field_id<1>> = 1;
    template<> static constexpr int value<::apache::thrift::ident::i32Field> = 1;
    template<> static constexpr int value<::apache::thrift::field_id<2>> = 2;
    template<> static constexpr int value<::apache::thrift::ident::strField> = 2;
#else
    template<class T> static constexpr int value_impl(folly::tag_t<T>) { return 0; }
    static constexpr int value_impl(folly::tag_t<::apache::thrift::field_id<1>>) { return 1; }
    static constexpr int value_impl(folly::tag_t<::apache::thrift::ident::i32Field>) { return 1; }
    static constexpr int value_impl(folly::tag_t<::apache::thrift::field_id<2>>) { return 2; }
    static constexpr int value_impl(folly::tag_t<::apache::thrift::ident::strField>) { return 2; }
    template<class T> static constexpr int value = value_impl(folly::tag_t<T>{});
#endif
  };

  struct __fbthrift_ordinal_impl_for_non_unique_type {
    template<class, class, class> struct Impl { static constexpr int value = 0; };
    template<class T> struct Impl<::apache::thrift::type::i32_t, T, std::enable_if_t<sizeof(T) != -1>> { static constexpr int value = 1; };
    template<class T> struct Impl<::apache::thrift::type::string_t, T, std::enable_if_t<sizeof(T) != -2>> { static constexpr int value = 2; };

    template<class T> static constexpr int value = Impl<T, T, void>::value;
  };

  template<class T> using __fbthrift_ordinal = ::apache::thrift::field_ordinal<
    std::conditional_t<
        __fbthrift_ordinal_impl::value<T> != 0,
        __fbthrift_ordinal_impl,
        __fbthrift_ordinal_impl_for_non_unique_type>::template value<T>
  >;
  void __fbthrift_clear();
  void __fbthrift_clear_terse_fields();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = IncludedA;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  IncludedA() :
      __fbthrift_field_i32Field() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  IncludedA(apache::thrift::FragileConstructor, ::std::int32_t i32Field__arg, ::std::string strField__arg);

  IncludedA(IncludedA&&) noexcept;

  IncludedA(const IncludedA& src);


  IncludedA& operator=(IncludedA&&) noexcept;
  IncludedA& operator=(const IncludedA& src);
 private:
  ::std::int32_t __fbthrift_field_i32Field;
 private:
  ::std::string __fbthrift_field_strField;
 private:
  apache::thrift::detail::isset_bitset<2, apache::thrift::detail::IssetBitsetOption::Unpacked> __isset;

 public:

  bool operator==(const IncludedA&) const;
  bool operator<(const IncludedA&) const;

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> i32Field_ref() const& {
    return {this->__fbthrift_field_i32Field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> i32Field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_i32Field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> i32Field_ref() & {
    return {this->__fbthrift_field_i32Field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> i32Field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_i32Field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> i32Field() const& {
    return {this->__fbthrift_field_i32Field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> i32Field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_i32Field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> i32Field() & {
    return {this->__fbthrift_field_i32Field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> i32Field() && {
    return {static_cast<T&&>(this->__fbthrift_field_i32Field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> strField_ref() const& {
    return {this->__fbthrift_field_strField, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> strField_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_strField), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> strField_ref() & {
    return {this->__fbthrift_field_strField, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> strField_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_strField), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> strField() const& {
    return {this->__fbthrift_field_strField, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> strField() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_strField), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> strField() & {
    return {this->__fbthrift_field_strField, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> strField() && {
    return {static_cast<T&&>(this->__fbthrift_field_strField), __isset.at(1), __isset.bit(1)};
  }

  ::std::int32_t get_i32Field() const {
    return __fbthrift_field_i32Field;
  }

  [[deprecated("Use `FOO.i32Field_ref() = BAR;` instead of `FOO.set_i32Field(BAR);`")]]
  ::std::int32_t& set_i32Field(::std::int32_t i32Field_) {
    i32Field_ref() = i32Field_;
    return __fbthrift_field_i32Field;
  }

  const ::std::string& get_strField() const& {
    return __fbthrift_field_strField;
  }

  ::std::string get_strField() && {
    return std::move(__fbthrift_field_strField);
  }

  template <typename T_IncludedA_strField_struct_setter = ::std::string>
  [[deprecated("Use `FOO.strField_ref() = BAR;` instead of `FOO.set_strField(BAR);`")]]
  ::std::string& set_strField(T_IncludedA_strField_struct_setter&& strField_) {
    strField_ref() = std::forward<T_IncludedA_strField_struct_setter>(strField_);
    return __fbthrift_field_strField;
  }

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<IncludedA>;
  friend void swap(IncludedA& a, IncludedA& b);
};

template <class Protocol_>
unsigned long IncludedA::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


}} // some::ns
