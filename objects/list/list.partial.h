#pragma once 

#ifndef REFLECTION_OBJECTS_LIST_PARTIAL
#define REFLECTION_OBJECTS_LIST_PARTIAL

#include "list.declaration.h"

#ifdef  FILE
#error "FILE already defined."
#endif
#define FILE NEW_FILE(IMPLEMENTATION (Reflection)\
                    ::IMPLEMENTATION    (Objects))

namespace FILE {

template<>
class List<Partial>: DECLARATION_CLASS, public List<Declaration> {

	Object() = delete;

	public:
	
	template<auto first, auto...rest>
	struct list {

		constexpr inline list() = default;

		template<auto addition>
		constexpr inline auto add() const noexcept;

		constexpr inline auto remove() const noexcept;

		template<max_recurse index>
		constexpr inline auto at() const noexcept;
	};
};}

#undef FILE

#endif