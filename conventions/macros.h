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

#ifdef  HEADER
#error "HEADER already defined."
#endif
#define HEADER(_name_) QUOTE(_name_/_name_.header.h)

#ifdef  ALL
#error "ALL already defined."
#endif
#define ALL(_name_) QUOTE(_name_/_name_.all.h)

#ifdef  IMPLEMENTATION
#error "IMPLEMENTATION already defined."
#endif
#define IMPLEMENTATION(_name_) _name_::Scope::Implementation

#endif 