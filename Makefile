NAME = Reflection

#Directory that contains .cpp files with main()
EXEC_DIRS = ./specs/

#directories with classes/files to be compiled into objects
SRC_DIRS =

#directories containing headers that need to be installed
HEADER_DIRS = .
HEADER_CP_DIRS =
HEADER_FILES +=
#Header install subdirectory (ie, in /usr/include: defaults to $(SYS_NAME))
HEADERS_OUT_DIR = Reflection

#Choose ONE header, if any, to precompile and cache (not for developement!!!)
PCH =



#Default platform
TARGET_PLATFORM ?= Desktop
#Local build output directory
BUILD_DIR = build

#Compiler
CXX ?= g++
#CFLAGS (appended to required ones)
CXXPLUS += -std=gnu++2a -fconcepts
#SYS_FLAGS (prefix and possible override system CFLAGS, may break things)
CC_SYS_FLAGS ?=
#Optimization flags, supporting PGO if needed
OPTI ?= -march=native
#-Ofast -flto
#Include paths, ie -I/path/to/headers/
INCPATH +=
#Libraries, ie -lopenmp
LIBS +=

include /usr/include/LPBT.mk

#Warnings, ie -Wall
WARNINGS +=

install::

uninstall::

autorun::

disable::



