#pragma once 

#ifndef REFLECTION_OBJECTS_SETUP
#define REFLECTION_OBJECTS_SETUP

#include "../conventions/include.h"

namespace Reflection::Objects {}

namespace IMPLEMENTATION(Files)      {
namespace IMPLEMENTATION(Reflection) {
	namespace Objects {
		namespace Scope {

			using max_recurse = alias_type<ubit16>;

			namespace Implementation {}
		}
		using namespace Scope::Implementation;
	}
}}

#endif