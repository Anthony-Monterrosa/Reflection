#pragma once 

#ifndef REFLECTION_OBJECTS_OBJECT_HEADER
#define REFLECTION_OBJECTS_OBJECT_HEADER

#include "../setup.h"

#include "object.declaration.h"

#ifdef  FILE
#error "FILE already defined."
#endif
#define FILE NEW_FILE(IMPLEMENTATION (Reflection)\
                    ::IMPLEMENTATION    (Objects))

namespace FILE {

template<>
class Object<Partial>: PARTIAL_CLASS, public Object<Declaration> {

	Object() = delete;

	template<class subtype>
	struct object {};
};

	template<>
	struct Object<Partial>::object<null_pointer> {};
}

#undef FILE

#endif