file (GLOB SOURCE_FILES *.c)
set (INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/)

include_directories(${DEPS_INCLUDE})

setup_library(tolua)

target_link_libraries(lua)