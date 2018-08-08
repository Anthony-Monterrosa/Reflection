#pragma once 

#ifndef REFLECTION_CONVENTIONS_SETUP
#define REFLECTION_CONVENTIONS_SETUP

#include "macros.h"

namespace Files {
	namespace Scope {
		namespace Implementation {}
	}
	using namespace Scope::Implementation;
}

namespace SPACE(Files) {
	namespace Reflection::Conventions {}
}

#ifdef  NEW_FILE
#error "NEW_FILE already defined."
#endif
#define NEW_FILE(_name_) SPACE(Files)::_name_

#endif