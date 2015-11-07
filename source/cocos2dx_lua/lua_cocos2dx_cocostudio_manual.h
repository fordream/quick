#ifndef COCOS2DX_SCRIPTING_LUA_COCOS2DX_SUPPORT_LUA_COCOS2DX_COCOSTUDIO_MANUAL_H
#define COCOS2DX_SCRIPTING_LUA_COCOS2DX_SUPPORT_LUA_COCOS2DX_COCOSTUDIO_MANUAL_H

#ifdef __cplusplus
extern "C" {
#endif
#include "tolua++.h"
#ifdef __cplusplus
}
#endif

#include "cocoa/CCObject.h"

LUA_API int register_all_cocos2dx_studio_manual(lua_State* tolua_S);

struct LuaCocoStudioEventListenerData
{
    cocos2d::CCObject* objTarget;
    int eventType;
    
    LuaCocoStudioEventListenerData(cocos2d::CCObject* _objTarget, int _eventType):objTarget(_objTarget),eventType(_eventType)
    {
    }
};

#endif //#define COCOS2DX_SCRIPTING_LUA_COCOS2DX_SUPPORT_LUA_COCOS2DX_COCOSTUDIO_MANUAL_H
