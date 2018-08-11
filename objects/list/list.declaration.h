#pragma once 

#ifndef REFLECTION_OBJECTS_LIST_DECLARATION
#define REFLECTION_OBJECTS_LIST_DECLARATION

#include "../setup.h"

#ifdef  FILE
#error "FILE already defined."
#endif
#define FILE NEW_FILE(IMPLEMENTATION (Reflection)\
                    ::IMPLEMENTATION    (Objects))

namespace FILE {

template<class FileType>
class List;

template<>
class List<Declaration>: DECLARATION_CLASS {

	Object() = delete;

	public:
	
	template<auto first, auto...rest>
	struct list;
};}

#undef FILE

#endif