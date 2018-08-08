#pragma once 

#ifndef REFLECTION_CONVENTIONS_STYLE
#define REFLECTION_CONVENTIONS_STYLE

#include "macros.h"
#include "setup.h"

namespace IMPLEMENTATION(Files) {

class Functions   {};

class Variables   {};

class Usings      {};

class Declaration {};

class Header      {};

class All         {};

}

#define INHERITENCE_KEYWORDS public virtual

#define   FUNCTIONS_TYPE INHERITENCE_KEYWORDS Functions
#define   VARIABLES_TYPE INHERITENCE_KEYWORDS Variables
#define      USINGS_TYPE INHERITENCE_KEYWORDS Usings
#define DECLARATION_TYPE INHERITENCE_KEYWORDS Declaration
#define      HEADER_TYPE INHERITENCE_KEYWORDS Header
#define         ALL_TYPE INHERITENCE_KEYWORDS All

#undef FILE

#endif