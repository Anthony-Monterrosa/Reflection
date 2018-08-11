#pragma once 

#ifndef REFLECTION_OBJECTS_VARIADICS_DECLARATION
#define REFLECTION_OBJECTS_VARIADICS_DECLARATION

#include "../setup.h"

#ifdef  FILE
#error "FILE already defined."
#endif
#define FILE NEW_FILE(IMPLEMENTATION (Reflection)\
                    ::IMPLEMENTATION    (Objects))

namespace FILE {

template<class FileType, class...ContaineeTypes>
class Variadics;

template<>
class Variadics<Declaration, Functions>: DECLARATION_CLASS, FUNCTIONS {

	Variadics() = delete;

	public:
	
	template<max_recurse index, auto first, auto...rest>
	constexpr inline auto at() noexcept;

	template<max_recurse index, auto...items>
	constexpr inline auto head() noexcept;

	template<max_recurse index, auto...items>
	constexpr inline auto tail() noexcept;
};}

#undef FILE

#endif