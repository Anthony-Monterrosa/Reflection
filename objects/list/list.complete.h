#pragma once 

#ifndef REFLECTION_OBJECTS_LIST_COMPLETE
#define REFLECTION_OBJECTS_LIST_COMPLETE

#include "list.partial.h"

#ifdef  FILE
#error "FILE already defined."
#endif
#define FILE NEW_FILE(IMPLEMENTATION (Reflection)\
                    ::IMPLEMENTATION    (Objects))

namespace FILE {

template<>
class List<Complete>: DECLARATION_CLASS, public List<Partial> {

	Object() = delete;

};

template<auto first, auto...rest>
template<auto addition>
constexpr inline auto List<Complete>::list<first, rest...>::add() const noexcept {
	return list<addition, first, rest...>();
}

template<auto first, auto...rest>
constexpr inline auto List<Complete>::list<first, rest...>::remove() const noexcept {
	return list<rest...>();
}

template<auto first, auto...rest>
template<max_recurse index>
constexpr inline auto List<Complete>::list<first, rest...>::at() const noexcept {
	return at<index, first, rest...>();
}

namespace List_Namespace {
	template<auto first, auto...rest>
	using list = List<Complete>::list<first, rest...>;
}}

using namespace FILE::List_Namespace;

template<utf8...characters>
constexpr inline operator ""_ls() noexcept {
	return list<characters...>();
}

#undef FILE

#endif