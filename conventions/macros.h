#pragma once 

#ifndef REFLECTION_CONVENTIONS_MACROS
#define REFLECTION_CONVENTIONS_MACROS

#ifdef  QUOTE
#error "QUOTE already defined."
#endif
#define QUOTE(_string_) #_string_

#ifdef  DECLARATION
#error "DECLARATION already defined."
#endif
#define DECLARATION(_name_) QUOTE(_name_/_name_.declaration.h)

#ifdef  PARTIAL
#error "PARTIAL already defined."
#endif
#define PARTIAL(_name_) QUOTE(_name_/_name_.partial.h)

#ifdef  COMPLETE
#error "COMPLETE already defined."
#endif
#define COMPLETE(_name_) QUOTE(_name_/_name_.complete.h)

#ifdef  IMPLEMENTATION
#error "IMPLEMENTATION already defined."
#endif
#define IMPLEMENTATION(_name_) _name_::Scope::Implementation

#endif 