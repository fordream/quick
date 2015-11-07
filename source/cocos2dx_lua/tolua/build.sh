#!/bin/bash
DIR=$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)
TOLUA="$QUICK_COCOS2DX_ROOT/bin/mac/tolua++"

cd "$DIR/"
${TOLUA} -L "$DIR/basic.lua" -o "../LuaCocos2d.cpp" Cocos2d.tolua
