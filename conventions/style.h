#pragma once 

#ifndef REFLECTION_CONVENTIONS_STYLE
#define REFLECTION_CONVENTIONS_STYLE

#include "macros.h"
#include  "setup.h"
#include  "files.h"

#ifdef  FILE
#error "FILE already defined."
#endif
#define FILE NEW_FILE(Reflection::Conventions)

namespace FILE {

class Style: USINGS_TYPE {

	public:

	template<class type>
	using alias_type = type;
};}

template<class type>
using alias_type = FILE::Style::alias_type<type>;

#undef FILE

#endif