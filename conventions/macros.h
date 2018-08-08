#pragma once 

#ifndef REFLECTION_CONVENTIONS_MACROS
#define REFLECTION_CONVENTIONS_MACROS

#ifdef  SPACE
#error "SPACE already defined."
#endif
#define SPACE(_name_) _name_::Scope::Implementation

#endif 