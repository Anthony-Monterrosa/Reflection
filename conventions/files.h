#pragma once 

#ifndef REFLECTION_CONVENTIONS_FILES
#define REFLECTION_CONVENTIONS_FILES

#include "macros.h"
#include "setup.h"

#ifdef  FILETYPE_KEYWORDS
#error "FILETYPE_KEYWORDS already defined."
#endif
#define FILETYPE_KEYWORDS public virtual

namespace IMPLEMENTATION(Files) {

class FileType {};

class Functions:   FILETYPE_KEYWORDS FileType {};

class Variables:   FILETYPE_KEYWORDS FileType {};

class Types:       FILETYPE_KEYWORDS FileType {};

class Declaration: FILETYPE_KEYWORDS FileType {};

class Partial:     FILETYPE_KEYWORDS FileType {};

class Complete:    FILETYPE_KEYWORDS FileType {};

}

#ifdef  FUNCTIONS
#error "FUNCTIONS already defined."
#endif
#ifdef  VARIABLES
#error "VARIABLES already defined."
#endif
#ifdef  TYPES
#error "TYPES already defined."
#endif

#ifdef  DECLARATION_CLASS
#error "DECLARATION already defined."
#endif
#ifdef  PARTIAL_CLASS
#error "PARTIAL already defined."
#endif
#ifdef  COMPLETE_CLASS
#error "COMPLETE already defined."
#endif

#define   FUNCTIONS FILETYPE_KEYWORDS Functions
#define   VARIABLES FILETYPE_KEYWORDS Variables
#define       TYPES FILETYPE_KEYWORDS Types

#define DECLARATION_CLASS FILETYPE_KEYWORDS Declaration
#define     PARTIAL_CLASS FILETYPE_KEYWORDS Partial
#define    COMPLETE_CLASS FILETYPE_KEYWORDS Complete

#endif