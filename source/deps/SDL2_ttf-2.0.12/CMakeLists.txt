set(SOURCE_FILES SDL_ttf.c)

set(INCLUDE_DIRS ${DEPS_INCLUDE}) 

setup_library(SDL2-ttf)

target_link_libraries(SDL2-ttf SDL2-static)