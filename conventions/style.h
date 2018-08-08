#pragma once 

#ifndef REFLECTION_CONVENTIONS_STYLE
#define REFLECTION_CONVENTIONS_STYLE

#include "macros.h"
#include "setup.h"

#ifdef  FILE
#error "FILE already defined."
#endif
#define FILE NEW_FILE(Reflection::Conventions)

namespace FILE {

class style {

	public:

	template<class type>
	using alias_type = type;
};}

template<class type>
using alias_type = FILE::style::alias_type<type>;

#undef FILE

#endif