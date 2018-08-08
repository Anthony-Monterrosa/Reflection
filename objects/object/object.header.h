#pragma once 

#ifndef REFLECTION_OBJECTS_OBJECT_HEADER
#define REFLECTION_OBJECTS_OBJECT_HEADER

#include "../setup.h"

#include "object.declaration.h"

#ifdef  FILE
#error "FILE already defined."
#endif
#define FILE NEW_FILE(IMPLEMENTATION(Reflection)\
                    ::IMPLEMENTATION(Objects))

namespace FILE {

class Object_Header: HEADER_TYPE, public Object_Declaration {

	Object_Header() = delete;

	template<class subtype>
	struct object {};
};

	template<>
	struct Object_Header::object<null_pointer> {};
}

#undef FILE

#endif