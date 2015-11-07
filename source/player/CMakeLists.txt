
# project player

set (src_files sources/AppDelegate.cpp)

include_directories(
player/proj.win32
player/sources
${COCOS2D_INCLUDES}
)

if (ANDROID)
    add_library(player SHARED ${src_files})
else ()
    add_executable(player ${src_files})
endif()

if (WIN32)
    set_target_properties(player PROPERTIES WIN32_EXECUTABLE "true")
endif()


target_link_libraries(player cocos2d-x)
