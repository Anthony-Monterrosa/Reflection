#pragma once 

#ifndef REFLECTION_OBJECTS_OBJECT_ALL
#define REFLECTION_OBJECTS_OBJECT_ALL

#include "../setup.h"

#include "object.partial.h"

#ifdef  FILE
#error "FILE already defined."
#endif
#define FILE NEW_FILE(IMPLEMENTATION (Reflection)\
                    ::IMPLEMENTATION    (Objects))

namespace FILE {

template<>
class Object<Complete>: COMPLETE_CLASS, public Object<Partial> {

	Object() = delete;

};

namespace Object_Namespace {
	template<class subtype>
	using object = FILE::Object<Complete>::object<subtype>;
}}

using namespace FILE::Object_Namespace;

#undef FILE

#endif