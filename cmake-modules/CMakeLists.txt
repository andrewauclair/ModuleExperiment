cmake_minimum_required(VERSION 3.28)

project(modules-example)

option(ENABLE_MODULE_SUPPORT "Enable Modules" Off)
option(USE_SHARED_LIBRARY "Use library as a shared library" On)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

if (USE_SHARED_LIBRARY)
	add_library(library SHARED)
else()
	add_library(library STATIC)
endif()

if (ENABLE_MODULE_SUPPORT)
target_sources(library PUBLIC
	FILE_SET all_library_modules TYPE CXX_MODULES FILES
	library.cppm
	fragmentA.cppm
	fragmentB.cppm
)
else()
target_sources(library
	PUBLIC
	a.cpp
	b.cpp
)
target_include_directories(library PUBLIC .)
endif()

add_executable(app)
target_sources(app
    PUBLIC
    main.cpp
)
if (ENABLE_MODULE_SUPPORT)
target_compile_definitions(app PRIVATE ENABLE_MODULE_SUPPORT)
endif()

target_link_libraries(app library)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT app)
