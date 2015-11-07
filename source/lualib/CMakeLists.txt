set(SOURCE_FILES lua_extensions.c)
set(INCLUDE_DIRS ${COCOS2D_INCLUDES})


macro(lua_lib libname)
    foreach(f ${ARGN})
        list(APPEND SOURCE_FILES ${CMAKE_CURRENT_LIST_DIR}/${f})
    endforeach()
endmacro()

macro(addlib name)
    include(${name}/CMakeLists.txt)
endmacro()

addlib(cjson)
#addlib(debugger)
addlib(filesystem)
#addlib(lsqlite3)
#addlib(socket)
addlib(zlib)
addlib(lpack)

setup_library(lualib)




