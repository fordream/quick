file (GLOB SOURCE_FILES *.cpp *.c *.h)

set(INCLUDE_DIRS ${COCOS2D_INCLUDES})

add_definitions(${cocos2d_defines})

setup_library(cocos2dx_lua)
