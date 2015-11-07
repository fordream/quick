#file (GLOB SOURCE_FILES *.cpp *.c *.h)

set(SOURCE_FILES
    #${CMAKE_CURRENT_SOURCE_DIR}/CCBProxy.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/CCLuaBridge.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/CCLuaEngine.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/CCLuaStack.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/CCLuaValue.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Cocos2dxLuaLoader.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/LuaCocos2d.cpp
    #${CMAKE_CURRENT_SOURCE_DIR}/LuaCocos2dAssetsManager.cpp
    #${CMAKE_CURRENT_SOURCE_DIR}/LuaCocos2dDragonBones.cpp
    #${CMAKE_CURRENT_SOURCE_DIR}/LuaCocoStudio.cpp
    #${CMAKE_CURRENT_SOURCE_DIR}/lua_cocos2dx_cocostudio_manual.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/lua_cocos2dx_extensions_manual.cpp
    #${CMAKE_CURRENT_SOURCE_DIR}/Lua_extensions_CCB.cpp
    #${CMAKE_CURRENT_SOURCE_DIR}/Lua_web_socket.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/snapshot.c
    ${CMAKE_CURRENT_SOURCE_DIR}/tolua_fix.c
)

set(INCLUDE_DIRS ${COCOS2D_INCLUDES})

add_definitions(${cocos2d_defines})

setup_library(cocos2dx_lua)
