/****************************************************************************
Copyright (c) 2010-2012 cocos2d-x.org
Copyright (c) 2008-2010 Ricardo Quesada
Copyright (c) 2011      Zynga Inc.
Copyright (c) Microsoft Open Technologies, Inc.

http://www.cocos2d-x.org

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/

#ifndef __COCOS2D_H__
#define __COCOS2D_H__

// 0x00 HI ME LO
// 00   02 02 05
#define COCOS2D_VERSION 0x00020206

//
// all cocos2d include files
//
#include "ccConfig.h"

// actions
#include "actions/CCAction.h"
#include "actions/CCActionInterval.h"
#include "actions/CCActionCamera.h"
#include "actions/CCActionManager.h"
#include "actions/CCActionEase.h"
#include "actions/CCActionPageTurn3D.h"
#include "actions/CCActionGrid.h"
#include "actions/CCActionProgressTimer.h"
#include "actions/CCActionGrid3D.h"
#include "actions/CCActionTiledGrid.h"
#include "actions/CCActionInstant.h"
#include "actions/CCActionTween.h"
#include "actions/CCActionCatmullRom.h"

// base_nodes
#include "base_nodes/CCNode.h"
#include "base_nodes/CCAtlasNode.h"

// cocoa
#include "cocoa/CCAffineTransform.h"
#include "cocoa/CCDictionary.h"
#include "cocoa/CCObject.h"
#include "cocoa/CCArray.h"
#include "cocoa/CCGeometry.h"
#include "cocoa/CCSet.h"
#include "cocoa/CCAutoreleasePool.h"
#include "cocoa/CCInteger.h"
#include "cocoa/CCFloat.h"
#include "cocoa/CCDouble.h"
#include "cocoa/CCBool.h"
#include "cocoa/CCString.h"
#include "cocoa/CCNS.h"
#include "cocoa/CCZone.h"
#include "cocoa/CCPointArray.h"

// draw nodes
#include "draw_nodes/CCDrawingPrimitives.h"
#include "draw_nodes/CCDrawNode.h"
#include "draw_nodes/CCShapeNode.h"

// effects
#include "effects/CCGrabber.h"
#include "effects/CCGrid.h"

// include
#include "CCEventType.h"
#include "CCProtocols.h"
#include "ccConfig.h"
#include "ccMacros.h"
#include "ccTypes.h"

// kazmath
#include "kazmath/kazmath.h"
#include "kazmath/GL/matrix.h"

// keypad_dispatcher
#include "keypad_dispatcher/CCKeypadDelegate.h"
#include "keypad_dispatcher/CCKeypadDispatcher.h"

// label_nodes
#include "label_nodes/CCLabelAtlas.h"
#include "label_nodes/CCLabelTTF.h"
#include "label_nodes/CCLabelBMFont.h"

// layers_scenes_transitions_nodes
#include "layers_scenes_transitions_nodes/CCLayer.h"
#include "layers_scenes_transitions_nodes/CCScene.h"
#include "layers_scenes_transitions_nodes/CCTransition.h"
#include "layers_scenes_transitions_nodes/CCTransitionPageTurn.h"
#include "layers_scenes_transitions_nodes/CCTransitionProgress.h"

// menu_nodes
#include "menu_nodes/CCMenu.h"
#include "menu_nodes/CCMenuItem.h"

// misc_nodes
#include "misc_nodes/CCClippingNode.h"
#include "misc_nodes/CCClippingRegionNode.h"
#include "misc_nodes/CCMotionStreak.h"
#include "misc_nodes/CCProgressTimer.h"
#include "misc_nodes/CCRenderTexture.h"

// particle_nodes
#include "Particle/CCParticleBatchNode.h"
#include "Particle/CCParticleSystem.h"
#include "Particle/CCParticleExamples.h"
#include "Particle/CCParticleSystemQuad.h"

// resources
#include "CCFileUtils.h"
#include "CCImage.h"
#include "CCSAXParser.h"

// platform
#include "platform/CCDevice.h"
#include "platform/CCCommon.h"
#include "platform/CCThread.h"
#include "platform/platform.h"
#include "platform/CCPlatformConfig.h"
#include "platform/CCPlatformMacros.h"
#include "platform/CCStdC.h"
#include "platform/CCApplication.h"
#include "platform/CCEGLView.h"
#include "platform/CCAccelerometer.h"

// shaders
#include "shaders/CCGLProgram.h"
#include "shaders/ccGLStateCache.h"
#include "shaders/CCShaderCache.h"
#include "shaders/ccShaders.h"

// sprite_nodes
#include "sprite_nodes/CCAnimation.h"
#include "sprite_nodes/CCAnimationCache.h"
#include "sprite_nodes/CCSprite.h"
#include "sprite_nodes/CCSpriteBatchNode.h"
#include "sprite_nodes/CCSpriteFrame.h"
#include "sprite_nodes/CCSpriteFrameCache.h"
#include "sprite_nodes/CCGraySprite.h"

// support
#include "support/ccUTF8.h"
#include "support/CCNotificationCenter.h"
#include "support/CCPointExtension.h"
#include "support/CCProfiling.h"
#include "support/user_default/CCUserDefault.h"
#include "support/CCVertex.h"
#include "tinyxml2.h"

// text_input_node
#include "text_input_node/CCIMEDelegate.h"
#include "text_input_node/CCIMEDispatcher.h"
#include "text_input_node/CCTextFieldTTF.h"

// textures
#include "textures/CCTexture2D.h"
#include "textures/CCTextureAtlas.h"
#include "textures/CCTextureCache.h"
#include "textures/CCTexturePVR.h"

// tilemap_parallax_nodes
#include "TileMap/CCParallaxNode.h"
#include "TileMap/CCTMXLayer.h"
#include "TileMap/CCTMXObjectGroup.h"
#include "TileMap/CCTMXTiledMap.h"
#include "TileMap/CCTMXXMLParser.h"

// touch_dispatcher
#include "touch_dispatcher/CCTouch.h"
#include "touch_dispatcher/CCTouchDelegateProtocol.h"
#include "touch_dispatcher/CCTouchDispatcher.h"
#include "touch_dispatcher/CCTouchHandler.h"

// root
#include "CCCamera.h"
#include "CCConfiguration.h"
#include "CCDirector.h"
#include "CCScheduler.h"

// component
#include "support/component/CCComponent.h"
#include "support/component/CCComponentContainer.h"

NS_CC_BEGIN

CC_DLL const char* cocos2dVersion();

NS_CC_END

#endif // __COCOS2D_H__
