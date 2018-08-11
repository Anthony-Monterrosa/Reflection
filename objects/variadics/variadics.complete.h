#pragma once 

#ifndef REFLECTION_OBJECTS_VARIADICS_COMPLETE
#define REFLECTION_OBJECTS_VARIADICS_COMPLETE

#include "variadics.declaration.h"

#ifdef  FILE
#error "FILE already defined."
#endif
#define FILE NEW_FILE(IMPLEMENTATION (Reflection)\
                    ::IMPLEMENTATION    (Objects))

namespace FILE {

template<>
class Variadics<Complete, Functions>: COMPLETE_CLASS, public Variadics<Declaration, Functions> {

	Variadics() = delete;

	public:
	
	template<max_recurse index, auto first, auto...rest>
	constexpr inline auto at() noexcept {
		if constexpr(index == 0) return first;
		else return at<index - 1, rest...>();
	} // Replace with logarithmic implementation?

	template<auto...items>
	constexpr inline auto head() noexcept {
		return at<0, items...>();
	}

	template<auto...items>
	constexpr inline auto tail() noexcept {
		return at<sizeof...(items) - 1, items...>();
	}
};

namespace Variadics_Namespace {
	template<max_recurse index, auto first, auto...rest>
	constexpr auto &at = Variadics<Complete, Functions>::at<index, first, rest...>;

	template<auto...items>
	constexpr auto &head = Variadics<Complete, Functions>::head<items...>;

	template<auto...items>
	constexpr auto &tail = Variadics<Complete, Functions>::tail<items...>;
}}

using namespace FILE::Variadics_Namespace;

#undef FILE

#endif