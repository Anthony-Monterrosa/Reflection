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

namespace IMPLEMENTATION(Files) {
	namespace Reflection {
		namespace Scope {
			namespace Implementation {}
		}
		using namespace Scope::Implementation;
	}
}

namespace IMPLEMENTATION(Files)      {
namespace IMPLEMENTATION(Reflection) {
	namespace Conventions {
		namespace Scope {
			namespace Implementation {}
		}
	using namespace Scope::Implementation;
	}
}}

#ifdef  NEW_FILE
#error "NEW_FILE already defined."
#endif
#define NEW_FILE(_name_) IMPLEMENTATION(Files)::_name_

#endif