#pragma once 

#ifndef REFLECTION_OBJECTS_OBJECT_DECLARATION
#define REFLECTION_OBJECTS_OBJECT_DECLARATION

#include "../setup.h"

#ifdef  FILE
#error "FILE already defined."
#endif
#define FILE NEW_FILE(IMPLEMENTATION(Reflection)\
                    ::IMPLEMENTATION(Objects))

namespace FILE {

class Object_Declaration: DECLARATION_TYPE {

	Object_Declaration() = delete;

	public:
	
	template<class subtype = null_pointer>
	struct object;
};}

#undef FILE

#endif