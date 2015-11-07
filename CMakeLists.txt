cmake_minimum_required (VERSION 2.6)


include (CheckIncludeFiles)

if (APPLE)
    set(MAC ${APPLE})
endif()

project (cocos2d-sdl)

macro (setup_library name)
    add_definitions(-D_CRT_SECURE_NO_WARNINGS)
    include_directories(${INCLUDE_DIRS})
    add_library(${name} STATIC ${SOURCE_FILES})
endmacro()

if (ANDROID OR MAC)
    set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fstack-protector")
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fstack-protector")
endif()



add_subdirectory(source)


