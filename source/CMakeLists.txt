
set(DEPS_INCLUDE 
    ${CMAKE_CURRENT_SOURCE_DIR}/deps/SDL2-2.0.3/include
    ${CMAKE_CURRENT_SOURCE_DIR}/deps/freetype-2.5.0/include
    ${CMAKE_CURRENT_SOURCE_DIR}/deps/SDL2_ttf-2.0.12
    ${CMAKE_CURRENT_SOURCE_DIR}/deps/lua-5.1.5/src
    ${CMAKE_CURRENT_SOURCE_DIR}/deps/tolua
    ${CMAKE_CURRENT_SOURCE_DIR}/deps/tinyxml2
    ${CMAKE_CURRENT_SOURCE_DIR}/deps/tinycthread
    ${CMAKE_CURRENT_SOURCE_DIR}/deps/kazmath/include
    ${CMAKE_CURRENT_SOURCE_DIR}/deps/xxtea
    ${CMAKE_CURRENT_SOURCE_DIR}/deps/zlib
)

set(DEPS_LIBSDIR
    ${CMAKE_CURRENT_SOURCE_DIR}/deps/zlib
)

if (NOT ANDROID)
    list(APPEND DEPS_INCLUDE ${CMAKE_CURRENT_SOURCE_DIR}/deps/GLEW/include/GL)
endif()


include (cocos2d_files.txt)

set(cocos2d_defines
-DCOCOS2D_DEBUG=1
-DCC_LUA_ENGINE_ENABLED=1
#-DCC_CURL_ENABLED=1
#-DCC_JPEG_ENABLED=1
#-DCC_TIFF_ENABLED=1
#-DCC_WEBP_ENABLED=1
#-DCC_SQLITE_ENABLED=1
#-DCC_CCSTUDIO_ENABLED=1
#-DCC_CCB_ENABLED=1
#-DCC_DRAGONBONES_ENABLED=1
#-DCC_NETWORK_ENABLED=1
#-DCC_FILTERS_ENABLED=1
-DUNICODE
-D_UNICODE
-D_CRT_SECURE_NO_WARNINGS
-D_SCL_SECURE_NO_WARNINGS)

add_definitions(${cocos2d_defines})

foreach(src_file ${SOURCE_FILES})
    get_filename_component (PATH ${src_file} PATH)
    string (REPLACE ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d-x/ "" PATH ${PATH})
    string (REPLACE cocos2d-x/ "" PATH ${PATH})
    string (REPLACE / \\ PATH ${PATH})
    source_group ("Source Files\\${PATH}" FILES ${src_file})
endforeach()


if (WIN32)
    set(PLATFORM_SPECIFIC_LIBS
        GLEW
        ws2_32
        wsock32
        zlibstatic
    )
    add_definitions(-DWIN32)
    add_definitions(-D_WINDOWS)
elseif(ANDROID)
    add_definitions(-DUSE_FILE32API)
    set(PLATFORM_SPECIFIC_LIBS
        z
    )
else()
    add_definitions(-DCC_TARGET_OS_MAC)
    add_definitions(-DUSE_FILE32API)

    INCLUDE_DIRECTORIES ( /System/Library/Frameworks )
    FIND_LIBRARY(COCOA_LIBRARY Cocoa)
    FIND_LIBRARY(OPENGL_LIBRARY OpenGL )
    FIND_LIBRARY(AUDIOTOOLBOX_LIBRARY AudioToolbox)
    FIND_LIBRARY(OPENAL_LIBRARY OpenAL )
    FIND_LIBRARY(QUARTZCORE_LIBRARY QuartzCore )
    FIND_LIBRARY(APPLICATIONSERVICES_LIBRARY ApplicationServices)
    FIND_LIBRARY(IOKIT_LIBRARY IOKit)
    FIND_LIBRARY(FOUNDATION_LIBRARY Foundation)


    set(PLATFORM_SPECIFIC_LIBS
        ${COCOA_LIBRARY}
        ${OPENGL_LIBRARY}
        ${OPENAL_LIBRARY}
        ${AUDIOTOOLBOX_LIBRARY}
        ${QUARTZCORE_LIBRARY}
        ${APPLICATIONSERVICES_LIBRARY}
        ${IOKIT_LIBRARY}
        ${FOUNDATION_LIBRARY}
        #-lwebp
      )
endif()


if (WIN32)
	link_directories(
	    ${DEPS_LIBSDIR}
	    ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d-x/external/libwebsockets/win32/lib
        $ENV{DXSDK_DIR}/Lib/x86
	)
elseif(ANDROID)
else()
    link_directories(
	    ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d-x/cocos2dx/platform/third_party/mac/libraries
	    ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d-x/external/libwebsockets/mac/lib
	)
endif()


list(APPEND INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/lualib)
set(COCOS2D_INCLUDES ${INCLUDE_DIRS})

add_subdirectory(lualib)

add_subdirectory(deps)
add_subdirectory(player)
add_subdirectory(cocos2dx_lua)

setup_library(cocos2d-x)

target_link_libraries(cocos2d-x 
    cocos2dx_lua lualib
   SDL2-static SDL2main SDL2-ttf freetype lua tolua stb_image xxtea tinyxml2 kazmath tinycthread
    ${PLATFORM_SPECIFIC_LIBS} 
    )

