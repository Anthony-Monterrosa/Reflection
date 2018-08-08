#pragma once 

#ifndef REFLECTION_CONVENTIONS_LITERALS
#define REFLECTION_CONVENTIONS_LITERALS

#include "types.h"

/**
 * Can't use typical format because user-defined literals
 * must be defined as non-members.
 */

bit static constexpr inline operator ""_bp(const unsigned long long int literal) {
	return static_cast<bit>(literal);
}

ubit8 static constexpr inline operator ""_ubp8(const unsigned long long int literal) {
	return static_cast<ubit8>(literal);
}

ubit16 static constexpr inline operator ""_ubp16(const unsigned long long int literal) {
	return static_cast<ubit16>(literal);
}

ubit32 static constexpr inline operator ""_ubp32(const unsigned long long int literal) {
	return static_cast<ubit32>(literal);
}

ubit64 static constexpr inline operator ""_ubp64(const unsigned long long int literal) {
	return static_cast<ubit64>(literal);
}

fbit32 static constexpr inline operator ""_fbp32(const fbit80 literal) {
	return static_cast<fbit32>(literal);
}

fbit64 static constexpr inline operator ""_fbp64(const fbit80 literal) {
	return static_cast<fbit64>(literal);
}

fbit80 static constexpr inline operator ""_fbp80(const fbit80 literal) {
	return static_cast<fbit80>(literal);
}

utf8 static constexpr inline operator ""_utfp8(const utf8 literal) {
	return static_cast<utf8>(literal);
}

utf16 static constexpr inline operator ""_utfp16(const utf16 literal) {
	return static_cast<utf16>(literal);
}

utf32 static constexpr inline operator ""_utfp32(const utf32 literal) {
	return static_cast<utf32>(literal);
}		

#endif