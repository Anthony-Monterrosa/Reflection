#pragma once 

#ifndef REFLECTION_CONVENTIONS_TYPES
#define REFLECTION_CONVENTIONS_TYPES

#include <cstdint>
#include <cstddef>

#include "macros.h"
#include "setup.h"

#ifdef  FILE
#error "FILE already defined."
#endif
#define FILE NEW_FILE(Reflection::Conventions)

namespace FILE {
	
class types {
	
	using uint8_t  = std::uint8_t;
	using uint16_t = std::uint16_t;
	using uint32_t = std::uint32_t;
	using uint64_t = std::uint64_t;

	using int8_t  = std::int8_t;
	using int16_t = std::int16_t;
	using int32_t = std::int32_t;
	using int64_t = std::int64_t;

	using nullptr_t = std::nullptr_t;

	public:

	// u -> unsigned, f -> signed, f -> float.

	using  bit   = bool;
	using ubit8  = uint8_t;
	using ubit16 = uint16_t;
	using ubit32 = uint32_t;
	using ubit64 = uint64_t;
	
	using sbit8  = int8_t;
	using sbit16 = int16_t;
	using sbit32 = int32_t;
	using sbit64 = int64_t;
	
	using fbit32 = float;
	using fbit64 = double;
	using fbit80 = long double;
	
	using utf8  = char;
	using utf16 = char16_t;
	using utf32 = char32_t;
	
	using null_pointer = nullptr_t;
	using none         = void;
};}

using  bit   = FILE::types::bit;
using ubit8  = FILE::types::ubit8;
using ubit16 = FILE::types::ubit16;
using ubit32 = FILE::types::ubit32;
using ubit64 = FILE::types::ubit64;

using sbit8  = FILE::types::sbit8;
using sbit16 = FILE::types::sbit16;
using sbit32 = FILE::types::sbit32;
using sbit64 = FILE::types::sbit64;

using fbit32 = FILE::types::fbit32;
using fbit64 = FILE::types::fbit64;
using fbit80 = FILE::types::fbit80;

using utf8   = FILE::types::utf8;
using utf16  = FILE::types::utf16;
using utf32  = FILE::types::utf32;

using null_pointer = FILE::types::null_pointer;
using none         = FILE::types::none;

#undef FILE

#endif