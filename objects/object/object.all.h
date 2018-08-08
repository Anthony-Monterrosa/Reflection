#pragma once 

#ifndef REFLECTION_OBJECTS_OBJECT_ALL
#define REFLECTION_OBJECTS_OBJECT_ALL

#include "../setup.h"

#include "object.header.h"

#ifdef  FILE
#error "FILE already defined."
#endif
#define FILE NEW_FILE(IMPLEMENTATION(Reflection)\
                    ::IMPLEMENTATION(Objects))

namespace FILE {

class Object: ALL_TYPE, public Object_Header {

	Object() = delete;

};}

template<class subtype>
using object = FILE::Object::object<subtype>;

#undef FILE

#endif