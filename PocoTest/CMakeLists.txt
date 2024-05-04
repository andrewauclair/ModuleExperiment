cmake_minimum_required (VERSION 3.28)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(demo)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib CACHE PATH "Where to place compiled static libraries.")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib CACHE PATH "Where to place compiled shared libraries.")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin CACHE PATH "Where to place compiled executables.")

# set output directories for all builds (Debug, Release, etc.)
foreach( OUTPUTCONFIG ${CMAKE_CONFIGURATION_TYPES} )
	set(CONFIGNAME ${OUTPUTCONFIG})
    string( TOUPPER ${CONFIGNAME} CONFIGNAME )
	message("OUTPUTCONFIG ${OUTPUTCONFIG}")
	message("CONFIGNAME ${CONFIGNAME}")
    set( CMAKE_ARCHIVE_OUTPUT_DIRECTORY_${CONFIGNAME} ${CMAKE_BINARY_DIR}/lib/${OUTPUTCONFIG} )
    set( CMAKE_LIBRARY_OUTPUT_DIRECTORY_${CONFIGNAME} ${CMAKE_BINARY_DIR}/lib/${OUTPUTCONFIG} )
    set( CMAKE_RUNTIME_OUTPUT_DIRECTORY_${CONFIGNAME} ${CMAKE_BINARY_DIR}/bin/${OUTPUTCONFIG} )
endforeach( OUTPUTCONFIG CMAKE_CONFIGURATION_TYPES )

Include(FetchContent)

set(CMAKE_POLICY_DEFAULT_CMP0077 NEW)

set(POCO_GENERATE_MODULES ON)

FetchContent_Declare(
	Poco
	GIT_SHALLOW
	GIT_REPOSITORY https://github.com/andrewauclair/poco.git
	GIT_TAG	1e2434ba2c1effce8d3a9322b1390e90c2734c24
)

FetchContent_MakeAvailable(Poco)

add_executable(demo)

target_link_libraries(demo PRIVATE Poco::Foundation)

target_sources(demo PRIVATE main.cpp)
