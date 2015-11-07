#ifndef __LUACOCOS2D_H_
#define __LUACOCOS2D_H_

#ifdef __cplusplus
extern "C" {
#endif
#include "tolua++.h"
#ifdef __cplusplus
}
#endif

TOLUA_API int luaopen_Core(lua_State* tolua_S);
TOLUA_API int luaopen_Modules(lua_State* tolua_S);

#endif // __LUACOCOS2D_H_
