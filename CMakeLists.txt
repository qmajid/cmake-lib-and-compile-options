cmake_minimum_required (VERSION 2.8)
project (CMakeHelloWorld)

#version number
set (CMakeHelloWorld_VERSION_MAJOR 1)
set (CMakeHelloWorld_VERSION_MINOR 0)

# add_definitions("-DFOO")
# add_definitions("-DFOO")
add_compile_definitions(__FOO__="${FOO}")
add_compile_definitions(__BAR__="${BAR}")
add_compile_definitions(__AA__="${AA}")
message("FOO:" ${FOO} "-BAR:" ${BAR} "-AA:" ${AA})
message("FOO:" ${FOO} "-BAR:" ${BAR} "-AA:" ${AA})
message("--------------------------")

if(FOO)
    message("FOO is enable")
else()
    message("FOO is not enable")
endif()

if(BAR)
    message("BAR is enable")
else()
    message("BAR is not enable")    
endif()

if(AA)
    message("AA is enable")
else()
    message("AA is not enable")    
endif()

#include the subdirectory containing our libs
add_subdirectory (Hello)
include_directories(Hello)
#indicate the entry point for the executable
add_executable (CMakeHelloWorld Hello HelloWorld.cpp)

# Indicate which libraries to include during the link process.
target_link_libraries (CMakeHelloWorld Hello)

install (TARGETS CMakeHelloWorld DESTINATION bin)
