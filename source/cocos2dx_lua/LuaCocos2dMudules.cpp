/*
** Lua binding: Modules
** Generated automatically by tolua++-1.0.92 on 11/08/15 18:06:58.
*/

/****************************************************************************
 Copyright (c) 2011 cocos2d-x.org

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

extern "C" {
#include "tolua_fix.h"
}

#include <map>
#include <string>
#include "cocos2d.h"
#include "CCLuaEngine.h"

#include "Modules/ScrollView/CCTableView.h"
#include "Modules/EditBox/CCEditBox.h"
#include "Modules/UI/CocosGUI.h"
#include "Modules/Audio/SimpleAudioEngine.h"

using namespace cocos2d;
using namespace ui;
using namespace CocosDenshion;

/* Exported function */
TOLUA_API int  tolua_Modules_open (lua_State* tolua_S);


/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_CCPoint (lua_State* tolua_S)
{
 CCPoint* self = (CCPoint*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_Label (lua_State* tolua_S)
{
 Label* self = (Label*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCParticleSystemQuad (lua_State* tolua_S)
{
 CCParticleSystemQuad* self = (CCParticleSystemQuad*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCTextAlignment (lua_State* tolua_S)
{
 CCTextAlignment* self = (CCTextAlignment*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_LabelAtlas (lua_State* tolua_S)
{
 LabelAtlas* self = (LabelAtlas*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_ListView (lua_State* tolua_S)
{
 ListView* self = (ListView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCTMXMapInfo (lua_State* tolua_S)
{
 CCTMXMapInfo* self = (CCTMXMapInfo*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_PageView (lua_State* tolua_S)
{
 PageView* self = (PageView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCTMXTilesetInfo (lua_State* tolua_S)
{
 CCTMXTilesetInfo* self = (CCTMXTilesetInfo*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_UIRelativeAlign (lua_State* tolua_S)
{
 UIRelativeAlign* self = (UIRelativeAlign*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_ImageView (lua_State* tolua_S)
{
 ImageView* self = (ImageView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CheckBox (lua_State* tolua_S)
{
 CheckBox* self = (CheckBox*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_ccColor3B (lua_State* tolua_S)
{
 ccColor3B* self = (ccColor3B*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_RichElementCustomNode (lua_State* tolua_S)
{
 RichElementCustomNode* self = (RichElementCustomNode*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_LayoutParameter (lua_State* tolua_S)
{
 LayoutParameter* self = (LayoutParameter*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_LabelBMFont (lua_State* tolua_S)
{
 LabelBMFont* self = (LabelBMFont*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCTMXLayer (lua_State* tolua_S)
{
 CCTMXLayer* self = (CCTMXLayer*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_ccColor4F (lua_State* tolua_S)
{
 ccColor4F* self = (ccColor4F*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCSize (lua_State* tolua_S)
{
 CCSize* self = (CCSize*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCTableView (lua_State* tolua_S)
{
 CCTableView* self = (CCTableView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_Button (lua_State* tolua_S)
{
 Button* self = (Button*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCScrollView (lua_State* tolua_S)
{
 CCScrollView* self = (CCScrollView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_ccBlendFunc (lua_State* tolua_S)
{
 ccBlendFunc* self = (ccBlendFunc*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_RichElementImage (lua_State* tolua_S)
{
 RichElementImage* self = (RichElementImage*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_LinearLayoutParameter (lua_State* tolua_S)
{
 LinearLayoutParameter* self = (LinearLayoutParameter*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCRect (lua_State* tolua_S)
{
 CCRect* self = (CCRect*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCTMXLayerInfo (lua_State* tolua_S)
{
 CCTMXLayerInfo* self = (CCTMXLayerInfo*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_RichElementText (lua_State* tolua_S)
{
 RichElementText* self = (RichElementText*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_UIRelativeLayoutParameter (lua_State* tolua_S)
{
 UIRelativeLayoutParameter* self = (UIRelativeLayoutParameter*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_Layout (lua_State* tolua_S)
{
 Layout* self = (Layout*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_TextField (lua_State* tolua_S)
{
 TextField* self = (TextField*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_RichElement (lua_State* tolua_S)
{
 RichElement* self = (RichElement*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_ScrollView (lua_State* tolua_S)
{
 ScrollView* self = (ScrollView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_LoadingBar (lua_State* tolua_S)
{
 LoadingBar* self = (LoadingBar*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCVerticalTextAlignment (lua_State* tolua_S)
{
 CCVerticalTextAlignment* self = (CCVerticalTextAlignment*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_TouchGroup (lua_State* tolua_S)
{
 TouchGroup* self = (TouchGroup*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_GLubyte (lua_State* tolua_S)
{
 GLubyte* self = (GLubyte*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_RichText (lua_State* tolua_S)
{
 RichText* self = (RichText*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_Widget (lua_State* tolua_S)
{
 Widget* self = (Widget*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_Slider (lua_State* tolua_S)
{
 Slider* self = (Slider*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"CCParticleGalaxy");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCParticleGalaxy)), "CCParticleGalaxy");
 tolua_usertype(tolua_S,"UILayoutParameter");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(UILayoutParameter)), "UILayoutParameter");
 tolua_usertype(tolua_S,"CCParallaxNode");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCParallaxNode)), "CCParallaxNode");
 tolua_usertype(tolua_S,"ListView");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(ListView)), "ListView");
 tolua_usertype(tolua_S,"CCNode");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCNode)), "CCNode");
 tolua_usertype(tolua_S,"UIRelativeAlign");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(UIRelativeAlign)), "UIRelativeAlign");
 tolua_usertype(tolua_S,"CCSpriteBatchNode");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCSpriteBatchNode)), "CCSpriteBatchNode");
 tolua_usertype(tolua_S,"CheckBox");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CheckBox)), "CheckBox");
 tolua_usertype(tolua_S,"ccColor3B");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(ccColor3B)), "ccColor3B");
 tolua_usertype(tolua_S,"CCParticleFire");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCParticleFire)), "CCParticleFire");
 tolua_usertype(tolua_S,"RichElementCustomNode");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(RichElementCustomNode)), "RichElementCustomNode");
 tolua_usertype(tolua_S,"LayoutParameter");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(LayoutParameter)), "LayoutParameter");
 tolua_usertype(tolua_S,"LabelBMFont");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(LabelBMFont)), "LabelBMFont");
 tolua_usertype(tolua_S,"CCString");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCString)), "CCString");
 tolua_usertype(tolua_S,"CCParticleSystem");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCParticleSystem)), "CCParticleSystem");
 tolua_usertype(tolua_S,"CCTMXLayer");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCTMXLayer)), "CCTMXLayer");
 tolua_usertype(tolua_S,"CCParticleRain");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCParticleRain)), "CCParticleRain");
 tolua_usertype(tolua_S,"Button");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(Button)), "Button");
 tolua_usertype(tolua_S,"LinearLayoutParameter");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(LinearLayoutParameter)), "LinearLayoutParameter");
 tolua_usertype(tolua_S,"Layout");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(Layout)), "Layout");
 tolua_usertype(tolua_S,"CCParticleSmoke");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCParticleSmoke)), "CCParticleSmoke");
 tolua_usertype(tolua_S,"CCTMXObjectGroup");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCTMXObjectGroup)), "CCTMXObjectGroup");
 tolua_usertype(tolua_S,"LoadingBar");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(LoadingBar)), "LoadingBar");
 tolua_usertype(tolua_S,"RichElementText");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(RichElementText)), "RichElementText");
 tolua_usertype(tolua_S,"CCSprite");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCSprite)), "CCSprite");
 tolua_usertype(tolua_S,"UIScrollInterface");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(UIScrollInterface)), "UIScrollInterface");
 tolua_usertype(tolua_S,"Widget");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(Widget)), "Widget");
 tolua_usertype(tolua_S,"CCPoint");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCPoint)), "CCPoint");
 tolua_usertype(tolua_S,"CCLayer");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCLayer)), "CCLayer");
 tolua_usertype(tolua_S,"Label");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(Label)), "Label");
 tolua_usertype(tolua_S,"CCParticleSystemQuad");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCParticleSystemQuad)), "CCParticleSystemQuad");
 tolua_usertype(tolua_S,"CCTextAlignment");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCTextAlignment)), "CCTextAlignment");
 tolua_usertype(tolua_S,"UIRelativeLayoutParameter");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(UIRelativeLayoutParameter)), "UIRelativeLayoutParameter");
 tolua_usertype(tolua_S,"CCScrollView");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCScrollView)), "CCScrollView");
 tolua_usertype(tolua_S,"CCTMXMapInfo");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCTMXMapInfo)), "CCTMXMapInfo");
 tolua_usertype(tolua_S,"CCTMXTilesetInfo");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCTMXTilesetInfo)), "CCTMXTilesetInfo");
 tolua_usertype(tolua_S,"RichText");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(RichText)), "RichText");
 tolua_usertype(tolua_S,"TextField");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(TextField)), "TextField");
 tolua_usertype(tolua_S,"CCParticleSpiral");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCParticleSpiral)), "CCParticleSpiral");
 tolua_usertype(tolua_S,"SimpleAudioEngine");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(SimpleAudioEngine)), "SimpleAudioEngine");
 tolua_usertype(tolua_S,"CCEditBox");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCEditBox)), "CCEditBox");
 tolua_usertype(tolua_S,"CCScale9Sprite");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCScale9Sprite)), "CCScale9Sprite");
 tolua_usertype(tolua_S,"CCControlButton");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCControlButton)), "CCControlButton");
 
 tolua_usertype(tolua_S,"CCObject");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCObject)), "CCObject");
 tolua_usertype(tolua_S,"ccBlendFunc");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(ccBlendFunc)), "ccBlendFunc");
 tolua_usertype(tolua_S,"CCTableView");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCTableView)), "CCTableView");
 tolua_usertype(tolua_S,"CCTableViewCell");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCTableViewCell)), "CCTableViewCell");
 tolua_usertype(tolua_S,"tCCParticle");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(tCCParticle)), "tCCParticle");
 tolua_usertype(tolua_S,"CCParticleBatchNode");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCParticleBatchNode)), "CCParticleBatchNode");
 tolua_usertype(tolua_S,"ScrollView");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(ScrollView)), "ScrollView");
 tolua_usertype(tolua_S,"ccColor4F");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(ccColor4F)), "ccColor4F");
 tolua_usertype(tolua_S,"CCParticleSnow");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCParticleSnow)), "CCParticleSnow");
 tolua_usertype(tolua_S,"CCTouch");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCTouch)), "CCTouch");
 tolua_usertype(tolua_S,"CCTMXTiledMap");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCTMXTiledMap)), "CCTMXTiledMap");
 tolua_usertype(tolua_S,"CCParticleExplosion");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCParticleExplosion)), "CCParticleExplosion");
 tolua_usertype(tolua_S,"CCParticleMeteor");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCParticleMeteor)), "CCParticleMeteor");
 tolua_usertype(tolua_S,"CCSize");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCSize)), "CCSize");
 tolua_usertype(tolua_S,"LabelAtlas");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(LabelAtlas)), "LabelAtlas");
 tolua_usertype(tolua_S,"CCParticleFlower");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCParticleFlower)), "CCParticleFlower");
 tolua_usertype(tolua_S,"PageView");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(PageView)), "PageView");
 tolua_usertype(tolua_S,"CCDictionary");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCDictionary)), "CCDictionary");
 tolua_usertype(tolua_S,"RichElementImage");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(RichElementImage)), "RichElementImage");
 tolua_usertype(tolua_S,"GLubyte");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(GLubyte)), "GLubyte");
 tolua_usertype(tolua_S,"CCEvent");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCEvent)), "CCEvent");
 tolua_usertype(tolua_S,"CCParticleSun");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCParticleSun)), "CCParticleSun");
 tolua_usertype(tolua_S,"CCParticleFireworks");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCParticleFireworks)), "CCParticleFireworks");
 tolua_usertype(tolua_S,"CCTMXLayerInfo");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCTMXLayerInfo)), "CCTMXLayerInfo");
 tolua_usertype(tolua_S,"CCControl");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCControl)), "CCControl");
 tolua_usertype(tolua_S,"CCTexture2D");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCTexture2D)), "CCTexture2D");
 tolua_usertype(tolua_S,"UIHelper");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(UIHelper)), "UIHelper");
 tolua_usertype(tolua_S,"CCRect");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCRect)), "CCRect");
 tolua_usertype(tolua_S,"RichElement");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(RichElement)), "RichElement");
 tolua_usertype(tolua_S,"CCVerticalTextAlignment");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCVerticalTextAlignment)), "CCVerticalTextAlignment");
 tolua_usertype(tolua_S,"TouchGroup");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(TouchGroup)), "TouchGroup");
 tolua_usertype(tolua_S,"ImageView");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(ImageView)), "ImageView");
 tolua_usertype(tolua_S,"CCSpriteFrame");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCSpriteFrame)), "CCSpriteFrame");
 tolua_usertype(tolua_S,"CCArray");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCArray)), "CCArray");
 tolua_usertype(tolua_S,"Slider");
 toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(Slider)), "Slider");
}

/* method: new of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_new00
static int tolua_Modules_Button_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Button",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Button* tolua_ret = (Button*)  Mtolua_new((Button)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Button");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_new00_local
static int tolua_Modules_Button_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Button",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Button* tolua_ret = (Button*)  Mtolua_new((Button)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Button");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_delete00
static int tolua_Modules_Button_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Button",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Button* self = (Button*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_create00
static int tolua_Modules_Button_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Button",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Button* tolua_ret = (Button*)  Button::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Button");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadTextures of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_loadTextures00
static int tolua_Modules_Button_loadTextures00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Button",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Button* self = (Button*)  tolua_tousertype(tolua_S,1,0);
  const char* normal = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* selected = ((const char*)  tolua_tostring(tolua_S,3,0));
  const char* disabled = ((const char*)  tolua_tostring(tolua_S,4,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,5,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadTextures'", NULL);
#endif
  {
   self->loadTextures(normal,selected,disabled,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadTextures'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadTextureNormal of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_loadTextureNormal00
static int tolua_Modules_Button_loadTextureNormal00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Button",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Button* self = (Button*)  tolua_tousertype(tolua_S,1,0);
  const char* normal = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadTextureNormal'", NULL);
#endif
  {
   self->loadTextureNormal(normal,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadTextureNormal'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadTexturePressed of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_loadTexturePressed00
static int tolua_Modules_Button_loadTexturePressed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Button",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Button* self = (Button*)  tolua_tousertype(tolua_S,1,0);
  const char* selected = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadTexturePressed'", NULL);
#endif
  {
   self->loadTexturePressed(selected,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadTexturePressed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadTextureDisabled of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_loadTextureDisabled00
static int tolua_Modules_Button_loadTextureDisabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Button",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Button* self = (Button*)  tolua_tousertype(tolua_S,1,0);
  const char* disabled = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadTextureDisabled'", NULL);
#endif
  {
   self->loadTextureDisabled(disabled,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadTextureDisabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCapInsets of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_setCapInsets00
static int tolua_Modules_Button_setCapInsets00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Button",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Button* self = (Button*)  tolua_tousertype(tolua_S,1,0);
  const CCRect* capInsets = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCapInsets'", NULL);
#endif
  {
   self->setCapInsets(*capInsets);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCapInsets'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCapInsetsNormalRenderer of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_setCapInsetsNormalRenderer00
static int tolua_Modules_Button_setCapInsetsNormalRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Button",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Button* self = (Button*)  tolua_tousertype(tolua_S,1,0);
  const CCRect* capInsets = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCapInsetsNormalRenderer'", NULL);
#endif
  {
   self->setCapInsetsNormalRenderer(*capInsets);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCapInsetsNormalRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCapInsetNormalRenderer of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_getCapInsetNormalRenderer00
static int tolua_Modules_Button_getCapInsetNormalRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Button",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Button* self = (Button*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCapInsetNormalRenderer'", NULL);
#endif
  {
   const CCRect& tolua_ret = (const CCRect&)  self->getCapInsetNormalRenderer();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCRect");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCapInsetNormalRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCapInsetsPressedRenderer of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_setCapInsetsPressedRenderer00
static int tolua_Modules_Button_setCapInsetsPressedRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Button",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Button* self = (Button*)  tolua_tousertype(tolua_S,1,0);
  const CCRect* capInsets = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCapInsetsPressedRenderer'", NULL);
#endif
  {
   self->setCapInsetsPressedRenderer(*capInsets);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCapInsetsPressedRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCapInsetPressedRenderer of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_getCapInsetPressedRenderer00
static int tolua_Modules_Button_getCapInsetPressedRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Button",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Button* self = (Button*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCapInsetPressedRenderer'", NULL);
#endif
  {
   const CCRect& tolua_ret = (const CCRect&)  self->getCapInsetPressedRenderer();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCRect");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCapInsetPressedRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCapInsetsDisabledRenderer of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_setCapInsetsDisabledRenderer00
static int tolua_Modules_Button_setCapInsetsDisabledRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Button",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Button* self = (Button*)  tolua_tousertype(tolua_S,1,0);
  const CCRect* capInsets = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCapInsetsDisabledRenderer'", NULL);
#endif
  {
   self->setCapInsetsDisabledRenderer(*capInsets);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCapInsetsDisabledRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCapInsetDisabledRenderer of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_getCapInsetDisabledRenderer00
static int tolua_Modules_Button_getCapInsetDisabledRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Button",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Button* self = (Button*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCapInsetDisabledRenderer'", NULL);
#endif
  {
   const CCRect& tolua_ret = (const CCRect&)  self->getCapInsetDisabledRenderer();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCRect");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCapInsetDisabledRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnchorPoint of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_setAnchorPoint00
static int tolua_Modules_Button_setAnchorPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Button",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Button* self = (Button*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* pt = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnchorPoint'", NULL);
#endif
  {
   self->setAnchorPoint(*pt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnchorPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale9Enabled of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_setScale9Enabled00
static int tolua_Modules_Button_setScale9Enabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Button",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Button* self = (Button*)  tolua_tousertype(tolua_S,1,0);
  bool able = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale9Enabled'", NULL);
#endif
  {
   self->setScale9Enabled(able);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScale9Enabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isScale9Enabled of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_isScale9Enabled00
static int tolua_Modules_Button_isScale9Enabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Button",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Button* self = (Button*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isScale9Enabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isScale9Enabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isScale9Enabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPressedActionEnabled of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_setPressedActionEnabled00
static int tolua_Modules_Button_setPressedActionEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Button",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Button* self = (Button*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPressedActionEnabled'", NULL);
#endif
  {
   self->setPressedActionEnabled(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPressedActionEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ignoreContentAdaptWithSize of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_ignoreContentAdaptWithSize00
static int tolua_Modules_Button_ignoreContentAdaptWithSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Button",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Button* self = (Button*)  tolua_tousertype(tolua_S,1,0);
  bool ignore = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ignoreContentAdaptWithSize'", NULL);
#endif
  {
   self->ignoreContentAdaptWithSize(ignore);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ignoreContentAdaptWithSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentSize of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_getContentSize00
static int tolua_Modules_Button_getContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Button",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Button* self = (const Button*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getContentSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVirtualRenderer of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_getVirtualRenderer00
static int tolua_Modules_Button_getVirtualRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Button",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Button* self = (Button*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVirtualRenderer'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getVirtualRenderer();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVirtualRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_getDescription00
static int tolua_Modules_Button_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Button",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Button* self = (const Button*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->getDescription();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTitleText of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_setTitleText00
static int tolua_Modules_Button_setTitleText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Button",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Button* self = (Button*)  tolua_tousertype(tolua_S,1,0);
  const std::string text = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTitleText'", NULL);
#endif
  {
   self->setTitleText(text);
   tolua_pushcppstring(tolua_S,(const char*)text);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTitleText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTitleText of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_getTitleText00
static int tolua_Modules_Button_getTitleText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Button",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Button* self = (const Button*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTitleText'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getTitleText();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTitleText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTitleColor of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_setTitleColor00
static int tolua_Modules_Button_setTitleColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Button",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Button* self = (Button*)  tolua_tousertype(tolua_S,1,0);
  const ccColor3B* color = ((const ccColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTitleColor'", NULL);
#endif
  {
   self->setTitleColor(*color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTitleColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTitleColor of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_getTitleColor00
static int tolua_Modules_Button_getTitleColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Button",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Button* self = (const Button*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTitleColor'", NULL);
#endif
  {
   const ccColor3B& tolua_ret = (const ccColor3B&)  self->getTitleColor();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const ccColor3B");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTitleColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTitleFontSize of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_setTitleFontSize00
static int tolua_Modules_Button_setTitleFontSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Button",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Button* self = (Button*)  tolua_tousertype(tolua_S,1,0);
  float size = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTitleFontSize'", NULL);
#endif
  {
   self->setTitleFontSize(size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTitleFontSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTitleFontSize of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_getTitleFontSize00
static int tolua_Modules_Button_getTitleFontSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Button",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Button* self = (const Button*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTitleFontSize'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getTitleFontSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTitleFontSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTitleFontName of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_setTitleFontName00
static int tolua_Modules_Button_setTitleFontName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Button",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Button* self = (Button*)  tolua_tousertype(tolua_S,1,0);
  const char* fontName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTitleFontName'", NULL);
#endif
  {
   self->setTitleFontName(fontName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTitleFontName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTitleFontName of class  Button */
#ifndef TOLUA_DISABLE_tolua_Modules_Button_getTitleFontName00
static int tolua_Modules_Button_getTitleFontName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Button",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Button* self = (const Button*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTitleFontName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getTitleFontName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTitleFontName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CheckBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CheckBox_new00
static int tolua_Modules_CheckBox_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CheckBox* tolua_ret = (CheckBox*)  Mtolua_new((CheckBox)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CheckBox");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CheckBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CheckBox_new00_local
static int tolua_Modules_CheckBox_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CheckBox* tolua_ret = (CheckBox*)  Mtolua_new((CheckBox)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CheckBox");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CheckBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CheckBox_delete00
static int tolua_Modules_CheckBox_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CheckBox* self = (CheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CheckBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CheckBox_create00
static int tolua_Modules_CheckBox_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CheckBox* tolua_ret = (CheckBox*)  CheckBox::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CheckBox");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadTextures of class  CheckBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CheckBox_loadTextures00
static int tolua_Modules_CheckBox_loadTextures00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isstring(tolua_S,5,0,&tolua_err) ||
     !tolua_isstring(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CheckBox* self = (CheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* backGround = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* backGroundSelected = ((const char*)  tolua_tostring(tolua_S,3,0));
  const char* cross = ((const char*)  tolua_tostring(tolua_S,4,0));
  const char* backGroundDisabled = ((const char*)  tolua_tostring(tolua_S,5,0));
  const char* frontCrossDisabled = ((const char*)  tolua_tostring(tolua_S,6,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,7,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadTextures'", NULL);
#endif
  {
   self->loadTextures(backGround,backGroundSelected,cross,backGroundDisabled,frontCrossDisabled,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadTextures'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadTextureBackGround of class  CheckBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CheckBox_loadTextureBackGround00
static int tolua_Modules_CheckBox_loadTextureBackGround00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CheckBox* self = (CheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* backGround = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType type = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadTextureBackGround'", NULL);
#endif
  {
   self->loadTextureBackGround(backGround,type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadTextureBackGround'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadTextureBackGroundSelected of class  CheckBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CheckBox_loadTextureBackGroundSelected00
static int tolua_Modules_CheckBox_loadTextureBackGroundSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CheckBox* self = (CheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* backGroundSelected = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadTextureBackGroundSelected'", NULL);
#endif
  {
   self->loadTextureBackGroundSelected(backGroundSelected,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadTextureBackGroundSelected'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadTextureFrontCross of class  CheckBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CheckBox_loadTextureFrontCross00
static int tolua_Modules_CheckBox_loadTextureFrontCross00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CheckBox* self = (CheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* cross = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadTextureFrontCross'", NULL);
#endif
  {
   self->loadTextureFrontCross(cross,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadTextureFrontCross'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadTextureBackGroundDisabled of class  CheckBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CheckBox_loadTextureBackGroundDisabled00
static int tolua_Modules_CheckBox_loadTextureBackGroundDisabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CheckBox* self = (CheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* backGroundDisabled = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadTextureBackGroundDisabled'", NULL);
#endif
  {
   self->loadTextureBackGroundDisabled(backGroundDisabled,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadTextureBackGroundDisabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadTextureFrontCrossDisabled of class  CheckBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CheckBox_loadTextureFrontCrossDisabled00
static int tolua_Modules_CheckBox_loadTextureFrontCrossDisabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CheckBox* self = (CheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* frontCrossDisabled = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadTextureFrontCrossDisabled'", NULL);
#endif
  {
   self->loadTextureFrontCrossDisabled(frontCrossDisabled,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadTextureFrontCrossDisabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSelectedState of class  CheckBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CheckBox_setSelectedState00
static int tolua_Modules_CheckBox_setSelectedState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CheckBox",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CheckBox* self = (CheckBox*)  tolua_tousertype(tolua_S,1,0);
  bool selected = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelectedState'", NULL);
#endif
  {
   self->setSelectedState(selected);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelectedState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSelectedState of class  CheckBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CheckBox_getSelectedState00
static int tolua_Modules_CheckBox_getSelectedState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CheckBox* self = (CheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSelectedState'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getSelectedState();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSelectedState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnchorPoint of class  CheckBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CheckBox_setAnchorPoint00
static int tolua_Modules_CheckBox_setAnchorPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CheckBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CheckBox* self = (CheckBox*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* pt = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnchorPoint'", NULL);
#endif
  {
   self->setAnchorPoint(*pt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnchorPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchEnded of class  CheckBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CheckBox_onTouchEnded00
static int tolua_Modules_CheckBox_onTouchEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CheckBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CheckBox* self = (CheckBox*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* touch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* unused_event = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchEnded'", NULL);
#endif
  {
   self->onTouchEnded(touch,unused_event);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentSize of class  CheckBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CheckBox_getContentSize00
static int tolua_Modules_CheckBox_getContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CheckBox* self = (const CheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getContentSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVirtualRenderer of class  CheckBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CheckBox_getVirtualRenderer00
static int tolua_Modules_CheckBox_getVirtualRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CheckBox* self = (CheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVirtualRenderer'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getVirtualRenderer();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVirtualRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  CheckBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CheckBox_getDescription00
static int tolua_Modules_CheckBox_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CheckBox* self = (const CheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->getDescription();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: seekWidgetByTag of class  UIHelper */
#ifndef TOLUA_DISABLE_tolua_Modules_UIHelper_seekWidgetByTag00
static int tolua_Modules_UIHelper_seekWidgetByTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIHelper",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Widget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* root = ((Widget*)  tolua_tousertype(tolua_S,2,0));
  int tag = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   Widget* tolua_ret = (Widget*)  UIHelper::seekWidgetByTag(root,tag);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Widget");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'seekWidgetByTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: seekWidgetByName of class  UIHelper */
#ifndef TOLUA_DISABLE_tolua_Modules_UIHelper_seekWidgetByName00
static int tolua_Modules_UIHelper_seekWidgetByName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIHelper",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Widget",0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* root = ((Widget*)  tolua_tousertype(tolua_S,2,0));
  const char* name = ((const char*)  tolua_tostring(tolua_S,3,0));
  {
   Widget* tolua_ret = (Widget*)  UIHelper::seekWidgetByName(root,name);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Widget");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'seekWidgetByName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: seekWidgetByRelativeName of class  UIHelper */
#ifndef TOLUA_DISABLE_tolua_Modules_UIHelper_seekWidgetByRelativeName00
static int tolua_Modules_UIHelper_seekWidgetByRelativeName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIHelper",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Widget",0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* root = ((Widget*)  tolua_tousertype(tolua_S,2,0));
  const char* name = ((const char*)  tolua_tostring(tolua_S,3,0));
  {
   Widget* tolua_ret = (Widget*)  UIHelper::seekWidgetByRelativeName(root,name);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Widget");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'seekWidgetByRelativeName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: seekActionWidgetByActionTag of class  UIHelper */
#ifndef TOLUA_DISABLE_tolua_Modules_UIHelper_seekActionWidgetByActionTag00
static int tolua_Modules_UIHelper_seekActionWidgetByActionTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIHelper",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Widget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* root = ((Widget*)  tolua_tousertype(tolua_S,2,0));
  int tag = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   Widget* tolua_ret = (Widget*)  UIHelper::seekActionWidgetByActionTag(root,tag);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Widget");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'seekActionWidgetByActionTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  ImageView */
#ifndef TOLUA_DISABLE_tolua_Modules_ImageView_new00
static int tolua_Modules_ImageView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ImageView* tolua_ret = (ImageView*)  Mtolua_new((ImageView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"ImageView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  ImageView */
#ifndef TOLUA_DISABLE_tolua_Modules_ImageView_new00_local
static int tolua_Modules_ImageView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ImageView* tolua_ret = (ImageView*)  Mtolua_new((ImageView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"ImageView");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  ImageView */
#ifndef TOLUA_DISABLE_tolua_Modules_ImageView_delete00
static int tolua_Modules_ImageView_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ImageView* self = (ImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  ImageView */
#ifndef TOLUA_DISABLE_tolua_Modules_ImageView_create00
static int tolua_Modules_ImageView_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ImageView* tolua_ret = (ImageView*)  ImageView::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"ImageView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadTexture of class  ImageView */
#ifndef TOLUA_DISABLE_tolua_Modules_ImageView_loadTexture00
static int tolua_Modules_ImageView_loadTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ImageView",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ImageView* self = (ImageView*)  tolua_tousertype(tolua_S,1,0);
  const char* fileName = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadTexture'", NULL);
#endif
  {
   self->loadTexture(fileName,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTextureRect of class  ImageView */
#ifndef TOLUA_DISABLE_tolua_Modules_ImageView_setTextureRect00
static int tolua_Modules_ImageView_setTextureRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ImageView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ImageView* self = (ImageView*)  tolua_tousertype(tolua_S,1,0);
  const CCRect* rect = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextureRect'", NULL);
#endif
  {
   self->setTextureRect(*rect);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextureRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale9Enabled of class  ImageView */
#ifndef TOLUA_DISABLE_tolua_Modules_ImageView_setScale9Enabled00
static int tolua_Modules_ImageView_setScale9Enabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ImageView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ImageView* self = (ImageView*)  tolua_tousertype(tolua_S,1,0);
  bool able = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale9Enabled'", NULL);
#endif
  {
   self->setScale9Enabled(able);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScale9Enabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCapInsets of class  ImageView */
#ifndef TOLUA_DISABLE_tolua_Modules_ImageView_setCapInsets00
static int tolua_Modules_ImageView_setCapInsets00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ImageView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ImageView* self = (ImageView*)  tolua_tousertype(tolua_S,1,0);
  const CCRect* capInsets = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCapInsets'", NULL);
#endif
  {
   self->setCapInsets(*capInsets);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCapInsets'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFlipX of class  ImageView */
#ifndef TOLUA_DISABLE_tolua_Modules_ImageView_setFlipX00
static int tolua_Modules_ImageView_setFlipX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ImageView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ImageView* self = (ImageView*)  tolua_tousertype(tolua_S,1,0);
  bool flipX = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFlipX'", NULL);
#endif
  {
   self->setFlipX(flipX);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFlipX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFlipY of class  ImageView */
#ifndef TOLUA_DISABLE_tolua_Modules_ImageView_setFlipY00
static int tolua_Modules_ImageView_setFlipY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ImageView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ImageView* self = (ImageView*)  tolua_tousertype(tolua_S,1,0);
  bool flipY = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFlipY'", NULL);
#endif
  {
   self->setFlipY(flipY);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFlipY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFlipX of class  ImageView */
#ifndef TOLUA_DISABLE_tolua_Modules_ImageView_isFlipX00
static int tolua_Modules_ImageView_isFlipX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ImageView* self = (ImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFlipX'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFlipX();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFlipX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFlipY of class  ImageView */
#ifndef TOLUA_DISABLE_tolua_Modules_ImageView_isFlipY00
static int tolua_Modules_ImageView_isFlipY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ImageView* self = (ImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFlipY'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFlipY();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFlipY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnchorPoint of class  ImageView */
#ifndef TOLUA_DISABLE_tolua_Modules_ImageView_setAnchorPoint00
static int tolua_Modules_ImageView_setAnchorPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ImageView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ImageView* self = (ImageView*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* pt = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnchorPoint'", NULL);
#endif
  {
   self->setAnchorPoint(*pt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnchorPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ignoreContentAdaptWithSize of class  ImageView */
#ifndef TOLUA_DISABLE_tolua_Modules_ImageView_ignoreContentAdaptWithSize00
static int tolua_Modules_ImageView_ignoreContentAdaptWithSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ImageView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ImageView* self = (ImageView*)  tolua_tousertype(tolua_S,1,0);
  bool ignore = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ignoreContentAdaptWithSize'", NULL);
#endif
  {
   self->ignoreContentAdaptWithSize(ignore);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ignoreContentAdaptWithSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  ImageView */
#ifndef TOLUA_DISABLE_tolua_Modules_ImageView_getDescription00
static int tolua_Modules_ImageView_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const ImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const ImageView* self = (const ImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->getDescription();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentSize of class  ImageView */
#ifndef TOLUA_DISABLE_tolua_Modules_ImageView_getContentSize00
static int tolua_Modules_ImageView_getContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const ImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const ImageView* self = (const ImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getContentSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVirtualRenderer of class  ImageView */
#ifndef TOLUA_DISABLE_tolua_Modules_ImageView_getVirtualRenderer00
static int tolua_Modules_ImageView_getVirtualRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ImageView* self = (ImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVirtualRenderer'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getVirtualRenderer();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVirtualRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Label */
#ifndef TOLUA_DISABLE_tolua_Modules_Label_new00
static int tolua_Modules_Label_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Label",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Label* tolua_ret = (Label*)  Mtolua_new((Label)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Label");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Label */
#ifndef TOLUA_DISABLE_tolua_Modules_Label_new00_local
static int tolua_Modules_Label_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Label",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Label* tolua_ret = (Label*)  Mtolua_new((Label)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Label");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Label */
#ifndef TOLUA_DISABLE_tolua_Modules_Label_delete00
static int tolua_Modules_Label_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Label",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Label* self = (Label*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  Label */
#ifndef TOLUA_DISABLE_tolua_Modules_Label_create00
static int tolua_Modules_Label_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Label",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Label* tolua_ret = (Label*)  Label::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Label");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setText of class  Label */
#ifndef TOLUA_DISABLE_tolua_Modules_Label_setText00
static int tolua_Modules_Label_setText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Label",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Label* self = (Label*)  tolua_tousertype(tolua_S,1,0);
  const std::string text = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setText'", NULL);
#endif
  {
   self->setText(text);
   tolua_pushcppstring(tolua_S,(const char*)text);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStringValue of class  Label */
#ifndef TOLUA_DISABLE_tolua_Modules_Label_getStringValue00
static int tolua_Modules_Label_getStringValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Label",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Label* self = (Label*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStringValue'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getStringValue();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStringValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStringLength of class  Label */
#ifndef TOLUA_DISABLE_tolua_Modules_Label_getStringLength00
static int tolua_Modules_Label_getStringLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Label",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Label* self = (Label*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStringLength'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getStringLength();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStringLength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFontSize of class  Label */
#ifndef TOLUA_DISABLE_tolua_Modules_Label_setFontSize00
static int tolua_Modules_Label_setFontSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Label",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Label* self = (Label*)  tolua_tousertype(tolua_S,1,0);
  int size = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFontSize'", NULL);
#endif
  {
   self->setFontSize(size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFontSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFontSize of class  Label */
#ifndef TOLUA_DISABLE_tolua_Modules_Label_getFontSize00
static int tolua_Modules_Label_getFontSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Label",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Label* self = (Label*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFontSize'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getFontSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFontSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFontName of class  Label */
#ifndef TOLUA_DISABLE_tolua_Modules_Label_setFontName00
static int tolua_Modules_Label_setFontName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Label",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Label* self = (Label*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFontName'", NULL);
#endif
  {
   self->setFontName(name);
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFontName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFontName of class  Label */
#ifndef TOLUA_DISABLE_tolua_Modules_Label_getFontName00
static int tolua_Modules_Label_getFontName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Label",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Label* self = (Label*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFontName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getFontName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFontName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchScaleChangeEnabled of class  Label */
#ifndef TOLUA_DISABLE_tolua_Modules_Label_setTouchScaleChangeEnabled00
static int tolua_Modules_Label_setTouchScaleChangeEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Label",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Label* self = (Label*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchScaleChangeEnabled'", NULL);
#endif
  {
   self->setTouchScaleChangeEnabled(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchScaleChangeEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchScaleChangeEnabled of class  Label */
#ifndef TOLUA_DISABLE_tolua_Modules_Label_isTouchScaleChangeEnabled00
static int tolua_Modules_Label_isTouchScaleChangeEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Label",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Label* self = (Label*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchScaleChangeEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchScaleChangeEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchScaleChangeEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnchorPoint of class  Label */
#ifndef TOLUA_DISABLE_tolua_Modules_Label_setAnchorPoint00
static int tolua_Modules_Label_setAnchorPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Label",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Label* self = (Label*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* pt = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnchorPoint'", NULL);
#endif
  {
   self->setAnchorPoint(*pt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnchorPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentSize of class  Label */
#ifndef TOLUA_DISABLE_tolua_Modules_Label_getContentSize00
static int tolua_Modules_Label_getContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Label",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Label* self = (const Label*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getContentSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVirtualRenderer of class  Label */
#ifndef TOLUA_DISABLE_tolua_Modules_Label_getVirtualRenderer00
static int tolua_Modules_Label_getVirtualRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Label",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Label* self = (Label*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVirtualRenderer'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getVirtualRenderer();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVirtualRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  Label */
#ifndef TOLUA_DISABLE_tolua_Modules_Label_getDescription00
static int tolua_Modules_Label_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Label",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Label* self = (const Label*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->getDescription();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTextAreaSize of class  Label */
#ifndef TOLUA_DISABLE_tolua_Modules_Label_setTextAreaSize00
static int tolua_Modules_Label_setTextAreaSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Label",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Label* self = (Label*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* size = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextAreaSize'", NULL);
#endif
  {
   self->setTextAreaSize(*size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextAreaSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTextAreaSize of class  Label */
#ifndef TOLUA_DISABLE_tolua_Modules_Label_getTextAreaSize00
static int tolua_Modules_Label_getTextAreaSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Label",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Label* self = (Label*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTextAreaSize'", NULL);
#endif
  {
   CCSize tolua_ret = (CCSize)  self->getTextAreaSize();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCSize)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCSize));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTextAreaSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTextHorizontalAlignment of class  Label */
#ifndef TOLUA_DISABLE_tolua_Modules_Label_setTextHorizontalAlignment00
static int tolua_Modules_Label_setTextHorizontalAlignment00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Label",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCTextAlignment",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Label* self = (Label*)  tolua_tousertype(tolua_S,1,0);
  CCTextAlignment alignment = *((CCTextAlignment*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextHorizontalAlignment'", NULL);
#endif
  {
   self->setTextHorizontalAlignment(alignment);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextHorizontalAlignment'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTextHorizontalAlignment of class  Label */
#ifndef TOLUA_DISABLE_tolua_Modules_Label_getTextHorizontalAlignment00
static int tolua_Modules_Label_getTextHorizontalAlignment00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Label",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Label* self = (Label*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTextHorizontalAlignment'", NULL);
#endif
  {
   CCTextAlignment tolua_ret = (CCTextAlignment)  self->getTextHorizontalAlignment();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCTextAlignment)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCTextAlignment");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCTextAlignment));
     tolua_pushusertype(tolua_S,tolua_obj,"CCTextAlignment");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTextHorizontalAlignment'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTextVerticalAlignment of class  Label */
#ifndef TOLUA_DISABLE_tolua_Modules_Label_setTextVerticalAlignment00
static int tolua_Modules_Label_setTextVerticalAlignment00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Label",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCVerticalTextAlignment",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Label* self = (Label*)  tolua_tousertype(tolua_S,1,0);
  CCVerticalTextAlignment alignment = *((CCVerticalTextAlignment*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextVerticalAlignment'", NULL);
#endif
  {
   self->setTextVerticalAlignment(alignment);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextVerticalAlignment'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTextVerticalAlignment of class  Label */
#ifndef TOLUA_DISABLE_tolua_Modules_Label_getTextVerticalAlignment00
static int tolua_Modules_Label_getTextVerticalAlignment00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Label",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Label* self = (Label*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTextVerticalAlignment'", NULL);
#endif
  {
   CCVerticalTextAlignment tolua_ret = (CCVerticalTextAlignment)  self->getTextVerticalAlignment();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCVerticalTextAlignment)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCVerticalTextAlignment");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCVerticalTextAlignment));
     tolua_pushusertype(tolua_S,tolua_obj,"CCVerticalTextAlignment");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTextVerticalAlignment'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  LabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Modules_LabelAtlas_new00
static int tolua_Modules_LabelAtlas_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   LabelAtlas* tolua_ret = (LabelAtlas*)  Mtolua_new((LabelAtlas)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"LabelAtlas");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  LabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Modules_LabelAtlas_new00_local
static int tolua_Modules_LabelAtlas_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   LabelAtlas* tolua_ret = (LabelAtlas*)  Mtolua_new((LabelAtlas)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"LabelAtlas");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  LabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Modules_LabelAtlas_delete00
static int tolua_Modules_LabelAtlas_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LabelAtlas* self = (LabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  LabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Modules_LabelAtlas_create00
static int tolua_Modules_LabelAtlas_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   LabelAtlas* tolua_ret = (LabelAtlas*)  LabelAtlas::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"LabelAtlas");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setProperty of class  LabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Modules_LabelAtlas_setProperty00
static int tolua_Modules_LabelAtlas_setProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LabelAtlas",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LabelAtlas* self = (LabelAtlas*)  tolua_tousertype(tolua_S,1,0);
  const std::string stringValue = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string charMapFile = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  int itemWidth = ((int)  tolua_tonumber(tolua_S,4,0));
  int itemHeight = ((int)  tolua_tonumber(tolua_S,5,0));
  const std::string startCharMap = ((const std::string)  tolua_tocppstring(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setProperty'", NULL);
#endif
  {
   self->setProperty(stringValue,charMapFile,itemWidth,itemHeight,startCharMap);
   tolua_pushcppstring(tolua_S,(const char*)stringValue);
   tolua_pushcppstring(tolua_S,(const char*)charMapFile);
   tolua_pushcppstring(tolua_S,(const char*)startCharMap);
  }
 }
 return 3;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setStringValue of class  LabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Modules_LabelAtlas_setStringValue00
static int tolua_Modules_LabelAtlas_setStringValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LabelAtlas",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LabelAtlas* self = (LabelAtlas*)  tolua_tousertype(tolua_S,1,0);
  const std::string value = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setStringValue'", NULL);
#endif
  {
   self->setStringValue(value);
   tolua_pushcppstring(tolua_S,(const char*)value);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setStringValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStringValue of class  LabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Modules_LabelAtlas_getStringValue00
static int tolua_Modules_LabelAtlas_getStringValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const LabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const LabelAtlas* self = (const LabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStringValue'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getStringValue();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStringValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnchorPoint of class  LabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Modules_LabelAtlas_setAnchorPoint00
static int tolua_Modules_LabelAtlas_setAnchorPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LabelAtlas",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LabelAtlas* self = (LabelAtlas*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* pt = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnchorPoint'", NULL);
#endif
  {
   self->setAnchorPoint(*pt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnchorPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentSize of class  LabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Modules_LabelAtlas_getContentSize00
static int tolua_Modules_LabelAtlas_getContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const LabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const LabelAtlas* self = (const LabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getContentSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVirtualRenderer of class  LabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Modules_LabelAtlas_getVirtualRenderer00
static int tolua_Modules_LabelAtlas_getVirtualRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LabelAtlas* self = (LabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVirtualRenderer'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getVirtualRenderer();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVirtualRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  LabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Modules_LabelAtlas_getDescription00
static int tolua_Modules_LabelAtlas_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const LabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const LabelAtlas* self = (const LabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->getDescription();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTexture of class  LabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Modules_LabelAtlas_setTexture00
static int tolua_Modules_LabelAtlas_setTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LabelAtlas",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LabelAtlas* self = (LabelAtlas*)  tolua_tousertype(tolua_S,1,0);
  const std::string filename = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTexture'", NULL);
#endif
  {
   self->setTexture(filename);
   tolua_pushcppstring(tolua_S,(const char*)filename);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTexture of class  LabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Modules_LabelAtlas_getTexture00
static int tolua_Modules_LabelAtlas_getTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LabelAtlas* self = (LabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTexture'", NULL);
#endif
  {
   const std::string tolua_ret = (const std::string)  self->getTexture();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setStartChar of class  LabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Modules_LabelAtlas_setStartChar00
static int tolua_Modules_LabelAtlas_setStartChar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LabelAtlas",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LabelAtlas* self = (LabelAtlas*)  tolua_tousertype(tolua_S,1,0);
  const std::string startCharMap = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setStartChar'", NULL);
#endif
  {
   self->setStartChar(startCharMap);
   tolua_pushcppstring(tolua_S,(const char*)startCharMap);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setStartChar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStartChar of class  LabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Modules_LabelAtlas_getStartChar00
static int tolua_Modules_LabelAtlas_getStartChar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LabelAtlas* self = (LabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStartChar'", NULL);
#endif
  {
   const std::string tolua_ret = (const std::string)  self->getStartChar();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStartChar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCharSize of class  LabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Modules_LabelAtlas_setCharSize00
static int tolua_Modules_LabelAtlas_setCharSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LabelAtlas",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LabelAtlas* self = (LabelAtlas*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* sz = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCharSize'", NULL);
#endif
  {
   self->setCharSize(*sz);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCharSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCharSize of class  LabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Modules_LabelAtlas_getCharSize00
static int tolua_Modules_LabelAtlas_getCharSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LabelAtlas* self = (LabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCharSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getCharSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCharSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setText of class  LabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Modules_LabelAtlas_setText00
static int tolua_Modules_LabelAtlas_setText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LabelAtlas",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LabelAtlas* self = (LabelAtlas*)  tolua_tousertype(tolua_S,1,0);
  const std::string txt = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setText'", NULL);
#endif
  {
   self->setText(txt);
   tolua_pushcppstring(tolua_S,(const char*)txt);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getText of class  LabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Modules_LabelAtlas_getText00
static int tolua_Modules_LabelAtlas_getText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const LabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const LabelAtlas* self = (const LabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getText'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getText();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  LabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Modules_LabelBMFont_new00
static int tolua_Modules_LabelBMFont_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   LabelBMFont* tolua_ret = (LabelBMFont*)  Mtolua_new((LabelBMFont)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"LabelBMFont");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  LabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Modules_LabelBMFont_new00_local
static int tolua_Modules_LabelBMFont_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   LabelBMFont* tolua_ret = (LabelBMFont*)  Mtolua_new((LabelBMFont)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"LabelBMFont");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  LabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Modules_LabelBMFont_delete00
static int tolua_Modules_LabelBMFont_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LabelBMFont* self = (LabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  LabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Modules_LabelBMFont_create00
static int tolua_Modules_LabelBMFont_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   LabelBMFont* tolua_ret = (LabelBMFont*)  LabelBMFont::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"LabelBMFont");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFntFile of class  LabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Modules_LabelBMFont_setFntFile00
static int tolua_Modules_LabelBMFont_setFntFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LabelBMFont",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LabelBMFont* self = (LabelBMFont*)  tolua_tousertype(tolua_S,1,0);
  const char* fileName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFntFile'", NULL);
#endif
  {
   self->setFntFile(fileName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFntFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setText of class  LabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Modules_LabelBMFont_setText00
static int tolua_Modules_LabelBMFont_setText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LabelBMFont",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LabelBMFont* self = (LabelBMFont*)  tolua_tousertype(tolua_S,1,0);
  const char* value = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setText'", NULL);
#endif
  {
   self->setText(value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStringValue of class  LabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Modules_LabelBMFont_getStringValue00
static int tolua_Modules_LabelBMFont_getStringValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LabelBMFont* self = (LabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStringValue'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getStringValue();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStringValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnchorPoint of class  LabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Modules_LabelBMFont_setAnchorPoint00
static int tolua_Modules_LabelBMFont_setAnchorPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LabelBMFont",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LabelBMFont* self = (LabelBMFont*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* pt = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnchorPoint'", NULL);
#endif
  {
   self->setAnchorPoint(*pt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnchorPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentSize of class  LabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Modules_LabelBMFont_getContentSize00
static int tolua_Modules_LabelBMFont_getContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const LabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const LabelBMFont* self = (const LabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getContentSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVirtualRenderer of class  LabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Modules_LabelBMFont_getVirtualRenderer00
static int tolua_Modules_LabelBMFont_getVirtualRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LabelBMFont* self = (LabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVirtualRenderer'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getVirtualRenderer();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVirtualRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  LabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Modules_LabelBMFont_getDescription00
static int tolua_Modules_LabelBMFont_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const LabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const LabelBMFont* self = (const LabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->getDescription();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_new00
static int tolua_Modules_Layout_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Layout* tolua_ret = (Layout*)  Mtolua_new((Layout)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Layout");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_new00_local
static int tolua_Modules_Layout_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Layout* tolua_ret = (Layout*)  Mtolua_new((Layout)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Layout");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_delete00
static int tolua_Modules_Layout_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_create00
static int tolua_Modules_Layout_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Layout* tolua_ret = (Layout*)  Layout::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Layout");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackGroundImage of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_setBackGroundImage00
static int tolua_Modules_Layout_setBackGroundImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  const char* fileName = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackGroundImage'", NULL);
#endif
  {
   self->setBackGroundImage(fileName,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackGroundImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackGroundImageCapInsets of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_setBackGroundImageCapInsets00
static int tolua_Modules_Layout_setBackGroundImageCapInsets00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  const CCRect* capInsets = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackGroundImageCapInsets'", NULL);
#endif
  {
   self->setBackGroundImageCapInsets(*capInsets);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackGroundImageCapInsets'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBackGroundImageCapInsets of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_getBackGroundImageCapInsets00
static int tolua_Modules_Layout_getBackGroundImageCapInsets00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBackGroundImageCapInsets'", NULL);
#endif
  {
   const CCRect& tolua_ret = (const CCRect&)  self->getBackGroundImageCapInsets();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCRect");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBackGroundImageCapInsets'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackGroundColorType of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_setBackGroundColorType00
static int tolua_Modules_Layout_setBackGroundColorType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  LayoutBackGroundColorType type = ((LayoutBackGroundColorType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackGroundColorType'", NULL);
#endif
  {
   self->setBackGroundColorType(type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackGroundColorType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBackGroundColorType of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_getBackGroundColorType00
static int tolua_Modules_Layout_getBackGroundColorType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBackGroundColorType'", NULL);
#endif
  {
   LayoutBackGroundColorType tolua_ret = (LayoutBackGroundColorType)  self->getBackGroundColorType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBackGroundColorType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackGroundImageScale9Enabled of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_setBackGroundImageScale9Enabled00
static int tolua_Modules_Layout_setBackGroundImageScale9Enabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackGroundImageScale9Enabled'", NULL);
#endif
  {
   self->setBackGroundImageScale9Enabled(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackGroundImageScale9Enabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isBackGroundImageScale9Enabled of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_isBackGroundImageScale9Enabled00
static int tolua_Modules_Layout_isBackGroundImageScale9Enabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isBackGroundImageScale9Enabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isBackGroundImageScale9Enabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isBackGroundImageScale9Enabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackGroundColor of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_setBackGroundColor00
static int tolua_Modules_Layout_setBackGroundColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  const ccColor3B* color = ((const ccColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackGroundColor'", NULL);
#endif
  {
   self->setBackGroundColor(*color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackGroundColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBackGroundColor of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_getBackGroundColor00
static int tolua_Modules_Layout_getBackGroundColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBackGroundColor'", NULL);
#endif
  {
   const ccColor3B& tolua_ret = (const ccColor3B&)  self->getBackGroundColor();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const ccColor3B");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBackGroundColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackGroundColor of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_setBackGroundColor01
static int tolua_Modules_Layout_setBackGroundColor01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor3B",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  const ccColor3B* startColor = ((const ccColor3B*)  tolua_tousertype(tolua_S,2,0));
  const ccColor3B* endColor = ((const ccColor3B*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackGroundColor'", NULL);
#endif
  {
   self->setBackGroundColor(*startColor,*endColor);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Modules_Layout_setBackGroundColor00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBackGroundStartColor of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_getBackGroundStartColor00
static int tolua_Modules_Layout_getBackGroundStartColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBackGroundStartColor'", NULL);
#endif
  {
   const ccColor3B& tolua_ret = (const ccColor3B&)  self->getBackGroundStartColor();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const ccColor3B");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBackGroundStartColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBackGroundEndColor of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_getBackGroundEndColor00
static int tolua_Modules_Layout_getBackGroundEndColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBackGroundEndColor'", NULL);
#endif
  {
   const ccColor3B& tolua_ret = (const ccColor3B&)  self->getBackGroundEndColor();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const ccColor3B");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBackGroundEndColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackGroundColorOpacity of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_setBackGroundColorOpacity00
static int tolua_Modules_Layout_setBackGroundColorOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"GLubyte",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  GLubyte opacity = *((GLubyte*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackGroundColorOpacity'", NULL);
#endif
  {
   self->setBackGroundColorOpacity(opacity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackGroundColorOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBackGroundColorOpacity of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_getBackGroundColorOpacity00
static int tolua_Modules_Layout_getBackGroundColorOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBackGroundColorOpacity'", NULL);
#endif
  {
   GLubyte tolua_ret = (GLubyte)  self->getBackGroundColorOpacity();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((GLubyte)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"GLubyte");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(GLubyte));
     tolua_pushusertype(tolua_S,tolua_obj,"GLubyte");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBackGroundColorOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackGroundColorVector of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_setBackGroundColorVector00
static int tolua_Modules_Layout_setBackGroundColorVector00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* vector = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackGroundColorVector'", NULL);
#endif
  {
   self->setBackGroundColorVector(*vector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackGroundColorVector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBackGroundColorVector of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_getBackGroundColorVector00
static int tolua_Modules_Layout_getBackGroundColorVector00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBackGroundColorVector'", NULL);
#endif
  {
   const CCPoint& tolua_ret = (const CCPoint&)  self->getBackGroundColorVector();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBackGroundColorVector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackGroundImageColor of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_setBackGroundImageColor00
static int tolua_Modules_Layout_setBackGroundImageColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  const ccColor3B* color = ((const ccColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackGroundImageColor'", NULL);
#endif
  {
   self->setBackGroundImageColor(*color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackGroundImageColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackGroundImageOpacity of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_setBackGroundImageOpacity00
static int tolua_Modules_Layout_setBackGroundImageOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"GLubyte",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  GLubyte opacity = *((GLubyte*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackGroundImageOpacity'", NULL);
#endif
  {
   self->setBackGroundImageOpacity(opacity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackGroundImageOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBackGroundImageColor of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_getBackGroundImageColor00
static int tolua_Modules_Layout_getBackGroundImageColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBackGroundImageColor'", NULL);
#endif
  {
   const ccColor3B& tolua_ret = (const ccColor3B&)  self->getBackGroundImageColor();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const ccColor3B");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBackGroundImageColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBackGroundImageOpacity of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_getBackGroundImageOpacity00
static int tolua_Modules_Layout_getBackGroundImageOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBackGroundImageOpacity'", NULL);
#endif
  {
   GLubyte tolua_ret = (GLubyte)  self->getBackGroundImageOpacity();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((GLubyte)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"GLubyte");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(GLubyte));
     tolua_pushusertype(tolua_S,tolua_obj,"GLubyte");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBackGroundImageOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeBackGroundImage of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_removeBackGroundImage00
static int tolua_Modules_Layout_removeBackGroundImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeBackGroundImage'", NULL);
#endif
  {
   self->removeBackGroundImage();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeBackGroundImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBackGroundImageTextureSize of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_getBackGroundImageTextureSize00
static int tolua_Modules_Layout_getBackGroundImageTextureSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Layout* self = (const Layout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBackGroundImageTextureSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getBackGroundImageTextureSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBackGroundImageTextureSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setClippingEnabled of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_setClippingEnabled00
static int tolua_Modules_Layout_setClippingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setClippingEnabled'", NULL);
#endif
  {
   self->setClippingEnabled(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setClippingEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setClippingType of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_setClippingType00
static int tolua_Modules_Layout_setClippingType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  LayoutClippingType type = ((LayoutClippingType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setClippingType'", NULL);
#endif
  {
   self->setClippingType(type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setClippingType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getClippingType of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_getClippingType00
static int tolua_Modules_Layout_getClippingType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getClippingType'", NULL);
#endif
  {
   LayoutClippingType tolua_ret = (LayoutClippingType)  self->getClippingType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getClippingType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isClippingEnabled of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_isClippingEnabled00
static int tolua_Modules_Layout_isClippingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isClippingEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isClippingEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isClippingEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_getDescription00
static int tolua_Modules_Layout_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Layout* self = (const Layout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->getDescription();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLayoutType of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_setLayoutType00
static int tolua_Modules_Layout_setLayoutType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  LayoutType type = ((LayoutType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLayoutType'", NULL);
#endif
  {
   self->setLayoutType(type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLayoutType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLayoutType of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_getLayoutType00
static int tolua_Modules_Layout_getLayoutType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Layout* self = (const Layout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLayoutType'", NULL);
#endif
  {
   LayoutType tolua_ret = (LayoutType)  self->getLayoutType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLayoutType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_addChild00
static int tolua_Modules_Layout_addChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  CCNode* child = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   self->addChild(child);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_addChild01
static int tolua_Modules_Layout_addChild01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  CCNode* child = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  int zOrder = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   self->addChild(child,zOrder);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Modules_Layout_addChild00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_addChild02
static int tolua_Modules_Layout_addChild02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  CCNode* child = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  int zOrder = ((int)  tolua_tonumber(tolua_S,3,0));
  int tag = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   self->addChild(child,zOrder,tag);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Modules_Layout_addChild01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeChild of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_removeChild00
static int tolua_Modules_Layout_removeChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  CCNode* child = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeChild'", NULL);
#endif
  {
   self->removeChild(child);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeChild of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_removeChild01
static int tolua_Modules_Layout_removeChild01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  CCNode* widget = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  bool cleanup = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeChild'", NULL);
#endif
  {
   self->removeChild(widget,cleanup);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Modules_Layout_removeChild00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllChildren of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_removeAllChildren00
static int tolua_Modules_Layout_removeAllChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllChildren'", NULL);
#endif
  {
   self->removeAllChildren();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllChildrenWithCleanup of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_removeAllChildrenWithCleanup00
static int tolua_Modules_Layout_removeAllChildrenWithCleanup00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  bool cleanup = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllChildrenWithCleanup'", NULL);
#endif
  {
   self->removeAllChildrenWithCleanup(cleanup);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllChildrenWithCleanup'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: visit of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_visit00
static int tolua_Modules_Layout_visit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'visit'", NULL);
#endif
  {
   self->visit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'visit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sortAllChildren of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_sortAllChildren00
static int tolua_Modules_Layout_sortAllChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'sortAllChildren'", NULL);
#endif
  {
   self->sortAllChildren();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sortAllChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: requestDoLayout of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_requestDoLayout00
static int tolua_Modules_Layout_requestDoLayout00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'requestDoLayout'", NULL);
#endif
  {
   self->requestDoLayout();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'requestDoLayout'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onEnter of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_onEnter00
static int tolua_Modules_Layout_onEnter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onEnter'", NULL);
#endif
  {
   self->onEnter();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onEnter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onExit of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_onExit00
static int tolua_Modules_Layout_onExit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onExit'", NULL);
#endif
  {
   self->onExit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onExit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hitTest of class  Layout */
#ifndef TOLUA_DISABLE_tolua_Modules_Layout_hitTest00
static int tolua_Modules_Layout_hitTest00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* pt = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hitTest'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hitTest(*pt);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hitTest'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  LayoutParameter */
#ifndef TOLUA_DISABLE_tolua_Modules_LayoutParameter_new00
static int tolua_Modules_LayoutParameter_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   LayoutParameter* tolua_ret = (LayoutParameter*)  Mtolua_new((LayoutParameter)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"LayoutParameter");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  LayoutParameter */
#ifndef TOLUA_DISABLE_tolua_Modules_LayoutParameter_new00_local
static int tolua_Modules_LayoutParameter_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   LayoutParameter* tolua_ret = (LayoutParameter*)  Mtolua_new((LayoutParameter)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"LayoutParameter");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  LayoutParameter */
#ifndef TOLUA_DISABLE_tolua_Modules_LayoutParameter_delete00
static int tolua_Modules_LayoutParameter_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LayoutParameter* self = (LayoutParameter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  LayoutParameter */
#ifndef TOLUA_DISABLE_tolua_Modules_LayoutParameter_create00
static int tolua_Modules_LayoutParameter_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   LayoutParameter* tolua_ret = (LayoutParameter*)  LayoutParameter::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"LayoutParameter");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLayoutType of class  LayoutParameter */
#ifndef TOLUA_DISABLE_tolua_Modules_LayoutParameter_getLayoutType00
static int tolua_Modules_LayoutParameter_getLayoutType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const LayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const LayoutParameter* self = (const LayoutParameter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLayoutType'", NULL);
#endif
  {
   LayoutParameterType tolua_ret = (LayoutParameterType)  self->getLayoutType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLayoutType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  LinearLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_Modules_LinearLayoutParameter_new00
static int tolua_Modules_LinearLayoutParameter_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LinearLayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   LinearLayoutParameter* tolua_ret = (LinearLayoutParameter*)  Mtolua_new((LinearLayoutParameter)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"LinearLayoutParameter");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  LinearLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_Modules_LinearLayoutParameter_new00_local
static int tolua_Modules_LinearLayoutParameter_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LinearLayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   LinearLayoutParameter* tolua_ret = (LinearLayoutParameter*)  Mtolua_new((LinearLayoutParameter)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"LinearLayoutParameter");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  LinearLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_Modules_LinearLayoutParameter_delete00
static int tolua_Modules_LinearLayoutParameter_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LinearLayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LinearLayoutParameter* self = (LinearLayoutParameter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  LinearLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_Modules_LinearLayoutParameter_create00
static int tolua_Modules_LinearLayoutParameter_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LinearLayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   LinearLayoutParameter* tolua_ret = (LinearLayoutParameter*)  LinearLayoutParameter::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"LinearLayoutParameter");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setGravity of class  LinearLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_Modules_LinearLayoutParameter_setGravity00
static int tolua_Modules_LinearLayoutParameter_setGravity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LinearLayoutParameter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LinearLayoutParameter* self = (LinearLayoutParameter*)  tolua_tousertype(tolua_S,1,0);
  LinearGravity gravity = ((LinearGravity) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setGravity'", NULL);
#endif
  {
   self->setGravity(gravity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setGravity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getGravity of class  LinearLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_Modules_LinearLayoutParameter_getGravity00
static int tolua_Modules_LinearLayoutParameter_getGravity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const LinearLayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const LinearLayoutParameter* self = (const LinearLayoutParameter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getGravity'", NULL);
#endif
  {
   LinearGravity tolua_ret = (LinearGravity)  self->getGravity();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getGravity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  ListView */
#ifndef TOLUA_DISABLE_tolua_Modules_ListView_new00
static int tolua_Modules_ListView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ListView* tolua_ret = (ListView*)  Mtolua_new((ListView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"ListView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  ListView */
#ifndef TOLUA_DISABLE_tolua_Modules_ListView_new00_local
static int tolua_Modules_ListView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ListView* tolua_ret = (ListView*)  Mtolua_new((ListView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"ListView");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  ListView */
#ifndef TOLUA_DISABLE_tolua_Modules_ListView_delete00
static int tolua_Modules_ListView_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ListView* self = (ListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  ListView */
#ifndef TOLUA_DISABLE_tolua_Modules_ListView_create00
static int tolua_Modules_ListView_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ListView* tolua_ret = (ListView*)  ListView::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"ListView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setItemModel of class  ListView */
#ifndef TOLUA_DISABLE_tolua_Modules_ListView_setItemModel00
static int tolua_Modules_ListView_setItemModel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ListView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ListView* self = (ListView*)  tolua_tousertype(tolua_S,1,0);
  Widget* model = ((Widget*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setItemModel'", NULL);
#endif
  {
   self->setItemModel(model);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setItemModel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pushBackDefaultItem of class  ListView */
#ifndef TOLUA_DISABLE_tolua_Modules_ListView_pushBackDefaultItem00
static int tolua_Modules_ListView_pushBackDefaultItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ListView* self = (ListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pushBackDefaultItem'", NULL);
#endif
  {
   self->pushBackDefaultItem();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pushBackDefaultItem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertDefaultItem of class  ListView */
#ifndef TOLUA_DISABLE_tolua_Modules_ListView_insertDefaultItem00
static int tolua_Modules_ListView_insertDefaultItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ListView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ListView* self = (ListView*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertDefaultItem'", NULL);
#endif
  {
   self->insertDefaultItem(index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insertDefaultItem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pushBackCustomItem of class  ListView */
#ifndef TOLUA_DISABLE_tolua_Modules_ListView_pushBackCustomItem00
static int tolua_Modules_ListView_pushBackCustomItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ListView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ListView* self = (ListView*)  tolua_tousertype(tolua_S,1,0);
  Widget* item = ((Widget*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pushBackCustomItem'", NULL);
#endif
  {
   self->pushBackCustomItem(item);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pushBackCustomItem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertCustomItem of class  ListView */
#ifndef TOLUA_DISABLE_tolua_Modules_ListView_insertCustomItem00
static int tolua_Modules_ListView_insertCustomItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ListView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Widget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ListView* self = (ListView*)  tolua_tousertype(tolua_S,1,0);
  Widget* item = ((Widget*)  tolua_tousertype(tolua_S,2,0));
  int index = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertCustomItem'", NULL);
#endif
  {
   self->insertCustomItem(item,index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insertCustomItem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeLastItem of class  ListView */
#ifndef TOLUA_DISABLE_tolua_Modules_ListView_removeLastItem00
static int tolua_Modules_ListView_removeLastItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ListView* self = (ListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeLastItem'", NULL);
#endif
  {
   self->removeLastItem();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeLastItem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeItem of class  ListView */
#ifndef TOLUA_DISABLE_tolua_Modules_ListView_removeItem00
static int tolua_Modules_ListView_removeItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ListView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ListView* self = (ListView*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeItem'", NULL);
#endif
  {
   self->removeItem(index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeItem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllItems of class  ListView */
#ifndef TOLUA_DISABLE_tolua_Modules_ListView_removeAllItems00
static int tolua_Modules_ListView_removeAllItems00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ListView* self = (ListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllItems'", NULL);
#endif
  {
   self->removeAllItems();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllItems'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getItem of class  ListView */
#ifndef TOLUA_DISABLE_tolua_Modules_ListView_getItem00
static int tolua_Modules_ListView_getItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ListView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ListView* self = (ListView*)  tolua_tousertype(tolua_S,1,0);
  unsigned int index = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getItem'", NULL);
#endif
  {
   Widget* tolua_ret = (Widget*)  self->getItem(index);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Widget");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getItem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getItems of class  ListView */
#ifndef TOLUA_DISABLE_tolua_Modules_ListView_getItems00
static int tolua_Modules_ListView_getItems00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ListView* self = (ListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getItems'", NULL);
#endif
  {
   CCArray* tolua_ret = (CCArray*)  self->getItems();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getItems'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIndex of class  ListView */
#ifndef TOLUA_DISABLE_tolua_Modules_ListView_getIndex00
static int tolua_Modules_ListView_getIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const ListView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const ListView* self = (const ListView*)  tolua_tousertype(tolua_S,1,0);
  Widget* item = ((Widget*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIndex'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getIndex(item);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setGravity of class  ListView */
#ifndef TOLUA_DISABLE_tolua_Modules_ListView_setGravity00
static int tolua_Modules_ListView_setGravity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ListView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ListView* self = (ListView*)  tolua_tousertype(tolua_S,1,0);
  ListViewGravity gravity = ((ListViewGravity) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setGravity'", NULL);
#endif
  {
   self->setGravity(gravity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setGravity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setItemsMargin of class  ListView */
#ifndef TOLUA_DISABLE_tolua_Modules_ListView_setItemsMargin00
static int tolua_Modules_ListView_setItemsMargin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ListView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ListView* self = (ListView*)  tolua_tousertype(tolua_S,1,0);
  float margin = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setItemsMargin'", NULL);
#endif
  {
   self->setItemsMargin(margin);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setItemsMargin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sortAllChildren of class  ListView */
#ifndef TOLUA_DISABLE_tolua_Modules_ListView_sortAllChildren00
static int tolua_Modules_ListView_sortAllChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ListView* self = (ListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'sortAllChildren'", NULL);
#endif
  {
   self->sortAllChildren();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sortAllChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCurSelectedIndex of class  ListView */
#ifndef TOLUA_DISABLE_tolua_Modules_ListView_getCurSelectedIndex00
static int tolua_Modules_ListView_getCurSelectedIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const ListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const ListView* self = (const ListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCurSelectedIndex'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getCurSelectedIndex();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCurSelectedIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDirection of class  ListView */
#ifndef TOLUA_DISABLE_tolua_Modules_ListView_setDirection00
static int tolua_Modules_ListView_setDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ListView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ListView* self = (ListView*)  tolua_tousertype(tolua_S,1,0);
  SCROLLVIEW_DIR dir = ((SCROLLVIEW_DIR) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirection'", NULL);
#endif
  {
   self->setDirection(dir);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  ListView */
#ifndef TOLUA_DISABLE_tolua_Modules_ListView_getDescription00
static int tolua_Modules_ListView_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const ListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const ListView* self = (const ListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->getDescription();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: requestRefreshView of class  ListView */
#ifndef TOLUA_DISABLE_tolua_Modules_ListView_requestRefreshView00
static int tolua_Modules_ListView_requestRefreshView00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ListView* self = (ListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'requestRefreshView'", NULL);
#endif
  {
   self->requestRefreshView();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'requestRefreshView'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: refreshView of class  ListView */
#ifndef TOLUA_DISABLE_tolua_Modules_ListView_refreshView00
static int tolua_Modules_ListView_refreshView00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ListView* self = (ListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'refreshView'", NULL);
#endif
  {
   self->refreshView();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'refreshView'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  LoadingBar */
#ifndef TOLUA_DISABLE_tolua_Modules_LoadingBar_new00
static int tolua_Modules_LoadingBar_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LoadingBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   LoadingBar* tolua_ret = (LoadingBar*)  Mtolua_new((LoadingBar)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"LoadingBar");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  LoadingBar */
#ifndef TOLUA_DISABLE_tolua_Modules_LoadingBar_new00_local
static int tolua_Modules_LoadingBar_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LoadingBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   LoadingBar* tolua_ret = (LoadingBar*)  Mtolua_new((LoadingBar)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"LoadingBar");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  LoadingBar */
#ifndef TOLUA_DISABLE_tolua_Modules_LoadingBar_delete00
static int tolua_Modules_LoadingBar_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LoadingBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LoadingBar* self = (LoadingBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  LoadingBar */
#ifndef TOLUA_DISABLE_tolua_Modules_LoadingBar_create00
static int tolua_Modules_LoadingBar_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LoadingBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   LoadingBar* tolua_ret = (LoadingBar*)  LoadingBar::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"LoadingBar");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDirection of class  LoadingBar */
#ifndef TOLUA_DISABLE_tolua_Modules_LoadingBar_setDirection00
static int tolua_Modules_LoadingBar_setDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LoadingBar",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LoadingBar* self = (LoadingBar*)  tolua_tousertype(tolua_S,1,0);
  LoadingBarType dir = ((LoadingBarType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirection'", NULL);
#endif
  {
   self->setDirection(dir);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDirection of class  LoadingBar */
#ifndef TOLUA_DISABLE_tolua_Modules_LoadingBar_getDirection00
static int tolua_Modules_LoadingBar_getDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LoadingBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LoadingBar* self = (LoadingBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDirection'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getDirection();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadTexture of class  LoadingBar */
#ifndef TOLUA_DISABLE_tolua_Modules_LoadingBar_loadTexture00
static int tolua_Modules_LoadingBar_loadTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LoadingBar",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LoadingBar* self = (LoadingBar*)  tolua_tousertype(tolua_S,1,0);
  const char* texture = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadTexture'", NULL);
#endif
  {
   self->loadTexture(texture,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPercent of class  LoadingBar */
#ifndef TOLUA_DISABLE_tolua_Modules_LoadingBar_setPercent00
static int tolua_Modules_LoadingBar_setPercent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LoadingBar",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LoadingBar* self = (LoadingBar*)  tolua_tousertype(tolua_S,1,0);
  int percent = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPercent'", NULL);
#endif
  {
   self->setPercent(percent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPercent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPercent of class  LoadingBar */
#ifndef TOLUA_DISABLE_tolua_Modules_LoadingBar_getPercent00
static int tolua_Modules_LoadingBar_getPercent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LoadingBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LoadingBar* self = (LoadingBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPercent'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getPercent();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPercent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale9Enabled of class  LoadingBar */
#ifndef TOLUA_DISABLE_tolua_Modules_LoadingBar_setScale9Enabled00
static int tolua_Modules_LoadingBar_setScale9Enabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LoadingBar",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LoadingBar* self = (LoadingBar*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale9Enabled'", NULL);
#endif
  {
   self->setScale9Enabled(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScale9Enabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCapInsets of class  LoadingBar */
#ifndef TOLUA_DISABLE_tolua_Modules_LoadingBar_setCapInsets00
static int tolua_Modules_LoadingBar_setCapInsets00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LoadingBar",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LoadingBar* self = (LoadingBar*)  tolua_tousertype(tolua_S,1,0);
  const CCRect* capInsets = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCapInsets'", NULL);
#endif
  {
   self->setCapInsets(*capInsets);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCapInsets'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ignoreContentAdaptWithSize of class  LoadingBar */
#ifndef TOLUA_DISABLE_tolua_Modules_LoadingBar_ignoreContentAdaptWithSize00
static int tolua_Modules_LoadingBar_ignoreContentAdaptWithSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LoadingBar",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LoadingBar* self = (LoadingBar*)  tolua_tousertype(tolua_S,1,0);
  bool ignore = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ignoreContentAdaptWithSize'", NULL);
#endif
  {
   self->ignoreContentAdaptWithSize(ignore);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ignoreContentAdaptWithSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentSize of class  LoadingBar */
#ifndef TOLUA_DISABLE_tolua_Modules_LoadingBar_getContentSize00
static int tolua_Modules_LoadingBar_getContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const LoadingBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const LoadingBar* self = (const LoadingBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getContentSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVirtualRenderer of class  LoadingBar */
#ifndef TOLUA_DISABLE_tolua_Modules_LoadingBar_getVirtualRenderer00
static int tolua_Modules_LoadingBar_getVirtualRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LoadingBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LoadingBar* self = (LoadingBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVirtualRenderer'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getVirtualRenderer();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVirtualRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  LoadingBar */
#ifndef TOLUA_DISABLE_tolua_Modules_LoadingBar_getDescription00
static int tolua_Modules_LoadingBar_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const LoadingBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const LoadingBar* self = (const LoadingBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->getDescription();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  PageView */
#ifndef TOLUA_DISABLE_tolua_Modules_PageView_new00
static int tolua_Modules_PageView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"PageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   PageView* tolua_ret = (PageView*)  Mtolua_new((PageView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"PageView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  PageView */
#ifndef TOLUA_DISABLE_tolua_Modules_PageView_new00_local
static int tolua_Modules_PageView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"PageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   PageView* tolua_ret = (PageView*)  Mtolua_new((PageView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"PageView");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  PageView */
#ifndef TOLUA_DISABLE_tolua_Modules_PageView_delete00
static int tolua_Modules_PageView_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PageView* self = (PageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  PageView */
#ifndef TOLUA_DISABLE_tolua_Modules_PageView_create00
static int tolua_Modules_PageView_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"PageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   PageView* tolua_ret = (PageView*)  PageView::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"PageView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addWidgetToPage of class  PageView */
#ifndef TOLUA_DISABLE_tolua_Modules_PageView_addWidgetToPage00
static int tolua_Modules_PageView_addWidgetToPage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PageView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Widget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PageView* self = (PageView*)  tolua_tousertype(tolua_S,1,0);
  Widget* widget = ((Widget*)  tolua_tousertype(tolua_S,2,0));
  int pageIdx = ((int)  tolua_tonumber(tolua_S,3,0));
  bool forceCreate = ((bool)  tolua_toboolean(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addWidgetToPage'", NULL);
#endif
  {
   self->addWidgetToPage(widget,pageIdx,forceCreate);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addWidgetToPage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addPage of class  PageView */
#ifndef TOLUA_DISABLE_tolua_Modules_PageView_addPage00
static int tolua_Modules_PageView_addPage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PageView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PageView* self = (PageView*)  tolua_tousertype(tolua_S,1,0);
  Layout* page = ((Layout*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addPage'", NULL);
#endif
  {
   self->addPage(page);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addPage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertPage of class  PageView */
#ifndef TOLUA_DISABLE_tolua_Modules_PageView_insertPage00
static int tolua_Modules_PageView_insertPage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PageView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Layout",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PageView* self = (PageView*)  tolua_tousertype(tolua_S,1,0);
  Layout* page = ((Layout*)  tolua_tousertype(tolua_S,2,0));
  int idx = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertPage'", NULL);
#endif
  {
   self->insertPage(page,idx);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insertPage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removePage of class  PageView */
#ifndef TOLUA_DISABLE_tolua_Modules_PageView_removePage00
static int tolua_Modules_PageView_removePage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PageView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PageView* self = (PageView*)  tolua_tousertype(tolua_S,1,0);
  Layout* page = ((Layout*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removePage'", NULL);
#endif
  {
   self->removePage(page);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removePage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removePageAtIndex of class  PageView */
#ifndef TOLUA_DISABLE_tolua_Modules_PageView_removePageAtIndex00
static int tolua_Modules_PageView_removePageAtIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PageView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PageView* self = (PageView*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removePageAtIndex'", NULL);
#endif
  {
   self->removePageAtIndex(index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removePageAtIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllPages of class  PageView */
#ifndef TOLUA_DISABLE_tolua_Modules_PageView_removeAllPages00
static int tolua_Modules_PageView_removeAllPages00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PageView* self = (PageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllPages'", NULL);
#endif
  {
   self->removeAllPages();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllPages'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: scrollToPage of class  PageView */
#ifndef TOLUA_DISABLE_tolua_Modules_PageView_scrollToPage00
static int tolua_Modules_PageView_scrollToPage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PageView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PageView* self = (PageView*)  tolua_tousertype(tolua_S,1,0);
  int idx = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'scrollToPage'", NULL);
#endif
  {
   self->scrollToPage(idx);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'scrollToPage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCurPageIndex of class  PageView */
#ifndef TOLUA_DISABLE_tolua_Modules_PageView_getCurPageIndex00
static int tolua_Modules_PageView_getCurPageIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const PageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const PageView* self = (const PageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCurPageIndex'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getCurPageIndex();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCurPageIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPages of class  PageView */
#ifndef TOLUA_DISABLE_tolua_Modules_PageView_getPages00
static int tolua_Modules_PageView_getPages00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PageView* self = (PageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPages'", NULL);
#endif
  {
   CCArray* tolua_ret = (CCArray*)  self->getPages();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPages'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPage of class  PageView */
#ifndef TOLUA_DISABLE_tolua_Modules_PageView_getPage00
static int tolua_Modules_PageView_getPage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PageView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PageView* self = (PageView*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPage'", NULL);
#endif
  {
   Layout* tolua_ret = (Layout*)  self->getPage(index);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Layout");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchBegan of class  PageView */
#ifndef TOLUA_DISABLE_tolua_Modules_PageView_onTouchBegan00
static int tolua_Modules_PageView_onTouchBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PageView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PageView* self = (PageView*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* touch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* unusedEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchBegan'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->onTouchBegan(touch,unusedEvent);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchMoved of class  PageView */
#ifndef TOLUA_DISABLE_tolua_Modules_PageView_onTouchMoved00
static int tolua_Modules_PageView_onTouchMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PageView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PageView* self = (PageView*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* touch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* unusedEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchMoved'", NULL);
#endif
  {
   self->onTouchMoved(touch,unusedEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchEnded of class  PageView */
#ifndef TOLUA_DISABLE_tolua_Modules_PageView_onTouchEnded00
static int tolua_Modules_PageView_onTouchEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PageView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PageView* self = (PageView*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* touch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* unusedEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchEnded'", NULL);
#endif
  {
   self->onTouchEnded(touch,unusedEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchCancelled of class  PageView */
#ifndef TOLUA_DISABLE_tolua_Modules_PageView_onTouchCancelled00
static int tolua_Modules_PageView_onTouchCancelled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PageView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PageView* self = (PageView*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* touch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* unusedEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchCancelled'", NULL);
#endif
  {
   self->onTouchCancelled(touch,unusedEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchCancelled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: update of class  PageView */
#ifndef TOLUA_DISABLE_tolua_Modules_PageView_update00
static int tolua_Modules_PageView_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PageView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PageView* self = (PageView*)  tolua_tousertype(tolua_S,1,0);
  float dt = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'update'", NULL);
#endif
  {
   self->update(dt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'update'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLayoutType of class  PageView */
#ifndef TOLUA_DISABLE_tolua_Modules_PageView_setLayoutType00
static int tolua_Modules_PageView_setLayoutType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PageView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PageView* self = (PageView*)  tolua_tousertype(tolua_S,1,0);
  LayoutType type = ((LayoutType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLayoutType'", NULL);
#endif
  {
   self->setLayoutType(type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLayoutType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLayoutType of class  PageView */
#ifndef TOLUA_DISABLE_tolua_Modules_PageView_getLayoutType00
static int tolua_Modules_PageView_getLayoutType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const PageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const PageView* self = (const PageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLayoutType'", NULL);
#endif
  {
   LayoutType tolua_ret = (LayoutType)  self->getLayoutType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLayoutType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  PageView */
#ifndef TOLUA_DISABLE_tolua_Modules_PageView_getDescription00
static int tolua_Modules_PageView_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const PageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const PageView* self = (const PageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->getDescription();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __UIScrollInterface__ of class  PageView */
#ifndef TOLUA_DISABLE_tolua_get_PageView___UIScrollInterface__
static int tolua_get_PageView___UIScrollInterface__(lua_State* tolua_S)
{
  PageView* self = (PageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__UIScrollInterface__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<UIScrollInterface*>(self), "UIScrollInterface");
#else
   tolua_pushusertype(tolua_S,(void*)((UIScrollInterface*)self), "UIScrollInterface");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  UIRelativeLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_Modules_UIRelativeLayoutParameter_new00
static int tolua_Modules_UIRelativeLayoutParameter_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIRelativeLayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIRelativeLayoutParameter* tolua_ret = (UIRelativeLayoutParameter*)  Mtolua_new((UIRelativeLayoutParameter)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIRelativeLayoutParameter");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  UIRelativeLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_Modules_UIRelativeLayoutParameter_new00_local
static int tolua_Modules_UIRelativeLayoutParameter_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIRelativeLayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIRelativeLayoutParameter* tolua_ret = (UIRelativeLayoutParameter*)  Mtolua_new((UIRelativeLayoutParameter)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIRelativeLayoutParameter");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  UIRelativeLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_Modules_UIRelativeLayoutParameter_delete00
static int tolua_Modules_UIRelativeLayoutParameter_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIRelativeLayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIRelativeLayoutParameter* self = (UIRelativeLayoutParameter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  UIRelativeLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_Modules_UIRelativeLayoutParameter_create00
static int tolua_Modules_UIRelativeLayoutParameter_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIRelativeLayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIRelativeLayoutParameter* tolua_ret = (UIRelativeLayoutParameter*)  UIRelativeLayoutParameter::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIRelativeLayoutParameter");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAlign of class  UIRelativeLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_Modules_UIRelativeLayoutParameter_setAlign00
static int tolua_Modules_UIRelativeLayoutParameter_setAlign00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIRelativeLayoutParameter",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"UIRelativeAlign",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIRelativeLayoutParameter* self = (UIRelativeLayoutParameter*)  tolua_tousertype(tolua_S,1,0);
  UIRelativeAlign align = *((UIRelativeAlign*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAlign'", NULL);
#endif
  {
   self->setAlign(align);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAlign'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAlign of class  UIRelativeLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_Modules_UIRelativeLayoutParameter_getAlign00
static int tolua_Modules_UIRelativeLayoutParameter_getAlign00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIRelativeLayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIRelativeLayoutParameter* self = (const UIRelativeLayoutParameter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAlign'", NULL);
#endif
  {
   UIRelativeAlign tolua_ret = (UIRelativeAlign)  self->getAlign();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((UIRelativeAlign)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"UIRelativeAlign");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(UIRelativeAlign));
     tolua_pushusertype(tolua_S,tolua_obj,"UIRelativeAlign");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAlign'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRelativeToWidgetName of class  UIRelativeLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_Modules_UIRelativeLayoutParameter_setRelativeToWidgetName00
static int tolua_Modules_UIRelativeLayoutParameter_setRelativeToWidgetName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIRelativeLayoutParameter",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIRelativeLayoutParameter* self = (UIRelativeLayoutParameter*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRelativeToWidgetName'", NULL);
#endif
  {
   self->setRelativeToWidgetName(name);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRelativeToWidgetName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRelativeToWidgetName of class  UIRelativeLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_Modules_UIRelativeLayoutParameter_getRelativeToWidgetName00
static int tolua_Modules_UIRelativeLayoutParameter_getRelativeToWidgetName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIRelativeLayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIRelativeLayoutParameter* self = (const UIRelativeLayoutParameter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRelativeToWidgetName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getRelativeToWidgetName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRelativeToWidgetName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRelativeName of class  UIRelativeLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_Modules_UIRelativeLayoutParameter_setRelativeName00
static int tolua_Modules_UIRelativeLayoutParameter_setRelativeName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIRelativeLayoutParameter",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIRelativeLayoutParameter* self = (UIRelativeLayoutParameter*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRelativeName'", NULL);
#endif
  {
   self->setRelativeName(name);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRelativeName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRelativeName of class  UIRelativeLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_Modules_UIRelativeLayoutParameter_getRelativeName00
static int tolua_Modules_UIRelativeLayoutParameter_getRelativeName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIRelativeLayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIRelativeLayoutParameter* self = (const UIRelativeLayoutParameter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRelativeName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getRelativeName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRelativeName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  RichElement */
#ifndef TOLUA_DISABLE_tolua_Modules_RichElement_new00
static int tolua_Modules_RichElement_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"RichElement",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   RichElement* tolua_ret = (RichElement*)  Mtolua_new((RichElement)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"RichElement");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  RichElement */
#ifndef TOLUA_DISABLE_tolua_Modules_RichElement_new00_local
static int tolua_Modules_RichElement_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"RichElement",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   RichElement* tolua_ret = (RichElement*)  Mtolua_new((RichElement)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"RichElement");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  RichElement */
#ifndef TOLUA_DISABLE_tolua_Modules_RichElement_delete00
static int tolua_Modules_RichElement_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RichElement",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RichElement* self = (RichElement*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  RichElement */
#ifndef TOLUA_DISABLE_tolua_Modules_RichElement_init00
static int tolua_Modules_RichElement_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RichElement",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const ccColor3B",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"GLubyte",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RichElement* self = (RichElement*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
  const ccColor3B* color = ((const ccColor3B*)  tolua_tousertype(tolua_S,3,0));
  GLubyte opacity = *((GLubyte*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init(tag,*color,opacity);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  RichElementText */
#ifndef TOLUA_DISABLE_tolua_Modules_RichElementText_new00
static int tolua_Modules_RichElementText_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"RichElementText",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   RichElementText* tolua_ret = (RichElementText*)  Mtolua_new((RichElementText)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"RichElementText");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  RichElementText */
#ifndef TOLUA_DISABLE_tolua_Modules_RichElementText_new00_local
static int tolua_Modules_RichElementText_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"RichElementText",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   RichElementText* tolua_ret = (RichElementText*)  Mtolua_new((RichElementText)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"RichElementText");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  RichElementText */
#ifndef TOLUA_DISABLE_tolua_Modules_RichElementText_delete00
static int tolua_Modules_RichElementText_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RichElementText",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RichElementText* self = (RichElementText*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  RichElementText */
#ifndef TOLUA_DISABLE_tolua_Modules_RichElementText_init00
static int tolua_Modules_RichElementText_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RichElementText",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const ccColor3B",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"GLubyte",0,&tolua_err)) ||
     !tolua_isstring(tolua_S,5,0,&tolua_err) ||
     !tolua_isstring(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RichElementText* self = (RichElementText*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
  const ccColor3B* color = ((const ccColor3B*)  tolua_tousertype(tolua_S,3,0));
  GLubyte opacity = *((GLubyte*)  tolua_tousertype(tolua_S,4,0));
  const char* text = ((const char*)  tolua_tostring(tolua_S,5,0));
  const char* fontName = ((const char*)  tolua_tostring(tolua_S,6,0));
  float fontSize = ((float)  tolua_tonumber(tolua_S,7,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init(tag,*color,opacity,text,fontName,fontSize);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  RichElementText */
#ifndef TOLUA_DISABLE_tolua_Modules_RichElementText_create00
static int tolua_Modules_RichElementText_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"RichElementText",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const ccColor3B",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"GLubyte",0,&tolua_err)) ||
     !tolua_isstring(tolua_S,5,0,&tolua_err) ||
     !tolua_isstring(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
  const ccColor3B* color = ((const ccColor3B*)  tolua_tousertype(tolua_S,3,0));
  GLubyte opacity = *((GLubyte*)  tolua_tousertype(tolua_S,4,0));
  const char* text = ((const char*)  tolua_tostring(tolua_S,5,0));
  const char* fontName = ((const char*)  tolua_tostring(tolua_S,6,0));
  float fontSize = ((float)  tolua_tonumber(tolua_S,7,0));
  {
   RichElementText* tolua_ret = (RichElementText*)  RichElementText::create(tag,*color,opacity,text,fontName,fontSize);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"RichElementText");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  RichElementImage */
#ifndef TOLUA_DISABLE_tolua_Modules_RichElementImage_new00
static int tolua_Modules_RichElementImage_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"RichElementImage",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   RichElementImage* tolua_ret = (RichElementImage*)  Mtolua_new((RichElementImage)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"RichElementImage");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  RichElementImage */
#ifndef TOLUA_DISABLE_tolua_Modules_RichElementImage_new00_local
static int tolua_Modules_RichElementImage_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"RichElementImage",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   RichElementImage* tolua_ret = (RichElementImage*)  Mtolua_new((RichElementImage)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"RichElementImage");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  RichElementImage */
#ifndef TOLUA_DISABLE_tolua_Modules_RichElementImage_delete00
static int tolua_Modules_RichElementImage_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RichElementImage",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RichElementImage* self = (RichElementImage*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  RichElementImage */
#ifndef TOLUA_DISABLE_tolua_Modules_RichElementImage_init00
static int tolua_Modules_RichElementImage_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RichElementImage",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const ccColor3B",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"GLubyte",0,&tolua_err)) ||
     !tolua_isstring(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RichElementImage* self = (RichElementImage*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
  const ccColor3B* color = ((const ccColor3B*)  tolua_tousertype(tolua_S,3,0));
  GLubyte opacity = *((GLubyte*)  tolua_tousertype(tolua_S,4,0));
  const char* filePath = ((const char*)  tolua_tostring(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init(tag,*color,opacity,filePath);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  RichElementImage */
#ifndef TOLUA_DISABLE_tolua_Modules_RichElementImage_create00
static int tolua_Modules_RichElementImage_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"RichElementImage",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const ccColor3B",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"GLubyte",0,&tolua_err)) ||
     !tolua_isstring(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
  const ccColor3B* color = ((const ccColor3B*)  tolua_tousertype(tolua_S,3,0));
  GLubyte opacity = *((GLubyte*)  tolua_tousertype(tolua_S,4,0));
  const char* filePath = ((const char*)  tolua_tostring(tolua_S,5,0));
  {
   RichElementImage* tolua_ret = (RichElementImage*)  RichElementImage::create(tag,*color,opacity,filePath);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"RichElementImage");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  RichElementCustomNode */
#ifndef TOLUA_DISABLE_tolua_Modules_RichElementCustomNode_new00
static int tolua_Modules_RichElementCustomNode_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"RichElementCustomNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   RichElementCustomNode* tolua_ret = (RichElementCustomNode*)  Mtolua_new((RichElementCustomNode)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"RichElementCustomNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  RichElementCustomNode */
#ifndef TOLUA_DISABLE_tolua_Modules_RichElementCustomNode_new00_local
static int tolua_Modules_RichElementCustomNode_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"RichElementCustomNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   RichElementCustomNode* tolua_ret = (RichElementCustomNode*)  Mtolua_new((RichElementCustomNode)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"RichElementCustomNode");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  RichElementCustomNode */
#ifndef TOLUA_DISABLE_tolua_Modules_RichElementCustomNode_delete00
static int tolua_Modules_RichElementCustomNode_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RichElementCustomNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RichElementCustomNode* self = (RichElementCustomNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  RichElementCustomNode */
#ifndef TOLUA_DISABLE_tolua_Modules_RichElementCustomNode_init00
static int tolua_Modules_RichElementCustomNode_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RichElementCustomNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const ccColor3B",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"GLubyte",0,&tolua_err)) ||
     !tolua_isusertype(tolua_S,5,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RichElementCustomNode* self = (RichElementCustomNode*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
  const ccColor3B* color = ((const ccColor3B*)  tolua_tousertype(tolua_S,3,0));
  GLubyte opacity = *((GLubyte*)  tolua_tousertype(tolua_S,4,0));
  CCNode* customNode = ((CCNode*)  tolua_tousertype(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init(tag,*color,opacity,customNode);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  RichElementCustomNode */
#ifndef TOLUA_DISABLE_tolua_Modules_RichElementCustomNode_create00
static int tolua_Modules_RichElementCustomNode_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"RichElementCustomNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const ccColor3B",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"GLubyte",0,&tolua_err)) ||
     !tolua_isusertype(tolua_S,5,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
  const ccColor3B* color = ((const ccColor3B*)  tolua_tousertype(tolua_S,3,0));
  GLubyte opacity = *((GLubyte*)  tolua_tousertype(tolua_S,4,0));
  CCNode* customNode = ((CCNode*)  tolua_tousertype(tolua_S,5,0));
  {
   RichElementCustomNode* tolua_ret = (RichElementCustomNode*)  RichElementCustomNode::create(tag,*color,opacity,customNode);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"RichElementCustomNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  RichText */
#ifndef TOLUA_DISABLE_tolua_Modules_RichText_new00
static int tolua_Modules_RichText_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"RichText",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   RichText* tolua_ret = (RichText*)  Mtolua_new((RichText)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"RichText");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  RichText */
#ifndef TOLUA_DISABLE_tolua_Modules_RichText_new00_local
static int tolua_Modules_RichText_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"RichText",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   RichText* tolua_ret = (RichText*)  Mtolua_new((RichText)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"RichText");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  RichText */
#ifndef TOLUA_DISABLE_tolua_Modules_RichText_delete00
static int tolua_Modules_RichText_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RichText",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RichText* self = (RichText*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  RichText */
#ifndef TOLUA_DISABLE_tolua_Modules_RichText_create00
static int tolua_Modules_RichText_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"RichText",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   RichText* tolua_ret = (RichText*)  RichText::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"RichText");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertElement of class  RichText */
#ifndef TOLUA_DISABLE_tolua_Modules_RichText_insertElement00
static int tolua_Modules_RichText_insertElement00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RichText",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"RichElement",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RichText* self = (RichText*)  tolua_tousertype(tolua_S,1,0);
  RichElement* element = ((RichElement*)  tolua_tousertype(tolua_S,2,0));
  int index = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertElement'", NULL);
#endif
  {
   self->insertElement(element,index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insertElement'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pushBackElement of class  RichText */
#ifndef TOLUA_DISABLE_tolua_Modules_RichText_pushBackElement00
static int tolua_Modules_RichText_pushBackElement00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RichText",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"RichElement",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RichText* self = (RichText*)  tolua_tousertype(tolua_S,1,0);
  RichElement* element = ((RichElement*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pushBackElement'", NULL);
#endif
  {
   self->pushBackElement(element);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pushBackElement'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeElement of class  RichText */
#ifndef TOLUA_DISABLE_tolua_Modules_RichText_removeElement00
static int tolua_Modules_RichText_removeElement00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RichText",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RichText* self = (RichText*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeElement'", NULL);
#endif
  {
   self->removeElement(index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeElement'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeElement of class  RichText */
#ifndef TOLUA_DISABLE_tolua_Modules_RichText_removeElement01
static int tolua_Modules_RichText_removeElement01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RichText",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"RichElement",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  RichText* self = (RichText*)  tolua_tousertype(tolua_S,1,0);
  RichElement* element = ((RichElement*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeElement'", NULL);
#endif
  {
   self->removeElement(element);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Modules_RichText_removeElement00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: visit of class  RichText */
#ifndef TOLUA_DISABLE_tolua_Modules_RichText_visit00
static int tolua_Modules_RichText_visit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RichText",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RichText* self = (RichText*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'visit'", NULL);
#endif
  {
   self->visit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'visit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVerticalSpace of class  RichText */
#ifndef TOLUA_DISABLE_tolua_Modules_RichText_setVerticalSpace00
static int tolua_Modules_RichText_setVerticalSpace00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RichText",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RichText* self = (RichText*)  tolua_tousertype(tolua_S,1,0);
  float space = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVerticalSpace'", NULL);
#endif
  {
   self->setVerticalSpace(space);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVerticalSpace'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnchorPoint of class  RichText */
#ifndef TOLUA_DISABLE_tolua_Modules_RichText_setAnchorPoint00
static int tolua_Modules_RichText_setAnchorPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RichText",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RichText* self = (RichText*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* pt = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnchorPoint'", NULL);
#endif
  {
   self->setAnchorPoint(*pt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnchorPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentSize of class  RichText */
#ifndef TOLUA_DISABLE_tolua_Modules_RichText_getContentSize00
static int tolua_Modules_RichText_getContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const RichText",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const RichText* self = (const RichText*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getContentSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: formatText of class  RichText */
#ifndef TOLUA_DISABLE_tolua_Modules_RichText_formatText00
static int tolua_Modules_RichText_formatText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RichText",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RichText* self = (RichText*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'formatText'", NULL);
#endif
  {
   self->formatText();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'formatText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ignoreContentAdaptWithSize of class  RichText */
#ifndef TOLUA_DISABLE_tolua_Modules_RichText_ignoreContentAdaptWithSize00
static int tolua_Modules_RichText_ignoreContentAdaptWithSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RichText",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RichText* self = (RichText*)  tolua_tousertype(tolua_S,1,0);
  bool ignore = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ignoreContentAdaptWithSize'", NULL);
#endif
  {
   self->ignoreContentAdaptWithSize(ignore);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ignoreContentAdaptWithSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_new00
static int tolua_Modules_ScrollView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ScrollView* tolua_ret = (ScrollView*)  Mtolua_new((ScrollView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"ScrollView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_new00_local
static int tolua_Modules_ScrollView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ScrollView* tolua_ret = (ScrollView*)  Mtolua_new((ScrollView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"ScrollView");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_delete00
static int tolua_Modules_ScrollView_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_create00
static int tolua_Modules_ScrollView_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ScrollView* tolua_ret = (ScrollView*)  ScrollView::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"ScrollView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDirection of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_setDirection00
static int tolua_Modules_ScrollView_setDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  SCROLLVIEW_DIR dir = ((SCROLLVIEW_DIR) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirection'", NULL);
#endif
  {
   self->setDirection(dir);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDirection of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_getDirection00
static int tolua_Modules_ScrollView_getDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDirection'", NULL);
#endif
  {
   SCROLLVIEW_DIR tolua_ret = (SCROLLVIEW_DIR)  self->getDirection();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getInnerContainer of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_getInnerContainer00
static int tolua_Modules_ScrollView_getInnerContainer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getInnerContainer'", NULL);
#endif
  {
   Layout* tolua_ret = (Layout*)  self->getInnerContainer();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Layout");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInnerContainer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: scrollToBottom of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_scrollToBottom00
static int tolua_Modules_ScrollView_scrollToBottom00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  float time = ((float)  tolua_tonumber(tolua_S,2,0));
  bool attenuated = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'scrollToBottom'", NULL);
#endif
  {
   self->scrollToBottom(time,attenuated);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'scrollToBottom'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: scrollToTop of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_scrollToTop00
static int tolua_Modules_ScrollView_scrollToTop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  float time = ((float)  tolua_tonumber(tolua_S,2,0));
  bool attenuated = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'scrollToTop'", NULL);
#endif
  {
   self->scrollToTop(time,attenuated);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'scrollToTop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: scrollToLeft of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_scrollToLeft00
static int tolua_Modules_ScrollView_scrollToLeft00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  float time = ((float)  tolua_tonumber(tolua_S,2,0));
  bool attenuated = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'scrollToLeft'", NULL);
#endif
  {
   self->scrollToLeft(time,attenuated);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'scrollToLeft'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: scrollToRight of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_scrollToRight00
static int tolua_Modules_ScrollView_scrollToRight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  float time = ((float)  tolua_tonumber(tolua_S,2,0));
  bool attenuated = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'scrollToRight'", NULL);
#endif
  {
   self->scrollToRight(time,attenuated);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'scrollToRight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: scrollToTopLeft of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_scrollToTopLeft00
static int tolua_Modules_ScrollView_scrollToTopLeft00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  float time = ((float)  tolua_tonumber(tolua_S,2,0));
  bool attenuated = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'scrollToTopLeft'", NULL);
#endif
  {
   self->scrollToTopLeft(time,attenuated);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'scrollToTopLeft'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: scrollToTopRight of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_scrollToTopRight00
static int tolua_Modules_ScrollView_scrollToTopRight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  float time = ((float)  tolua_tonumber(tolua_S,2,0));
  bool attenuated = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'scrollToTopRight'", NULL);
#endif
  {
   self->scrollToTopRight(time,attenuated);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'scrollToTopRight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: scrollToBottomLeft of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_scrollToBottomLeft00
static int tolua_Modules_ScrollView_scrollToBottomLeft00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  float time = ((float)  tolua_tonumber(tolua_S,2,0));
  bool attenuated = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'scrollToBottomLeft'", NULL);
#endif
  {
   self->scrollToBottomLeft(time,attenuated);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'scrollToBottomLeft'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: scrollToBottomRight of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_scrollToBottomRight00
static int tolua_Modules_ScrollView_scrollToBottomRight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  float time = ((float)  tolua_tonumber(tolua_S,2,0));
  bool attenuated = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'scrollToBottomRight'", NULL);
#endif
  {
   self->scrollToBottomRight(time,attenuated);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'scrollToBottomRight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: scrollToPercentVertical of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_scrollToPercentVertical00
static int tolua_Modules_ScrollView_scrollToPercentVertical00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  float percent = ((float)  tolua_tonumber(tolua_S,2,0));
  float time = ((float)  tolua_tonumber(tolua_S,3,0));
  bool attenuated = ((bool)  tolua_toboolean(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'scrollToPercentVertical'", NULL);
#endif
  {
   self->scrollToPercentVertical(percent,time,attenuated);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'scrollToPercentVertical'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: scrollToPercentHorizontal of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_scrollToPercentHorizontal00
static int tolua_Modules_ScrollView_scrollToPercentHorizontal00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  float percent = ((float)  tolua_tonumber(tolua_S,2,0));
  float time = ((float)  tolua_tonumber(tolua_S,3,0));
  bool attenuated = ((bool)  tolua_toboolean(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'scrollToPercentHorizontal'", NULL);
#endif
  {
   self->scrollToPercentHorizontal(percent,time,attenuated);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'scrollToPercentHorizontal'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: scrollToPercentBothDirection of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_scrollToPercentBothDirection00
static int tolua_Modules_ScrollView_scrollToPercentBothDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* percent = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
  float time = ((float)  tolua_tonumber(tolua_S,3,0));
  bool attenuated = ((bool)  tolua_toboolean(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'scrollToPercentBothDirection'", NULL);
#endif
  {
   self->scrollToPercentBothDirection(*percent,time,attenuated);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'scrollToPercentBothDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: jumpToBottom of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_jumpToBottom00
static int tolua_Modules_ScrollView_jumpToBottom00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'jumpToBottom'", NULL);
#endif
  {
   self->jumpToBottom();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'jumpToBottom'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: jumpToTop of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_jumpToTop00
static int tolua_Modules_ScrollView_jumpToTop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'jumpToTop'", NULL);
#endif
  {
   self->jumpToTop();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'jumpToTop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: jumpToLeft of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_jumpToLeft00
static int tolua_Modules_ScrollView_jumpToLeft00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'jumpToLeft'", NULL);
#endif
  {
   self->jumpToLeft();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'jumpToLeft'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: jumpToRight of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_jumpToRight00
static int tolua_Modules_ScrollView_jumpToRight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'jumpToRight'", NULL);
#endif
  {
   self->jumpToRight();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'jumpToRight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: jumpToTopLeft of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_jumpToTopLeft00
static int tolua_Modules_ScrollView_jumpToTopLeft00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'jumpToTopLeft'", NULL);
#endif
  {
   self->jumpToTopLeft();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'jumpToTopLeft'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: jumpToTopRight of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_jumpToTopRight00
static int tolua_Modules_ScrollView_jumpToTopRight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'jumpToTopRight'", NULL);
#endif
  {
   self->jumpToTopRight();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'jumpToTopRight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: jumpToBottomLeft of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_jumpToBottomLeft00
static int tolua_Modules_ScrollView_jumpToBottomLeft00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'jumpToBottomLeft'", NULL);
#endif
  {
   self->jumpToBottomLeft();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'jumpToBottomLeft'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: jumpToBottomRight of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_jumpToBottomRight00
static int tolua_Modules_ScrollView_jumpToBottomRight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'jumpToBottomRight'", NULL);
#endif
  {
   self->jumpToBottomRight();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'jumpToBottomRight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: jumpToPercentVertical of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_jumpToPercentVertical00
static int tolua_Modules_ScrollView_jumpToPercentVertical00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  float percent = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'jumpToPercentVertical'", NULL);
#endif
  {
   self->jumpToPercentVertical(percent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'jumpToPercentVertical'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: jumpToPercentHorizontal of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_jumpToPercentHorizontal00
static int tolua_Modules_ScrollView_jumpToPercentHorizontal00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  float percent = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'jumpToPercentHorizontal'", NULL);
#endif
  {
   self->jumpToPercentHorizontal(percent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'jumpToPercentHorizontal'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: jumpToPercentBothDirection of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_jumpToPercentBothDirection00
static int tolua_Modules_ScrollView_jumpToPercentBothDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* percent = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'jumpToPercentBothDirection'", NULL);
#endif
  {
   self->jumpToPercentBothDirection(*percent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'jumpToPercentBothDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setInnerContainerSize of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_setInnerContainerSize00
static int tolua_Modules_ScrollView_setInnerContainerSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* size = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInnerContainerSize'", NULL);
#endif
  {
   self->setInnerContainerSize(*size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInnerContainerSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getInnerContainerSize of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_getInnerContainerSize00
static int tolua_Modules_ScrollView_getInnerContainerSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const ScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const ScrollView* self = (const ScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getInnerContainerSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getInnerContainerSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInnerContainerSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_addChild00
static int tolua_Modules_ScrollView_addChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCNode* child = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   self->addChild(child);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_addChild01
static int tolua_Modules_ScrollView_addChild01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCNode* child = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  int zOrder = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   self->addChild(child,zOrder);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Modules_ScrollView_addChild00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_addChild02
static int tolua_Modules_ScrollView_addChild02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCNode* child = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  int zOrder = ((int)  tolua_tonumber(tolua_S,3,0));
  int tag = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   self->addChild(child,zOrder,tag);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Modules_ScrollView_addChild01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllChildren of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_removeAllChildren00
static int tolua_Modules_ScrollView_removeAllChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllChildren'", NULL);
#endif
  {
   self->removeAllChildren();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllChildrenWithCleanup of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_removeAllChildrenWithCleanup00
static int tolua_Modules_ScrollView_removeAllChildrenWithCleanup00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  bool cleanup = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllChildrenWithCleanup'", NULL);
#endif
  {
   self->removeAllChildrenWithCleanup(cleanup);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllChildrenWithCleanup'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeChild of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_removeChild00
static int tolua_Modules_ScrollView_removeChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCNode* child = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeChild'", NULL);
#endif
  {
   self->removeChild(child);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeChild of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_removeChild01
static int tolua_Modules_ScrollView_removeChild01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCNode* child = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  bool cleaup = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeChild'", NULL);
#endif
  {
   self->removeChild(child,cleaup);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Modules_ScrollView_removeChild00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildren of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_getChildren00
static int tolua_Modules_ScrollView_getChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChildren'", NULL);
#endif
  {
   CCArray* tolua_ret = (CCArray*)  self->getChildren();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildrenCount of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_getChildrenCount00
static int tolua_Modules_ScrollView_getChildrenCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const ScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const ScrollView* self = (const ScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChildrenCount'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getChildrenCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildrenCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildByTag of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_getChildByTag00
static int tolua_Modules_ScrollView_getChildByTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChildByTag'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getChildByTag(tag);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildByTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildByName of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_getChildByName00
static int tolua_Modules_ScrollView_getChildByName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChildByName'", NULL);
#endif
  {
   Widget* tolua_ret = (Widget*)  self->getChildByName(name);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Widget");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildByName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addNode of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_addNode00
static int tolua_Modules_ScrollView_addNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCNode* node = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addNode'", NULL);
#endif
  {
   self->addNode(node);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addNode of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_addNode01
static int tolua_Modules_ScrollView_addNode01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCNode* node = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  int zOrder = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addNode'", NULL);
#endif
  {
   self->addNode(node,zOrder);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Modules_ScrollView_addNode00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: addNode of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_addNode02
static int tolua_Modules_ScrollView_addNode02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCNode* node = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  int zOrder = ((int)  tolua_tonumber(tolua_S,3,0));
  int tag = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addNode'", NULL);
#endif
  {
   self->addNode(node,zOrder,tag);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Modules_ScrollView_addNode01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getNodeByTag of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_getNodeByTag00
static int tolua_Modules_ScrollView_getNodeByTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNodeByTag'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getNodeByTag(tag);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNodeByTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeNodeByTag of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_removeNodeByTag00
static int tolua_Modules_ScrollView_removeNodeByTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeNodeByTag'", NULL);
#endif
  {
   self->removeNodeByTag(tag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeNodeByTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getNodes of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_getNodes00
static int tolua_Modules_ScrollView_getNodes00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNodes'", NULL);
#endif
  {
   CCArray* tolua_ret = (CCArray*)  self->getNodes();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNodes'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeNode of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_removeNode00
static int tolua_Modules_ScrollView_removeNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCNode* node = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeNode'", NULL);
#endif
  {
   self->removeNode(node);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllNodes of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_removeAllNodes00
static int tolua_Modules_ScrollView_removeAllNodes00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllNodes'", NULL);
#endif
  {
   self->removeAllNodes();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllNodes'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: update of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_update00
static int tolua_Modules_ScrollView_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  float dt = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'update'", NULL);
#endif
  {
   self->update(dt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'update'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBounceEnabled of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_setBounceEnabled00
static int tolua_Modules_ScrollView_setBounceEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBounceEnabled'", NULL);
#endif
  {
   self->setBounceEnabled(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBounceEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isBounceEnabled of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_isBounceEnabled00
static int tolua_Modules_ScrollView_isBounceEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const ScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const ScrollView* self = (const ScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isBounceEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isBounceEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isBounceEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setInertiaScrollEnabled of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_setInertiaScrollEnabled00
static int tolua_Modules_ScrollView_setInertiaScrollEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInertiaScrollEnabled'", NULL);
#endif
  {
   self->setInertiaScrollEnabled(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInertiaScrollEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isInertiaScrollEnabled of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_isInertiaScrollEnabled00
static int tolua_Modules_ScrollView_isInertiaScrollEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const ScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const ScrollView* self = (const ScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isInertiaScrollEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isInertiaScrollEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isInertiaScrollEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLayoutType of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_setLayoutType00
static int tolua_Modules_ScrollView_setLayoutType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
  LayoutType type = ((LayoutType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLayoutType'", NULL);
#endif
  {
   self->setLayoutType(type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLayoutType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLayoutType of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_getLayoutType00
static int tolua_Modules_ScrollView_getLayoutType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const ScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const ScrollView* self = (const ScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLayoutType'", NULL);
#endif
  {
   LayoutType tolua_ret = (LayoutType)  self->getLayoutType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLayoutType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_ScrollView_getDescription00
static int tolua_Modules_ScrollView_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const ScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const ScrollView* self = (const ScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->getDescription();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __UIScrollInterface__ of class  ScrollView */
#ifndef TOLUA_DISABLE_tolua_get_ScrollView___UIScrollInterface__
static int tolua_get_ScrollView___UIScrollInterface__(lua_State* tolua_S)
{
  ScrollView* self = (ScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__UIScrollInterface__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<UIScrollInterface*>(self), "UIScrollInterface");
#else
   tolua_pushusertype(tolua_S,(void*)((UIScrollInterface*)self), "UIScrollInterface");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Slider */
#ifndef TOLUA_DISABLE_tolua_Modules_Slider_new00
static int tolua_Modules_Slider_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Slider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Slider* tolua_ret = (Slider*)  Mtolua_new((Slider)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Slider");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Slider */
#ifndef TOLUA_DISABLE_tolua_Modules_Slider_new00_local
static int tolua_Modules_Slider_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Slider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Slider* tolua_ret = (Slider*)  Mtolua_new((Slider)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Slider");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Slider */
#ifndef TOLUA_DISABLE_tolua_Modules_Slider_delete00
static int tolua_Modules_Slider_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slider* self = (Slider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  Slider */
#ifndef TOLUA_DISABLE_tolua_Modules_Slider_create00
static int tolua_Modules_Slider_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Slider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Slider* tolua_ret = (Slider*)  Slider::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Slider");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadBarTexture of class  Slider */
#ifndef TOLUA_DISABLE_tolua_Modules_Slider_loadBarTexture00
static int tolua_Modules_Slider_loadBarTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slider",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slider* self = (Slider*)  tolua_tousertype(tolua_S,1,0);
  const char* fileName = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadBarTexture'", NULL);
#endif
  {
   self->loadBarTexture(fileName,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadBarTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale9Enabled of class  Slider */
#ifndef TOLUA_DISABLE_tolua_Modules_Slider_setScale9Enabled00
static int tolua_Modules_Slider_setScale9Enabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slider",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slider* self = (Slider*)  tolua_tousertype(tolua_S,1,0);
  bool able = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale9Enabled'", NULL);
#endif
  {
   self->setScale9Enabled(able);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScale9Enabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isScale9Enabled of class  Slider */
#ifndef TOLUA_DISABLE_tolua_Modules_Slider_isScale9Enabled00
static int tolua_Modules_Slider_isScale9Enabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slider* self = (Slider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isScale9Enabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isScale9Enabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isScale9Enabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCapInsets of class  Slider */
#ifndef TOLUA_DISABLE_tolua_Modules_Slider_setCapInsets00
static int tolua_Modules_Slider_setCapInsets00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slider",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slider* self = (Slider*)  tolua_tousertype(tolua_S,1,0);
  const CCRect* capInsets = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCapInsets'", NULL);
#endif
  {
   self->setCapInsets(*capInsets);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCapInsets'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCapInsetsBarRenderer of class  Slider */
#ifndef TOLUA_DISABLE_tolua_Modules_Slider_setCapInsetsBarRenderer00
static int tolua_Modules_Slider_setCapInsetsBarRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slider",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slider* self = (Slider*)  tolua_tousertype(tolua_S,1,0);
  const CCRect* capInsets = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCapInsetsBarRenderer'", NULL);
#endif
  {
   self->setCapInsetsBarRenderer(*capInsets);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCapInsetsBarRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCapInsetBarRenderer of class  Slider */
#ifndef TOLUA_DISABLE_tolua_Modules_Slider_getCapInsetBarRenderer00
static int tolua_Modules_Slider_getCapInsetBarRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slider* self = (Slider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCapInsetBarRenderer'", NULL);
#endif
  {
   const CCRect& tolua_ret = (const CCRect&)  self->getCapInsetBarRenderer();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCRect");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCapInsetBarRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCapInsetProgressBarRebderer of class  Slider */
#ifndef TOLUA_DISABLE_tolua_Modules_Slider_setCapInsetProgressBarRebderer00
static int tolua_Modules_Slider_setCapInsetProgressBarRebderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slider",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slider* self = (Slider*)  tolua_tousertype(tolua_S,1,0);
  const CCRect* capInsets = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCapInsetProgressBarRebderer'", NULL);
#endif
  {
   self->setCapInsetProgressBarRebderer(*capInsets);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCapInsetProgressBarRebderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCapInsetProgressBarRebderer of class  Slider */
#ifndef TOLUA_DISABLE_tolua_Modules_Slider_getCapInsetProgressBarRebderer00
static int tolua_Modules_Slider_getCapInsetProgressBarRebderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slider* self = (Slider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCapInsetProgressBarRebderer'", NULL);
#endif
  {
   const CCRect& tolua_ret = (const CCRect&)  self->getCapInsetProgressBarRebderer();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCRect");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCapInsetProgressBarRebderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadSlidBallTextures of class  Slider */
#ifndef TOLUA_DISABLE_tolua_Modules_Slider_loadSlidBallTextures00
static int tolua_Modules_Slider_loadSlidBallTextures00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slider",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slider* self = (Slider*)  tolua_tousertype(tolua_S,1,0);
  const char* normal = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* pressed = ((const char*)  tolua_tostring(tolua_S,3,0));
  const char* disabled = ((const char*)  tolua_tostring(tolua_S,4,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,5,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadSlidBallTextures'", NULL);
#endif
  {
   self->loadSlidBallTextures(normal,pressed,disabled,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadSlidBallTextures'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadSlidBallTextureNormal of class  Slider */
#ifndef TOLUA_DISABLE_tolua_Modules_Slider_loadSlidBallTextureNormal00
static int tolua_Modules_Slider_loadSlidBallTextureNormal00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slider",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slider* self = (Slider*)  tolua_tousertype(tolua_S,1,0);
  const char* normal = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadSlidBallTextureNormal'", NULL);
#endif
  {
   self->loadSlidBallTextureNormal(normal,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadSlidBallTextureNormal'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadSlidBallTexturePressed of class  Slider */
#ifndef TOLUA_DISABLE_tolua_Modules_Slider_loadSlidBallTexturePressed00
static int tolua_Modules_Slider_loadSlidBallTexturePressed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slider",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slider* self = (Slider*)  tolua_tousertype(tolua_S,1,0);
  const char* pressed = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadSlidBallTexturePressed'", NULL);
#endif
  {
   self->loadSlidBallTexturePressed(pressed,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadSlidBallTexturePressed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadSlidBallTextureDisabled of class  Slider */
#ifndef TOLUA_DISABLE_tolua_Modules_Slider_loadSlidBallTextureDisabled00
static int tolua_Modules_Slider_loadSlidBallTextureDisabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slider",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slider* self = (Slider*)  tolua_tousertype(tolua_S,1,0);
  const char* disabled = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadSlidBallTextureDisabled'", NULL);
#endif
  {
   self->loadSlidBallTextureDisabled(disabled,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadSlidBallTextureDisabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadProgressBarTexture of class  Slider */
#ifndef TOLUA_DISABLE_tolua_Modules_Slider_loadProgressBarTexture00
static int tolua_Modules_Slider_loadProgressBarTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slider",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slider* self = (Slider*)  tolua_tousertype(tolua_S,1,0);
  const char* fileName = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadProgressBarTexture'", NULL);
#endif
  {
   self->loadProgressBarTexture(fileName,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadProgressBarTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPercent of class  Slider */
#ifndef TOLUA_DISABLE_tolua_Modules_Slider_setPercent00
static int tolua_Modules_Slider_setPercent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slider",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slider* self = (Slider*)  tolua_tousertype(tolua_S,1,0);
  int percent = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPercent'", NULL);
#endif
  {
   self->setPercent(percent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPercent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPercent of class  Slider */
#ifndef TOLUA_DISABLE_tolua_Modules_Slider_getPercent00
static int tolua_Modules_Slider_getPercent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slider* self = (Slider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPercent'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getPercent();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPercent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchBegan of class  Slider */
#ifndef TOLUA_DISABLE_tolua_Modules_Slider_onTouchBegan00
static int tolua_Modules_Slider_onTouchBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slider",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slider* self = (Slider*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* touch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* unused_event = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchBegan'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->onTouchBegan(touch,unused_event);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchMoved of class  Slider */
#ifndef TOLUA_DISABLE_tolua_Modules_Slider_onTouchMoved00
static int tolua_Modules_Slider_onTouchMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slider",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slider* self = (Slider*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* touch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* unused_event = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchMoved'", NULL);
#endif
  {
   self->onTouchMoved(touch,unused_event);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchEnded of class  Slider */
#ifndef TOLUA_DISABLE_tolua_Modules_Slider_onTouchEnded00
static int tolua_Modules_Slider_onTouchEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slider",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slider* self = (Slider*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* touch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* unused_event = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchEnded'", NULL);
#endif
  {
   self->onTouchEnded(touch,unused_event);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchCancelled of class  Slider */
#ifndef TOLUA_DISABLE_tolua_Modules_Slider_onTouchCancelled00
static int tolua_Modules_Slider_onTouchCancelled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slider",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slider* self = (Slider*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* touch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* unused_event = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchCancelled'", NULL);
#endif
  {
   self->onTouchCancelled(touch,unused_event);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchCancelled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentSize of class  Slider */
#ifndef TOLUA_DISABLE_tolua_Modules_Slider_getContentSize00
static int tolua_Modules_Slider_getContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Slider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Slider* self = (const Slider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getContentSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVirtualRenderer of class  Slider */
#ifndef TOLUA_DISABLE_tolua_Modules_Slider_getVirtualRenderer00
static int tolua_Modules_Slider_getVirtualRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slider* self = (Slider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVirtualRenderer'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getVirtualRenderer();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVirtualRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ignoreContentAdaptWithSize of class  Slider */
#ifndef TOLUA_DISABLE_tolua_Modules_Slider_ignoreContentAdaptWithSize00
static int tolua_Modules_Slider_ignoreContentAdaptWithSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slider",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slider* self = (Slider*)  tolua_tousertype(tolua_S,1,0);
  bool ignore = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ignoreContentAdaptWithSize'", NULL);
#endif
  {
   self->ignoreContentAdaptWithSize(ignore);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ignoreContentAdaptWithSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  Slider */
#ifndef TOLUA_DISABLE_tolua_Modules_Slider_getDescription00
static int tolua_Modules_Slider_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Slider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Slider* self = (const Slider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->getDescription();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_new00
static int tolua_Modules_TextField_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   TextField* tolua_ret = (TextField*)  Mtolua_new((TextField)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"TextField");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_new00_local
static int tolua_Modules_TextField_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   TextField* tolua_ret = (TextField*)  Mtolua_new((TextField)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"TextField");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_delete00
static int tolua_Modules_TextField_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_create00
static int tolua_Modules_TextField_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   TextField* tolua_ret = (TextField*)  TextField::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"TextField");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchSize of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_setTouchSize00
static int tolua_Modules_TextField_setTouchSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* size = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchSize'", NULL);
#endif
  {
   self->setTouchSize(*size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTouchSize of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_getTouchSize00
static int tolua_Modules_TextField_getTouchSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTouchSize'", NULL);
#endif
  {
   CCSize tolua_ret = (CCSize)  self->getTouchSize();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCSize)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCSize));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTouchSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchAreaEnabled of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_setTouchAreaEnabled00
static int tolua_Modules_TextField_setTouchAreaEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
  bool enable = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchAreaEnabled'", NULL);
#endif
  {
   self->setTouchAreaEnabled(enable);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchAreaEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hitTest of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_hitTest00
static int tolua_Modules_TextField_hitTest00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* pt = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hitTest'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hitTest(*pt);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hitTest'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setText of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_setText00
static int tolua_Modules_TextField_setText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
  const std::string text = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setText'", NULL);
#endif
  {
   self->setText(text);
   tolua_pushcppstring(tolua_S,(const char*)text);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPlaceHolder of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_setPlaceHolder00
static int tolua_Modules_TextField_setPlaceHolder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
  const std::string value = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPlaceHolder'", NULL);
#endif
  {
   self->setPlaceHolder(value);
   tolua_pushcppstring(tolua_S,(const char*)value);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPlaceHolder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPlaceHolder of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_getPlaceHolder00
static int tolua_Modules_TextField_getPlaceHolder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPlaceHolder'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getPlaceHolder();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPlaceHolder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFontSize of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_setFontSize00
static int tolua_Modules_TextField_setFontSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
  int size = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFontSize'", NULL);
#endif
  {
   self->setFontSize(size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFontSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFontSize of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_getFontSize00
static int tolua_Modules_TextField_getFontSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFontSize'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getFontSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFontSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFontName of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_setFontName00
static int tolua_Modules_TextField_setFontName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFontName'", NULL);
#endif
  {
   self->setFontName(name);
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFontName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFontName of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_getFontName00
static int tolua_Modules_TextField_getFontName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFontName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getFontName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFontName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: didNotSelectSelf of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_didNotSelectSelf00
static int tolua_Modules_TextField_didNotSelectSelf00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'didNotSelectSelf'", NULL);
#endif
  {
   self->didNotSelectSelf();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'didNotSelectSelf'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStringValue of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_getStringValue00
static int tolua_Modules_TextField_getStringValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStringValue'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getStringValue();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStringValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchBegan of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_onTouchBegan00
static int tolua_Modules_TextField_onTouchBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* touch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* unused_event = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchBegan'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->onTouchBegan(touch,unused_event);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaxLengthEnabled of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_setMaxLengthEnabled00
static int tolua_Modules_TextField_setMaxLengthEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
  bool enable = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxLengthEnabled'", NULL);
#endif
  {
   self->setMaxLengthEnabled(enable);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxLengthEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isMaxLengthEnabled of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_isMaxLengthEnabled00
static int tolua_Modules_TextField_isMaxLengthEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isMaxLengthEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isMaxLengthEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isMaxLengthEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaxLength of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_setMaxLength00
static int tolua_Modules_TextField_setMaxLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
  int length = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxLength'", NULL);
#endif
  {
   self->setMaxLength(length);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxLength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaxLength of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_getMaxLength00
static int tolua_Modules_TextField_getMaxLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxLength'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMaxLength();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxLength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPasswordEnabled of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_setPasswordEnabled00
static int tolua_Modules_TextField_setPasswordEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
  bool enable = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPasswordEnabled'", NULL);
#endif
  {
   self->setPasswordEnabled(enable);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPasswordEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isPasswordEnabled of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_isPasswordEnabled00
static int tolua_Modules_TextField_isPasswordEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isPasswordEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isPasswordEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isPasswordEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPasswordStyleText of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_setPasswordStyleText00
static int tolua_Modules_TextField_setPasswordStyleText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
  const char* styleText = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPasswordStyleText'", NULL);
#endif
  {
   self->setPasswordStyleText(styleText);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPasswordStyleText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPasswordStyleText of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_getPasswordStyleText00
static int tolua_Modules_TextField_getPasswordStyleText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPasswordStyleText'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getPasswordStyleText();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPasswordStyleText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: update of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_update00
static int tolua_Modules_TextField_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
  float dt = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'update'", NULL);
#endif
  {
   self->update(dt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'update'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAttachWithIME of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_getAttachWithIME00
static int tolua_Modules_TextField_getAttachWithIME00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAttachWithIME'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getAttachWithIME();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAttachWithIME'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAttachWithIME of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_setAttachWithIME00
static int tolua_Modules_TextField_setAttachWithIME00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
  bool attach = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAttachWithIME'", NULL);
#endif
  {
   self->setAttachWithIME(attach);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAttachWithIME'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDetachWithIME of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_getDetachWithIME00
static int tolua_Modules_TextField_getDetachWithIME00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDetachWithIME'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getDetachWithIME();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDetachWithIME'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDetachWithIME of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_setDetachWithIME00
static int tolua_Modules_TextField_setDetachWithIME00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
  bool detach = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDetachWithIME'", NULL);
#endif
  {
   self->setDetachWithIME(detach);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDetachWithIME'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getInsertText of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_getInsertText00
static int tolua_Modules_TextField_getInsertText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getInsertText'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getInsertText();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInsertText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setInsertText of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_setInsertText00
static int tolua_Modules_TextField_setInsertText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
  bool insertText = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInsertText'", NULL);
#endif
  {
   self->setInsertText(insertText);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInsertText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDeleteBackward of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_getDeleteBackward00
static int tolua_Modules_TextField_getDeleteBackward00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDeleteBackward'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getDeleteBackward();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDeleteBackward'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDeleteBackward of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_setDeleteBackward00
static int tolua_Modules_TextField_setDeleteBackward00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
  bool deleteBackward = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDeleteBackward'", NULL);
#endif
  {
   self->setDeleteBackward(deleteBackward);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDeleteBackward'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnchorPoint of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_setAnchorPoint00
static int tolua_Modules_TextField_setAnchorPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* pt = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnchorPoint'", NULL);
#endif
  {
   self->setAnchorPoint(*pt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnchorPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_getDescription00
static int tolua_Modules_TextField_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const TextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const TextField* self = (const TextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->getDescription();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentSize of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_getContentSize00
static int tolua_Modules_TextField_getContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const TextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const TextField* self = (const TextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getContentSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVirtualRenderer of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_getVirtualRenderer00
static int tolua_Modules_TextField_getVirtualRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVirtualRenderer'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getVirtualRenderer();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVirtualRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: attachWithIME of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_attachWithIME00
static int tolua_Modules_TextField_attachWithIME00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'attachWithIME'", NULL);
#endif
  {
   self->attachWithIME();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'attachWithIME'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onEnter of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_onEnter00
static int tolua_Modules_TextField_onEnter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onEnter'", NULL);
#endif
  {
   self->onEnter();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onEnter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTextAreaSize of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_setTextAreaSize00
static int tolua_Modules_TextField_setTextAreaSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* size = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextAreaSize'", NULL);
#endif
  {
   self->setTextAreaSize(*size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextAreaSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTextHorizontalAlignment of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_setTextHorizontalAlignment00
static int tolua_Modules_TextField_setTextHorizontalAlignment00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCTextAlignment",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
  CCTextAlignment alignment = *((CCTextAlignment*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextHorizontalAlignment'", NULL);
#endif
  {
   self->setTextHorizontalAlignment(alignment);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextHorizontalAlignment'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTextVerticalAlignment of class  TextField */
#ifndef TOLUA_DISABLE_tolua_Modules_TextField_setTextVerticalAlignment00
static int tolua_Modules_TextField_setTextVerticalAlignment00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextField",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCVerticalTextAlignment",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextField* self = (TextField*)  tolua_tousertype(tolua_S,1,0);
  CCVerticalTextAlignment alignment = *((CCVerticalTextAlignment*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextVerticalAlignment'", NULL);
#endif
  {
   self->setTextVerticalAlignment(alignment);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextVerticalAlignment'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  TouchGroup */
#ifndef TOLUA_DISABLE_tolua_Modules_TouchGroup_new00
static int tolua_Modules_TouchGroup_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"TouchGroup",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   TouchGroup* tolua_ret = (TouchGroup*)  Mtolua_new((TouchGroup)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"TouchGroup");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  TouchGroup */
#ifndef TOLUA_DISABLE_tolua_Modules_TouchGroup_new00_local
static int tolua_Modules_TouchGroup_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"TouchGroup",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   TouchGroup* tolua_ret = (TouchGroup*)  Mtolua_new((TouchGroup)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"TouchGroup");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  TouchGroup */
#ifndef TOLUA_DISABLE_tolua_Modules_TouchGroup_delete00
static int tolua_Modules_TouchGroup_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TouchGroup",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TouchGroup* self = (TouchGroup*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  TouchGroup */
#ifndef TOLUA_DISABLE_tolua_Modules_TouchGroup_create00
static int tolua_Modules_TouchGroup_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"TouchGroup",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   TouchGroup* tolua_ret = (TouchGroup*)  TouchGroup::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"TouchGroup");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  TouchGroup */
#ifndef TOLUA_DISABLE_tolua_Modules_TouchGroup_init00
static int tolua_Modules_TouchGroup_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TouchGroup",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TouchGroup* self = (TouchGroup*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onEnter of class  TouchGroup */
#ifndef TOLUA_DISABLE_tolua_Modules_TouchGroup_onEnter00
static int tolua_Modules_TouchGroup_onEnter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TouchGroup",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TouchGroup* self = (TouchGroup*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onEnter'", NULL);
#endif
  {
   self->onEnter();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onEnter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onExit of class  TouchGroup */
#ifndef TOLUA_DISABLE_tolua_Modules_TouchGroup_onExit00
static int tolua_Modules_TouchGroup_onExit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TouchGroup",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TouchGroup* self = (TouchGroup*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onExit'", NULL);
#endif
  {
   self->onExit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onExit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onEnterTransitionDidFinish of class  TouchGroup */
#ifndef TOLUA_DISABLE_tolua_Modules_TouchGroup_onEnterTransitionDidFinish00
static int tolua_Modules_TouchGroup_onEnterTransitionDidFinish00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TouchGroup",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TouchGroup* self = (TouchGroup*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onEnterTransitionDidFinish'", NULL);
#endif
  {
   self->onEnterTransitionDidFinish();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onEnterTransitionDidFinish'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchBegan of class  TouchGroup */
#ifndef TOLUA_DISABLE_tolua_Modules_TouchGroup_ccTouchBegan00
static int tolua_Modules_TouchGroup_ccTouchBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TouchGroup",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TouchGroup* self = (TouchGroup*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* pEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchBegan'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->ccTouchBegan(pTouch,pEvent);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchMoved of class  TouchGroup */
#ifndef TOLUA_DISABLE_tolua_Modules_TouchGroup_ccTouchMoved00
static int tolua_Modules_TouchGroup_ccTouchMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TouchGroup",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TouchGroup* self = (TouchGroup*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* pEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchMoved'", NULL);
#endif
  {
   self->ccTouchMoved(pTouch,pEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchEnded of class  TouchGroup */
#ifndef TOLUA_DISABLE_tolua_Modules_TouchGroup_ccTouchEnded00
static int tolua_Modules_TouchGroup_ccTouchEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TouchGroup",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TouchGroup* self = (TouchGroup*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* pEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchEnded'", NULL);
#endif
  {
   self->ccTouchEnded(pTouch,pEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchCancelled of class  TouchGroup */
#ifndef TOLUA_DISABLE_tolua_Modules_TouchGroup_ccTouchCancelled00
static int tolua_Modules_TouchGroup_ccTouchCancelled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TouchGroup",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TouchGroup* self = (TouchGroup*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* pEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchCancelled'", NULL);
#endif
  {
   self->ccTouchCancelled(pTouch,pEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchCancelled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addWidget of class  TouchGroup */
#ifndef TOLUA_DISABLE_tolua_Modules_TouchGroup_addWidget00
static int tolua_Modules_TouchGroup_addWidget00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TouchGroup",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TouchGroup* self = (TouchGroup*)  tolua_tousertype(tolua_S,1,0);
  Widget* widget = ((Widget*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addWidget'", NULL);
#endif
  {
   self->addWidget(widget);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addWidget'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeWidget of class  TouchGroup */
#ifndef TOLUA_DISABLE_tolua_Modules_TouchGroup_removeWidget00
static int tolua_Modules_TouchGroup_removeWidget00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TouchGroup",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TouchGroup* self = (TouchGroup*)  tolua_tousertype(tolua_S,1,0);
  Widget* widget = ((Widget*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeWidget'", NULL);
#endif
  {
   self->removeWidget(widget);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeWidget'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWidgetByTag of class  TouchGroup */
#ifndef TOLUA_DISABLE_tolua_Modules_TouchGroup_getWidgetByTag00
static int tolua_Modules_TouchGroup_getWidgetByTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TouchGroup",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TouchGroup* self = (TouchGroup*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWidgetByTag'", NULL);
#endif
  {
   Widget* tolua_ret = (Widget*)  self->getWidgetByTag(tag);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Widget");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWidgetByTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWidgetByName of class  TouchGroup */
#ifndef TOLUA_DISABLE_tolua_Modules_TouchGroup_getWidgetByName00
static int tolua_Modules_TouchGroup_getWidgetByName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TouchGroup",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TouchGroup* self = (TouchGroup*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWidgetByName'", NULL);
#endif
  {
   Widget* tolua_ret = (Widget*)  self->getWidgetByName(name);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Widget");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWidgetByName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clear of class  TouchGroup */
#ifndef TOLUA_DISABLE_tolua_Modules_TouchGroup_clear00
static int tolua_Modules_TouchGroup_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TouchGroup",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TouchGroup* self = (TouchGroup*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clear'", NULL);
#endif
  {
   self->clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRootWidget of class  TouchGroup */
#ifndef TOLUA_DISABLE_tolua_Modules_TouchGroup_getRootWidget00
static int tolua_Modules_TouchGroup_getRootWidget00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TouchGroup",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TouchGroup* self = (TouchGroup*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRootWidget'", NULL);
#endif
  {
   Widget* tolua_ret = (Widget*)  self->getRootWidget();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Widget");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRootWidget'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_new00
static int tolua_Modules_Widget_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Widget* tolua_ret = (Widget*)  Mtolua_new((Widget)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Widget");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_new00_local
static int tolua_Modules_Widget_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Widget* tolua_ret = (Widget*)  Mtolua_new((Widget)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Widget");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_delete00
static int tolua_Modules_Widget_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_create00
static int tolua_Modules_Widget_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Widget* tolua_ret = (Widget*)  Widget::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Widget");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEnabled of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_setEnabled00
static int tolua_Modules_Widget_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'", NULL);
#endif
  {
   self->setEnabled(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isEnabled of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_isEnabled00
static int tolua_Modules_Widget_isEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Widget* self = (const Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBright of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_setBright00
static int tolua_Modules_Widget_setBright00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  bool bright = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBright'", NULL);
#endif
  {
   self->setBright(bright);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBright'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isBright of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_isBright00
static int tolua_Modules_Widget_isBright00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Widget* self = (const Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isBright'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isBright();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isBright'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchEnabled of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_setTouchEnabled00
static int tolua_Modules_Widget_setTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchEnabled'", NULL);
#endif
  {
   self->setTouchEnabled(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBrightStyle of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_setBrightStyle00
static int tolua_Modules_Widget_setBrightStyle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  BrightStyle style = ((BrightStyle) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBrightStyle'", NULL);
#endif
  {
   self->setBrightStyle(style);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBrightStyle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchEnabled of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_isTouchEnabled00
static int tolua_Modules_Widget_isTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Widget* self = (const Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFocused of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_isFocused00
static int tolua_Modules_Widget_isFocused00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Widget* self = (const Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFocused'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFocused();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFocused'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFocused of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_setFocused00
static int tolua_Modules_Widget_setFocused00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  bool fucosed = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFocused'", NULL);
#endif
  {
   self->setFocused(fucosed);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFocused'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLeftInParent of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_getLeftInParent00
static int tolua_Modules_Widget_getLeftInParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLeftInParent'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getLeftInParent();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLeftInParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBottomInParent of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_getBottomInParent00
static int tolua_Modules_Widget_getBottomInParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBottomInParent'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getBottomInParent();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBottomInParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRightInParent of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_getRightInParent00
static int tolua_Modules_Widget_getRightInParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRightInParent'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getRightInParent();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRightInParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTopInParent of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_getTopInParent00
static int tolua_Modules_Widget_getTopInParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTopInParent'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getTopInParent();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTopInParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_addChild00
static int tolua_Modules_Widget_addChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  CCNode* child = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   self->addChild(child);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_addChild01
static int tolua_Modules_Widget_addChild01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  CCNode* child = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  int zOrder = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   self->addChild(child,zOrder);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Modules_Widget_addChild00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_addChild02
static int tolua_Modules_Widget_addChild02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  CCNode* child = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  int zOrder = ((int)  tolua_tonumber(tolua_S,3,0));
  int tag = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   self->addChild(child,zOrder,tag);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Modules_Widget_addChild01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildByTag of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_getChildByTag00
static int tolua_Modules_Widget_getChildByTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChildByTag'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getChildByTag(tag);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildByTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sortAllChildren of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_sortAllChildren00
static int tolua_Modules_Widget_sortAllChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'sortAllChildren'", NULL);
#endif
  {
   self->sortAllChildren();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sortAllChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildren of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_getChildren00
static int tolua_Modules_Widget_getChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChildren'", NULL);
#endif
  {
   CCArray* tolua_ret = (CCArray*)  self->getChildren();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildrenCount of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_getChildrenCount00
static int tolua_Modules_Widget_getChildrenCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Widget* self = (const Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChildrenCount'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getChildrenCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildrenCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeFromParent of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_removeFromParent00
static int tolua_Modules_Widget_removeFromParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeFromParent'", NULL);
#endif
  {
   self->removeFromParent();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeFromParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeFromParentAndCleanup of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_removeFromParentAndCleanup00
static int tolua_Modules_Widget_removeFromParentAndCleanup00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  bool cleanup = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeFromParentAndCleanup'", NULL);
#endif
  {
   self->removeFromParentAndCleanup(cleanup);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeFromParentAndCleanup'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeChild of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_removeChild00
static int tolua_Modules_Widget_removeChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  CCNode* child = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeChild'", NULL);
#endif
  {
   self->removeChild(child);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeChild of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_removeChild01
static int tolua_Modules_Widget_removeChild01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  CCNode* child = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  bool cleanup = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeChild'", NULL);
#endif
  {
   self->removeChild(child,cleanup);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Modules_Widget_removeChild00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeChildByTag of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_removeChildByTag00
static int tolua_Modules_Widget_removeChildByTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
  bool cleanup = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeChildByTag'", NULL);
#endif
  {
   self->removeChildByTag(tag,cleanup);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeChildByTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllChildren of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_removeAllChildren00
static int tolua_Modules_Widget_removeAllChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllChildren'", NULL);
#endif
  {
   self->removeAllChildren();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllChildrenWithCleanup of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_removeAllChildrenWithCleanup00
static int tolua_Modules_Widget_removeAllChildrenWithCleanup00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  bool cleanup = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllChildrenWithCleanup'", NULL);
#endif
  {
   self->removeAllChildrenWithCleanup(cleanup);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllChildrenWithCleanup'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildByName of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_getChildByName00
static int tolua_Modules_Widget_getChildByName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChildByName'", NULL);
#endif
  {
   Widget* tolua_ret = (Widget*)  self->getChildByName(name);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Widget");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildByName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addNode of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_addNode00
static int tolua_Modules_Widget_addNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  CCNode* node = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addNode'", NULL);
#endif
  {
   self->addNode(node);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addNode of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_addNode01
static int tolua_Modules_Widget_addNode01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  CCNode* node = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  int zOrder = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addNode'", NULL);
#endif
  {
   self->addNode(node,zOrder);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Modules_Widget_addNode00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: addNode of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_addNode02
static int tolua_Modules_Widget_addNode02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  CCNode* node = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  int zOrder = ((int)  tolua_tonumber(tolua_S,3,0));
  int tag = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addNode'", NULL);
#endif
  {
   self->addNode(node,zOrder,tag);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Modules_Widget_addNode01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getNodeByTag of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_getNodeByTag00
static int tolua_Modules_Widget_getNodeByTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNodeByTag'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getNodeByTag(tag);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNodeByTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getNodes of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_getNodes00
static int tolua_Modules_Widget_getNodes00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNodes'", NULL);
#endif
  {
   CCArray* tolua_ret = (CCArray*)  self->getNodes();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNodes'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeNode of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_removeNode00
static int tolua_Modules_Widget_removeNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  CCNode* node = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeNode'", NULL);
#endif
  {
   self->removeNode(node);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeNodeByTag of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_removeNodeByTag00
static int tolua_Modules_Widget_removeNodeByTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeNodeByTag'", NULL);
#endif
  {
   self->removeNodeByTag(tag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeNodeByTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllNodes of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_removeAllNodes00
static int tolua_Modules_Widget_removeAllNodes00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllNodes'", NULL);
#endif
  {
   self->removeAllNodes();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllNodes'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: visit of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_visit00
static int tolua_Modules_Widget_visit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'visit'", NULL);
#endif
  {
   self->visit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'visit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPosition of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_setPosition00
static int tolua_Modules_Widget_setPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* pos = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'", NULL);
#endif
  {
   self->setPosition(*pos);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPositionPercent of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_setPositionPercent00
static int tolua_Modules_Widget_setPositionPercent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* percent = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPositionPercent'", NULL);
#endif
  {
   self->setPositionPercent(*percent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPositionPercent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPositionPercent of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_getPositionPercent00
static int tolua_Modules_Widget_getPositionPercent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPositionPercent'", NULL);
#endif
  {
   const CCPoint& tolua_ret = (const CCPoint&)  self->getPositionPercent();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPositionPercent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPositionType of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_setPositionType00
static int tolua_Modules_Widget_setPositionType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  PositionType type = ((PositionType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPositionType'", NULL);
#endif
  {
   self->setPositionType(type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPositionType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPositionType of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_getPositionType00
static int tolua_Modules_Widget_getPositionType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Widget* self = (const Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPositionType'", NULL);
#endif
  {
   PositionType tolua_ret = (PositionType)  self->getPositionType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPositionType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFlipX of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_setFlipX00
static int tolua_Modules_Widget_setFlipX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  bool flipX = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFlipX'", NULL);
#endif
  {
   self->setFlipX(flipX);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFlipX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFlipX of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_isFlipX00
static int tolua_Modules_Widget_isFlipX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFlipX'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFlipX();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFlipX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFlipY of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_setFlipY00
static int tolua_Modules_Widget_setFlipY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  bool flipY = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFlipY'", NULL);
#endif
  {
   self->setFlipY(flipY);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFlipY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFlipY of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_isFlipY00
static int tolua_Modules_Widget_isFlipY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFlipY'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFlipY();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFlipY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_setColor00
static int tolua_Modules_Widget_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  const ccColor3B* color = ((const ccColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(*color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOpacity of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_setOpacity00
static int tolua_Modules_Widget_setOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"GLubyte",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  GLubyte opacity = *((GLubyte*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOpacity'", NULL);
#endif
  {
   self->setOpacity(opacity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColor of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_getColor00
static int tolua_Modules_Widget_getColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColor'", NULL);
#endif
  {
   const ccColor3B& tolua_ret = (const ccColor3B&)  self->getColor();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const ccColor3B");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOpacity of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_getOpacity00
static int tolua_Modules_Widget_getOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOpacity'", NULL);
#endif
  {
   GLubyte tolua_ret = (GLubyte)  self->getOpacity();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((GLubyte)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"GLubyte");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(GLubyte));
     tolua_pushusertype(tolua_S,tolua_obj,"GLubyte");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: didNotSelectSelf of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_didNotSelectSelf00
static int tolua_Modules_Widget_didNotSelectSelf00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'didNotSelectSelf'", NULL);
#endif
  {
   self->didNotSelectSelf();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'didNotSelectSelf'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clippingParentAreaContainPoint of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_clippingParentAreaContainPoint00
static int tolua_Modules_Widget_clippingParentAreaContainPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* pt = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clippingParentAreaContainPoint'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->clippingParentAreaContainPoint(*pt);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clippingParentAreaContainPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: checkChildInfo of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_checkChildInfo00
static int tolua_Modules_Widget_checkChildInfo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"Widget",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  int handleState = ((int)  tolua_tonumber(tolua_S,2,0));
  Widget* sender = ((Widget*)  tolua_tousertype(tolua_S,3,0));
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'checkChildInfo'", NULL);
#endif
  {
   self->checkChildInfo(handleState,sender,*touchPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'checkChildInfo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTouchStartPos of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_getTouchStartPos00
static int tolua_Modules_Widget_getTouchStartPos00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTouchStartPos'", NULL);
#endif
  {
   const CCPoint& tolua_ret = (const CCPoint&)  self->getTouchStartPos();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTouchStartPos'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTouchMovePos of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_getTouchMovePos00
static int tolua_Modules_Widget_getTouchMovePos00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTouchMovePos'", NULL);
#endif
  {
   const CCPoint& tolua_ret = (const CCPoint&)  self->getTouchMovePos();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTouchMovePos'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTouchEndPos of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_getTouchEndPos00
static int tolua_Modules_Widget_getTouchEndPos00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTouchEndPos'", NULL);
#endif
  {
   const CCPoint& tolua_ret = (const CCPoint&)  self->getTouchEndPos();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTouchEndPos'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setName of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_setName00
static int tolua_Modules_Widget_setName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setName'", NULL);
#endif
  {
   self->setName(name);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getName of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_getName00
static int tolua_Modules_Widget_getName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Widget* self = (const Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWidgetType of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_getWidgetType00
static int tolua_Modules_Widget_getWidgetType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Widget* self = (const Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWidgetType'", NULL);
#endif
  {
   WidgetType tolua_ret = (WidgetType)  self->getWidgetType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWidgetType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSize of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_setSize00
static int tolua_Modules_Widget_setSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* size = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSize'", NULL);
#endif
  {
   self->setSize(*size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSizePercent of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_setSizePercent00
static int tolua_Modules_Widget_setSizePercent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* percent = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSizePercent'", NULL);
#endif
  {
   self->setSizePercent(*percent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSizePercent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSizeType of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_setSizeType00
static int tolua_Modules_Widget_setSizeType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  SizeType type = ((SizeType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSizeType'", NULL);
#endif
  {
   self->setSizeType(type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSizeType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSizeType of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_getSizeType00
static int tolua_Modules_Widget_getSizeType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Widget* self = (const Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSizeType'", NULL);
#endif
  {
   SizeType tolua_ret = (SizeType)  self->getSizeType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSizeType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSize of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_getSize00
static int tolua_Modules_Widget_getSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Widget* self = (const Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLayoutSize of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_getLayoutSize00
static int tolua_Modules_Widget_getLayoutSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLayoutSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getLayoutSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLayoutSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSizePercent of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_getSizePercent00
static int tolua_Modules_Widget_getSizePercent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Widget* self = (const Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSizePercent'", NULL);
#endif
  {
   const CCPoint& tolua_ret = (const CCPoint&)  self->getSizePercent();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSizePercent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCustomSize of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_getCustomSize00
static int tolua_Modules_Widget_getCustomSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Widget* self = (const Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCustomSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getCustomSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCustomSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hitTest of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_hitTest00
static int tolua_Modules_Widget_hitTest00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* pt = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hitTest'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hitTest(*pt);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hitTest'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchBegan of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_onTouchBegan00
static int tolua_Modules_Widget_onTouchBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* touch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* unused_event = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchBegan'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->onTouchBegan(touch,unused_event);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchMoved of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_onTouchMoved00
static int tolua_Modules_Widget_onTouchMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* touch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* unused_event = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchMoved'", NULL);
#endif
  {
   self->onTouchMoved(touch,unused_event);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchEnded of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_onTouchEnded00
static int tolua_Modules_Widget_onTouchEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* touch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* unused_event = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchEnded'", NULL);
#endif
  {
   self->onTouchEnded(touch,unused_event);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchCancelled of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_onTouchCancelled00
static int tolua_Modules_Widget_onTouchCancelled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* touch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* unused_event = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchCancelled'", NULL);
#endif
  {
   self->onTouchCancelled(touch,unused_event);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchCancelled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLayoutParameter of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_setLayoutParameter00
static int tolua_Modules_Widget_setLayoutParameter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"LayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  LayoutParameter* parameter = ((LayoutParameter*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLayoutParameter'", NULL);
#endif
  {
   self->setLayoutParameter(parameter);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLayoutParameter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLayoutParameter of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_getLayoutParameter00
static int tolua_Modules_Widget_getLayoutParameter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  LayoutParameterType type = ((LayoutParameterType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLayoutParameter'", NULL);
#endif
  {
   LayoutParameter* tolua_ret = (LayoutParameter*)  self->getLayoutParameter(type);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"LayoutParameter");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLayoutParameter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ignoreContentAdaptWithSize of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_ignoreContentAdaptWithSize00
static int tolua_Modules_Widget_ignoreContentAdaptWithSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  bool ignore = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ignoreContentAdaptWithSize'", NULL);
#endif
  {
   self->ignoreContentAdaptWithSize(ignore);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ignoreContentAdaptWithSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isIgnoreContentAdaptWithSize of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_isIgnoreContentAdaptWithSize00
static int tolua_Modules_Widget_isIgnoreContentAdaptWithSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Widget* self = (const Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isIgnoreContentAdaptWithSize'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isIgnoreContentAdaptWithSize();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isIgnoreContentAdaptWithSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWorldPosition of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_getWorldPosition00
static int tolua_Modules_Widget_getWorldPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWorldPosition'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->getWorldPosition();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWorldPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVirtualRenderer of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_getVirtualRenderer00
static int tolua_Modules_Widget_getVirtualRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVirtualRenderer'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getVirtualRenderer();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVirtualRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentSize of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_getContentSize00
static int tolua_Modules_Widget_getContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Widget* self = (const Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getContentSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_getDescription00
static int tolua_Modules_Widget_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Widget* self = (const Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->getDescription();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clone of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_clone00
static int tolua_Modules_Widget_clone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clone'", NULL);
#endif
  {
   Widget* tolua_ret = (Widget*)  self->clone();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Widget");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onEnter of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_onEnter00
static int tolua_Modules_Widget_onEnter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onEnter'", NULL);
#endif
  {
   self->onEnter();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onEnter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onExit of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_onExit00
static int tolua_Modules_Widget_onExit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onExit'", NULL);
#endif
  {
   self->onExit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onExit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateSizeAndPosition of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_updateSizeAndPosition00
static int tolua_Modules_Widget_updateSizeAndPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateSizeAndPosition'", NULL);
#endif
  {
   self->updateSizeAndPosition();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateSizeAndPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateSizeAndPosition of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_updateSizeAndPosition01
static int tolua_Modules_Widget_updateSizeAndPosition01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* parentSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateSizeAndPosition'", NULL);
#endif
  {
   self->updateSizeAndPosition(*parentSize);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Modules_Widget_updateSizeAndPosition00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setActionTag of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_setActionTag00
static int tolua_Modules_Widget_setActionTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setActionTag'", NULL);
#endif
  {
   self->setActionTag(tag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setActionTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getActionTag of class  Widget */
#ifndef TOLUA_DISABLE_tolua_Modules_Widget_getActionTag00
static int tolua_Modules_Widget_getActionTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getActionTag'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getActionTag();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getActionTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCParallaxNode */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParallaxNode_create00
static int tolua_Modules_CCParallaxNode_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParallaxNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCParallaxNode* tolua_ret = (CCParallaxNode*)  CCParallaxNode::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParallaxNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  CCParallaxNode */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParallaxNode_addChild00
static int tolua_Modules_CCParallaxNode_addChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParallaxNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParallaxNode* self = (CCParallaxNode*)  tolua_tousertype(tolua_S,1,0);
  CCNode* child = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  unsigned int z = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  CCPoint parallaxRatio = *((CCPoint*)  tolua_tousertype(tolua_S,4,0));
  CCPoint positionOffset = *((CCPoint*)  tolua_tousertype(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   self->addChild(child,z,parallaxRatio,positionOffset);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CCTMXLayer */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXLayer_new00
static int tolua_Modules_CCTMXLayer_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTMXLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCTMXLayer* tolua_ret = (CCTMXLayer*)  Mtolua_new((CCTMXLayer)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTMXLayer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CCTMXLayer */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXLayer_new00_local
static int tolua_Modules_CCTMXLayer_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTMXLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCTMXLayer* tolua_ret = (CCTMXLayer*)  Mtolua_new((CCTMXLayer)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTMXLayer");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CCTMXLayer */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXLayer_delete00
static int tolua_Modules_CCTMXLayer_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXLayer* self = (CCTMXLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCTMXLayer */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXLayer_create00
static int tolua_Modules_CCTMXLayer_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTMXLayer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTMXTilesetInfo",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCTMXLayerInfo",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"CCTMXMapInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXTilesetInfo* tilesetInfo = ((CCTMXTilesetInfo*)  tolua_tousertype(tolua_S,2,0));
  CCTMXLayerInfo* layerInfo = ((CCTMXLayerInfo*)  tolua_tousertype(tolua_S,3,0));
  CCTMXMapInfo* mapInfo = ((CCTMXMapInfo*)  tolua_tousertype(tolua_S,4,0));
  {
   CCTMXLayer* tolua_ret = (CCTMXLayer*)  CCTMXLayer::create(tilesetInfo,layerInfo,mapInfo);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTMXLayer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithTilesetInfo of class  CCTMXLayer */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXLayer_initWithTilesetInfo00
static int tolua_Modules_CCTMXLayer_initWithTilesetInfo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXLayer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTMXTilesetInfo",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCTMXLayerInfo",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"CCTMXMapInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXLayer* self = (CCTMXLayer*)  tolua_tousertype(tolua_S,1,0);
  CCTMXTilesetInfo* tilesetInfo = ((CCTMXTilesetInfo*)  tolua_tousertype(tolua_S,2,0));
  CCTMXLayerInfo* layerInfo = ((CCTMXLayerInfo*)  tolua_tousertype(tolua_S,3,0));
  CCTMXMapInfo* mapInfo = ((CCTMXMapInfo*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithTilesetInfo'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithTilesetInfo(tilesetInfo,layerInfo,mapInfo);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithTilesetInfo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLayerSize of class  CCTMXLayer */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXLayer_getLayerSize00
static int tolua_Modules_CCTMXLayer_getLayerSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXLayer* self = (CCTMXLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLayerSize'", NULL);
#endif
  {
   CCSize tolua_ret = (CCSize)  self->getLayerSize();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCSize)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCSize));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLayerSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMapTileSize of class  CCTMXLayer */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXLayer_getMapTileSize00
static int tolua_Modules_CCTMXLayer_getMapTileSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXLayer* self = (CCTMXLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMapTileSize'", NULL);
#endif
  {
   CCSize tolua_ret = (CCSize)  self->getMapTileSize();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCSize)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCSize));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMapTileSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTileSet of class  CCTMXLayer */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXLayer_getTileSet00
static int tolua_Modules_CCTMXLayer_getTileSet00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXLayer* self = (CCTMXLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTileSet'", NULL);
#endif
  {
   CCTMXTilesetInfo* tolua_ret = (CCTMXTilesetInfo*)  self->getTileSet();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTMXTilesetInfo");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTileSet'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLayerOrientation of class  CCTMXLayer */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXLayer_getLayerOrientation00
static int tolua_Modules_CCTMXLayer_getLayerOrientation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXLayer* self = (CCTMXLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLayerOrientation'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getLayerOrientation();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLayerOrientation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getProperties of class  CCTMXLayer */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXLayer_getProperties00
static int tolua_Modules_CCTMXLayer_getProperties00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXLayer* self = (CCTMXLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getProperties'", NULL);
#endif
  {
   CCDictionary* tolua_ret = (CCDictionary*)  self->getProperties();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCDictionary");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getProperties'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: releaseMap of class  CCTMXLayer */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXLayer_releaseMap00
static int tolua_Modules_CCTMXLayer_releaseMap00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXLayer* self = (CCTMXLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'releaseMap'", NULL);
#endif
  {
   self->releaseMap();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'releaseMap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: tileAt of class  CCTMXLayer */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXLayer_tileAt00
static int tolua_Modules_CCTMXLayer_tileAt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXLayer* self = (CCTMXLayer*)  tolua_tousertype(tolua_S,1,0);
  CCPoint tileCoordinate = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'tileAt'", NULL);
#endif
  {
   CCSprite* tolua_ret = (CCSprite*)  self->tileAt(tileCoordinate);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCSprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'tileAt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: tileGIDAt of class  CCTMXLayer */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXLayer_tileGIDAt00
static int tolua_Modules_CCTMXLayer_tileGIDAt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXLayer* self = (CCTMXLayer*)  tolua_tousertype(tolua_S,1,0);
  CCPoint tileCoordinate = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'tileGIDAt'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->tileGIDAt(tileCoordinate);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'tileGIDAt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTileGID of class  CCTMXLayer */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXLayer_setTileGID00
static int tolua_Modules_CCTMXLayer_setTileGID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXLayer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXLayer* self = (CCTMXLayer*)  tolua_tousertype(tolua_S,1,0);
  unsigned int gid = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  CCPoint tileCoordinate = *((CCPoint*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTileGID'", NULL);
#endif
  {
   self->setTileGID(gid,tileCoordinate);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTileGID'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeTileAt of class  CCTMXLayer */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXLayer_removeTileAt00
static int tolua_Modules_CCTMXLayer_removeTileAt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXLayer* self = (CCTMXLayer*)  tolua_tousertype(tolua_S,1,0);
  CCPoint tileCoordinate = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeTileAt'", NULL);
#endif
  {
   self->removeTileAt(tileCoordinate);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeTileAt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: positionAt of class  CCTMXLayer */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXLayer_positionAt00
static int tolua_Modules_CCTMXLayer_positionAt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXLayer* self = (CCTMXLayer*)  tolua_tousertype(tolua_S,1,0);
  CCPoint tileCoordinate = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'positionAt'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->positionAt(tileCoordinate);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'positionAt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: propertyNamed of class  CCTMXLayer */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXLayer_propertyNamed00
static int tolua_Modules_CCTMXLayer_propertyNamed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXLayer",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXLayer* self = (CCTMXLayer*)  tolua_tousertype(tolua_S,1,0);
  const char* propertyName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'propertyNamed'", NULL);
#endif
  {
   CCString* tolua_ret = (CCString*)  self->propertyNamed(propertyName);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCString");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'propertyNamed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLayerName of class  CCTMXLayer */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXLayer_getLayerName00
static int tolua_Modules_CCTMXLayer_getLayerName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXLayer* self = (CCTMXLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLayerName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getLayerName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLayerName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getGroupName of class  CCTMXObjectGroup */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXObjectGroup_getGroupName00
static int tolua_Modules_CCTMXObjectGroup_getGroupName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXObjectGroup",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXObjectGroup* self = (CCTMXObjectGroup*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getGroupName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getGroupName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getGroupName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: propertyNamed of class  CCTMXObjectGroup */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXObjectGroup_propertyNamed00
static int tolua_Modules_CCTMXObjectGroup_propertyNamed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXObjectGroup",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXObjectGroup* self = (CCTMXObjectGroup*)  tolua_tousertype(tolua_S,1,0);
  const char* propertyName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'propertyNamed'", NULL);
#endif
  {
   CCString* tolua_ret = (CCString*)  self->propertyNamed(propertyName);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCString");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'propertyNamed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: objectNamed of class  CCTMXObjectGroup */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXObjectGroup_objectNamed00
static int tolua_Modules_CCTMXObjectGroup_objectNamed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXObjectGroup",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXObjectGroup* self = (CCTMXObjectGroup*)  tolua_tousertype(tolua_S,1,0);
  const char* objectName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'objectNamed'", NULL);
#endif
  {
   CCDictionary* tolua_ret = (CCDictionary*)  self->objectNamed(objectName);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCDictionary");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'objectNamed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPositionOffset of class  CCTMXObjectGroup */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXObjectGroup_getPositionOffset00
static int tolua_Modules_CCTMXObjectGroup_getPositionOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXObjectGroup",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXObjectGroup* self = (CCTMXObjectGroup*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPositionOffset'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->getPositionOffset();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPositionOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPositionOffset of class  CCTMXObjectGroup */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXObjectGroup_setPositionOffset00
static int tolua_Modules_CCTMXObjectGroup_setPositionOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXObjectGroup",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXObjectGroup* self = (CCTMXObjectGroup*)  tolua_tousertype(tolua_S,1,0);
  CCPoint p = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPositionOffset'", NULL);
#endif
  {
   self->setPositionOffset(p);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPositionOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getProperties of class  CCTMXObjectGroup */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXObjectGroup_getProperties00
static int tolua_Modules_CCTMXObjectGroup_getProperties00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXObjectGroup",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXObjectGroup* self = (CCTMXObjectGroup*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getProperties'", NULL);
#endif
  {
   CCDictionary* tolua_ret = (CCDictionary*)  self->getProperties();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCDictionary");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getProperties'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getObjects of class  CCTMXObjectGroup */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXObjectGroup_getObjects00
static int tolua_Modules_CCTMXObjectGroup_getObjects00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXObjectGroup",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXObjectGroup* self = (CCTMXObjectGroup*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getObjects'", NULL);
#endif
  {
   CCArray* tolua_ret = (CCArray*)  self->getObjects();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getObjects'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCTMXTiledMap */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXTiledMap_create00
static int tolua_Modules_CCTMXTiledMap_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTMXTiledMap",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* tmxFile = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   CCTMXTiledMap* tolua_ret = (CCTMXTiledMap*)  CCTMXTiledMap::create(tmxFile);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTMXTiledMap");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithXML of class  CCTMXTiledMap */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXTiledMap_createWithXML00
static int tolua_Modules_CCTMXTiledMap_createWithXML00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTMXTiledMap",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* tmxString = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* resourcePath = ((const char*)  tolua_tostring(tolua_S,3,0));
  {
   CCTMXTiledMap* tolua_ret = (CCTMXTiledMap*)  CCTMXTiledMap::createWithXML(tmxString,resourcePath);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTMXTiledMap");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithXML'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: layerNamed of class  CCTMXTiledMap */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXTiledMap_layerNamed00
static int tolua_Modules_CCTMXTiledMap_layerNamed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXTiledMap",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXTiledMap* self = (CCTMXTiledMap*)  tolua_tousertype(tolua_S,1,0);
  const char* layerName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'layerNamed'", NULL);
#endif
  {
   CCTMXLayer* tolua_ret = (CCTMXLayer*)  self->layerNamed(layerName);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTMXLayer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'layerNamed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: objectGroupNamed of class  CCTMXTiledMap */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXTiledMap_objectGroupNamed00
static int tolua_Modules_CCTMXTiledMap_objectGroupNamed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXTiledMap",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXTiledMap* self = (CCTMXTiledMap*)  tolua_tousertype(tolua_S,1,0);
  const char* groupName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'objectGroupNamed'", NULL);
#endif
  {
   CCTMXObjectGroup* tolua_ret = (CCTMXObjectGroup*)  self->objectGroupNamed(groupName);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTMXObjectGroup");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'objectGroupNamed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: propertyNamed of class  CCTMXTiledMap */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXTiledMap_propertyNamed00
static int tolua_Modules_CCTMXTiledMap_propertyNamed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXTiledMap",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXTiledMap* self = (CCTMXTiledMap*)  tolua_tousertype(tolua_S,1,0);
  const char* propertyName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'propertyNamed'", NULL);
#endif
  {
   CCString* tolua_ret = (CCString*)  self->propertyNamed(propertyName);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCString");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'propertyNamed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: propertiesForGID of class  CCTMXTiledMap */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXTiledMap_propertiesForGID00
static int tolua_Modules_CCTMXTiledMap_propertiesForGID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXTiledMap",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXTiledMap* self = (CCTMXTiledMap*)  tolua_tousertype(tolua_S,1,0);
  int GID = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'propertiesForGID'", NULL);
#endif
  {
   CCDictionary* tolua_ret = (CCDictionary*)  self->propertiesForGID(GID);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCDictionary");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'propertiesForGID'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMapSize of class  CCTMXTiledMap */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXTiledMap_getMapSize00
static int tolua_Modules_CCTMXTiledMap_getMapSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXTiledMap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXTiledMap* self = (CCTMXTiledMap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMapSize'", NULL);
#endif
  {
   CCSize tolua_ret = (CCSize)  self->getMapSize();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCSize)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCSize));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMapSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTileSize of class  CCTMXTiledMap */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXTiledMap_getTileSize00
static int tolua_Modules_CCTMXTiledMap_getTileSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXTiledMap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXTiledMap* self = (CCTMXTiledMap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTileSize'", NULL);
#endif
  {
   CCSize tolua_ret = (CCSize)  self->getTileSize();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCSize)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCSize));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTileSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMapOrientation of class  CCTMXTiledMap */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXTiledMap_getMapOrientation00
static int tolua_Modules_CCTMXTiledMap_getMapOrientation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXTiledMap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXTiledMap* self = (CCTMXTiledMap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMapOrientation'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMapOrientation();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMapOrientation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getObjectGroups of class  CCTMXTiledMap */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXTiledMap_getObjectGroups00
static int tolua_Modules_CCTMXTiledMap_getObjectGroups00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXTiledMap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXTiledMap* self = (CCTMXTiledMap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getObjectGroups'", NULL);
#endif
  {
   CCArray* tolua_ret = (CCArray*)  self->getObjectGroups();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getObjectGroups'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getProperties of class  CCTMXTiledMap */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXTiledMap_getProperties00
static int tolua_Modules_CCTMXTiledMap_getProperties00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXTiledMap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXTiledMap* self = (CCTMXTiledMap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getProperties'", NULL);
#endif
  {
   CCDictionary* tolua_ret = (CCDictionary*)  self->getProperties();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCDictionary");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getProperties'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getProperties of class  CCTMXLayerInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXLayerInfo_getProperties00
static int tolua_Modules_CCTMXLayerInfo_getProperties00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXLayerInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXLayerInfo* self = (CCTMXLayerInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getProperties'", NULL);
#endif
  {
   CCDictionary* tolua_ret = (CCDictionary*)  self->getProperties();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCDictionary");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getProperties'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_sName of class  CCTMXLayerInfo */
#ifndef TOLUA_DISABLE_tolua_get_CCTMXLayerInfo_m_sName
static int tolua_get_CCTMXLayerInfo_m_sName(lua_State* tolua_S)
{
  CCTMXLayerInfo* self = (CCTMXLayerInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_sName'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->m_sName);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_sName of class  CCTMXLayerInfo */
#ifndef TOLUA_DISABLE_tolua_set_CCTMXLayerInfo_m_sName
static int tolua_set_CCTMXLayerInfo_m_sName(lua_State* tolua_S)
{
  CCTMXLayerInfo* self = (CCTMXLayerInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_sName'",NULL);
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_sName = ((std::string)  tolua_tocppstring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_tLayerSize of class  CCTMXLayerInfo */
#ifndef TOLUA_DISABLE_tolua_get_CCTMXLayerInfo_m_tLayerSize
static int tolua_get_CCTMXLayerInfo_m_tLayerSize(lua_State* tolua_S)
{
  CCTMXLayerInfo* self = (CCTMXLayerInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_tLayerSize'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->m_tLayerSize,"CCSize");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_tLayerSize of class  CCTMXLayerInfo */
#ifndef TOLUA_DISABLE_tolua_set_CCTMXLayerInfo_m_tLayerSize
static int tolua_set_CCTMXLayerInfo_m_tLayerSize(lua_State* tolua_S)
{
  CCTMXLayerInfo* self = (CCTMXLayerInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_tLayerSize'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCSize",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_tLayerSize = *((CCSize*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_bVisible of class  CCTMXLayerInfo */
#ifndef TOLUA_DISABLE_tolua_get_CCTMXLayerInfo_m_bVisible
static int tolua_get_CCTMXLayerInfo_m_bVisible(lua_State* tolua_S)
{
  CCTMXLayerInfo* self = (CCTMXLayerInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_bVisible'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->m_bVisible);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_bVisible of class  CCTMXLayerInfo */
#ifndef TOLUA_DISABLE_tolua_set_CCTMXLayerInfo_m_bVisible
static int tolua_set_CCTMXLayerInfo_m_bVisible(lua_State* tolua_S)
{
  CCTMXLayerInfo* self = (CCTMXLayerInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_bVisible'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_bVisible = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_cOpacity of class  CCTMXLayerInfo */
#ifndef TOLUA_DISABLE_tolua_get_CCTMXLayerInfo_unsigned_m_cOpacity
static int tolua_get_CCTMXLayerInfo_unsigned_m_cOpacity(lua_State* tolua_S)
{
  CCTMXLayerInfo* self = (CCTMXLayerInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_cOpacity'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->m_cOpacity);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_cOpacity of class  CCTMXLayerInfo */
#ifndef TOLUA_DISABLE_tolua_set_CCTMXLayerInfo_unsigned_m_cOpacity
static int tolua_set_CCTMXLayerInfo_unsigned_m_cOpacity(lua_State* tolua_S)
{
  CCTMXLayerInfo* self = (CCTMXLayerInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_cOpacity'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_cOpacity = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_bOwnTiles of class  CCTMXLayerInfo */
#ifndef TOLUA_DISABLE_tolua_get_CCTMXLayerInfo_m_bOwnTiles
static int tolua_get_CCTMXLayerInfo_m_bOwnTiles(lua_State* tolua_S)
{
  CCTMXLayerInfo* self = (CCTMXLayerInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_bOwnTiles'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->m_bOwnTiles);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_bOwnTiles of class  CCTMXLayerInfo */
#ifndef TOLUA_DISABLE_tolua_set_CCTMXLayerInfo_m_bOwnTiles
static int tolua_set_CCTMXLayerInfo_m_bOwnTiles(lua_State* tolua_S)
{
  CCTMXLayerInfo* self = (CCTMXLayerInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_bOwnTiles'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_bOwnTiles = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_uMinGID of class  CCTMXLayerInfo */
#ifndef TOLUA_DISABLE_tolua_get_CCTMXLayerInfo_unsigned_m_uMinGID
static int tolua_get_CCTMXLayerInfo_unsigned_m_uMinGID(lua_State* tolua_S)
{
  CCTMXLayerInfo* self = (CCTMXLayerInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_uMinGID'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->m_uMinGID);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_uMinGID of class  CCTMXLayerInfo */
#ifndef TOLUA_DISABLE_tolua_set_CCTMXLayerInfo_unsigned_m_uMinGID
static int tolua_set_CCTMXLayerInfo_unsigned_m_uMinGID(lua_State* tolua_S)
{
  CCTMXLayerInfo* self = (CCTMXLayerInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_uMinGID'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_uMinGID = ((unsigned int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_uMaxGID of class  CCTMXLayerInfo */
#ifndef TOLUA_DISABLE_tolua_get_CCTMXLayerInfo_unsigned_m_uMaxGID
static int tolua_get_CCTMXLayerInfo_unsigned_m_uMaxGID(lua_State* tolua_S)
{
  CCTMXLayerInfo* self = (CCTMXLayerInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_uMaxGID'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->m_uMaxGID);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_uMaxGID of class  CCTMXLayerInfo */
#ifndef TOLUA_DISABLE_tolua_set_CCTMXLayerInfo_unsigned_m_uMaxGID
static int tolua_set_CCTMXLayerInfo_unsigned_m_uMaxGID(lua_State* tolua_S)
{
  CCTMXLayerInfo* self = (CCTMXLayerInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_uMaxGID'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_uMaxGID = ((unsigned int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_tOffset of class  CCTMXLayerInfo */
#ifndef TOLUA_DISABLE_tolua_get_CCTMXLayerInfo_m_tOffset
static int tolua_get_CCTMXLayerInfo_m_tOffset(lua_State* tolua_S)
{
  CCTMXLayerInfo* self = (CCTMXLayerInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_tOffset'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->m_tOffset,"CCPoint");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_tOffset of class  CCTMXLayerInfo */
#ifndef TOLUA_DISABLE_tolua_set_CCTMXLayerInfo_m_tOffset
static int tolua_set_CCTMXLayerInfo_m_tOffset(lua_State* tolua_S)
{
  CCTMXLayerInfo* self = (CCTMXLayerInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_tOffset'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_tOffset = *((CCPoint*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CCTMXLayerInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXLayerInfo_new00
static int tolua_Modules_CCTMXLayerInfo_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTMXLayerInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCTMXLayerInfo* tolua_ret = (CCTMXLayerInfo*)  Mtolua_new((CCTMXLayerInfo)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTMXLayerInfo");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CCTMXLayerInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXLayerInfo_new00_local
static int tolua_Modules_CCTMXLayerInfo_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTMXLayerInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCTMXLayerInfo* tolua_ret = (CCTMXLayerInfo*)  Mtolua_new((CCTMXLayerInfo)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTMXLayerInfo");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CCTMXLayerInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXLayerInfo_delete00
static int tolua_Modules_CCTMXLayerInfo_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXLayerInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXLayerInfo* self = (CCTMXLayerInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CCTMXTilesetInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXTilesetInfo_new00
static int tolua_Modules_CCTMXTilesetInfo_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTMXTilesetInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCTMXTilesetInfo* tolua_ret = (CCTMXTilesetInfo*)  Mtolua_new((CCTMXTilesetInfo)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTMXTilesetInfo");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CCTMXTilesetInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXTilesetInfo_new00_local
static int tolua_Modules_CCTMXTilesetInfo_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTMXTilesetInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCTMXTilesetInfo* tolua_ret = (CCTMXTilesetInfo*)  Mtolua_new((CCTMXTilesetInfo)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTMXTilesetInfo");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CCTMXTilesetInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXTilesetInfo_delete00
static int tolua_Modules_CCTMXTilesetInfo_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXTilesetInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXTilesetInfo* self = (CCTMXTilesetInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: rectForGID of class  CCTMXTilesetInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXTilesetInfo_rectForGID00
static int tolua_Modules_CCTMXTilesetInfo_rectForGID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXTilesetInfo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXTilesetInfo* self = (CCTMXTilesetInfo*)  tolua_tousertype(tolua_S,1,0);
  unsigned int gid = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'rectForGID'", NULL);
#endif
  {
   CCRect tolua_ret = (CCRect)  self->rectForGID(gid);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCRect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCRect));
     tolua_pushusertype(tolua_S,tolua_obj,"CCRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rectForGID'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOrientation of class  CCTMXMapInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXMapInfo_getOrientation00
static int tolua_Modules_CCTMXMapInfo_getOrientation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXMapInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXMapInfo* self = (CCTMXMapInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOrientation'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getOrientation();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOrientation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMapSize of class  CCTMXMapInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXMapInfo_getMapSize00
static int tolua_Modules_CCTMXMapInfo_getMapSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXMapInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXMapInfo* self = (CCTMXMapInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMapSize'", NULL);
#endif
  {
   CCSize tolua_ret = (CCSize)  self->getMapSize();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCSize)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCSize));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMapSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTileSize of class  CCTMXMapInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXMapInfo_getTileSize00
static int tolua_Modules_CCTMXMapInfo_getTileSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXMapInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXMapInfo* self = (CCTMXMapInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTileSize'", NULL);
#endif
  {
   CCSize tolua_ret = (CCSize)  self->getTileSize();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCSize)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCSize));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTileSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLayers of class  CCTMXMapInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXMapInfo_getLayers00
static int tolua_Modules_CCTMXMapInfo_getLayers00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXMapInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXMapInfo* self = (CCTMXMapInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLayers'", NULL);
#endif
  {
   CCArray* tolua_ret = (CCArray*)  self->getLayers();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLayers'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTilesets of class  CCTMXMapInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXMapInfo_getTilesets00
static int tolua_Modules_CCTMXMapInfo_getTilesets00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXMapInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXMapInfo* self = (CCTMXMapInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTilesets'", NULL);
#endif
  {
   CCArray* tolua_ret = (CCArray*)  self->getTilesets();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTilesets'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getObjectGroups of class  CCTMXMapInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXMapInfo_getObjectGroups00
static int tolua_Modules_CCTMXMapInfo_getObjectGroups00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXMapInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXMapInfo* self = (CCTMXMapInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getObjectGroups'", NULL);
#endif
  {
   CCArray* tolua_ret = (CCArray*)  self->getObjectGroups();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getObjectGroups'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getParentElement of class  CCTMXMapInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXMapInfo_getParentElement00
static int tolua_Modules_CCTMXMapInfo_getParentElement00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXMapInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXMapInfo* self = (CCTMXMapInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getParentElement'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getParentElement();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getParentElement'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getParentGID of class  CCTMXMapInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXMapInfo_getParentGID00
static int tolua_Modules_CCTMXMapInfo_getParentGID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXMapInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXMapInfo* self = (CCTMXMapInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getParentGID'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getParentGID();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getParentGID'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLayerAttribs of class  CCTMXMapInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXMapInfo_getLayerAttribs00
static int tolua_Modules_CCTMXMapInfo_getLayerAttribs00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXMapInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXMapInfo* self = (CCTMXMapInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLayerAttribs'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getLayerAttribs();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLayerAttribs'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStoringCharacters of class  CCTMXMapInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXMapInfo_getStoringCharacters00
static int tolua_Modules_CCTMXMapInfo_getStoringCharacters00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXMapInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXMapInfo* self = (CCTMXMapInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStoringCharacters'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getStoringCharacters();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStoringCharacters'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getProperties of class  CCTMXMapInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXMapInfo_getProperties00
static int tolua_Modules_CCTMXMapInfo_getProperties00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXMapInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXMapInfo* self = (CCTMXMapInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getProperties'", NULL);
#endif
  {
   CCDictionary* tolua_ret = (CCDictionary*)  self->getProperties();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCDictionary");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getProperties'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CCTMXMapInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXMapInfo_new00
static int tolua_Modules_CCTMXMapInfo_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTMXMapInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCTMXMapInfo* tolua_ret = (CCTMXMapInfo*)  Mtolua_new((CCTMXMapInfo)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTMXMapInfo");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CCTMXMapInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXMapInfo_new00_local
static int tolua_Modules_CCTMXMapInfo_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTMXMapInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCTMXMapInfo* tolua_ret = (CCTMXMapInfo*)  Mtolua_new((CCTMXMapInfo)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTMXMapInfo");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CCTMXMapInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXMapInfo_delete00
static int tolua_Modules_CCTMXMapInfo_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXMapInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXMapInfo* self = (CCTMXMapInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: formatWithTMXFile of class  CCTMXMapInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXMapInfo_formatWithTMXFile00
static int tolua_Modules_CCTMXMapInfo_formatWithTMXFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTMXMapInfo",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* tmxFile = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   CCTMXMapInfo* tolua_ret = (CCTMXMapInfo*)  CCTMXMapInfo::formatWithTMXFile(tmxFile);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTMXMapInfo");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'formatWithTMXFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: formatWithXML of class  CCTMXMapInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXMapInfo_formatWithXML00
static int tolua_Modules_CCTMXMapInfo_formatWithXML00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTMXMapInfo",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* tmxString = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* resourcePath = ((const char*)  tolua_tostring(tolua_S,3,0));
  {
   CCTMXMapInfo* tolua_ret = (CCTMXMapInfo*)  CCTMXMapInfo::formatWithXML(tmxString,resourcePath);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTMXMapInfo");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'formatWithXML'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithTMXFile of class  CCTMXMapInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXMapInfo_initWithTMXFile00
static int tolua_Modules_CCTMXMapInfo_initWithTMXFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXMapInfo",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXMapInfo* self = (CCTMXMapInfo*)  tolua_tousertype(tolua_S,1,0);
  const char* tmxFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithTMXFile'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithTMXFile(tmxFile);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithTMXFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithXML of class  CCTMXMapInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXMapInfo_initWithXML00
static int tolua_Modules_CCTMXMapInfo_initWithXML00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXMapInfo",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXMapInfo* self = (CCTMXMapInfo*)  tolua_tousertype(tolua_S,1,0);
  const char* tmxString = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* resourcePath = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithXML'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithXML(tmxString,resourcePath);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithXML'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: parseXMLFile of class  CCTMXMapInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXMapInfo_parseXMLFile00
static int tolua_Modules_CCTMXMapInfo_parseXMLFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXMapInfo",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXMapInfo* self = (CCTMXMapInfo*)  tolua_tousertype(tolua_S,1,0);
  const char* xmlFilename = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'parseXMLFile'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->parseXMLFile(xmlFilename);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'parseXMLFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: parseXMLString of class  CCTMXMapInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXMapInfo_parseXMLString00
static int tolua_Modules_CCTMXMapInfo_parseXMLString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXMapInfo",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXMapInfo* self = (CCTMXMapInfo*)  tolua_tousertype(tolua_S,1,0);
  const char* xmlString = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'parseXMLString'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->parseXMLString(xmlString);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'parseXMLString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTileProperties of class  CCTMXMapInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXMapInfo_getTileProperties00
static int tolua_Modules_CCTMXMapInfo_getTileProperties00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXMapInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXMapInfo* self = (CCTMXMapInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTileProperties'", NULL);
#endif
  {
   CCDictionary* tolua_ret = (CCDictionary*)  self->getTileProperties();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCDictionary");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTileProperties'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTileProperties of class  CCTMXMapInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXMapInfo_setTileProperties00
static int tolua_Modules_CCTMXMapInfo_setTileProperties00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXMapInfo",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXMapInfo* self = (CCTMXMapInfo*)  tolua_tousertype(tolua_S,1,0);
  CCDictionary* tileProperties = ((CCDictionary*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTileProperties'", NULL);
#endif
  {
   self->setTileProperties(tileProperties);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTileProperties'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCurrentString of class  CCTMXMapInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXMapInfo_getCurrentString00
static int tolua_Modules_CCTMXMapInfo_getCurrentString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXMapInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXMapInfo* self = (CCTMXMapInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCurrentString'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getCurrentString();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCurrentString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCurrentString of class  CCTMXMapInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXMapInfo_setCurrentString00
static int tolua_Modules_CCTMXMapInfo_setCurrentString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXMapInfo",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXMapInfo* self = (CCTMXMapInfo*)  tolua_tousertype(tolua_S,1,0);
  const char* currentString = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCurrentString'", NULL);
#endif
  {
   self->setCurrentString(currentString);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCurrentString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTMXFileName of class  CCTMXMapInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXMapInfo_getTMXFileName00
static int tolua_Modules_CCTMXMapInfo_getTMXFileName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXMapInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXMapInfo* self = (CCTMXMapInfo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTMXFileName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getTMXFileName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTMXFileName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTMXFileName of class  CCTMXMapInfo */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTMXMapInfo_setTMXFileName00
static int tolua_Modules_CCTMXMapInfo_setTMXFileName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTMXMapInfo",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTMXMapInfo* self = (CCTMXMapInfo*)  tolua_tousertype(tolua_S,1,0);
  const char* fileName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTMXFileName'", NULL);
#endif
  {
   self->setTMXFileName(fileName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTMXFileName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithTexture of class  CCParticleBatchNode */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleBatchNode_createWithTexture00
static int tolua_Modules_CCParticleBatchNode_createWithTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParticleBatchNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTexture2D* tex = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
  unsigned int capacity = ((unsigned int)  tolua_tonumber(tolua_S,3,500));
  {
   CCParticleBatchNode* tolua_ret = (CCParticleBatchNode*)  CCParticleBatchNode::createWithTexture(tex,capacity);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParticleBatchNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCParticleBatchNode */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleBatchNode_create00
static int tolua_Modules_CCParticleBatchNode_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParticleBatchNode",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* fileImage = ((const char*)  tolua_tostring(tolua_S,2,0));
  unsigned int capacity = ((unsigned int)  tolua_tonumber(tolua_S,3,500));
  {
   CCParticleBatchNode* tolua_ret = (CCParticleBatchNode*)  CCParticleBatchNode::create(fileImage,capacity);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParticleBatchNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertChild of class  CCParticleBatchNode */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleBatchNode_insertChild00
static int tolua_Modules_CCParticleBatchNode_insertChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleBatchNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleBatchNode* self = (CCParticleBatchNode*)  tolua_tousertype(tolua_S,1,0);
  CCParticleSystem* pSystem = ((CCParticleSystem*)  tolua_tousertype(tolua_S,2,0));
  unsigned int index = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertChild'", NULL);
#endif
  {
   self->insertChild(pSystem,index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insertChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: disableParticle of class  CCParticleBatchNode */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleBatchNode_disableParticle00
static int tolua_Modules_CCParticleBatchNode_disableParticle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleBatchNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleBatchNode* self = (CCParticleBatchNode*)  tolua_tousertype(tolua_S,1,0);
  unsigned int particleIndex = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'disableParticle'", NULL);
#endif
  {
   self->disableParticle(particleIndex);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'disableParticle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTexture of class  CCParticleBatchNode */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleBatchNode_getTexture00
static int tolua_Modules_CCParticleBatchNode_getTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleBatchNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleBatchNode* self = (CCParticleBatchNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTexture'", NULL);
#endif
  {
   CCTexture2D* tolua_ret = (CCTexture2D*)  self->getTexture();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTexture2D");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTexture of class  CCParticleBatchNode */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleBatchNode_setTexture00
static int tolua_Modules_CCParticleBatchNode_setTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleBatchNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleBatchNode* self = (CCParticleBatchNode*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* texture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTexture'", NULL);
#endif
  {
   self->setTexture(texture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBlendFunc of class  CCParticleBatchNode */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleBatchNode_setBlendFunc00
static int tolua_Modules_CCParticleBatchNode_setBlendFunc00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleBatchNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccBlendFunc",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleBatchNode* self = (CCParticleBatchNode*)  tolua_tousertype(tolua_S,1,0);
  ccBlendFunc blendFunc = *((ccBlendFunc*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBlendFunc'", NULL);
#endif
  {
   self->setBlendFunc(blendFunc);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBlendFunc'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBlendFunc of class  CCParticleBatchNode */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleBatchNode_getBlendFunc00
static int tolua_Modules_CCParticleBatchNode_getBlendFunc00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleBatchNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleBatchNode* self = (CCParticleBatchNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBlendFunc'", NULL);
#endif
  {
   ccBlendFunc tolua_ret = (ccBlendFunc)  self->getBlendFunc();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ccBlendFunc)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ccBlendFunc");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ccBlendFunc));
     tolua_pushusertype(tolua_S,tolua_obj,"ccBlendFunc");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBlendFunc'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithTotalParticles of class  CCParticleFire */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleFire_createWithTotalParticles00
static int tolua_Modules_CCParticleFire_createWithTotalParticles00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParticleFire",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned int numberOfParticles = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  {
   CCParticleFire* tolua_ret = (CCParticleFire*)  CCParticleFire::createWithTotalParticles(numberOfParticles);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParticleFire");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithTotalParticles'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCParticleFire */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleFire_create00
static int tolua_Modules_CCParticleFire_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParticleFire",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCParticleFire* tolua_ret = (CCParticleFire*)  CCParticleFire::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParticleFire");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithTotalParticles of class  CCParticleFireworks */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleFireworks_createWithTotalParticles00
static int tolua_Modules_CCParticleFireworks_createWithTotalParticles00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParticleFireworks",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned int numberOfParticles = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  {
   CCParticleFireworks* tolua_ret = (CCParticleFireworks*)  CCParticleFireworks::createWithTotalParticles(numberOfParticles);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParticleFireworks");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithTotalParticles'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCParticleFireworks */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleFireworks_create00
static int tolua_Modules_CCParticleFireworks_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParticleFireworks",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCParticleFireworks* tolua_ret = (CCParticleFireworks*)  CCParticleFireworks::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParticleFireworks");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithTotalParticles of class  CCParticleSun */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSun_createWithTotalParticles00
static int tolua_Modules_CCParticleSun_createWithTotalParticles00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParticleSun",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned int numberOfParticles = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  {
   CCParticleSun* tolua_ret = (CCParticleSun*)  CCParticleSun::createWithTotalParticles(numberOfParticles);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParticleSun");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithTotalParticles'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCParticleSun */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSun_create00
static int tolua_Modules_CCParticleSun_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParticleSun",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCParticleSun* tolua_ret = (CCParticleSun*)  CCParticleSun::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParticleSun");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithTotalParticles of class  CCParticleGalaxy */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleGalaxy_createWithTotalParticles00
static int tolua_Modules_CCParticleGalaxy_createWithTotalParticles00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParticleGalaxy",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned int numberOfParticles = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  {
   CCParticleGalaxy* tolua_ret = (CCParticleGalaxy*)  CCParticleGalaxy::createWithTotalParticles(numberOfParticles);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParticleGalaxy");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithTotalParticles'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCParticleGalaxy */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleGalaxy_create00
static int tolua_Modules_CCParticleGalaxy_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParticleGalaxy",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCParticleGalaxy* tolua_ret = (CCParticleGalaxy*)  CCParticleGalaxy::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParticleGalaxy");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithTotalParticles of class  CCParticleFlower */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleFlower_createWithTotalParticles00
static int tolua_Modules_CCParticleFlower_createWithTotalParticles00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParticleFlower",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned int numberOfParticles = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  {
   CCParticleFlower* tolua_ret = (CCParticleFlower*)  CCParticleFlower::createWithTotalParticles(numberOfParticles);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParticleFlower");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithTotalParticles'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCParticleFlower */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleFlower_create00
static int tolua_Modules_CCParticleFlower_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParticleFlower",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCParticleFlower* tolua_ret = (CCParticleFlower*)  CCParticleFlower::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParticleFlower");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithTotalParticles of class  CCParticleMeteor */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleMeteor_createWithTotalParticles00
static int tolua_Modules_CCParticleMeteor_createWithTotalParticles00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParticleMeteor",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned int numberOfParticles = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  {
   CCParticleMeteor* tolua_ret = (CCParticleMeteor*)  CCParticleMeteor::createWithTotalParticles(numberOfParticles);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParticleMeteor");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithTotalParticles'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCParticleMeteor */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleMeteor_create00
static int tolua_Modules_CCParticleMeteor_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParticleMeteor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCParticleMeteor* tolua_ret = (CCParticleMeteor*)  CCParticleMeteor::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParticleMeteor");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithTotalParticles of class  CCParticleSpiral */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSpiral_createWithTotalParticles00
static int tolua_Modules_CCParticleSpiral_createWithTotalParticles00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParticleSpiral",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned int numberOfParticles = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  {
   CCParticleSpiral* tolua_ret = (CCParticleSpiral*)  CCParticleSpiral::createWithTotalParticles(numberOfParticles);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParticleSpiral");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithTotalParticles'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCParticleSpiral */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSpiral_create00
static int tolua_Modules_CCParticleSpiral_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParticleSpiral",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCParticleSpiral* tolua_ret = (CCParticleSpiral*)  CCParticleSpiral::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParticleSpiral");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithTotalParticles of class  CCParticleExplosion */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleExplosion_createWithTotalParticles00
static int tolua_Modules_CCParticleExplosion_createWithTotalParticles00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParticleExplosion",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned int numberOfParticles = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  {
   CCParticleExplosion* tolua_ret = (CCParticleExplosion*)  CCParticleExplosion::createWithTotalParticles(numberOfParticles);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParticleExplosion");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithTotalParticles'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCParticleExplosion */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleExplosion_create00
static int tolua_Modules_CCParticleExplosion_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParticleExplosion",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCParticleExplosion* tolua_ret = (CCParticleExplosion*)  CCParticleExplosion::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParticleExplosion");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithTotalParticles of class  CCParticleSmoke */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSmoke_createWithTotalParticles00
static int tolua_Modules_CCParticleSmoke_createWithTotalParticles00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParticleSmoke",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned int numberOfParticles = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  {
   CCParticleSmoke* tolua_ret = (CCParticleSmoke*)  CCParticleSmoke::createWithTotalParticles(numberOfParticles);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParticleSmoke");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithTotalParticles'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCParticleSmoke */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSmoke_create00
static int tolua_Modules_CCParticleSmoke_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParticleSmoke",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCParticleSmoke* tolua_ret = (CCParticleSmoke*)  CCParticleSmoke::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParticleSmoke");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithTotalParticles of class  CCParticleSnow */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSnow_createWithTotalParticles00
static int tolua_Modules_CCParticleSnow_createWithTotalParticles00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParticleSnow",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned int numberOfParticles = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  {
   CCParticleSnow* tolua_ret = (CCParticleSnow*)  CCParticleSnow::createWithTotalParticles(numberOfParticles);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParticleSnow");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithTotalParticles'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCParticleSnow */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSnow_create00
static int tolua_Modules_CCParticleSnow_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParticleSnow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCParticleSnow* tolua_ret = (CCParticleSnow*)  CCParticleSnow::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParticleSnow");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithTotalParticles of class  CCParticleRain */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleRain_createWithTotalParticles00
static int tolua_Modules_CCParticleRain_createWithTotalParticles00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParticleRain",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned int numberOfParticles = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  {
   CCParticleRain* tolua_ret = (CCParticleRain*)  CCParticleRain::createWithTotalParticles(numberOfParticles);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParticleRain");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithTotalParticles'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCParticleRain */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleRain_create00
static int tolua_Modules_CCParticleRain_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParticleRain",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCParticleRain* tolua_ret = (CCParticleRain*)  CCParticleRain::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParticleRain");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBatchNode of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getBatchNode00
static int tolua_Modules_CCParticleSystem_getBatchNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBatchNode'", NULL);
#endif
  {
   CCParticleBatchNode* tolua_ret = (CCParticleBatchNode*)  self->getBatchNode();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParticleBatchNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBatchNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAtlasIndex of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getAtlasIndex00
static int tolua_Modules_CCParticleSystem_getAtlasIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAtlasIndex'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getAtlasIndex();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAtlasIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getParticleCount of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getParticleCount00
static int tolua_Modules_CCParticleSystem_getParticleCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getParticleCount'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getParticleCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getParticleCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDuration of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getDuration00
static int tolua_Modules_CCParticleSystem_getDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDuration'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getDuration();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDuration of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setDuration00
static int tolua_Modules_CCParticleSystem_setDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDuration'", NULL);
#endif
  {
   self->setDuration(v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSourcePosition of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getSourcePosition00
static int tolua_Modules_CCParticleSystem_getSourcePosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSourcePosition'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->getSourcePosition();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSourcePosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSourcePosition of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setSourcePosition00
static int tolua_Modules_CCParticleSystem_setSourcePosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  CCPoint p = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSourcePosition'", NULL);
#endif
  {
   self->setSourcePosition(p);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSourcePosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPosVar of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getPosVar00
static int tolua_Modules_CCParticleSystem_getPosVar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPosVar'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->getPosVar();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPosVar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPosVar of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setPosVar00
static int tolua_Modules_CCParticleSystem_setPosVar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  CCPoint p = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosVar'", NULL);
#endif
  {
   self->setPosVar(p);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPosVar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLife of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getLife00
static int tolua_Modules_CCParticleSystem_getLife00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLife'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getLife();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLife'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLife of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setLife00
static int tolua_Modules_CCParticleSystem_setLife00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLife'", NULL);
#endif
  {
   self->setLife(v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLife'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLifeVar of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getLifeVar00
static int tolua_Modules_CCParticleSystem_getLifeVar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLifeVar'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getLifeVar();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLifeVar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLifeVar of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setLifeVar00
static int tolua_Modules_CCParticleSystem_setLifeVar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLifeVar'", NULL);
#endif
  {
   self->setLifeVar(v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLifeVar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAngle of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getAngle00
static int tolua_Modules_CCParticleSystem_getAngle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAngle'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getAngle();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAngle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAngle of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setAngle00
static int tolua_Modules_CCParticleSystem_setAngle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAngle'", NULL);
#endif
  {
   self->setAngle(v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAngle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAngleVar of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getAngleVar00
static int tolua_Modules_CCParticleSystem_getAngleVar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAngleVar'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getAngleVar();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAngleVar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAngleVar of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setAngleVar00
static int tolua_Modules_CCParticleSystem_setAngleVar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAngleVar'", NULL);
#endif
  {
   self->setAngleVar(v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAngleVar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getGravity of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getGravity00
static int tolua_Modules_CCParticleSystem_getGravity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getGravity'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->getGravity();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getGravity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setGravity of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setGravity00
static int tolua_Modules_CCParticleSystem_setGravity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  CCPoint g = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setGravity'", NULL);
#endif
  {
   self->setGravity(g);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setGravity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSpeed of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getSpeed00
static int tolua_Modules_CCParticleSystem_getSpeed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSpeed'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getSpeed();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSpeed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSpeed of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setSpeed00
static int tolua_Modules_CCParticleSystem_setSpeed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  float speed = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSpeed'", NULL);
#endif
  {
   self->setSpeed(speed);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSpeed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSpeedVar of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getSpeedVar00
static int tolua_Modules_CCParticleSystem_getSpeedVar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSpeedVar'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getSpeedVar();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSpeedVar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSpeedVar of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setSpeedVar00
static int tolua_Modules_CCParticleSystem_setSpeedVar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  float speed = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSpeedVar'", NULL);
#endif
  {
   self->setSpeedVar(speed);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSpeedVar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTangentialAccel of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getTangentialAccel00
static int tolua_Modules_CCParticleSystem_getTangentialAccel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTangentialAccel'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getTangentialAccel();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTangentialAccel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTangentialAccel of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setTangentialAccel00
static int tolua_Modules_CCParticleSystem_setTangentialAccel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  float t = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTangentialAccel'", NULL);
#endif
  {
   self->setTangentialAccel(t);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTangentialAccel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTangentialAccelVar of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getTangentialAccelVar00
static int tolua_Modules_CCParticleSystem_getTangentialAccelVar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTangentialAccelVar'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getTangentialAccelVar();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTangentialAccelVar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTangentialAccelVar of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setTangentialAccelVar00
static int tolua_Modules_CCParticleSystem_setTangentialAccelVar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  float t = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTangentialAccelVar'", NULL);
#endif
  {
   self->setTangentialAccelVar(t);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTangentialAccelVar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRadialAccel of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getRadialAccel00
static int tolua_Modules_CCParticleSystem_getRadialAccel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRadialAccel'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getRadialAccel();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRadialAccel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRadialAccel of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setRadialAccel00
static int tolua_Modules_CCParticleSystem_setRadialAccel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  float t = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRadialAccel'", NULL);
#endif
  {
   self->setRadialAccel(t);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRadialAccel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRadialAccelVar of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getRadialAccelVar00
static int tolua_Modules_CCParticleSystem_getRadialAccelVar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRadialAccelVar'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getRadialAccelVar();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRadialAccelVar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRadialAccelVar of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setRadialAccelVar00
static int tolua_Modules_CCParticleSystem_setRadialAccelVar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  float t = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRadialAccelVar'", NULL);
#endif
  {
   self->setRadialAccelVar(t);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRadialAccelVar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRotationIsDir of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getRotationIsDir00
static int tolua_Modules_CCParticleSystem_getRotationIsDir00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRotationIsDir'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getRotationIsDir();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRotationIsDir'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRotationIsDir of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setRotationIsDir00
static int tolua_Modules_CCParticleSystem_setRotationIsDir00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  bool t = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRotationIsDir'", NULL);
#endif
  {
   self->setRotationIsDir(t);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRotationIsDir'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStartRadius of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getStartRadius00
static int tolua_Modules_CCParticleSystem_getStartRadius00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStartRadius'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getStartRadius();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStartRadius'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setStartRadius of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setStartRadius00
static int tolua_Modules_CCParticleSystem_setStartRadius00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  float startRadius = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setStartRadius'", NULL);
#endif
  {
   self->setStartRadius(startRadius);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setStartRadius'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStartRadiusVar of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getStartRadiusVar00
static int tolua_Modules_CCParticleSystem_getStartRadiusVar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStartRadiusVar'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getStartRadiusVar();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStartRadiusVar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setStartRadiusVar of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setStartRadiusVar00
static int tolua_Modules_CCParticleSystem_setStartRadiusVar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  float startRadiusVar = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setStartRadiusVar'", NULL);
#endif
  {
   self->setStartRadiusVar(startRadiusVar);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setStartRadiusVar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getEndRadius of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getEndRadius00
static int tolua_Modules_CCParticleSystem_getEndRadius00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getEndRadius'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getEndRadius();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getEndRadius'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEndRadius of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setEndRadius00
static int tolua_Modules_CCParticleSystem_setEndRadius00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  float endRadius = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEndRadius'", NULL);
#endif
  {
   self->setEndRadius(endRadius);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEndRadius'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getEndRadiusVar of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getEndRadiusVar00
static int tolua_Modules_CCParticleSystem_getEndRadiusVar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getEndRadiusVar'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getEndRadiusVar();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getEndRadiusVar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEndRadiusVar of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setEndRadiusVar00
static int tolua_Modules_CCParticleSystem_setEndRadiusVar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  float endRadiusVar = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEndRadiusVar'", NULL);
#endif
  {
   self->setEndRadiusVar(endRadiusVar);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEndRadiusVar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRotatePerSecond of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getRotatePerSecond00
static int tolua_Modules_CCParticleSystem_getRotatePerSecond00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRotatePerSecond'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getRotatePerSecond();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRotatePerSecond'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRotatePerSecond of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setRotatePerSecond00
static int tolua_Modules_CCParticleSystem_setRotatePerSecond00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  float degrees = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRotatePerSecond'", NULL);
#endif
  {
   self->setRotatePerSecond(degrees);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRotatePerSecond'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRotatePerSecondVar of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getRotatePerSecondVar00
static int tolua_Modules_CCParticleSystem_getRotatePerSecondVar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRotatePerSecondVar'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getRotatePerSecondVar();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRotatePerSecondVar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRotatePerSecondVar of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setRotatePerSecondVar00
static int tolua_Modules_CCParticleSystem_setRotatePerSecondVar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  float degrees = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRotatePerSecondVar'", NULL);
#endif
  {
   self->setRotatePerSecondVar(degrees);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRotatePerSecondVar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isActive of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_isActive00
static int tolua_Modules_CCParticleSystem_isActive00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isActive'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isActive();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isActive'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isBlendAdditive of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_isBlendAdditive00
static int tolua_Modules_CCParticleSystem_isBlendAdditive00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isBlendAdditive'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isBlendAdditive();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isBlendAdditive'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBlendAdditive of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setBlendAdditive00
static int tolua_Modules_CCParticleSystem_setBlendAdditive00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  bool value = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBlendAdditive'", NULL);
#endif
  {
   self->setBlendAdditive(value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBlendAdditive'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStartSize of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getStartSize00
static int tolua_Modules_CCParticleSystem_getStartSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStartSize'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getStartSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStartSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setStartSize of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setStartSize00
static int tolua_Modules_CCParticleSystem_setStartSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setStartSize'", NULL);
#endif
  {
   self->setStartSize(v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setStartSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStartSizeVar of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getStartSizeVar00
static int tolua_Modules_CCParticleSystem_getStartSizeVar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStartSizeVar'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getStartSizeVar();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStartSizeVar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setStartSizeVar of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setStartSizeVar00
static int tolua_Modules_CCParticleSystem_setStartSizeVar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setStartSizeVar'", NULL);
#endif
  {
   self->setStartSizeVar(v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setStartSizeVar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getEndSize of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getEndSize00
static int tolua_Modules_CCParticleSystem_getEndSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getEndSize'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getEndSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getEndSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEndSize of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setEndSize00
static int tolua_Modules_CCParticleSystem_setEndSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEndSize'", NULL);
#endif
  {
   self->setEndSize(v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEndSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getEndSizeVar of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getEndSizeVar00
static int tolua_Modules_CCParticleSystem_getEndSizeVar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getEndSizeVar'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getEndSizeVar();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getEndSizeVar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEndSizeVar of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setEndSizeVar00
static int tolua_Modules_CCParticleSystem_setEndSizeVar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEndSizeVar'", NULL);
#endif
  {
   self->setEndSizeVar(v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEndSizeVar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStartColor of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getStartColor00
static int tolua_Modules_CCParticleSystem_getStartColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStartColor'", NULL);
#endif
  {
   ccColor4F tolua_ret = (ccColor4F)  self->getStartColor();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ccColor4F)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor4F");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ccColor4F));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor4F");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStartColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setStartColor of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setStartColor00
static int tolua_Modules_CCParticleSystem_setStartColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccColor4F",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  ccColor4F color = *((ccColor4F*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setStartColor'", NULL);
#endif
  {
   self->setStartColor(color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setStartColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStartColorVar of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getStartColorVar00
static int tolua_Modules_CCParticleSystem_getStartColorVar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStartColorVar'", NULL);
#endif
  {
   ccColor4F tolua_ret = (ccColor4F)  self->getStartColorVar();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ccColor4F)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor4F");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ccColor4F));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor4F");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStartColorVar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setStartColorVar of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setStartColorVar00
static int tolua_Modules_CCParticleSystem_setStartColorVar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccColor4F",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  ccColor4F color = *((ccColor4F*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setStartColorVar'", NULL);
#endif
  {
   self->setStartColorVar(color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setStartColorVar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getEndColor of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getEndColor00
static int tolua_Modules_CCParticleSystem_getEndColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getEndColor'", NULL);
#endif
  {
   ccColor4F tolua_ret = (ccColor4F)  self->getEndColor();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ccColor4F)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor4F");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ccColor4F));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor4F");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getEndColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEndColor of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setEndColor00
static int tolua_Modules_CCParticleSystem_setEndColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccColor4F",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  ccColor4F color = *((ccColor4F*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEndColor'", NULL);
#endif
  {
   self->setEndColor(color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEndColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getEndColorVar of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getEndColorVar00
static int tolua_Modules_CCParticleSystem_getEndColorVar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getEndColorVar'", NULL);
#endif
  {
   ccColor4F tolua_ret = (ccColor4F)  self->getEndColorVar();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ccColor4F)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor4F");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ccColor4F));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor4F");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getEndColorVar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEndColorVar of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setEndColorVar00
static int tolua_Modules_CCParticleSystem_setEndColorVar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccColor4F",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  ccColor4F color = *((ccColor4F*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEndColorVar'", NULL);
#endif
  {
   self->setEndColorVar(color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEndColorVar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStartSpin of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getStartSpin00
static int tolua_Modules_CCParticleSystem_getStartSpin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStartSpin'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getStartSpin();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStartSpin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setStartSpin of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setStartSpin00
static int tolua_Modules_CCParticleSystem_setStartSpin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setStartSpin'", NULL);
#endif
  {
   self->setStartSpin(v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setStartSpin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStartSpinVar of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getStartSpinVar00
static int tolua_Modules_CCParticleSystem_getStartSpinVar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStartSpinVar'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getStartSpinVar();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStartSpinVar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setStartSpinVar of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setStartSpinVar00
static int tolua_Modules_CCParticleSystem_setStartSpinVar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setStartSpinVar'", NULL);
#endif
  {
   self->setStartSpinVar(v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setStartSpinVar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getEndSpin of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getEndSpin00
static int tolua_Modules_CCParticleSystem_getEndSpin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getEndSpin'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getEndSpin();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getEndSpin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEndSpin of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setEndSpin00
static int tolua_Modules_CCParticleSystem_setEndSpin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEndSpin'", NULL);
#endif
  {
   self->setEndSpin(v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEndSpin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getEndSpinVar of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getEndSpinVar00
static int tolua_Modules_CCParticleSystem_getEndSpinVar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getEndSpinVar'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getEndSpinVar();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getEndSpinVar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEndSpinVar of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setEndSpinVar00
static int tolua_Modules_CCParticleSystem_setEndSpinVar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEndSpinVar'", NULL);
#endif
  {
   self->setEndSpinVar(v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEndSpinVar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getEmissionRate of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getEmissionRate00
static int tolua_Modules_CCParticleSystem_getEmissionRate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getEmissionRate'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getEmissionRate();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getEmissionRate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEmissionRate of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setEmissionRate00
static int tolua_Modules_CCParticleSystem_setEmissionRate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEmissionRate'", NULL);
#endif
  {
   self->setEmissionRate(v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEmissionRate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTotalParticles of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getTotalParticles00
static int tolua_Modules_CCParticleSystem_getTotalParticles00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTotalParticles'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getTotalParticles();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTotalParticles'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTotalParticles of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setTotalParticles00
static int tolua_Modules_CCParticleSystem_setTotalParticles00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  unsigned int n = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTotalParticles'", NULL);
#endif
  {
   self->setTotalParticles(n);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTotalParticles'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTexture of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getTexture00
static int tolua_Modules_CCParticleSystem_getTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTexture'", NULL);
#endif
  {
   CCTexture2D* tolua_ret = (CCTexture2D*)  self->getTexture();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTexture2D");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTexture of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setTexture00
static int tolua_Modules_CCParticleSystem_setTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* tex = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTexture'", NULL);
#endif
  {
   self->setTexture(tex);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBlendFunc of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getBlendFunc00
static int tolua_Modules_CCParticleSystem_getBlendFunc00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBlendFunc'", NULL);
#endif
  {
   ccBlendFunc tolua_ret = (ccBlendFunc)  self->getBlendFunc();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ccBlendFunc)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ccBlendFunc");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ccBlendFunc));
     tolua_pushusertype(tolua_S,tolua_obj,"ccBlendFunc");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBlendFunc'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBlendFunc of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setBlendFunc00
static int tolua_Modules_CCParticleSystem_setBlendFunc00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccBlendFunc",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  ccBlendFunc blend = *((ccBlendFunc*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBlendFunc'", NULL);
#endif
  {
   self->setBlendFunc(blend);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBlendFunc'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOpacityModifyRGB of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getOpacityModifyRGB00
static int tolua_Modules_CCParticleSystem_getOpacityModifyRGB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOpacityModifyRGB'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getOpacityModifyRGB();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOpacityModifyRGB'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOpacityModifyRGB of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setOpacityModifyRGB00
static int tolua_Modules_CCParticleSystem_setOpacityModifyRGB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  bool v = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOpacityModifyRGB'", NULL);
#endif
  {
   self->setOpacityModifyRGB(v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOpacityModifyRGB'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPositionType of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getPositionType00
static int tolua_Modules_CCParticleSystem_getPositionType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPositionType'", NULL);
#endif
  {
   tCCPositionType tolua_ret = (tCCPositionType)  self->getPositionType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPositionType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPositionType of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setPositionType00
static int tolua_Modules_CCParticleSystem_setPositionType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  tCCPositionType t = ((tCCPositionType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPositionType'", NULL);
#endif
  {
   self->setPositionType(t);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPositionType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isAutoRemoveOnFinish of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_isAutoRemoveOnFinish00
static int tolua_Modules_CCParticleSystem_isAutoRemoveOnFinish00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isAutoRemoveOnFinish'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isAutoRemoveOnFinish();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isAutoRemoveOnFinish'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAutoRemoveOnFinish of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setAutoRemoveOnFinish00
static int tolua_Modules_CCParticleSystem_setAutoRemoveOnFinish00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  bool var = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAutoRemoveOnFinish'", NULL);
#endif
  {
   self->setAutoRemoveOnFinish(var);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAutoRemoveOnFinish'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getEmitterMode of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_getEmitterMode00
static int tolua_Modules_CCParticleSystem_getEmitterMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getEmitterMode'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getEmitterMode();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getEmitterMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEmitterMode of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_setEmitterMode00
static int tolua_Modules_CCParticleSystem_setEmitterMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  int m = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEmitterMode'", NULL);
#endif
  {
   self->setEmitterMode(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEmitterMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_init00
static int tolua_Modules_CCParticleSystem_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithFile of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_initWithFile00
static int tolua_Modules_CCParticleSystem_initWithFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  const char* plistFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithFile'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithFile(plistFile);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithDictionary of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_initWithDictionary00
static int tolua_Modules_CCParticleSystem_initWithDictionary00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  CCDictionary* dictionary = ((CCDictionary*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithDictionary'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithDictionary(dictionary);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithDictionary'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithDictionary of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_initWithDictionary01
static int tolua_Modules_CCParticleSystem_initWithDictionary01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCDictionary",0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  CCDictionary* dictionary = ((CCDictionary*)  tolua_tousertype(tolua_S,2,0));
  const char* dirname = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithDictionary'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithDictionary(dictionary,dirname);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Modules_CCParticleSystem_initWithDictionary00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithTotalParticles of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_initWithTotalParticles00
static int tolua_Modules_CCParticleSystem_initWithTotalParticles00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
  unsigned int numberOfParticles = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithTotalParticles'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithTotalParticles(numberOfParticles);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithTotalParticles'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addParticle of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_addParticle00
static int tolua_Modules_CCParticleSystem_addParticle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addParticle'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->addParticle();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addParticle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stopSystem of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_stopSystem00
static int tolua_Modules_CCParticleSystem_stopSystem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stopSystem'", NULL);
#endif
  {
   self->stopSystem();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stopSystem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resetSystem of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_resetSystem00
static int tolua_Modules_CCParticleSystem_resetSystem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resetSystem'", NULL);
#endif
  {
   self->resetSystem();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resetSystem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFull of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_isFull00
static int tolua_Modules_CCParticleSystem_isFull00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFull'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFull();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFull'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateWithNoTime of class  CCParticleSystem */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystem_updateWithNoTime00
static int tolua_Modules_CCParticleSystem_updateWithNoTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystem* self = (CCParticleSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateWithNoTime'", NULL);
#endif
  {
   self->updateWithNoTime();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateWithNoTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CCParticleSystemQuad */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystemQuad_new00
static int tolua_Modules_CCParticleSystemQuad_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParticleSystemQuad",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCParticleSystemQuad* tolua_ret = (CCParticleSystemQuad*)  Mtolua_new((CCParticleSystemQuad)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParticleSystemQuad");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CCParticleSystemQuad */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystemQuad_new00_local
static int tolua_Modules_CCParticleSystemQuad_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParticleSystemQuad",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCParticleSystemQuad* tolua_ret = (CCParticleSystemQuad*)  Mtolua_new((CCParticleSystemQuad)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParticleSystemQuad");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CCParticleSystemQuad */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystemQuad_delete00
static int tolua_Modules_CCParticleSystemQuad_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystemQuad",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystemQuad* self = (CCParticleSystemQuad*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initIndices of class  CCParticleSystemQuad */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystemQuad_initIndices00
static int tolua_Modules_CCParticleSystemQuad_initIndices00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystemQuad",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystemQuad* self = (CCParticleSystemQuad*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initIndices'", NULL);
#endif
  {
   self->initIndices();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initIndices'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initTexCoordsWithRect of class  CCParticleSystemQuad */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystemQuad_initTexCoordsWithRect00
static int tolua_Modules_CCParticleSystemQuad_initTexCoordsWithRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystemQuad",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystemQuad* self = (CCParticleSystemQuad*)  tolua_tousertype(tolua_S,1,0);
  CCRect rect = *((CCRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initTexCoordsWithRect'", NULL);
#endif
  {
   self->initTexCoordsWithRect(rect);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initTexCoordsWithRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisplayFrame of class  CCParticleSystemQuad */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystemQuad_setDisplayFrame00
static int tolua_Modules_CCParticleSystemQuad_setDisplayFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystemQuad",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystemQuad* self = (CCParticleSystemQuad*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* spriteFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisplayFrame'", NULL);
#endif
  {
   self->setDisplayFrame(spriteFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisplayFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTextureWithRect of class  CCParticleSystemQuad */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystemQuad_setTextureWithRect00
static int tolua_Modules_CCParticleSystemQuad_setTextureWithRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystemQuad",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystemQuad* self = (CCParticleSystemQuad*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* texture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
  const CCRect* rect = ((const CCRect*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextureWithRect'", NULL);
#endif
  {
   self->setTextureWithRect(texture,*rect);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextureWithRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithTotalParticles of class  CCParticleSystemQuad */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystemQuad_initWithTotalParticles00
static int tolua_Modules_CCParticleSystemQuad_initWithTotalParticles00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystemQuad",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystemQuad* self = (CCParticleSystemQuad*)  tolua_tousertype(tolua_S,1,0);
  unsigned int numberOfParticles = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithTotalParticles'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithTotalParticles(numberOfParticles);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithTotalParticles'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTexture of class  CCParticleSystemQuad */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystemQuad_setTexture00
static int tolua_Modules_CCParticleSystemQuad_setTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystemQuad",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystemQuad* self = (CCParticleSystemQuad*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* texture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTexture'", NULL);
#endif
  {
   self->setTexture(texture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateQuadWithParticle of class  CCParticleSystemQuad */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystemQuad_updateQuadWithParticle00
static int tolua_Modules_CCParticleSystemQuad_updateQuadWithParticle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystemQuad",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"tCCParticle",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystemQuad* self = (CCParticleSystemQuad*)  tolua_tousertype(tolua_S,1,0);
  tCCParticle* particle = ((tCCParticle*)  tolua_tousertype(tolua_S,2,0));
  const CCPoint* newPosition = ((const CCPoint*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateQuadWithParticle'", NULL);
#endif
  {
   self->updateQuadWithParticle(particle,*newPosition);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateQuadWithParticle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBatchNode of class  CCParticleSystemQuad */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystemQuad_setBatchNode00
static int tolua_Modules_CCParticleSystemQuad_setBatchNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystemQuad",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCParticleBatchNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystemQuad* self = (CCParticleSystemQuad*)  tolua_tousertype(tolua_S,1,0);
  CCParticleBatchNode* batchNode = ((CCParticleBatchNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBatchNode'", NULL);
#endif
  {
   self->setBatchNode(batchNode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBatchNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTotalParticles of class  CCParticleSystemQuad */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystemQuad_setTotalParticles00
static int tolua_Modules_CCParticleSystemQuad_setTotalParticles00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystemQuad",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParticleSystemQuad* self = (CCParticleSystemQuad*)  tolua_tousertype(tolua_S,1,0);
  unsigned int tp = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTotalParticles'", NULL);
#endif
  {
   self->setTotalParticles(tp);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTotalParticles'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCParticleSystemQuad */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystemQuad_create00
static int tolua_Modules_CCParticleSystemQuad_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParticleSystemQuad",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* plistFile = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   CCParticleSystemQuad* tolua_ret = (CCParticleSystemQuad*)  CCParticleSystemQuad::create(plistFile);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParticleSystemQuad");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCParticleSystemQuad */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystemQuad_create01
static int tolua_Modules_CCParticleSystemQuad_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParticleSystemQuad",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  {
   CCParticleSystemQuad* tolua_ret = (CCParticleSystemQuad*)  CCParticleSystemQuad::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParticleSystemQuad");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Modules_CCParticleSystemQuad_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithTotalParticles of class  CCParticleSystemQuad */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystemQuad_createWithTotalParticles00
static int tolua_Modules_CCParticleSystemQuad_createWithTotalParticles00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParticleSystemQuad",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned int numberOfParticles = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  {
   CCParticleSystemQuad* tolua_ret = (CCParticleSystemQuad*)  CCParticleSystemQuad::createWithTotalParticles(numberOfParticles);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParticleSystemQuad");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithTotalParticles'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisplayFrame of class  CCParticleSystemQuad */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystemQuad_setDisplayFrame01
static int tolua_Modules_CCParticleSystemQuad_setDisplayFrame01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystemQuad",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCParticleSystemQuad* self = (CCParticleSystemQuad*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* spriteFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisplayFrame'", NULL);
#endif
  {
   self->setDisplayFrame(spriteFrame);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Modules_CCParticleSystemQuad_setDisplayFrame00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTextureWithRect of class  CCParticleSystemQuad */
#ifndef TOLUA_DISABLE_tolua_Modules_CCParticleSystemQuad_setTextureWithRect01
static int tolua_Modules_CCParticleSystemQuad_setTextureWithRect01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParticleSystemQuad",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCParticleSystemQuad* self = (CCParticleSystemQuad*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* texture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
  CCRect rect = *((CCRect*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextureWithRect'", NULL);
#endif
  {
   self->setTextureWithRect(texture,rect);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Modules_CCParticleSystemQuad_setTextureWithRect00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_new00
static int tolua_Modules_CCScrollView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCScrollView* tolua_ret = (CCScrollView*)  Mtolua_new((CCScrollView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCScrollView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_new00_local
static int tolua_Modules_CCScrollView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCScrollView* tolua_ret = (CCScrollView*)  Mtolua_new((CCScrollView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCScrollView");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_delete00
static int tolua_Modules_CCScrollView_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_init00
static int tolua_Modules_CCScrollView_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_create00
static int tolua_Modules_CCScrollView_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCSize",0,&tolua_err)) ||
     !tolua_isusertype(tolua_S,3,"CCNode",1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSize size = *((CCSize*)  tolua_tousertype(tolua_S,2,0));
  CCNode* container = ((CCNode*)  tolua_tousertype(tolua_S,3,NULL));
  {
   CCScrollView* tolua_ret = (CCScrollView*)  CCScrollView::create(size,container);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCScrollView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_create01
static int tolua_Modules_CCScrollView_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  {
   CCScrollView* tolua_ret = (CCScrollView*)  CCScrollView::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCScrollView");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Modules_CCScrollView_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithViewSize of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_initWithViewSize00
static int tolua_Modules_CCScrollView_initWithViewSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCSize",0,&tolua_err)) ||
     !tolua_isusertype(tolua_S,3,"CCNode",1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCSize size = *((CCSize*)  tolua_tousertype(tolua_S,2,0));
  CCNode* container = ((CCNode*)  tolua_tousertype(tolua_S,3,NULL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithViewSize'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithViewSize(size,container);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithViewSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentOffset of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_setContentOffset00
static int tolua_Modules_CCScrollView_setContentOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCPoint offset = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
  bool animated = ((bool)  tolua_toboolean(tolua_S,3,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentOffset'", NULL);
#endif
  {
   self->setContentOffset(offset,animated);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentOffset of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_getContentOffset00
static int tolua_Modules_CCScrollView_getContentOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentOffset'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->getContentOffset();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentOffsetInDuration of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_setContentOffsetInDuration00
static int tolua_Modules_CCScrollView_setContentOffsetInDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCPoint offset = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
  float dt = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentOffsetInDuration'", NULL);
#endif
  {
   self->setContentOffsetInDuration(offset,dt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentOffsetInDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setZoomScale of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_setZoomScale00
static int tolua_Modules_CCScrollView_setZoomScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  float s = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setZoomScale'", NULL);
#endif
  {
   self->setZoomScale(s);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setZoomScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setZoomScale of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_setZoomScale01
static int tolua_Modules_CCScrollView_setZoomScale01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  float s = ((float)  tolua_tonumber(tolua_S,2,0));
  bool animated = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setZoomScale'", NULL);
#endif
  {
   self->setZoomScale(s,animated);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Modules_CCScrollView_setZoomScale00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getZoomScale of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_getZoomScale00
static int tolua_Modules_CCScrollView_getZoomScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getZoomScale'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getZoomScale();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getZoomScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setZoomScaleInDuration of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_setZoomScaleInDuration00
static int tolua_Modules_CCScrollView_setZoomScaleInDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  float s = ((float)  tolua_tonumber(tolua_S,2,0));
  float dt = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setZoomScaleInDuration'", NULL);
#endif
  {
   self->setZoomScaleInDuration(s,dt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setZoomScaleInDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: minContainerOffset of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_minContainerOffset00
static int tolua_Modules_CCScrollView_minContainerOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'minContainerOffset'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->minContainerOffset();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'minContainerOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: maxContainerOffset of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_maxContainerOffset00
static int tolua_Modules_CCScrollView_maxContainerOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'maxContainerOffset'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->maxContainerOffset();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'maxContainerOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isNodeVisible of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_isNodeVisible00
static int tolua_Modules_CCScrollView_isNodeVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCNode* node = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isNodeVisible'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isNodeVisible(node);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isNodeVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pause of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_pause00
static int tolua_Modules_CCScrollView_pause00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCObject* sender = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pause'", NULL);
#endif
  {
   self->pause(sender);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pause'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resume of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_resume00
static int tolua_Modules_CCScrollView_resume00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCObject* sender = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resume'", NULL);
#endif
  {
   self->resume(sender);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resume'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isDragging of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_isDragging00
static int tolua_Modules_CCScrollView_isDragging00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isDragging'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isDragging();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isDragging'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchMoved of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_isTouchMoved00
static int tolua_Modules_CCScrollView_isTouchMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchMoved'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchMoved();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isBounceable of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_isBounceable00
static int tolua_Modules_CCScrollView_isBounceable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isBounceable'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isBounceable();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isBounceable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBounceable of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_setBounceable00
static int tolua_Modules_CCScrollView_setBounceable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  bool bBounceable = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBounceable'", NULL);
#endif
  {
   self->setBounceable(bBounceable);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBounceable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getViewSize of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_getViewSize00
static int tolua_Modules_CCScrollView_getViewSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getViewSize'", NULL);
#endif
  {
   CCSize tolua_ret = (CCSize)  self->getViewSize();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCSize)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCSize));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getViewSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setViewSize of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_setViewSize00
static int tolua_Modules_CCScrollView_setViewSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCSize size = *((CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setViewSize'", NULL);
#endif
  {
   self->setViewSize(size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setViewSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContainer of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_getContainer00
static int tolua_Modules_CCScrollView_getContainer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContainer'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getContainer();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContainer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContainer of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_setContainer00
static int tolua_Modules_CCScrollView_setContainer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCNode* pContainer = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContainer'", NULL);
#endif
  {
   self->setContainer(pContainer);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContainer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDirection of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_getDirection00
static int tolua_Modules_CCScrollView_getDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDirection'", NULL);
#endif
  {
   CCScrollViewDirection tolua_ret = (CCScrollViewDirection)  self->getDirection();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDirection of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_setDirection00
static int tolua_Modules_CCScrollView_setDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCScrollViewDirection eDirection = ((CCScrollViewDirection) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirection'", NULL);
#endif
  {
   self->setDirection(eDirection);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchBegan of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_ccTouchBegan00
static int tolua_Modules_CCScrollView_ccTouchBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* pEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchBegan'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->ccTouchBegan(pTouch,pEvent);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchMoved of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_ccTouchMoved00
static int tolua_Modules_CCScrollView_ccTouchMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* pEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchMoved'", NULL);
#endif
  {
   self->ccTouchMoved(pTouch,pEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchEnded of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_ccTouchEnded00
static int tolua_Modules_CCScrollView_ccTouchEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* pEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchEnded'", NULL);
#endif
  {
   self->ccTouchEnded(pTouch,pEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchCancelled of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_ccTouchCancelled00
static int tolua_Modules_CCScrollView_ccTouchCancelled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* pEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchCancelled'", NULL);
#endif
  {
   self->ccTouchCancelled(pTouch,pEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchCancelled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentSize of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_setContentSize00
static int tolua_Modules_CCScrollView_setContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* size = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentSize'", NULL);
#endif
  {
   self->setContentSize(*size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentSize of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_getContentSize00
static int tolua_Modules_CCScrollView_getContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCScrollView* self = (const CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getContentSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateInset of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_updateInset00
static int tolua_Modules_CCScrollView_updateInset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateInset'", NULL);
#endif
  {
   self->updateInset();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateInset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isClippingToBounds of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_isClippingToBounds00
static int tolua_Modules_CCScrollView_isClippingToBounds00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isClippingToBounds'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isClippingToBounds();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isClippingToBounds'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setClippingToBounds of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_setClippingToBounds00
static int tolua_Modules_CCScrollView_setClippingToBounds00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  bool bClippingToBounds = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setClippingToBounds'", NULL);
#endif
  {
   self->setClippingToBounds(bClippingToBounds);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setClippingToBounds'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_addChild00
static int tolua_Modules_CCScrollView_addChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCNode* child = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  int zOrder = ((int)  tolua_tonumber(tolua_S,3,0));
  int tag = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   self->addChild(child,zOrder,tag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_addChild01
static int tolua_Modules_CCScrollView_addChild01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCNode* child = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  int zOrder = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   self->addChild(child,zOrder);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Modules_CCScrollView_addChild00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_addChild02
static int tolua_Modules_CCScrollView_addChild02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCNode* child = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   self->addChild(child);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Modules_CCScrollView_addChild01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchEnabled of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_setTouchEnabled00
static int tolua_Modules_CCScrollView_setTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  bool e = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchEnabled'", NULL);
#endif
  {
   self->setTouchEnabled(e);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: unregisterScriptHandler of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_unregisterScriptHandler00
static int tolua_Modules_CCScrollView_unregisterScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  int scriptHandlerType = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unregisterScriptHandler'", NULL);
#endif
  {
   self->unregisterScriptHandler(scriptHandlerType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unregisterScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getScriptHandler of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCScrollView_getScriptHandler00
static int tolua_Modules_CCScrollView_getScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  int scriptHandlerType = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getScriptHandler'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getScriptHandler(scriptHandlerType);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIdx of class  CCTableViewCell */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTableViewCell_getIdx00
static int tolua_Modules_CCTableViewCell_getIdx00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTableViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTableViewCell* self = (CCTableViewCell*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIdx'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getIdx();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIdx'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setIdx of class  CCTableViewCell */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTableViewCell_setIdx00
static int tolua_Modules_CCTableViewCell_setIdx00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTableViewCell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTableViewCell* self = (CCTableViewCell*)  tolua_tousertype(tolua_S,1,0);
  unsigned int uIdx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setIdx'", NULL);
#endif
  {
   self->setIdx(uIdx);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setIdx'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reset of class  CCTableViewCell */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTableViewCell_reset00
static int tolua_Modules_CCTableViewCell_reset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTableViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTableViewCell* self = (CCTableViewCell*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reset'", NULL);
#endif
  {
   self->reset();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setObjectID of class  CCTableViewCell */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTableViewCell_setObjectID00
static int tolua_Modules_CCTableViewCell_setObjectID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTableViewCell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTableViewCell* self = (CCTableViewCell*)  tolua_tousertype(tolua_S,1,0);
  unsigned int uIdx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setObjectID'", NULL);
#endif
  {
   self->setObjectID(uIdx);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setObjectID'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getObjectID of class  CCTableViewCell */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTableViewCell_getObjectID00
static int tolua_Modules_CCTableViewCell_getObjectID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTableViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTableViewCell* self = (CCTableViewCell*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getObjectID'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getObjectID();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getObjectID'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CCTableView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTableView_new00
static int tolua_Modules_CCTableView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTableView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCTableView* tolua_ret = (CCTableView*)  Mtolua_new((CCTableView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTableView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CCTableView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTableView_new00_local
static int tolua_Modules_CCTableView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTableView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCTableView* tolua_ret = (CCTableView*)  Mtolua_new((CCTableView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTableView");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CCTableView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTableView_delete00
static int tolua_Modules_CCTableView_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTableView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTableView* self = (CCTableView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVerticalFillOrder of class  CCTableView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTableView_setVerticalFillOrder00
static int tolua_Modules_CCTableView_setVerticalFillOrder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTableView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTableView* self = (CCTableView*)  tolua_tousertype(tolua_S,1,0);
  CCTableViewVerticalFillOrder order = ((CCTableViewVerticalFillOrder) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVerticalFillOrder'", NULL);
#endif
  {
   self->setVerticalFillOrder(order);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVerticalFillOrder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVerticalFillOrder of class  CCTableView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTableView_getVerticalFillOrder00
static int tolua_Modules_CCTableView_getVerticalFillOrder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTableView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTableView* self = (CCTableView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVerticalFillOrder'", NULL);
#endif
  {
   CCTableViewVerticalFillOrder tolua_ret = (CCTableViewVerticalFillOrder)  self->getVerticalFillOrder();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVerticalFillOrder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithViewSize of class  CCTableView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTableView_initWithViewSize00
static int tolua_Modules_CCTableView_initWithViewSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTableView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCSize",0,&tolua_err)) ||
     !tolua_isusertype(tolua_S,3,"CCNode",1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTableView* self = (CCTableView*)  tolua_tousertype(tolua_S,1,0);
  CCSize size = *((CCSize*)  tolua_tousertype(tolua_S,2,0));
  CCNode* container = ((CCNode*)  tolua_tousertype(tolua_S,3,NULL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithViewSize'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithViewSize(size,container);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithViewSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateCellAtIndex of class  CCTableView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTableView_updateCellAtIndex00
static int tolua_Modules_CCTableView_updateCellAtIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTableView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTableView* self = (CCTableView*)  tolua_tousertype(tolua_S,1,0);
  unsigned int idx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateCellAtIndex'", NULL);
#endif
  {
   self->updateCellAtIndex(idx);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateCellAtIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertCellAtIndex of class  CCTableView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTableView_insertCellAtIndex00
static int tolua_Modules_CCTableView_insertCellAtIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTableView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTableView* self = (CCTableView*)  tolua_tousertype(tolua_S,1,0);
  unsigned int idx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertCellAtIndex'", NULL);
#endif
  {
   self->insertCellAtIndex(idx);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insertCellAtIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeCellAtIndex of class  CCTableView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTableView_removeCellAtIndex00
static int tolua_Modules_CCTableView_removeCellAtIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTableView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTableView* self = (CCTableView*)  tolua_tousertype(tolua_S,1,0);
  unsigned int idx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeCellAtIndex'", NULL);
#endif
  {
   self->removeCellAtIndex(idx);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeCellAtIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reloadData of class  CCTableView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTableView_reloadData00
static int tolua_Modules_CCTableView_reloadData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTableView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTableView* self = (CCTableView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reloadData'", NULL);
#endif
  {
   self->reloadData();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reloadData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dequeueCell of class  CCTableView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTableView_dequeueCell00
static int tolua_Modules_CCTableView_dequeueCell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTableView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTableView* self = (CCTableView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dequeueCell'", NULL);
#endif
  {
   CCTableViewCell* tolua_ret = (CCTableViewCell*)  self->dequeueCell();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTableViewCell");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dequeueCell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: cellAtIndex of class  CCTableView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTableView_cellAtIndex00
static int tolua_Modules_CCTableView_cellAtIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTableView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTableView* self = (CCTableView*)  tolua_tousertype(tolua_S,1,0);
  unsigned int idx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'cellAtIndex'", NULL);
#endif
  {
   CCTableViewCell* tolua_ret = (CCTableViewCell*)  self->cellAtIndex(idx);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTableViewCell");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cellAtIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: scrollViewDidScroll of class  CCTableView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTableView_scrollViewDidScroll00
static int tolua_Modules_CCTableView_scrollViewDidScroll00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTableView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTableView* self = (CCTableView*)  tolua_tousertype(tolua_S,1,0);
  CCScrollView* view = ((CCScrollView*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'scrollViewDidScroll'", NULL);
#endif
  {
   self->scrollViewDidScroll(view);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'scrollViewDidScroll'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: scrollViewDidZoom of class  CCTableView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTableView_scrollViewDidZoom00
static int tolua_Modules_CCTableView_scrollViewDidZoom00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTableView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTableView* self = (CCTableView*)  tolua_tousertype(tolua_S,1,0);
  CCScrollView* view = ((CCScrollView*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'scrollViewDidZoom'", NULL);
#endif
  {
   self->scrollViewDidZoom(view);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'scrollViewDidZoom'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchBegan of class  CCTableView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTableView_ccTouchBegan00
static int tolua_Modules_CCTableView_ccTouchBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTableView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTableView* self = (CCTableView*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* pEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchBegan'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->ccTouchBegan(pTouch,pEvent);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchMoved of class  CCTableView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTableView_ccTouchMoved00
static int tolua_Modules_CCTableView_ccTouchMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTableView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTableView* self = (CCTableView*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* pEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchMoved'", NULL);
#endif
  {
   self->ccTouchMoved(pTouch,pEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchEnded of class  CCTableView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTableView_ccTouchEnded00
static int tolua_Modules_CCTableView_ccTouchEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTableView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTableView* self = (CCTableView*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* pEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchEnded'", NULL);
#endif
  {
   self->ccTouchEnded(pTouch,pEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchCancelled of class  CCTableView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTableView_ccTouchCancelled00
static int tolua_Modules_CCTableView_ccTouchCancelled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTableView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTableView* self = (CCTableView*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* pEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchCancelled'", NULL);
#endif
  {
   self->ccTouchCancelled(pTouch,pEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchCancelled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _updateContentSize of class  CCTableView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTableView__updateContentSize00
static int tolua_Modules_CCTableView__updateContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTableView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTableView* self = (CCTableView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_updateContentSize'", NULL);
#endif
  {
   self->_updateContentSize();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_updateContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: unregisterAllScriptHandler of class  CCTableView */
#ifndef TOLUA_DISABLE_tolua_Modules_CCTableView_unregisterAllScriptHandler00
static int tolua_Modules_CCTableView_unregisterAllScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTableView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTableView* self = (CCTableView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unregisterAllScriptHandler'", NULL);
#endif
  {
   self->unregisterAllScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unregisterAllScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getState of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControl_getState00
static int tolua_Modules_CCControl_getState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getState'", NULL);
#endif
  {
   unsigned int tolua_ret = ( unsigned int)  self->getState();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEnabled of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControl_setEnabled00
static int tolua_Modules_CCControl_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
  bool bEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'", NULL);
#endif
  {
   self->setEnabled(bEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isEnabled of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControl_isEnabled00
static int tolua_Modules_CCControl_isEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSelected of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControl_setSelected00
static int tolua_Modules_CCControl_setSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
  bool bSelected = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelected'", NULL);
#endif
  {
   self->setSelected(bSelected);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelected'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isSelected of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControl_isSelected00
static int tolua_Modules_CCControl_isSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isSelected'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isSelected();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isSelected'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setHighlighted of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControl_setHighlighted00
static int tolua_Modules_CCControl_setHighlighted00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
  bool bHighlighted = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHighlighted'", NULL);
#endif
  {
   self->setHighlighted(bHighlighted);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHighlighted'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isHighlighted of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControl_isHighlighted00
static int tolua_Modules_CCControl_isHighlighted00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isHighlighted'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isHighlighted();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isHighlighted'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasVisibleParents of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControl_hasVisibleParents00
static int tolua_Modules_CCControl_hasVisibleParents00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasVisibleParents'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hasVisibleParents();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasVisibleParents'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isOpacityModifyRGB of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControl_isOpacityModifyRGB00
static int tolua_Modules_CCControl_isOpacityModifyRGB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isOpacityModifyRGB'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isOpacityModifyRGB();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isOpacityModifyRGB'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOpacityModifyRGB of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControl_setOpacityModifyRGB00
static int tolua_Modules_CCControl_setOpacityModifyRGB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
  bool bOpacityModifyRGB = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOpacityModifyRGB'", NULL);
#endif
  {
   self->setOpacityModifyRGB(bOpacityModifyRGB);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOpacityModifyRGB'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sendActionsForControlEvents of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControl_sendActionsForControlEvents00
static int tolua_Modules_CCControl_sendActionsForControlEvents00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
  unsigned int controlEvents = (( unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'sendActionsForControlEvents'", NULL);
#endif
  {
   self->sendActionsForControlEvents(controlEvents);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sendActionsForControlEvents'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addHandleOfControlEvent of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControl_addHandleOfControlEvent00
static int tolua_Modules_CCControl_addHandleOfControlEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nFunID = (  toluafix_ref_function(tolua_S,2,0));
  unsigned int controlEvent = (( unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addHandleOfControlEvent'", NULL);
#endif
  {
   self->addHandleOfControlEvent(nFunID,controlEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addHandleOfControlEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeHandleOfControlEvent of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControl_removeHandleOfControlEvent00
static int tolua_Modules_CCControl_removeHandleOfControlEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
  unsigned int controlEvent = (( unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeHandleOfControlEvent'", NULL);
#endif
  {
   self->removeHandleOfControlEvent(controlEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeHandleOfControlEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCurrentTitle of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_getCurrentTitle00
static int tolua_Modules_CCControlButton_getCurrentTitle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCurrentTitle'", NULL);
#endif
  {
   CCString* tolua_ret = (CCString*)  self->getCurrentTitle();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCString");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCurrentTitle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCurrentTitleColor of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_getCurrentTitleColor00
static int tolua_Modules_CCControlButton_getCurrentTitleColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCurrentTitleColor'", NULL);
#endif
  {
   ccColor3B tolua_ret = (ccColor3B)  self->getCurrentTitleColor();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ccColor3B)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ccColor3B));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCurrentTitleColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: doesAdjustBackgroundImage of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_doesAdjustBackgroundImage00
static int tolua_Modules_CCControlButton_doesAdjustBackgroundImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'doesAdjustBackgroundImage'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->doesAdjustBackgroundImage();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'doesAdjustBackgroundImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAdjustBackgroundImage of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_setAdjustBackgroundImage00
static int tolua_Modules_CCControlButton_setAdjustBackgroundImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  bool adjustBackgroundImage = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAdjustBackgroundImage'", NULL);
#endif
  {
   self->setAdjustBackgroundImage(adjustBackgroundImage);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAdjustBackgroundImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTitleLabel of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_getTitleLabel00
static int tolua_Modules_CCControlButton_getTitleLabel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTitleLabel'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getTitleLabel();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTitleLabel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBackgroundSprite of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_getBackgroundSprite00
static int tolua_Modules_CCControlButton_getBackgroundSprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBackgroundSprite'", NULL);
#endif
  {
   CCScale9Sprite* tolua_ret = (CCScale9Sprite*)  self->getBackgroundSprite();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCScale9Sprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBackgroundSprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPreferredSize of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_getPreferredSize00
static int tolua_Modules_CCControlButton_getPreferredSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPreferredSize'", NULL);
#endif
  {
   CCSize tolua_ret = (CCSize)  self->getPreferredSize();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCSize)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCSize));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPreferredSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPreferredSize of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_setPreferredSize00
static int tolua_Modules_CCControlButton_setPreferredSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  CCSize s = *((CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPreferredSize'", NULL);
#endif
  {
   self->setPreferredSize(s);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPreferredSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getZoomOnTouchDown of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_getZoomOnTouchDown00
static int tolua_Modules_CCControlButton_getZoomOnTouchDown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getZoomOnTouchDown'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getZoomOnTouchDown();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getZoomOnTouchDown'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLabelAnchorPoint of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_getLabelAnchorPoint00
static int tolua_Modules_CCControlButton_getLabelAnchorPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLabelAnchorPoint'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->getLabelAnchorPoint();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLabelAnchorPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isPushed of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_isPushed00
static int tolua_Modules_CCControlButton_isPushed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isPushed'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isPushed();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isPushed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVerticalMargin of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_getVerticalMargin00
static int tolua_Modules_CCControlButton_getVerticalMargin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVerticalMargin'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getVerticalMargin();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVerticalMargin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getHorizontalOrigin of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_getHorizontalOrigin00
static int tolua_Modules_CCControlButton_getHorizontalOrigin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHorizontalOrigin'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getHorizontalOrigin();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHorizontalOrigin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMargins of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_setMargins00
static int tolua_Modules_CCControlButton_setMargins00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  int marginH = ((int)  tolua_tonumber(tolua_S,2,0));
  int marginV = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMargins'", NULL);
#endif
  {
   self->setMargins(marginH,marginV);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMargins'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_create00
static int tolua_Modules_CCControlButton_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::string title = ((std::string)  tolua_tocppstring(tolua_S,2,0));
  const char* fontName = ((const char*)  tolua_tostring(tolua_S,3,0));
  float fontSize = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   CCControlButton* tolua_ret = (CCControlButton*)  CCControlButton::create(title,fontName,fontSize);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCControlButton");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_create01
static int tolua_Modules_CCControlButton_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScale9Sprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCNode* label = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  CCScale9Sprite* backgroundSprite = ((CCScale9Sprite*)  tolua_tousertype(tolua_S,3,0));
  {
   CCControlButton* tolua_ret = (CCControlButton*)  CCControlButton::create(label,backgroundSprite);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCControlButton");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Modules_CCControlButton_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_create02
static int tolua_Modules_CCControlButton_create02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCScale9Sprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCScale9Sprite* sprite = ((CCScale9Sprite*)  tolua_tousertype(tolua_S,2,0));
  {
   CCControlButton* tolua_ret = (CCControlButton*)  CCControlButton::create(sprite);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCControlButton");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Modules_CCControlButton_create01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_create03
static int tolua_Modules_CCControlButton_create03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  {
   CCControlButton* tolua_ret = (CCControlButton*)  CCControlButton::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCControlButton");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Modules_CCControlButton_create02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTitleForState of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_getTitleForState00
static int tolua_Modules_CCControlButton_getTitleForState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  unsigned int state = (( unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTitleForState'", NULL);
#endif
  {
   CCString* tolua_ret = (CCString*)  self->getTitleForState(state);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCString");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTitleForState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTitleForState of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_setTitleForState00
static int tolua_Modules_CCControlButton_setTitleForState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCString",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  CCString* title = ((CCString*)  tolua_tousertype(tolua_S,2,0));
  unsigned int state = (( unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTitleForState'", NULL);
#endif
  {
   self->setTitleForState(title,state);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTitleForState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTitleColorForState of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_getTitleColorForState00
static int tolua_Modules_CCControlButton_getTitleColorForState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  unsigned int state = (( unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTitleColorForState'", NULL);
#endif
  {
   ccColor3B tolua_ret = (ccColor3B)  self->getTitleColorForState(state);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ccColor3B)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ccColor3B));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTitleColorForState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTitleColorForState of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_setTitleColorForState00
static int tolua_Modules_CCControlButton_setTitleColorForState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccColor3B",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  ccColor3B color = *((ccColor3B*)  tolua_tousertype(tolua_S,2,0));
  unsigned int state = (( unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTitleColorForState'", NULL);
#endif
  {
   self->setTitleColorForState(color,state);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTitleColorForState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTitleLabelForState of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_getTitleLabelForState00
static int tolua_Modules_CCControlButton_getTitleLabelForState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  unsigned int state = (( unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTitleLabelForState'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getTitleLabelForState(state);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTitleLabelForState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTitleLabelForState of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_setTitleLabelForState00
static int tolua_Modules_CCControlButton_setTitleLabelForState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  CCNode* label = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  unsigned int state = (( unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTitleLabelForState'", NULL);
#endif
  {
   self->setTitleLabelForState(label,state);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTitleLabelForState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTitleTTFForState of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_setTitleTTFForState00
static int tolua_Modules_CCControlButton_setTitleTTFForState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  const char* fntFile = ((const char*)  tolua_tostring(tolua_S,2,0));
  unsigned int state = (( unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTitleTTFForState'", NULL);
#endif
  {
   self->setTitleTTFForState(fntFile,state);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTitleTTFForState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTitleTTFForState of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_getTitleTTFForState00
static int tolua_Modules_CCControlButton_getTitleTTFForState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  unsigned int state = (( unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTitleTTFForState'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getTitleTTFForState(state);
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTitleTTFForState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTitleTTFSizeForState of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_setTitleTTFSizeForState00
static int tolua_Modules_CCControlButton_setTitleTTFSizeForState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  float size = ((float)  tolua_tonumber(tolua_S,2,0));
  unsigned int state = (( unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTitleTTFSizeForState'", NULL);
#endif
  {
   self->setTitleTTFSizeForState(size,state);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTitleTTFSizeForState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTitleTTFSizeForState of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_getTitleTTFSizeForState00
static int tolua_Modules_CCControlButton_getTitleTTFSizeForState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  unsigned int state = (( unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTitleTTFSizeForState'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getTitleTTFSizeForState(state);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTitleTTFSizeForState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTitleBMFontForState of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_setTitleBMFontForState00
static int tolua_Modules_CCControlButton_setTitleBMFontForState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  const char* fntFile = ((const char*)  tolua_tostring(tolua_S,2,0));
  unsigned int state = (( unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTitleBMFontForState'", NULL);
#endif
  {
   self->setTitleBMFontForState(fntFile,state);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTitleBMFontForState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTitleBMFontForState of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_getTitleBMFontForState00
static int tolua_Modules_CCControlButton_getTitleBMFontForState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  unsigned int state = (( unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTitleBMFontForState'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getTitleBMFontForState(state);
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTitleBMFontForState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBackgroundSpriteForState of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_getBackgroundSpriteForState00
static int tolua_Modules_CCControlButton_getBackgroundSpriteForState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  unsigned int state = (( unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBackgroundSpriteForState'", NULL);
#endif
  {
   CCScale9Sprite* tolua_ret = (CCScale9Sprite*)  self->getBackgroundSpriteForState(state);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCScale9Sprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBackgroundSpriteForState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundSpriteForState of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_setBackgroundSpriteForState00
static int tolua_Modules_CCControlButton_setBackgroundSpriteForState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCScale9Sprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  CCScale9Sprite* sprite = ((CCScale9Sprite*)  tolua_tousertype(tolua_S,2,0));
  unsigned int state = (( unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundSpriteForState'", NULL);
#endif
  {
   self->setBackgroundSpriteForState(sprite,state);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundSpriteForState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundSpriteFrameForState of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_Modules_CCControlButton_setBackgroundSpriteFrameForState00
static int tolua_Modules_CCControlButton_setBackgroundSpriteFrameForState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* spriteFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
  unsigned int state = (( unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundSpriteFrameForState'", NULL);
#endif
  {
   self->setBackgroundSpriteFrameForState(spriteFrame,state);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundSpriteFrameForState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCEditBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CCEditBox_create00
static int tolua_Modules_CCEditBox_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCEditBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCSize",0,&tolua_err)) ||
     !tolua_isusertype(tolua_S,3,"CCScale9Sprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"CCScale9Sprite",1,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"CCScale9Sprite",1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSize size = *((CCSize*)  tolua_tousertype(tolua_S,2,0));
  CCScale9Sprite* pNormal9SpriteBg = ((CCScale9Sprite*)  tolua_tousertype(tolua_S,3,0));
  CCScale9Sprite* pPressed9SpriteBg = ((CCScale9Sprite*)  tolua_tousertype(tolua_S,4,NULL));
  CCScale9Sprite* pDisabled9SpriteBg = ((CCScale9Sprite*)  tolua_tousertype(tolua_S,5,NULL));
  {
   CCEditBox* tolua_ret = (CCEditBox*)  CCEditBox::create(size,pNormal9SpriteBg,pPressed9SpriteBg,pDisabled9SpriteBg);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCEditBox");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: registerScriptEditBoxHandler of class  CCEditBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CCEditBox_registerScriptEditBoxHandler00
static int tolua_Modules_CCEditBox_registerScriptEditBoxHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCEditBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCEditBox* self = (CCEditBox*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION handler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'registerScriptEditBoxHandler'", NULL);
#endif
  {
   self->registerScriptEditBoxHandler(handler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'registerScriptEditBoxHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: registerScriptEditBoxHandler of class  CCEditBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CCEditBox_addEditBoxEventListener00
static int tolua_Modules_CCEditBox_addEditBoxEventListener00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCEditBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCEditBox* self = (CCEditBox*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION handler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'registerScriptEditBoxHandler'", NULL);
#endif
  {
   self->registerScriptEditBoxHandler(handler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addEditBoxEventListener'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: unregisterScriptEditBoxHandler of class  CCEditBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CCEditBox_unregisterScriptEditBoxHandler00
static int tolua_Modules_CCEditBox_unregisterScriptEditBoxHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCEditBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCEditBox* self = (CCEditBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unregisterScriptEditBoxHandler'", NULL);
#endif
  {
   self->unregisterScriptEditBoxHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unregisterScriptEditBoxHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: unregisterScriptEditBoxHandler of class  CCEditBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CCEditBox_removeEditBoxEventListener00
static int tolua_Modules_CCEditBox_removeEditBoxEventListener00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCEditBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCEditBox* self = (CCEditBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unregisterScriptEditBoxHandler'", NULL);
#endif
  {
   self->unregisterScriptEditBoxHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeEditBoxEventListener'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setText of class  CCEditBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CCEditBox_setText00
static int tolua_Modules_CCEditBox_setText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCEditBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCEditBox* self = (CCEditBox*)  tolua_tousertype(tolua_S,1,0);
  const char* pText = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setText'", NULL);
#endif
  {
   self->setText(pText);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getText of class  CCEditBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CCEditBox_getText00
static int tolua_Modules_CCEditBox_getText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCEditBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCEditBox* self = (CCEditBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getText'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getText();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFont of class  CCEditBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CCEditBox_setFont00
static int tolua_Modules_CCEditBox_setFont00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCEditBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCEditBox* self = (CCEditBox*)  tolua_tousertype(tolua_S,1,0);
  const char* pFontName = ((const char*)  tolua_tostring(tolua_S,2,0));
  int fontSize = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFont'", NULL);
#endif
  {
   self->setFont(pFontName,fontSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFont'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFontName of class  CCEditBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CCEditBox_setFontName00
static int tolua_Modules_CCEditBox_setFontName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCEditBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCEditBox* self = (CCEditBox*)  tolua_tousertype(tolua_S,1,0);
  const char* pFontName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFontName'", NULL);
#endif
  {
   self->setFontName(pFontName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFontName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFontSize of class  CCEditBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CCEditBox_setFontSize00
static int tolua_Modules_CCEditBox_setFontSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCEditBox",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCEditBox* self = (CCEditBox*)  tolua_tousertype(tolua_S,1,0);
  int fontSize = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFontSize'", NULL);
#endif
  {
   self->setFontSize(fontSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFontSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFontColor of class  CCEditBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CCEditBox_setFontColor00
static int tolua_Modules_CCEditBox_setFontColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCEditBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCEditBox* self = (CCEditBox*)  tolua_tousertype(tolua_S,1,0);
  ccColor3B color = *((ccColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFontColor'", NULL);
#endif
  {
   self->setFontColor(color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFontColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPlaceholderFont of class  CCEditBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CCEditBox_setPlaceholderFont00
static int tolua_Modules_CCEditBox_setPlaceholderFont00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCEditBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCEditBox* self = (CCEditBox*)  tolua_tousertype(tolua_S,1,0);
  const char* pFontName = ((const char*)  tolua_tostring(tolua_S,2,0));
  int fontSize = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPlaceholderFont'", NULL);
#endif
  {
   self->setPlaceholderFont(pFontName,fontSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPlaceholderFont'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPlaceholderFontName of class  CCEditBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CCEditBox_setPlaceholderFontName00
static int tolua_Modules_CCEditBox_setPlaceholderFontName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCEditBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCEditBox* self = (CCEditBox*)  tolua_tousertype(tolua_S,1,0);
  const char* pFontName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPlaceholderFontName'", NULL);
#endif
  {
   self->setPlaceholderFontName(pFontName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPlaceholderFontName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPlaceholderFontSize of class  CCEditBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CCEditBox_setPlaceholderFontSize00
static int tolua_Modules_CCEditBox_setPlaceholderFontSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCEditBox",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCEditBox* self = (CCEditBox*)  tolua_tousertype(tolua_S,1,0);
  int fontSize = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPlaceholderFontSize'", NULL);
#endif
  {
   self->setPlaceholderFontSize(fontSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPlaceholderFontSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPlaceholderFontColor of class  CCEditBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CCEditBox_setPlaceholderFontColor00
static int tolua_Modules_CCEditBox_setPlaceholderFontColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCEditBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCEditBox* self = (CCEditBox*)  tolua_tousertype(tolua_S,1,0);
  ccColor3B color = *((ccColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPlaceholderFontColor'", NULL);
#endif
  {
   self->setPlaceholderFontColor(color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPlaceholderFontColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPlaceHolder of class  CCEditBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CCEditBox_setPlaceHolder00
static int tolua_Modules_CCEditBox_setPlaceHolder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCEditBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCEditBox* self = (CCEditBox*)  tolua_tousertype(tolua_S,1,0);
  const char* pText = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPlaceHolder'", NULL);
#endif
  {
   self->setPlaceHolder(pText);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPlaceHolder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPlaceHolder of class  CCEditBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CCEditBox_getPlaceHolder00
static int tolua_Modules_CCEditBox_getPlaceHolder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCEditBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCEditBox* self = (CCEditBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPlaceHolder'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getPlaceHolder();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPlaceHolder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setInputMode of class  CCEditBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CCEditBox_setInputMode00
static int tolua_Modules_CCEditBox_setInputMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCEditBox",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCEditBox* self = (CCEditBox*)  tolua_tousertype(tolua_S,1,0);
  EditBoxInputMode inputMode = ((EditBoxInputMode) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInputMode'", NULL);
#endif
  {
   self->setInputMode(inputMode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInputMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaxLength of class  CCEditBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CCEditBox_setMaxLength00
static int tolua_Modules_CCEditBox_setMaxLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCEditBox",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCEditBox* self = (CCEditBox*)  tolua_tousertype(tolua_S,1,0);
  int maxLength = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxLength'", NULL);
#endif
  {
   self->setMaxLength(maxLength);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxLength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaxLength of class  CCEditBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CCEditBox_getMaxLength00
static int tolua_Modules_CCEditBox_getMaxLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCEditBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCEditBox* self = (CCEditBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxLength'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMaxLength();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxLength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setInputFlag of class  CCEditBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CCEditBox_setInputFlag00
static int tolua_Modules_CCEditBox_setInputFlag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCEditBox",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCEditBox* self = (CCEditBox*)  tolua_tousertype(tolua_S,1,0);
  EditBoxInputFlag inputFlag = ((EditBoxInputFlag) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInputFlag'", NULL);
#endif
  {
   self->setInputFlag(inputFlag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInputFlag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setReturnType of class  CCEditBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CCEditBox_setReturnType00
static int tolua_Modules_CCEditBox_setReturnType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCEditBox",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCEditBox* self = (CCEditBox*)  tolua_tousertype(tolua_S,1,0);
  KeyboardReturnType returnType = ((KeyboardReturnType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setReturnType'", NULL);
#endif
  {
   self->setReturnType(returnType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setReturnType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getReturnType of class  CCEditBox */
#ifndef TOLUA_DISABLE_tolua_Modules_CCEditBox_getReturnType00
static int tolua_Modules_CCEditBox_getReturnType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCEditBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCEditBox* self = (CCEditBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getReturnType'", NULL);
#endif
  {
   KeyboardReturnType tolua_ret = (KeyboardReturnType)  self->getReturnType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getReturnType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sharedEngine of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Modules_SimpleAudioEngine_sharedEngine00
static int tolua_Modules_SimpleAudioEngine_sharedEngine00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   SimpleAudioEngine* tolua_ret = (SimpleAudioEngine*)  SimpleAudioEngine::sharedEngine();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SimpleAudioEngine");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sharedEngine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: preloadBackgroundMusic of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Modules_SimpleAudioEngine_preloadBackgroundMusic00
static int tolua_Modules_SimpleAudioEngine_preloadBackgroundMusic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
  const char* pszFilePath = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'preloadBackgroundMusic'", NULL);
#endif
  {
   self->preloadBackgroundMusic(pszFilePath);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'preloadBackgroundMusic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: playBackgroundMusic of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Modules_SimpleAudioEngine_playBackgroundMusic00
static int tolua_Modules_SimpleAudioEngine_playBackgroundMusic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
  const char* pszFilePath = ((const char*)  tolua_tostring(tolua_S,2,0));
  bool bLoop = ((bool)  tolua_toboolean(tolua_S,3,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'playBackgroundMusic'", NULL);
#endif
  {
   self->playBackgroundMusic(pszFilePath,bLoop);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'playBackgroundMusic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stopBackgroundMusic of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Modules_SimpleAudioEngine_stopBackgroundMusic00
static int tolua_Modules_SimpleAudioEngine_stopBackgroundMusic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
  bool bReleaseData = ((bool)  tolua_toboolean(tolua_S,2,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stopBackgroundMusic'", NULL);
#endif
  {
   self->stopBackgroundMusic(bReleaseData);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stopBackgroundMusic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pauseBackgroundMusic of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Modules_SimpleAudioEngine_pauseBackgroundMusic00
static int tolua_Modules_SimpleAudioEngine_pauseBackgroundMusic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pauseBackgroundMusic'", NULL);
#endif
  {
   self->pauseBackgroundMusic();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pauseBackgroundMusic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resumeBackgroundMusic of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Modules_SimpleAudioEngine_resumeBackgroundMusic00
static int tolua_Modules_SimpleAudioEngine_resumeBackgroundMusic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resumeBackgroundMusic'", NULL);
#endif
  {
   self->resumeBackgroundMusic();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resumeBackgroundMusic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: rewindBackgroundMusic of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Modules_SimpleAudioEngine_rewindBackgroundMusic00
static int tolua_Modules_SimpleAudioEngine_rewindBackgroundMusic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'rewindBackgroundMusic'", NULL);
#endif
  {
   self->rewindBackgroundMusic();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rewindBackgroundMusic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: willPlayBackgroundMusic of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Modules_SimpleAudioEngine_willPlayBackgroundMusic00
static int tolua_Modules_SimpleAudioEngine_willPlayBackgroundMusic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'willPlayBackgroundMusic'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->willPlayBackgroundMusic();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'willPlayBackgroundMusic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isBackgroundMusicPlaying of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Modules_SimpleAudioEngine_isBackgroundMusicPlaying00
static int tolua_Modules_SimpleAudioEngine_isBackgroundMusicPlaying00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isBackgroundMusicPlaying'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isBackgroundMusicPlaying();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isBackgroundMusicPlaying'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBackgroundMusicVolume of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Modules_SimpleAudioEngine_getBackgroundMusicVolume00
static int tolua_Modules_SimpleAudioEngine_getBackgroundMusicVolume00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBackgroundMusicVolume'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getBackgroundMusicVolume();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBackgroundMusicVolume'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundMusicVolume of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Modules_SimpleAudioEngine_setBackgroundMusicVolume00
static int tolua_Modules_SimpleAudioEngine_setBackgroundMusicVolume00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
  float volume = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundMusicVolume'", NULL);
#endif
  {
   self->setBackgroundMusicVolume(volume);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundMusicVolume'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getEffectsVolume of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Modules_SimpleAudioEngine_getEffectsVolume00
static int tolua_Modules_SimpleAudioEngine_getEffectsVolume00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getEffectsVolume'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getEffectsVolume();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getEffectsVolume'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEffectsVolume of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Modules_SimpleAudioEngine_setEffectsVolume00
static int tolua_Modules_SimpleAudioEngine_setEffectsVolume00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
  float volume = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEffectsVolume'", NULL);
#endif
  {
   self->setEffectsVolume(volume);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEffectsVolume'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: playEffect of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Modules_SimpleAudioEngine_playEffect00
static int tolua_Modules_SimpleAudioEngine_playEffect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
  const char* pszFilePath = ((const char*)  tolua_tostring(tolua_S,2,0));
  bool bLoop = ((bool)  tolua_toboolean(tolua_S,3,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'playEffect'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->playEffect(pszFilePath,bLoop);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'playEffect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stopEffect of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Modules_SimpleAudioEngine_stopEffect00
static int tolua_Modules_SimpleAudioEngine_stopEffect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
  unsigned int nSoundId = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stopEffect'", NULL);
#endif
  {
   self->stopEffect(nSoundId);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stopEffect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: preloadEffect of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Modules_SimpleAudioEngine_preloadEffect00
static int tolua_Modules_SimpleAudioEngine_preloadEffect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
  const char* pszFilePath = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'preloadEffect'", NULL);
#endif
  {
   self->preloadEffect(pszFilePath);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'preloadEffect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: unloadEffect of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Modules_SimpleAudioEngine_unloadEffect00
static int tolua_Modules_SimpleAudioEngine_unloadEffect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
  const char* pszFilePath = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unloadEffect'", NULL);
#endif
  {
   self->unloadEffect(pszFilePath);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unloadEffect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pauseEffect of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Modules_SimpleAudioEngine_pauseEffect00
static int tolua_Modules_SimpleAudioEngine_pauseEffect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
  unsigned int nSoundId = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pauseEffect'", NULL);
#endif
  {
   self->pauseEffect(nSoundId);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pauseEffect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resumeEffect of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Modules_SimpleAudioEngine_resumeEffect00
static int tolua_Modules_SimpleAudioEngine_resumeEffect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
  unsigned int nSoundId = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resumeEffect'", NULL);
#endif
  {
   self->resumeEffect(nSoundId);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resumeEffect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pauseAllEffects of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Modules_SimpleAudioEngine_pauseAllEffects00
static int tolua_Modules_SimpleAudioEngine_pauseAllEffects00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pauseAllEffects'", NULL);
#endif
  {
   self->pauseAllEffects();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pauseAllEffects'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resumeAllEffects of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Modules_SimpleAudioEngine_resumeAllEffects00
static int tolua_Modules_SimpleAudioEngine_resumeAllEffects00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resumeAllEffects'", NULL);
#endif
  {
   self->resumeAllEffects();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resumeAllEffects'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stopAllEffects of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Modules_SimpleAudioEngine_stopAllEffects00
static int tolua_Modules_SimpleAudioEngine_stopAllEffects00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stopAllEffects'", NULL);
#endif
  {
   self->stopAllEffects();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stopAllEffects'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_Modules_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Button","Button","Widget",tolua_collect_Button);
  #else
  tolua_cclass(tolua_S,"Button","Button","Widget",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Button");
   tolua_function(tolua_S,"new",tolua_Modules_Button_new00);
   tolua_function(tolua_S,"new_local",tolua_Modules_Button_new00_local);
   tolua_function(tolua_S,".call",tolua_Modules_Button_new00_local);
   tolua_function(tolua_S,"delete",tolua_Modules_Button_delete00);
   tolua_function(tolua_S,"create",tolua_Modules_Button_create00);
   tolua_function(tolua_S,"loadTextures",tolua_Modules_Button_loadTextures00);
   tolua_function(tolua_S,"loadTextureNormal",tolua_Modules_Button_loadTextureNormal00);
   tolua_function(tolua_S,"loadTexturePressed",tolua_Modules_Button_loadTexturePressed00);
   tolua_function(tolua_S,"loadTextureDisabled",tolua_Modules_Button_loadTextureDisabled00);
   tolua_function(tolua_S,"setCapInsets",tolua_Modules_Button_setCapInsets00);
   tolua_function(tolua_S,"setCapInsetsNormalRenderer",tolua_Modules_Button_setCapInsetsNormalRenderer00);
   tolua_function(tolua_S,"getCapInsetNormalRenderer",tolua_Modules_Button_getCapInsetNormalRenderer00);
   tolua_function(tolua_S,"setCapInsetsPressedRenderer",tolua_Modules_Button_setCapInsetsPressedRenderer00);
   tolua_function(tolua_S,"getCapInsetPressedRenderer",tolua_Modules_Button_getCapInsetPressedRenderer00);
   tolua_function(tolua_S,"setCapInsetsDisabledRenderer",tolua_Modules_Button_setCapInsetsDisabledRenderer00);
   tolua_function(tolua_S,"getCapInsetDisabledRenderer",tolua_Modules_Button_getCapInsetDisabledRenderer00);
   tolua_function(tolua_S,"setAnchorPoint",tolua_Modules_Button_setAnchorPoint00);
   tolua_function(tolua_S,"setScale9Enabled",tolua_Modules_Button_setScale9Enabled00);
   tolua_function(tolua_S,"isScale9Enabled",tolua_Modules_Button_isScale9Enabled00);
   tolua_function(tolua_S,"setPressedActionEnabled",tolua_Modules_Button_setPressedActionEnabled00);
   tolua_function(tolua_S,"ignoreContentAdaptWithSize",tolua_Modules_Button_ignoreContentAdaptWithSize00);
   tolua_function(tolua_S,"getContentSize",tolua_Modules_Button_getContentSize00);
   tolua_function(tolua_S,"getVirtualRenderer",tolua_Modules_Button_getVirtualRenderer00);
   tolua_function(tolua_S,"getDescription",tolua_Modules_Button_getDescription00);
   tolua_function(tolua_S,"setTitleText",tolua_Modules_Button_setTitleText00);
   tolua_function(tolua_S,"getTitleText",tolua_Modules_Button_getTitleText00);
   tolua_function(tolua_S,"setTitleColor",tolua_Modules_Button_setTitleColor00);
   tolua_function(tolua_S,"getTitleColor",tolua_Modules_Button_getTitleColor00);
   tolua_function(tolua_S,"setTitleFontSize",tolua_Modules_Button_setTitleFontSize00);
   tolua_function(tolua_S,"getTitleFontSize",tolua_Modules_Button_getTitleFontSize00);
   tolua_function(tolua_S,"setTitleFontName",tolua_Modules_Button_setTitleFontName00);
   tolua_function(tolua_S,"getTitleFontName",tolua_Modules_Button_getTitleFontName00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"CHECKBOX_STATE_EVENT_SELECTED",CHECKBOX_STATE_EVENT_SELECTED);
  tolua_constant(tolua_S,"CHECKBOX_STATE_EVENT_UNSELECTED",CHECKBOX_STATE_EVENT_UNSELECTED);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CheckBox","CheckBox","Widget",tolua_collect_CheckBox);
  #else
  tolua_cclass(tolua_S,"CheckBox","CheckBox","Widget",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CheckBox");
   tolua_function(tolua_S,"new",tolua_Modules_CheckBox_new00);
   tolua_function(tolua_S,"new_local",tolua_Modules_CheckBox_new00_local);
   tolua_function(tolua_S,".call",tolua_Modules_CheckBox_new00_local);
   tolua_function(tolua_S,"delete",tolua_Modules_CheckBox_delete00);
   tolua_function(tolua_S,"create",tolua_Modules_CheckBox_create00);
   tolua_function(tolua_S,"loadTextures",tolua_Modules_CheckBox_loadTextures00);
   tolua_function(tolua_S,"loadTextureBackGround",tolua_Modules_CheckBox_loadTextureBackGround00);
   tolua_function(tolua_S,"loadTextureBackGroundSelected",tolua_Modules_CheckBox_loadTextureBackGroundSelected00);
   tolua_function(tolua_S,"loadTextureFrontCross",tolua_Modules_CheckBox_loadTextureFrontCross00);
   tolua_function(tolua_S,"loadTextureBackGroundDisabled",tolua_Modules_CheckBox_loadTextureBackGroundDisabled00);
   tolua_function(tolua_S,"loadTextureFrontCrossDisabled",tolua_Modules_CheckBox_loadTextureFrontCrossDisabled00);
   tolua_function(tolua_S,"setSelectedState",tolua_Modules_CheckBox_setSelectedState00);
   tolua_function(tolua_S,"getSelectedState",tolua_Modules_CheckBox_getSelectedState00);
   tolua_function(tolua_S,"setAnchorPoint",tolua_Modules_CheckBox_setAnchorPoint00);
   tolua_function(tolua_S,"onTouchEnded",tolua_Modules_CheckBox_onTouchEnded00);
   tolua_function(tolua_S,"getContentSize",tolua_Modules_CheckBox_getContentSize00);
   tolua_function(tolua_S,"getVirtualRenderer",tolua_Modules_CheckBox_getVirtualRenderer00);
   tolua_function(tolua_S,"getDescription",tolua_Modules_CheckBox_getDescription00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"UIHelper","UIHelper","",NULL);
  tolua_beginmodule(tolua_S,"UIHelper");
   tolua_function(tolua_S,"seekWidgetByTag",tolua_Modules_UIHelper_seekWidgetByTag00);
   tolua_function(tolua_S,"seekWidgetByName",tolua_Modules_UIHelper_seekWidgetByName00);
   tolua_function(tolua_S,"seekWidgetByRelativeName",tolua_Modules_UIHelper_seekWidgetByRelativeName00);
   tolua_function(tolua_S,"seekActionWidgetByActionTag",tolua_Modules_UIHelper_seekActionWidgetByActionTag00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"ImageView","ImageView","Widget",tolua_collect_ImageView);
  #else
  tolua_cclass(tolua_S,"ImageView","ImageView","Widget",NULL);
  #endif
  tolua_beginmodule(tolua_S,"ImageView");
   tolua_function(tolua_S,"new",tolua_Modules_ImageView_new00);
   tolua_function(tolua_S,"new_local",tolua_Modules_ImageView_new00_local);
   tolua_function(tolua_S,".call",tolua_Modules_ImageView_new00_local);
   tolua_function(tolua_S,"delete",tolua_Modules_ImageView_delete00);
   tolua_function(tolua_S,"create",tolua_Modules_ImageView_create00);
   tolua_function(tolua_S,"loadTexture",tolua_Modules_ImageView_loadTexture00);
   tolua_function(tolua_S,"setTextureRect",tolua_Modules_ImageView_setTextureRect00);
   tolua_function(tolua_S,"setScale9Enabled",tolua_Modules_ImageView_setScale9Enabled00);
   tolua_function(tolua_S,"setCapInsets",tolua_Modules_ImageView_setCapInsets00);
   tolua_function(tolua_S,"setFlipX",tolua_Modules_ImageView_setFlipX00);
   tolua_function(tolua_S,"setFlipY",tolua_Modules_ImageView_setFlipY00);
   tolua_function(tolua_S,"isFlipX",tolua_Modules_ImageView_isFlipX00);
   tolua_function(tolua_S,"isFlipY",tolua_Modules_ImageView_isFlipY00);
   tolua_function(tolua_S,"setAnchorPoint",tolua_Modules_ImageView_setAnchorPoint00);
   tolua_function(tolua_S,"ignoreContentAdaptWithSize",tolua_Modules_ImageView_ignoreContentAdaptWithSize00);
   tolua_function(tolua_S,"getDescription",tolua_Modules_ImageView_getDescription00);
   tolua_function(tolua_S,"getContentSize",tolua_Modules_ImageView_getContentSize00);
   tolua_function(tolua_S,"getVirtualRenderer",tolua_Modules_ImageView_getVirtualRenderer00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Label","Label","Widget",tolua_collect_Label);
  #else
  tolua_cclass(tolua_S,"Label","Label","Widget",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Label");
   tolua_function(tolua_S,"new",tolua_Modules_Label_new00);
   tolua_function(tolua_S,"new_local",tolua_Modules_Label_new00_local);
   tolua_function(tolua_S,".call",tolua_Modules_Label_new00_local);
   tolua_function(tolua_S,"delete",tolua_Modules_Label_delete00);
   tolua_function(tolua_S,"create",tolua_Modules_Label_create00);
   tolua_function(tolua_S,"setText",tolua_Modules_Label_setText00);
   tolua_function(tolua_S,"getStringValue",tolua_Modules_Label_getStringValue00);
   tolua_function(tolua_S,"getStringLength",tolua_Modules_Label_getStringLength00);
   tolua_function(tolua_S,"setFontSize",tolua_Modules_Label_setFontSize00);
   tolua_function(tolua_S,"getFontSize",tolua_Modules_Label_getFontSize00);
   tolua_function(tolua_S,"setFontName",tolua_Modules_Label_setFontName00);
   tolua_function(tolua_S,"getFontName",tolua_Modules_Label_getFontName00);
   tolua_function(tolua_S,"setTouchScaleChangeEnabled",tolua_Modules_Label_setTouchScaleChangeEnabled00);
   tolua_function(tolua_S,"isTouchScaleChangeEnabled",tolua_Modules_Label_isTouchScaleChangeEnabled00);
   tolua_function(tolua_S,"setAnchorPoint",tolua_Modules_Label_setAnchorPoint00);
   tolua_function(tolua_S,"getContentSize",tolua_Modules_Label_getContentSize00);
   tolua_function(tolua_S,"getVirtualRenderer",tolua_Modules_Label_getVirtualRenderer00);
   tolua_function(tolua_S,"getDescription",tolua_Modules_Label_getDescription00);
   tolua_function(tolua_S,"setTextAreaSize",tolua_Modules_Label_setTextAreaSize00);
   tolua_function(tolua_S,"getTextAreaSize",tolua_Modules_Label_getTextAreaSize00);
   tolua_function(tolua_S,"setTextHorizontalAlignment",tolua_Modules_Label_setTextHorizontalAlignment00);
   tolua_function(tolua_S,"getTextHorizontalAlignment",tolua_Modules_Label_getTextHorizontalAlignment00);
   tolua_function(tolua_S,"setTextVerticalAlignment",tolua_Modules_Label_setTextVerticalAlignment00);
   tolua_function(tolua_S,"getTextVerticalAlignment",tolua_Modules_Label_getTextVerticalAlignment00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"LabelAtlas","LabelAtlas","Widget",tolua_collect_LabelAtlas);
  #else
  tolua_cclass(tolua_S,"LabelAtlas","LabelAtlas","Widget",NULL);
  #endif
  tolua_beginmodule(tolua_S,"LabelAtlas");
   tolua_function(tolua_S,"new",tolua_Modules_LabelAtlas_new00);
   tolua_function(tolua_S,"new_local",tolua_Modules_LabelAtlas_new00_local);
   tolua_function(tolua_S,".call",tolua_Modules_LabelAtlas_new00_local);
   tolua_function(tolua_S,"delete",tolua_Modules_LabelAtlas_delete00);
   tolua_function(tolua_S,"create",tolua_Modules_LabelAtlas_create00);
   tolua_function(tolua_S,"setProperty",tolua_Modules_LabelAtlas_setProperty00);
   tolua_function(tolua_S,"setStringValue",tolua_Modules_LabelAtlas_setStringValue00);
   tolua_function(tolua_S,"getStringValue",tolua_Modules_LabelAtlas_getStringValue00);
   tolua_function(tolua_S,"setAnchorPoint",tolua_Modules_LabelAtlas_setAnchorPoint00);
   tolua_function(tolua_S,"getContentSize",tolua_Modules_LabelAtlas_getContentSize00);
   tolua_function(tolua_S,"getVirtualRenderer",tolua_Modules_LabelAtlas_getVirtualRenderer00);
   tolua_function(tolua_S,"getDescription",tolua_Modules_LabelAtlas_getDescription00);
   tolua_function(tolua_S,"setTexture",tolua_Modules_LabelAtlas_setTexture00);
   tolua_function(tolua_S,"getTexture",tolua_Modules_LabelAtlas_getTexture00);
   tolua_function(tolua_S,"setStartChar",tolua_Modules_LabelAtlas_setStartChar00);
   tolua_function(tolua_S,"getStartChar",tolua_Modules_LabelAtlas_getStartChar00);
   tolua_function(tolua_S,"setCharSize",tolua_Modules_LabelAtlas_setCharSize00);
   tolua_function(tolua_S,"getCharSize",tolua_Modules_LabelAtlas_getCharSize00);
   tolua_function(tolua_S,"setText",tolua_Modules_LabelAtlas_setText00);
   tolua_function(tolua_S,"getText",tolua_Modules_LabelAtlas_getText00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"LabelBMFont","LabelBMFont","Widget",tolua_collect_LabelBMFont);
  #else
  tolua_cclass(tolua_S,"LabelBMFont","LabelBMFont","Widget",NULL);
  #endif
  tolua_beginmodule(tolua_S,"LabelBMFont");
   tolua_function(tolua_S,"new",tolua_Modules_LabelBMFont_new00);
   tolua_function(tolua_S,"new_local",tolua_Modules_LabelBMFont_new00_local);
   tolua_function(tolua_S,".call",tolua_Modules_LabelBMFont_new00_local);
   tolua_function(tolua_S,"delete",tolua_Modules_LabelBMFont_delete00);
   tolua_function(tolua_S,"create",tolua_Modules_LabelBMFont_create00);
   tolua_function(tolua_S,"setFntFile",tolua_Modules_LabelBMFont_setFntFile00);
   tolua_function(tolua_S,"setText",tolua_Modules_LabelBMFont_setText00);
   tolua_function(tolua_S,"getStringValue",tolua_Modules_LabelBMFont_getStringValue00);
   tolua_function(tolua_S,"setAnchorPoint",tolua_Modules_LabelBMFont_setAnchorPoint00);
   tolua_function(tolua_S,"getContentSize",tolua_Modules_LabelBMFont_getContentSize00);
   tolua_function(tolua_S,"getVirtualRenderer",tolua_Modules_LabelBMFont_getVirtualRenderer00);
   tolua_function(tolua_S,"getDescription",tolua_Modules_LabelBMFont_getDescription00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"LAYOUT_COLOR_NONE",LAYOUT_COLOR_NONE);
  tolua_constant(tolua_S,"LAYOUT_COLOR_SOLID",LAYOUT_COLOR_SOLID);
  tolua_constant(tolua_S,"LAYOUT_COLOR_GRADIENT",LAYOUT_COLOR_GRADIENT);
  tolua_constant(tolua_S,"LAYOUT_ABSOLUTE",LAYOUT_ABSOLUTE);
  tolua_constant(tolua_S,"LAYOUT_LINEAR_VERTICAL",LAYOUT_LINEAR_VERTICAL);
  tolua_constant(tolua_S,"LAYOUT_LINEAR_HORIZONTAL",LAYOUT_LINEAR_HORIZONTAL);
  tolua_constant(tolua_S,"LAYOUT_RELATIVE",LAYOUT_RELATIVE);
  tolua_constant(tolua_S,"LAYOUT_CLIPPING_STENCIL",LAYOUT_CLIPPING_STENCIL);
  tolua_constant(tolua_S,"LAYOUT_CLIPPING_SCISSOR",LAYOUT_CLIPPING_SCISSOR);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Layout","Layout","Widget",tolua_collect_Layout);
  #else
  tolua_cclass(tolua_S,"Layout","Layout","Widget",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Layout");
   tolua_function(tolua_S,"new",tolua_Modules_Layout_new00);
   tolua_function(tolua_S,"new_local",tolua_Modules_Layout_new00_local);
   tolua_function(tolua_S,".call",tolua_Modules_Layout_new00_local);
   tolua_function(tolua_S,"delete",tolua_Modules_Layout_delete00);
   tolua_function(tolua_S,"create",tolua_Modules_Layout_create00);
   tolua_function(tolua_S,"setBackGroundImage",tolua_Modules_Layout_setBackGroundImage00);
   tolua_function(tolua_S,"setBackGroundImageCapInsets",tolua_Modules_Layout_setBackGroundImageCapInsets00);
   tolua_function(tolua_S,"getBackGroundImageCapInsets",tolua_Modules_Layout_getBackGroundImageCapInsets00);
   tolua_function(tolua_S,"setBackGroundColorType",tolua_Modules_Layout_setBackGroundColorType00);
   tolua_function(tolua_S,"getBackGroundColorType",tolua_Modules_Layout_getBackGroundColorType00);
   tolua_function(tolua_S,"setBackGroundImageScale9Enabled",tolua_Modules_Layout_setBackGroundImageScale9Enabled00);
   tolua_function(tolua_S,"isBackGroundImageScale9Enabled",tolua_Modules_Layout_isBackGroundImageScale9Enabled00);
   tolua_function(tolua_S,"setBackGroundColor",tolua_Modules_Layout_setBackGroundColor00);
   tolua_function(tolua_S,"getBackGroundColor",tolua_Modules_Layout_getBackGroundColor00);
   tolua_function(tolua_S,"setBackGroundColor",tolua_Modules_Layout_setBackGroundColor01);
   tolua_function(tolua_S,"getBackGroundStartColor",tolua_Modules_Layout_getBackGroundStartColor00);
   tolua_function(tolua_S,"getBackGroundEndColor",tolua_Modules_Layout_getBackGroundEndColor00);
   tolua_function(tolua_S,"setBackGroundColorOpacity",tolua_Modules_Layout_setBackGroundColorOpacity00);
   tolua_function(tolua_S,"getBackGroundColorOpacity",tolua_Modules_Layout_getBackGroundColorOpacity00);
   tolua_function(tolua_S,"setBackGroundColorVector",tolua_Modules_Layout_setBackGroundColorVector00);
   tolua_function(tolua_S,"getBackGroundColorVector",tolua_Modules_Layout_getBackGroundColorVector00);
   tolua_function(tolua_S,"setBackGroundImageColor",tolua_Modules_Layout_setBackGroundImageColor00);
   tolua_function(tolua_S,"setBackGroundImageOpacity",tolua_Modules_Layout_setBackGroundImageOpacity00);
   tolua_function(tolua_S,"getBackGroundImageColor",tolua_Modules_Layout_getBackGroundImageColor00);
   tolua_function(tolua_S,"getBackGroundImageOpacity",tolua_Modules_Layout_getBackGroundImageOpacity00);
   tolua_function(tolua_S,"removeBackGroundImage",tolua_Modules_Layout_removeBackGroundImage00);
   tolua_function(tolua_S,"getBackGroundImageTextureSize",tolua_Modules_Layout_getBackGroundImageTextureSize00);
   tolua_function(tolua_S,"setClippingEnabled",tolua_Modules_Layout_setClippingEnabled00);
   tolua_function(tolua_S,"setClippingType",tolua_Modules_Layout_setClippingType00);
   tolua_function(tolua_S,"getClippingType",tolua_Modules_Layout_getClippingType00);
   tolua_function(tolua_S,"isClippingEnabled",tolua_Modules_Layout_isClippingEnabled00);
   tolua_function(tolua_S,"getDescription",tolua_Modules_Layout_getDescription00);
   tolua_function(tolua_S,"setLayoutType",tolua_Modules_Layout_setLayoutType00);
   tolua_function(tolua_S,"getLayoutType",tolua_Modules_Layout_getLayoutType00);
   tolua_function(tolua_S,"addChild",tolua_Modules_Layout_addChild00);
   tolua_function(tolua_S,"addChild",tolua_Modules_Layout_addChild01);
   tolua_function(tolua_S,"addChild",tolua_Modules_Layout_addChild02);
   tolua_function(tolua_S,"removeChild",tolua_Modules_Layout_removeChild00);
   tolua_function(tolua_S,"removeChild",tolua_Modules_Layout_removeChild01);
   tolua_function(tolua_S,"removeAllChildren",tolua_Modules_Layout_removeAllChildren00);
   tolua_function(tolua_S,"removeAllChildrenWithCleanup",tolua_Modules_Layout_removeAllChildrenWithCleanup00);
   tolua_function(tolua_S,"visit",tolua_Modules_Layout_visit00);
   tolua_function(tolua_S,"sortAllChildren",tolua_Modules_Layout_sortAllChildren00);
   tolua_function(tolua_S,"requestDoLayout",tolua_Modules_Layout_requestDoLayout00);
   tolua_function(tolua_S,"onEnter",tolua_Modules_Layout_onEnter00);
   tolua_function(tolua_S,"onExit",tolua_Modules_Layout_onExit00);
   tolua_function(tolua_S,"hitTest",tolua_Modules_Layout_hitTest00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"LINEAR_GRAVITY_NONE",LINEAR_GRAVITY_NONE);
  tolua_constant(tolua_S,"LINEAR_GRAVITY_LEFT",LINEAR_GRAVITY_LEFT);
  tolua_constant(tolua_S,"LINEAR_GRAVITY_TOP",LINEAR_GRAVITY_TOP);
  tolua_constant(tolua_S,"LINEAR_GRAVITY_RIGHT",LINEAR_GRAVITY_RIGHT);
  tolua_constant(tolua_S,"LINEAR_GRAVITY_BOTTOM",LINEAR_GRAVITY_BOTTOM);
  tolua_constant(tolua_S,"LINEAR_GRAVITY_CENTER_VERTICAL",LINEAR_GRAVITY_CENTER_VERTICAL);
  tolua_constant(tolua_S,"LINEAR_GRAVITY_CENTER_HORIZONTAL",LINEAR_GRAVITY_CENTER_HORIZONTAL);
  tolua_constant(tolua_S,"RELATIVE_ALIGN_NONE",RELATIVE_ALIGN_NONE);
  tolua_constant(tolua_S,"RELATIVE_ALIGN_PARENT_TOP_LEFT",RELATIVE_ALIGN_PARENT_TOP_LEFT);
  tolua_constant(tolua_S,"RELATIVE_ALIGN_PARENT_TOP_CENTER_HORIZONTAL",RELATIVE_ALIGN_PARENT_TOP_CENTER_HORIZONTAL);
  tolua_constant(tolua_S,"RELATIVE_ALIGN_PARENT_TOP_RIGHT",RELATIVE_ALIGN_PARENT_TOP_RIGHT);
  tolua_constant(tolua_S,"RELATIVE_ALIGN_PARENT_LEFT_CENTER_VERTICAL",RELATIVE_ALIGN_PARENT_LEFT_CENTER_VERTICAL);
  tolua_constant(tolua_S,"RELATIVE_CENTER_IN_PARENT",RELATIVE_CENTER_IN_PARENT);
  tolua_constant(tolua_S,"RELATIVE_ALIGN_PARENT_RIGHT_CENTER_VERTICAL",RELATIVE_ALIGN_PARENT_RIGHT_CENTER_VERTICAL);
  tolua_constant(tolua_S,"RELATIVE_ALIGN_PARENT_LEFT_BOTTOM",RELATIVE_ALIGN_PARENT_LEFT_BOTTOM);
  tolua_constant(tolua_S,"RELATIVE_ALIGN_PARENT_BOTTOM_CENTER_HORIZONTAL",RELATIVE_ALIGN_PARENT_BOTTOM_CENTER_HORIZONTAL);
  tolua_constant(tolua_S,"RELATIVE_ALIGN_PARENT_RIGHT_BOTTOM",RELATIVE_ALIGN_PARENT_RIGHT_BOTTOM);
  tolua_constant(tolua_S,"RELATIVE_LOCATION_ABOVE_LEFTALIGN",RELATIVE_LOCATION_ABOVE_LEFTALIGN);
  tolua_constant(tolua_S,"RELATIVE_LOCATION_ABOVE_CENTER",RELATIVE_LOCATION_ABOVE_CENTER);
  tolua_constant(tolua_S,"RELATIVE_LOCATION_ABOVE_RIGHTALIGN",RELATIVE_LOCATION_ABOVE_RIGHTALIGN);
  tolua_constant(tolua_S,"RELATIVE_LOCATION_LEFT_OF_TOPALIGN",RELATIVE_LOCATION_LEFT_OF_TOPALIGN);
  tolua_constant(tolua_S,"RELATIVE_LOCATION_LEFT_OF_CENTER",RELATIVE_LOCATION_LEFT_OF_CENTER);
  tolua_constant(tolua_S,"RELATIVE_LOCATION_LEFT_OF_BOTTOMALIGN",RELATIVE_LOCATION_LEFT_OF_BOTTOMALIGN);
  tolua_constant(tolua_S,"RELATIVE_LOCATION_RIGHT_OF_TOPALIGN",RELATIVE_LOCATION_RIGHT_OF_TOPALIGN);
  tolua_constant(tolua_S,"RELATIVE_LOCATION_RIGHT_OF_CENTER",RELATIVE_LOCATION_RIGHT_OF_CENTER);
  tolua_constant(tolua_S,"RELATIVE_LOCATION_RIGHT_OF_BOTTOMALIGN",RELATIVE_LOCATION_RIGHT_OF_BOTTOMALIGN);
  tolua_constant(tolua_S,"RELATIVE_LOCATION_BELOW_LEFTALIGN",RELATIVE_LOCATION_BELOW_LEFTALIGN);
  tolua_constant(tolua_S,"RELATIVE_LOCATION_BELOW_CENTER",RELATIVE_LOCATION_BELOW_CENTER);
  tolua_constant(tolua_S,"RELATIVE_LOCATION_BELOW_RIGHTALIGN",RELATIVE_LOCATION_BELOW_RIGHTALIGN);
  tolua_constant(tolua_S,"LAYOUT_PARAMETER_NONE",LAYOUT_PARAMETER_NONE);
  tolua_constant(tolua_S,"LAYOUT_PARAMETER_LINEAR",LAYOUT_PARAMETER_LINEAR);
  tolua_constant(tolua_S,"LAYOUT_PARAMETER_RELATIVE",LAYOUT_PARAMETER_RELATIVE);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"LayoutParameter","LayoutParameter","CCObject",tolua_collect_LayoutParameter);
  #else
  tolua_cclass(tolua_S,"LayoutParameter","LayoutParameter","CCObject",NULL);
  #endif
  tolua_beginmodule(tolua_S,"LayoutParameter");
   tolua_function(tolua_S,"new",tolua_Modules_LayoutParameter_new00);
   tolua_function(tolua_S,"new_local",tolua_Modules_LayoutParameter_new00_local);
   tolua_function(tolua_S,".call",tolua_Modules_LayoutParameter_new00_local);
   tolua_function(tolua_S,"delete",tolua_Modules_LayoutParameter_delete00);
   tolua_function(tolua_S,"create",tolua_Modules_LayoutParameter_create00);
   tolua_function(tolua_S,"getLayoutType",tolua_Modules_LayoutParameter_getLayoutType00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"LinearLayoutParameter","LinearLayoutParameter","LayoutParameter",tolua_collect_LinearLayoutParameter);
  #else
  tolua_cclass(tolua_S,"LinearLayoutParameter","LinearLayoutParameter","LayoutParameter",NULL);
  #endif
  tolua_beginmodule(tolua_S,"LinearLayoutParameter");
   tolua_function(tolua_S,"new",tolua_Modules_LinearLayoutParameter_new00);
   tolua_function(tolua_S,"new_local",tolua_Modules_LinearLayoutParameter_new00_local);
   tolua_function(tolua_S,".call",tolua_Modules_LinearLayoutParameter_new00_local);
   tolua_function(tolua_S,"delete",tolua_Modules_LinearLayoutParameter_delete00);
   tolua_function(tolua_S,"create",tolua_Modules_LinearLayoutParameter_create00);
   tolua_function(tolua_S,"setGravity",tolua_Modules_LinearLayoutParameter_setGravity00);
   tolua_function(tolua_S,"getGravity",tolua_Modules_LinearLayoutParameter_getGravity00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"LISTVIEW_GRAVITY_LEFT",LISTVIEW_GRAVITY_LEFT);
  tolua_constant(tolua_S,"LISTVIEW_GRAVITY_RIGHT",LISTVIEW_GRAVITY_RIGHT);
  tolua_constant(tolua_S,"LISTVIEW_GRAVITY_CENTER_HORIZONTAL",LISTVIEW_GRAVITY_CENTER_HORIZONTAL);
  tolua_constant(tolua_S,"LISTVIEW_GRAVITY_TOP",LISTVIEW_GRAVITY_TOP);
  tolua_constant(tolua_S,"LISTVIEW_GRAVITY_BOTTOM",LISTVIEW_GRAVITY_BOTTOM);
  tolua_constant(tolua_S,"LISTVIEW_GRAVITY_CENTER_VERTICAL",LISTVIEW_GRAVITY_CENTER_VERTICAL);
  tolua_constant(tolua_S,"LISTVIEW_ONSELECTEDITEM_START",LISTVIEW_ONSELECTEDITEM_START);
  tolua_constant(tolua_S,"LISTVIEW_ONSELECTEDITEM_END",LISTVIEW_ONSELECTEDITEM_END);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"ListView","ListView","ScrollView",tolua_collect_ListView);
  #else
  tolua_cclass(tolua_S,"ListView","ListView","ScrollView",NULL);
  #endif
  tolua_beginmodule(tolua_S,"ListView");
   tolua_function(tolua_S,"new",tolua_Modules_ListView_new00);
   tolua_function(tolua_S,"new_local",tolua_Modules_ListView_new00_local);
   tolua_function(tolua_S,".call",tolua_Modules_ListView_new00_local);
   tolua_function(tolua_S,"delete",tolua_Modules_ListView_delete00);
   tolua_function(tolua_S,"create",tolua_Modules_ListView_create00);
   tolua_function(tolua_S,"setItemModel",tolua_Modules_ListView_setItemModel00);
   tolua_function(tolua_S,"pushBackDefaultItem",tolua_Modules_ListView_pushBackDefaultItem00);
   tolua_function(tolua_S,"insertDefaultItem",tolua_Modules_ListView_insertDefaultItem00);
   tolua_function(tolua_S,"pushBackCustomItem",tolua_Modules_ListView_pushBackCustomItem00);
   tolua_function(tolua_S,"insertCustomItem",tolua_Modules_ListView_insertCustomItem00);
   tolua_function(tolua_S,"removeLastItem",tolua_Modules_ListView_removeLastItem00);
   tolua_function(tolua_S,"removeItem",tolua_Modules_ListView_removeItem00);
   tolua_function(tolua_S,"removeAllItems",tolua_Modules_ListView_removeAllItems00);
   tolua_function(tolua_S,"getItem",tolua_Modules_ListView_getItem00);
   tolua_function(tolua_S,"getItems",tolua_Modules_ListView_getItems00);
   tolua_function(tolua_S,"getIndex",tolua_Modules_ListView_getIndex00);
   tolua_function(tolua_S,"setGravity",tolua_Modules_ListView_setGravity00);
   tolua_function(tolua_S,"setItemsMargin",tolua_Modules_ListView_setItemsMargin00);
   tolua_function(tolua_S,"sortAllChildren",tolua_Modules_ListView_sortAllChildren00);
   tolua_function(tolua_S,"getCurSelectedIndex",tolua_Modules_ListView_getCurSelectedIndex00);
   tolua_function(tolua_S,"setDirection",tolua_Modules_ListView_setDirection00);
   tolua_function(tolua_S,"getDescription",tolua_Modules_ListView_getDescription00);
   tolua_function(tolua_S,"requestRefreshView",tolua_Modules_ListView_requestRefreshView00);
   tolua_function(tolua_S,"refreshView",tolua_Modules_ListView_refreshView00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"LoadingBarTypeLeft",LoadingBarTypeLeft);
  tolua_constant(tolua_S,"LoadingBarTypeRight",LoadingBarTypeRight);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"LoadingBar","LoadingBar","Widget",tolua_collect_LoadingBar);
  #else
  tolua_cclass(tolua_S,"LoadingBar","LoadingBar","Widget",NULL);
  #endif
  tolua_beginmodule(tolua_S,"LoadingBar");
   tolua_function(tolua_S,"new",tolua_Modules_LoadingBar_new00);
   tolua_function(tolua_S,"new_local",tolua_Modules_LoadingBar_new00_local);
   tolua_function(tolua_S,".call",tolua_Modules_LoadingBar_new00_local);
   tolua_function(tolua_S,"delete",tolua_Modules_LoadingBar_delete00);
   tolua_function(tolua_S,"create",tolua_Modules_LoadingBar_create00);
   tolua_function(tolua_S,"setDirection",tolua_Modules_LoadingBar_setDirection00);
   tolua_function(tolua_S,"getDirection",tolua_Modules_LoadingBar_getDirection00);
   tolua_function(tolua_S,"loadTexture",tolua_Modules_LoadingBar_loadTexture00);
   tolua_function(tolua_S,"setPercent",tolua_Modules_LoadingBar_setPercent00);
   tolua_function(tolua_S,"getPercent",tolua_Modules_LoadingBar_getPercent00);
   tolua_function(tolua_S,"setScale9Enabled",tolua_Modules_LoadingBar_setScale9Enabled00);
   tolua_function(tolua_S,"setCapInsets",tolua_Modules_LoadingBar_setCapInsets00);
   tolua_function(tolua_S,"ignoreContentAdaptWithSize",tolua_Modules_LoadingBar_ignoreContentAdaptWithSize00);
   tolua_function(tolua_S,"getContentSize",tolua_Modules_LoadingBar_getContentSize00);
   tolua_function(tolua_S,"getVirtualRenderer",tolua_Modules_LoadingBar_getVirtualRenderer00);
   tolua_function(tolua_S,"getDescription",tolua_Modules_LoadingBar_getDescription00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"PAGEVIEW_EVENT_TURNING",PAGEVIEW_EVENT_TURNING);
  tolua_constant(tolua_S,"PAGEVIEW_TOUCHLEFT",PAGEVIEW_TOUCHLEFT);
  tolua_constant(tolua_S,"PAGEVIEW_TOUCHRIGHT",PAGEVIEW_TOUCHRIGHT);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"PageView","PageView","Layout",tolua_collect_PageView);
  #else
  tolua_cclass(tolua_S,"PageView","PageView","Layout",NULL);
  #endif
  tolua_beginmodule(tolua_S,"PageView");
   tolua_function(tolua_S,"new",tolua_Modules_PageView_new00);
   tolua_function(tolua_S,"new_local",tolua_Modules_PageView_new00_local);
   tolua_function(tolua_S,".call",tolua_Modules_PageView_new00_local);
   tolua_function(tolua_S,"delete",tolua_Modules_PageView_delete00);
   tolua_function(tolua_S,"create",tolua_Modules_PageView_create00);
   tolua_function(tolua_S,"addWidgetToPage",tolua_Modules_PageView_addWidgetToPage00);
   tolua_function(tolua_S,"addPage",tolua_Modules_PageView_addPage00);
   tolua_function(tolua_S,"insertPage",tolua_Modules_PageView_insertPage00);
   tolua_function(tolua_S,"removePage",tolua_Modules_PageView_removePage00);
   tolua_function(tolua_S,"removePageAtIndex",tolua_Modules_PageView_removePageAtIndex00);
   tolua_function(tolua_S,"removeAllPages",tolua_Modules_PageView_removeAllPages00);
   tolua_function(tolua_S,"scrollToPage",tolua_Modules_PageView_scrollToPage00);
   tolua_function(tolua_S,"getCurPageIndex",tolua_Modules_PageView_getCurPageIndex00);
   tolua_function(tolua_S,"getPages",tolua_Modules_PageView_getPages00);
   tolua_function(tolua_S,"getPage",tolua_Modules_PageView_getPage00);
   tolua_function(tolua_S,"onTouchBegan",tolua_Modules_PageView_onTouchBegan00);
   tolua_function(tolua_S,"onTouchMoved",tolua_Modules_PageView_onTouchMoved00);
   tolua_function(tolua_S,"onTouchEnded",tolua_Modules_PageView_onTouchEnded00);
   tolua_function(tolua_S,"onTouchCancelled",tolua_Modules_PageView_onTouchCancelled00);
   tolua_function(tolua_S,"update",tolua_Modules_PageView_update00);
   tolua_function(tolua_S,"setLayoutType",tolua_Modules_PageView_setLayoutType00);
   tolua_function(tolua_S,"getLayoutType",tolua_Modules_PageView_getLayoutType00);
   tolua_function(tolua_S,"getDescription",tolua_Modules_PageView_getDescription00);
   tolua_variable(tolua_S,"__UIScrollInterface__",tolua_get_PageView___UIScrollInterface__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"UIRelativeLayoutParameter","UIRelativeLayoutParameter","UILayoutParameter",tolua_collect_UIRelativeLayoutParameter);
  #else
  tolua_cclass(tolua_S,"UIRelativeLayoutParameter","UIRelativeLayoutParameter","UILayoutParameter",NULL);
  #endif
  tolua_beginmodule(tolua_S,"UIRelativeLayoutParameter");
   tolua_function(tolua_S,"new",tolua_Modules_UIRelativeLayoutParameter_new00);
   tolua_function(tolua_S,"new_local",tolua_Modules_UIRelativeLayoutParameter_new00_local);
   tolua_function(tolua_S,".call",tolua_Modules_UIRelativeLayoutParameter_new00_local);
   tolua_function(tolua_S,"delete",tolua_Modules_UIRelativeLayoutParameter_delete00);
   tolua_function(tolua_S,"create",tolua_Modules_UIRelativeLayoutParameter_create00);
   tolua_function(tolua_S,"setAlign",tolua_Modules_UIRelativeLayoutParameter_setAlign00);
   tolua_function(tolua_S,"getAlign",tolua_Modules_UIRelativeLayoutParameter_getAlign00);
   tolua_function(tolua_S,"setRelativeToWidgetName",tolua_Modules_UIRelativeLayoutParameter_setRelativeToWidgetName00);
   tolua_function(tolua_S,"getRelativeToWidgetName",tolua_Modules_UIRelativeLayoutParameter_getRelativeToWidgetName00);
   tolua_function(tolua_S,"setRelativeName",tolua_Modules_UIRelativeLayoutParameter_setRelativeName00);
   tolua_function(tolua_S,"getRelativeName",tolua_Modules_UIRelativeLayoutParameter_getRelativeName00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"RICH_TEXT",RICH_TEXT);
  tolua_constant(tolua_S,"RICH_IMAGE",RICH_IMAGE);
  tolua_constant(tolua_S,"RICH_CUSTOM",RICH_CUSTOM);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"RichElement","RichElement","CCObject",tolua_collect_RichElement);
  #else
  tolua_cclass(tolua_S,"RichElement","RichElement","CCObject",NULL);
  #endif
  tolua_beginmodule(tolua_S,"RichElement");
   tolua_function(tolua_S,"new",tolua_Modules_RichElement_new00);
   tolua_function(tolua_S,"new_local",tolua_Modules_RichElement_new00_local);
   tolua_function(tolua_S,".call",tolua_Modules_RichElement_new00_local);
   tolua_function(tolua_S,"delete",tolua_Modules_RichElement_delete00);
   tolua_function(tolua_S,"init",tolua_Modules_RichElement_init00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"RichElementText","RichElementText","RichElement",tolua_collect_RichElementText);
  #else
  tolua_cclass(tolua_S,"RichElementText","RichElementText","RichElement",NULL);
  #endif
  tolua_beginmodule(tolua_S,"RichElementText");
   tolua_function(tolua_S,"new",tolua_Modules_RichElementText_new00);
   tolua_function(tolua_S,"new_local",tolua_Modules_RichElementText_new00_local);
   tolua_function(tolua_S,".call",tolua_Modules_RichElementText_new00_local);
   tolua_function(tolua_S,"delete",tolua_Modules_RichElementText_delete00);
   tolua_function(tolua_S,"init",tolua_Modules_RichElementText_init00);
   tolua_function(tolua_S,"create",tolua_Modules_RichElementText_create00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"RichElementImage","RichElementImage","RichElement",tolua_collect_RichElementImage);
  #else
  tolua_cclass(tolua_S,"RichElementImage","RichElementImage","RichElement",NULL);
  #endif
  tolua_beginmodule(tolua_S,"RichElementImage");
   tolua_function(tolua_S,"new",tolua_Modules_RichElementImage_new00);
   tolua_function(tolua_S,"new_local",tolua_Modules_RichElementImage_new00_local);
   tolua_function(tolua_S,".call",tolua_Modules_RichElementImage_new00_local);
   tolua_function(tolua_S,"delete",tolua_Modules_RichElementImage_delete00);
   tolua_function(tolua_S,"init",tolua_Modules_RichElementImage_init00);
   tolua_function(tolua_S,"create",tolua_Modules_RichElementImage_create00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"RichElementCustomNode","RichElementCustomNode","RichElement",tolua_collect_RichElementCustomNode);
  #else
  tolua_cclass(tolua_S,"RichElementCustomNode","RichElementCustomNode","RichElement",NULL);
  #endif
  tolua_beginmodule(tolua_S,"RichElementCustomNode");
   tolua_function(tolua_S,"new",tolua_Modules_RichElementCustomNode_new00);
   tolua_function(tolua_S,"new_local",tolua_Modules_RichElementCustomNode_new00_local);
   tolua_function(tolua_S,".call",tolua_Modules_RichElementCustomNode_new00_local);
   tolua_function(tolua_S,"delete",tolua_Modules_RichElementCustomNode_delete00);
   tolua_function(tolua_S,"init",tolua_Modules_RichElementCustomNode_init00);
   tolua_function(tolua_S,"create",tolua_Modules_RichElementCustomNode_create00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"RichText","RichText","Widget",tolua_collect_RichText);
  #else
  tolua_cclass(tolua_S,"RichText","RichText","Widget",NULL);
  #endif
  tolua_beginmodule(tolua_S,"RichText");
   tolua_function(tolua_S,"new",tolua_Modules_RichText_new00);
   tolua_function(tolua_S,"new_local",tolua_Modules_RichText_new00_local);
   tolua_function(tolua_S,".call",tolua_Modules_RichText_new00_local);
   tolua_function(tolua_S,"delete",tolua_Modules_RichText_delete00);
   tolua_function(tolua_S,"create",tolua_Modules_RichText_create00);
   tolua_function(tolua_S,"insertElement",tolua_Modules_RichText_insertElement00);
   tolua_function(tolua_S,"pushBackElement",tolua_Modules_RichText_pushBackElement00);
   tolua_function(tolua_S,"removeElement",tolua_Modules_RichText_removeElement00);
   tolua_function(tolua_S,"removeElement",tolua_Modules_RichText_removeElement01);
   tolua_function(tolua_S,"visit",tolua_Modules_RichText_visit00);
   tolua_function(tolua_S,"setVerticalSpace",tolua_Modules_RichText_setVerticalSpace00);
   tolua_function(tolua_S,"setAnchorPoint",tolua_Modules_RichText_setAnchorPoint00);
   tolua_function(tolua_S,"getContentSize",tolua_Modules_RichText_getContentSize00);
   tolua_function(tolua_S,"formatText",tolua_Modules_RichText_formatText00);
   tolua_function(tolua_S,"ignoreContentAdaptWithSize",tolua_Modules_RichText_ignoreContentAdaptWithSize00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"SCROLLVIEW_DIR_NONE",SCROLLVIEW_DIR_NONE);
  tolua_constant(tolua_S,"SCROLLVIEW_DIR_VERTICAL",SCROLLVIEW_DIR_VERTICAL);
  tolua_constant(tolua_S,"SCROLLVIEW_DIR_HORIZONTAL",SCROLLVIEW_DIR_HORIZONTAL);
  tolua_constant(tolua_S,"SCROLLVIEW_DIR_BOTH",SCROLLVIEW_DIR_BOTH);
  tolua_constant(tolua_S,"SCROLLVIEW_EVENT_SCROLL_TO_TOP",SCROLLVIEW_EVENT_SCROLL_TO_TOP);
  tolua_constant(tolua_S,"SCROLLVIEW_EVENT_SCROLL_TO_BOTTOM",SCROLLVIEW_EVENT_SCROLL_TO_BOTTOM);
  tolua_constant(tolua_S,"SCROLLVIEW_EVENT_SCROLL_TO_LEFT",SCROLLVIEW_EVENT_SCROLL_TO_LEFT);
  tolua_constant(tolua_S,"SCROLLVIEW_EVENT_SCROLL_TO_RIGHT",SCROLLVIEW_EVENT_SCROLL_TO_RIGHT);
  tolua_constant(tolua_S,"SCROLLVIEW_EVENT_SCROLLING",SCROLLVIEW_EVENT_SCROLLING);
  tolua_constant(tolua_S,"SCROLLVIEW_EVENT_BOUNCE_TOP",SCROLLVIEW_EVENT_BOUNCE_TOP);
  tolua_constant(tolua_S,"SCROLLVIEW_EVENT_BOUNCE_BOTTOM",SCROLLVIEW_EVENT_BOUNCE_BOTTOM);
  tolua_constant(tolua_S,"SCROLLVIEW_EVENT_BOUNCE_LEFT",SCROLLVIEW_EVENT_BOUNCE_LEFT);
  tolua_constant(tolua_S,"SCROLLVIEW_EVENT_BOUNCE_RIGHT",SCROLLVIEW_EVENT_BOUNCE_RIGHT);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"ScrollView","ScrollView","Layout",tolua_collect_ScrollView);
  #else
  tolua_cclass(tolua_S,"ScrollView","ScrollView","Layout",NULL);
  #endif
  tolua_beginmodule(tolua_S,"ScrollView");
   tolua_function(tolua_S,"new",tolua_Modules_ScrollView_new00);
   tolua_function(tolua_S,"new_local",tolua_Modules_ScrollView_new00_local);
   tolua_function(tolua_S,".call",tolua_Modules_ScrollView_new00_local);
   tolua_function(tolua_S,"delete",tolua_Modules_ScrollView_delete00);
   tolua_function(tolua_S,"create",tolua_Modules_ScrollView_create00);
   tolua_function(tolua_S,"setDirection",tolua_Modules_ScrollView_setDirection00);
   tolua_function(tolua_S,"getDirection",tolua_Modules_ScrollView_getDirection00);
   tolua_function(tolua_S,"getInnerContainer",tolua_Modules_ScrollView_getInnerContainer00);
   tolua_function(tolua_S,"scrollToBottom",tolua_Modules_ScrollView_scrollToBottom00);
   tolua_function(tolua_S,"scrollToTop",tolua_Modules_ScrollView_scrollToTop00);
   tolua_function(tolua_S,"scrollToLeft",tolua_Modules_ScrollView_scrollToLeft00);
   tolua_function(tolua_S,"scrollToRight",tolua_Modules_ScrollView_scrollToRight00);
   tolua_function(tolua_S,"scrollToTopLeft",tolua_Modules_ScrollView_scrollToTopLeft00);
   tolua_function(tolua_S,"scrollToTopRight",tolua_Modules_ScrollView_scrollToTopRight00);
   tolua_function(tolua_S,"scrollToBottomLeft",tolua_Modules_ScrollView_scrollToBottomLeft00);
   tolua_function(tolua_S,"scrollToBottomRight",tolua_Modules_ScrollView_scrollToBottomRight00);
   tolua_function(tolua_S,"scrollToPercentVertical",tolua_Modules_ScrollView_scrollToPercentVertical00);
   tolua_function(tolua_S,"scrollToPercentHorizontal",tolua_Modules_ScrollView_scrollToPercentHorizontal00);
   tolua_function(tolua_S,"scrollToPercentBothDirection",tolua_Modules_ScrollView_scrollToPercentBothDirection00);
   tolua_function(tolua_S,"jumpToBottom",tolua_Modules_ScrollView_jumpToBottom00);
   tolua_function(tolua_S,"jumpToTop",tolua_Modules_ScrollView_jumpToTop00);
   tolua_function(tolua_S,"jumpToLeft",tolua_Modules_ScrollView_jumpToLeft00);
   tolua_function(tolua_S,"jumpToRight",tolua_Modules_ScrollView_jumpToRight00);
   tolua_function(tolua_S,"jumpToTopLeft",tolua_Modules_ScrollView_jumpToTopLeft00);
   tolua_function(tolua_S,"jumpToTopRight",tolua_Modules_ScrollView_jumpToTopRight00);
   tolua_function(tolua_S,"jumpToBottomLeft",tolua_Modules_ScrollView_jumpToBottomLeft00);
   tolua_function(tolua_S,"jumpToBottomRight",tolua_Modules_ScrollView_jumpToBottomRight00);
   tolua_function(tolua_S,"jumpToPercentVertical",tolua_Modules_ScrollView_jumpToPercentVertical00);
   tolua_function(tolua_S,"jumpToPercentHorizontal",tolua_Modules_ScrollView_jumpToPercentHorizontal00);
   tolua_function(tolua_S,"jumpToPercentBothDirection",tolua_Modules_ScrollView_jumpToPercentBothDirection00);
   tolua_function(tolua_S,"setInnerContainerSize",tolua_Modules_ScrollView_setInnerContainerSize00);
   tolua_function(tolua_S,"getInnerContainerSize",tolua_Modules_ScrollView_getInnerContainerSize00);
   tolua_function(tolua_S,"addChild",tolua_Modules_ScrollView_addChild00);
   tolua_function(tolua_S,"addChild",tolua_Modules_ScrollView_addChild01);
   tolua_function(tolua_S,"addChild",tolua_Modules_ScrollView_addChild02);
   tolua_function(tolua_S,"removeAllChildren",tolua_Modules_ScrollView_removeAllChildren00);
   tolua_function(tolua_S,"removeAllChildrenWithCleanup",tolua_Modules_ScrollView_removeAllChildrenWithCleanup00);
   tolua_function(tolua_S,"removeChild",tolua_Modules_ScrollView_removeChild00);
   tolua_function(tolua_S,"removeChild",tolua_Modules_ScrollView_removeChild01);
   tolua_function(tolua_S,"getChildren",tolua_Modules_ScrollView_getChildren00);
   tolua_function(tolua_S,"getChildrenCount",tolua_Modules_ScrollView_getChildrenCount00);
   tolua_function(tolua_S,"getChildByTag",tolua_Modules_ScrollView_getChildByTag00);
   tolua_function(tolua_S,"getChildByName",tolua_Modules_ScrollView_getChildByName00);
   tolua_function(tolua_S,"addNode",tolua_Modules_ScrollView_addNode00);
   tolua_function(tolua_S,"addNode",tolua_Modules_ScrollView_addNode01);
   tolua_function(tolua_S,"addNode",tolua_Modules_ScrollView_addNode02);
   tolua_function(tolua_S,"getNodeByTag",tolua_Modules_ScrollView_getNodeByTag00);
   tolua_function(tolua_S,"removeNodeByTag",tolua_Modules_ScrollView_removeNodeByTag00);
   tolua_function(tolua_S,"getNodes",tolua_Modules_ScrollView_getNodes00);
   tolua_function(tolua_S,"removeNode",tolua_Modules_ScrollView_removeNode00);
   tolua_function(tolua_S,"removeAllNodes",tolua_Modules_ScrollView_removeAllNodes00);
   tolua_function(tolua_S,"update",tolua_Modules_ScrollView_update00);
   tolua_function(tolua_S,"setBounceEnabled",tolua_Modules_ScrollView_setBounceEnabled00);
   tolua_function(tolua_S,"isBounceEnabled",tolua_Modules_ScrollView_isBounceEnabled00);
   tolua_function(tolua_S,"setInertiaScrollEnabled",tolua_Modules_ScrollView_setInertiaScrollEnabled00);
   tolua_function(tolua_S,"isInertiaScrollEnabled",tolua_Modules_ScrollView_isInertiaScrollEnabled00);
   tolua_function(tolua_S,"setLayoutType",tolua_Modules_ScrollView_setLayoutType00);
   tolua_function(tolua_S,"getLayoutType",tolua_Modules_ScrollView_getLayoutType00);
   tolua_function(tolua_S,"getDescription",tolua_Modules_ScrollView_getDescription00);
   tolua_variable(tolua_S,"__UIScrollInterface__",tolua_get_ScrollView___UIScrollInterface__,NULL);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"SLIDER_PERCENTCHANGED",SLIDER_PERCENTCHANGED);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Slider","Slider","Widget",tolua_collect_Slider);
  #else
  tolua_cclass(tolua_S,"Slider","Slider","Widget",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Slider");
   tolua_function(tolua_S,"new",tolua_Modules_Slider_new00);
   tolua_function(tolua_S,"new_local",tolua_Modules_Slider_new00_local);
   tolua_function(tolua_S,".call",tolua_Modules_Slider_new00_local);
   tolua_function(tolua_S,"delete",tolua_Modules_Slider_delete00);
   tolua_function(tolua_S,"create",tolua_Modules_Slider_create00);
   tolua_function(tolua_S,"loadBarTexture",tolua_Modules_Slider_loadBarTexture00);
   tolua_function(tolua_S,"setScale9Enabled",tolua_Modules_Slider_setScale9Enabled00);
   tolua_function(tolua_S,"isScale9Enabled",tolua_Modules_Slider_isScale9Enabled00);
   tolua_function(tolua_S,"setCapInsets",tolua_Modules_Slider_setCapInsets00);
   tolua_function(tolua_S,"setCapInsetsBarRenderer",tolua_Modules_Slider_setCapInsetsBarRenderer00);
   tolua_function(tolua_S,"getCapInsetBarRenderer",tolua_Modules_Slider_getCapInsetBarRenderer00);
   tolua_function(tolua_S,"setCapInsetProgressBarRebderer",tolua_Modules_Slider_setCapInsetProgressBarRebderer00);
   tolua_function(tolua_S,"getCapInsetProgressBarRebderer",tolua_Modules_Slider_getCapInsetProgressBarRebderer00);
   tolua_function(tolua_S,"loadSlidBallTextures",tolua_Modules_Slider_loadSlidBallTextures00);
   tolua_function(tolua_S,"loadSlidBallTextureNormal",tolua_Modules_Slider_loadSlidBallTextureNormal00);
   tolua_function(tolua_S,"loadSlidBallTexturePressed",tolua_Modules_Slider_loadSlidBallTexturePressed00);
   tolua_function(tolua_S,"loadSlidBallTextureDisabled",tolua_Modules_Slider_loadSlidBallTextureDisabled00);
   tolua_function(tolua_S,"loadProgressBarTexture",tolua_Modules_Slider_loadProgressBarTexture00);
   tolua_function(tolua_S,"setPercent",tolua_Modules_Slider_setPercent00);
   tolua_function(tolua_S,"getPercent",tolua_Modules_Slider_getPercent00);
   tolua_function(tolua_S,"onTouchBegan",tolua_Modules_Slider_onTouchBegan00);
   tolua_function(tolua_S,"onTouchMoved",tolua_Modules_Slider_onTouchMoved00);
   tolua_function(tolua_S,"onTouchEnded",tolua_Modules_Slider_onTouchEnded00);
   tolua_function(tolua_S,"onTouchCancelled",tolua_Modules_Slider_onTouchCancelled00);
   tolua_function(tolua_S,"getContentSize",tolua_Modules_Slider_getContentSize00);
   tolua_function(tolua_S,"getVirtualRenderer",tolua_Modules_Slider_getVirtualRenderer00);
   tolua_function(tolua_S,"ignoreContentAdaptWithSize",tolua_Modules_Slider_ignoreContentAdaptWithSize00);
   tolua_function(tolua_S,"getDescription",tolua_Modules_Slider_getDescription00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"TEXTFIELD_EVENT_ATTACH_WITH_IME",TEXTFIELD_EVENT_ATTACH_WITH_IME);
  tolua_constant(tolua_S,"TEXTFIELD_EVENT_DETACH_WITH_IME",TEXTFIELD_EVENT_DETACH_WITH_IME);
  tolua_constant(tolua_S,"TEXTFIELD_EVENT_INSERT_TEXT",TEXTFIELD_EVENT_INSERT_TEXT);
  tolua_constant(tolua_S,"TEXTFIELD_EVENT_DELETE_BACKWARD",TEXTFIELD_EVENT_DELETE_BACKWARD);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"TextField","TextField","Widget",tolua_collect_TextField);
  #else
  tolua_cclass(tolua_S,"TextField","TextField","Widget",NULL);
  #endif
  tolua_beginmodule(tolua_S,"TextField");
   tolua_function(tolua_S,"new",tolua_Modules_TextField_new00);
   tolua_function(tolua_S,"new_local",tolua_Modules_TextField_new00_local);
   tolua_function(tolua_S,".call",tolua_Modules_TextField_new00_local);
   tolua_function(tolua_S,"delete",tolua_Modules_TextField_delete00);
   tolua_function(tolua_S,"create",tolua_Modules_TextField_create00);
   tolua_function(tolua_S,"setTouchSize",tolua_Modules_TextField_setTouchSize00);
   tolua_function(tolua_S,"getTouchSize",tolua_Modules_TextField_getTouchSize00);
   tolua_function(tolua_S,"setTouchAreaEnabled",tolua_Modules_TextField_setTouchAreaEnabled00);
   tolua_function(tolua_S,"hitTest",tolua_Modules_TextField_hitTest00);
   tolua_function(tolua_S,"setText",tolua_Modules_TextField_setText00);
   tolua_function(tolua_S,"setPlaceHolder",tolua_Modules_TextField_setPlaceHolder00);
   tolua_function(tolua_S,"getPlaceHolder",tolua_Modules_TextField_getPlaceHolder00);
   tolua_function(tolua_S,"setFontSize",tolua_Modules_TextField_setFontSize00);
   tolua_function(tolua_S,"getFontSize",tolua_Modules_TextField_getFontSize00);
   tolua_function(tolua_S,"setFontName",tolua_Modules_TextField_setFontName00);
   tolua_function(tolua_S,"getFontName",tolua_Modules_TextField_getFontName00);
   tolua_function(tolua_S,"didNotSelectSelf",tolua_Modules_TextField_didNotSelectSelf00);
   tolua_function(tolua_S,"getStringValue",tolua_Modules_TextField_getStringValue00);
   tolua_function(tolua_S,"onTouchBegan",tolua_Modules_TextField_onTouchBegan00);
   tolua_function(tolua_S,"setMaxLengthEnabled",tolua_Modules_TextField_setMaxLengthEnabled00);
   tolua_function(tolua_S,"isMaxLengthEnabled",tolua_Modules_TextField_isMaxLengthEnabled00);
   tolua_function(tolua_S,"setMaxLength",tolua_Modules_TextField_setMaxLength00);
   tolua_function(tolua_S,"getMaxLength",tolua_Modules_TextField_getMaxLength00);
   tolua_function(tolua_S,"setPasswordEnabled",tolua_Modules_TextField_setPasswordEnabled00);
   tolua_function(tolua_S,"isPasswordEnabled",tolua_Modules_TextField_isPasswordEnabled00);
   tolua_function(tolua_S,"setPasswordStyleText",tolua_Modules_TextField_setPasswordStyleText00);
   tolua_function(tolua_S,"getPasswordStyleText",tolua_Modules_TextField_getPasswordStyleText00);
   tolua_function(tolua_S,"update",tolua_Modules_TextField_update00);
   tolua_function(tolua_S,"getAttachWithIME",tolua_Modules_TextField_getAttachWithIME00);
   tolua_function(tolua_S,"setAttachWithIME",tolua_Modules_TextField_setAttachWithIME00);
   tolua_function(tolua_S,"getDetachWithIME",tolua_Modules_TextField_getDetachWithIME00);
   tolua_function(tolua_S,"setDetachWithIME",tolua_Modules_TextField_setDetachWithIME00);
   tolua_function(tolua_S,"getInsertText",tolua_Modules_TextField_getInsertText00);
   tolua_function(tolua_S,"setInsertText",tolua_Modules_TextField_setInsertText00);
   tolua_function(tolua_S,"getDeleteBackward",tolua_Modules_TextField_getDeleteBackward00);
   tolua_function(tolua_S,"setDeleteBackward",tolua_Modules_TextField_setDeleteBackward00);
   tolua_function(tolua_S,"setAnchorPoint",tolua_Modules_TextField_setAnchorPoint00);
   tolua_function(tolua_S,"getDescription",tolua_Modules_TextField_getDescription00);
   tolua_function(tolua_S,"getContentSize",tolua_Modules_TextField_getContentSize00);
   tolua_function(tolua_S,"getVirtualRenderer",tolua_Modules_TextField_getVirtualRenderer00);
   tolua_function(tolua_S,"attachWithIME",tolua_Modules_TextField_attachWithIME00);
   tolua_function(tolua_S,"onEnter",tolua_Modules_TextField_onEnter00);
   tolua_function(tolua_S,"setTextAreaSize",tolua_Modules_TextField_setTextAreaSize00);
   tolua_function(tolua_S,"setTextHorizontalAlignment",tolua_Modules_TextField_setTextHorizontalAlignment00);
   tolua_function(tolua_S,"setTextVerticalAlignment",tolua_Modules_TextField_setTextVerticalAlignment00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"TouchGroup","TouchGroup","CCLayer",tolua_collect_TouchGroup);
  #else
  tolua_cclass(tolua_S,"TouchGroup","TouchGroup","CCLayer",NULL);
  #endif
  tolua_beginmodule(tolua_S,"TouchGroup");
   tolua_function(tolua_S,"new",tolua_Modules_TouchGroup_new00);
   tolua_function(tolua_S,"new_local",tolua_Modules_TouchGroup_new00_local);
   tolua_function(tolua_S,".call",tolua_Modules_TouchGroup_new00_local);
   tolua_function(tolua_S,"delete",tolua_Modules_TouchGroup_delete00);
   tolua_function(tolua_S,"create",tolua_Modules_TouchGroup_create00);
   tolua_function(tolua_S,"init",tolua_Modules_TouchGroup_init00);
   tolua_function(tolua_S,"onEnter",tolua_Modules_TouchGroup_onEnter00);
   tolua_function(tolua_S,"onExit",tolua_Modules_TouchGroup_onExit00);
   tolua_function(tolua_S,"onEnterTransitionDidFinish",tolua_Modules_TouchGroup_onEnterTransitionDidFinish00);
   tolua_function(tolua_S,"ccTouchBegan",tolua_Modules_TouchGroup_ccTouchBegan00);
   tolua_function(tolua_S,"ccTouchMoved",tolua_Modules_TouchGroup_ccTouchMoved00);
   tolua_function(tolua_S,"ccTouchEnded",tolua_Modules_TouchGroup_ccTouchEnded00);
   tolua_function(tolua_S,"ccTouchCancelled",tolua_Modules_TouchGroup_ccTouchCancelled00);
   tolua_function(tolua_S,"addWidget",tolua_Modules_TouchGroup_addWidget00);
   tolua_function(tolua_S,"removeWidget",tolua_Modules_TouchGroup_removeWidget00);
   tolua_function(tolua_S,"getWidgetByTag",tolua_Modules_TouchGroup_getWidgetByTag00);
   tolua_function(tolua_S,"getWidgetByName",tolua_Modules_TouchGroup_getWidgetByName00);
   tolua_function(tolua_S,"clear",tolua_Modules_TouchGroup_clear00);
   tolua_function(tolua_S,"getRootWidget",tolua_Modules_TouchGroup_getRootWidget00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"BRIGHT_NONE",BRIGHT_NONE);
  tolua_constant(tolua_S,"BRIGHT_NORMAL",BRIGHT_NORMAL);
  tolua_constant(tolua_S,"BRIGHT_HIGHLIGHT",BRIGHT_HIGHLIGHT);
  tolua_constant(tolua_S,"WidgetTypeWidget",WidgetTypeWidget);
  tolua_constant(tolua_S,"WidgetTypeContainer",WidgetTypeContainer);
  tolua_constant(tolua_S,"UI_TEX_TYPE_LOCAL",UI_TEX_TYPE_LOCAL);
  tolua_constant(tolua_S,"UI_TEX_TYPE_PLIST",UI_TEX_TYPE_PLIST);
  tolua_constant(tolua_S,"TOUCH_EVENT_BEGAN",TOUCH_EVENT_BEGAN);
  tolua_constant(tolua_S,"TOUCH_EVENT_MOVED",TOUCH_EVENT_MOVED);
  tolua_constant(tolua_S,"TOUCH_EVENT_ENDED",TOUCH_EVENT_ENDED);
  tolua_constant(tolua_S,"TOUCH_EVENT_CANCELED",TOUCH_EVENT_CANCELED);
  tolua_constant(tolua_S,"SIZE_ABSOLUTE",SIZE_ABSOLUTE);
  tolua_constant(tolua_S,"SIZE_PERCENT",SIZE_PERCENT);
  tolua_constant(tolua_S,"POSITION_ABSOLUTE",POSITION_ABSOLUTE);
  tolua_constant(tolua_S,"POSITION_PERCENT",POSITION_PERCENT);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Widget","Widget","CCNode",tolua_collect_Widget);
  #else
  tolua_cclass(tolua_S,"Widget","Widget","CCNode",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Widget");
   tolua_function(tolua_S,"new",tolua_Modules_Widget_new00);
   tolua_function(tolua_S,"new_local",tolua_Modules_Widget_new00_local);
   tolua_function(tolua_S,".call",tolua_Modules_Widget_new00_local);
   tolua_function(tolua_S,"delete",tolua_Modules_Widget_delete00);
   tolua_function(tolua_S,"create",tolua_Modules_Widget_create00);
   tolua_function(tolua_S,"setEnabled",tolua_Modules_Widget_setEnabled00);
   tolua_function(tolua_S,"isEnabled",tolua_Modules_Widget_isEnabled00);
   tolua_function(tolua_S,"setBright",tolua_Modules_Widget_setBright00);
   tolua_function(tolua_S,"isBright",tolua_Modules_Widget_isBright00);
   tolua_function(tolua_S,"setTouchEnabled",tolua_Modules_Widget_setTouchEnabled00);
   tolua_function(tolua_S,"setBrightStyle",tolua_Modules_Widget_setBrightStyle00);
   tolua_function(tolua_S,"isTouchEnabled",tolua_Modules_Widget_isTouchEnabled00);
   tolua_function(tolua_S,"isFocused",tolua_Modules_Widget_isFocused00);
   tolua_function(tolua_S,"setFocused",tolua_Modules_Widget_setFocused00);
   tolua_function(tolua_S,"getLeftInParent",tolua_Modules_Widget_getLeftInParent00);
   tolua_function(tolua_S,"getBottomInParent",tolua_Modules_Widget_getBottomInParent00);
   tolua_function(tolua_S,"getRightInParent",tolua_Modules_Widget_getRightInParent00);
   tolua_function(tolua_S,"getTopInParent",tolua_Modules_Widget_getTopInParent00);
   tolua_function(tolua_S,"addChild",tolua_Modules_Widget_addChild00);
   tolua_function(tolua_S,"addChild",tolua_Modules_Widget_addChild01);
   tolua_function(tolua_S,"addChild",tolua_Modules_Widget_addChild02);
   tolua_function(tolua_S,"getChildByTag",tolua_Modules_Widget_getChildByTag00);
   tolua_function(tolua_S,"sortAllChildren",tolua_Modules_Widget_sortAllChildren00);
   tolua_function(tolua_S,"getChildren",tolua_Modules_Widget_getChildren00);
   tolua_function(tolua_S,"getChildrenCount",tolua_Modules_Widget_getChildrenCount00);
   tolua_function(tolua_S,"removeFromParent",tolua_Modules_Widget_removeFromParent00);
   tolua_function(tolua_S,"removeFromParentAndCleanup",tolua_Modules_Widget_removeFromParentAndCleanup00);
   tolua_function(tolua_S,"removeChild",tolua_Modules_Widget_removeChild00);
   tolua_function(tolua_S,"removeChild",tolua_Modules_Widget_removeChild01);
   tolua_function(tolua_S,"removeChildByTag",tolua_Modules_Widget_removeChildByTag00);
   tolua_function(tolua_S,"removeAllChildren",tolua_Modules_Widget_removeAllChildren00);
   tolua_function(tolua_S,"removeAllChildrenWithCleanup",tolua_Modules_Widget_removeAllChildrenWithCleanup00);
   tolua_function(tolua_S,"getChildByName",tolua_Modules_Widget_getChildByName00);
   tolua_function(tolua_S,"addNode",tolua_Modules_Widget_addNode00);
   tolua_function(tolua_S,"addNode",tolua_Modules_Widget_addNode01);
   tolua_function(tolua_S,"addNode",tolua_Modules_Widget_addNode02);
   tolua_function(tolua_S,"getNodeByTag",tolua_Modules_Widget_getNodeByTag00);
   tolua_function(tolua_S,"getNodes",tolua_Modules_Widget_getNodes00);
   tolua_function(tolua_S,"removeNode",tolua_Modules_Widget_removeNode00);
   tolua_function(tolua_S,"removeNodeByTag",tolua_Modules_Widget_removeNodeByTag00);
   tolua_function(tolua_S,"removeAllNodes",tolua_Modules_Widget_removeAllNodes00);
   tolua_function(tolua_S,"visit",tolua_Modules_Widget_visit00);
   tolua_function(tolua_S,"setPosition",tolua_Modules_Widget_setPosition00);
   tolua_function(tolua_S,"setPositionPercent",tolua_Modules_Widget_setPositionPercent00);
   tolua_function(tolua_S,"getPositionPercent",tolua_Modules_Widget_getPositionPercent00);
   tolua_function(tolua_S,"setPositionType",tolua_Modules_Widget_setPositionType00);
   tolua_function(tolua_S,"getPositionType",tolua_Modules_Widget_getPositionType00);
   tolua_function(tolua_S,"setFlipX",tolua_Modules_Widget_setFlipX00);
   tolua_function(tolua_S,"isFlipX",tolua_Modules_Widget_isFlipX00);
   tolua_function(tolua_S,"setFlipY",tolua_Modules_Widget_setFlipY00);
   tolua_function(tolua_S,"isFlipY",tolua_Modules_Widget_isFlipY00);
   tolua_function(tolua_S,"setColor",tolua_Modules_Widget_setColor00);
   tolua_function(tolua_S,"setOpacity",tolua_Modules_Widget_setOpacity00);
   tolua_function(tolua_S,"getColor",tolua_Modules_Widget_getColor00);
   tolua_function(tolua_S,"getOpacity",tolua_Modules_Widget_getOpacity00);
   tolua_function(tolua_S,"didNotSelectSelf",tolua_Modules_Widget_didNotSelectSelf00);
   tolua_function(tolua_S,"clippingParentAreaContainPoint",tolua_Modules_Widget_clippingParentAreaContainPoint00);
   tolua_function(tolua_S,"checkChildInfo",tolua_Modules_Widget_checkChildInfo00);
   tolua_function(tolua_S,"getTouchStartPos",tolua_Modules_Widget_getTouchStartPos00);
   tolua_function(tolua_S,"getTouchMovePos",tolua_Modules_Widget_getTouchMovePos00);
   tolua_function(tolua_S,"getTouchEndPos",tolua_Modules_Widget_getTouchEndPos00);
   tolua_function(tolua_S,"setName",tolua_Modules_Widget_setName00);
   tolua_function(tolua_S,"getName",tolua_Modules_Widget_getName00);
   tolua_function(tolua_S,"getWidgetType",tolua_Modules_Widget_getWidgetType00);
   tolua_function(tolua_S,"setSize",tolua_Modules_Widget_setSize00);
   tolua_function(tolua_S,"setSizePercent",tolua_Modules_Widget_setSizePercent00);
   tolua_function(tolua_S,"setSizeType",tolua_Modules_Widget_setSizeType00);
   tolua_function(tolua_S,"getSizeType",tolua_Modules_Widget_getSizeType00);
   tolua_function(tolua_S,"getSize",tolua_Modules_Widget_getSize00);
   tolua_function(tolua_S,"getLayoutSize",tolua_Modules_Widget_getLayoutSize00);
   tolua_function(tolua_S,"getSizePercent",tolua_Modules_Widget_getSizePercent00);
   tolua_function(tolua_S,"getCustomSize",tolua_Modules_Widget_getCustomSize00);
   tolua_function(tolua_S,"hitTest",tolua_Modules_Widget_hitTest00);
   tolua_function(tolua_S,"onTouchBegan",tolua_Modules_Widget_onTouchBegan00);
   tolua_function(tolua_S,"onTouchMoved",tolua_Modules_Widget_onTouchMoved00);
   tolua_function(tolua_S,"onTouchEnded",tolua_Modules_Widget_onTouchEnded00);
   tolua_function(tolua_S,"onTouchCancelled",tolua_Modules_Widget_onTouchCancelled00);
   tolua_function(tolua_S,"setLayoutParameter",tolua_Modules_Widget_setLayoutParameter00);
   tolua_function(tolua_S,"getLayoutParameter",tolua_Modules_Widget_getLayoutParameter00);
   tolua_function(tolua_S,"ignoreContentAdaptWithSize",tolua_Modules_Widget_ignoreContentAdaptWithSize00);
   tolua_function(tolua_S,"isIgnoreContentAdaptWithSize",tolua_Modules_Widget_isIgnoreContentAdaptWithSize00);
   tolua_function(tolua_S,"getWorldPosition",tolua_Modules_Widget_getWorldPosition00);
   tolua_function(tolua_S,"getVirtualRenderer",tolua_Modules_Widget_getVirtualRenderer00);
   tolua_function(tolua_S,"getContentSize",tolua_Modules_Widget_getContentSize00);
   tolua_function(tolua_S,"getDescription",tolua_Modules_Widget_getDescription00);
   tolua_function(tolua_S,"clone",tolua_Modules_Widget_clone00);
   tolua_function(tolua_S,"onEnter",tolua_Modules_Widget_onEnter00);
   tolua_function(tolua_S,"onExit",tolua_Modules_Widget_onExit00);
   tolua_function(tolua_S,"updateSizeAndPosition",tolua_Modules_Widget_updateSizeAndPosition00);
   tolua_function(tolua_S,"updateSizeAndPosition",tolua_Modules_Widget_updateSizeAndPosition01);
   tolua_function(tolua_S,"setActionTag",tolua_Modules_Widget_setActionTag00);
   tolua_function(tolua_S,"getActionTag",tolua_Modules_Widget_getActionTag00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCParallaxNode","CCParallaxNode","CCNode",NULL);
  tolua_beginmodule(tolua_S,"CCParallaxNode");
   tolua_function(tolua_S,"create",tolua_Modules_CCParallaxNode_create00);
   tolua_function(tolua_S,"addChild",tolua_Modules_CCParallaxNode_addChild00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CCTMXLayer","CCTMXLayer","CCSpriteBatchNode",tolua_collect_CCTMXLayer);
  #else
  tolua_cclass(tolua_S,"CCTMXLayer","CCTMXLayer","CCSpriteBatchNode",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CCTMXLayer");
   tolua_function(tolua_S,"new",tolua_Modules_CCTMXLayer_new00);
   tolua_function(tolua_S,"new_local",tolua_Modules_CCTMXLayer_new00_local);
   tolua_function(tolua_S,".call",tolua_Modules_CCTMXLayer_new00_local);
   tolua_function(tolua_S,"delete",tolua_Modules_CCTMXLayer_delete00);
   tolua_function(tolua_S,"create",tolua_Modules_CCTMXLayer_create00);
   tolua_function(tolua_S,"initWithTilesetInfo",tolua_Modules_CCTMXLayer_initWithTilesetInfo00);
   tolua_function(tolua_S,"getLayerSize",tolua_Modules_CCTMXLayer_getLayerSize00);
   tolua_function(tolua_S,"getMapTileSize",tolua_Modules_CCTMXLayer_getMapTileSize00);
   tolua_function(tolua_S,"getTileSet",tolua_Modules_CCTMXLayer_getTileSet00);
   tolua_function(tolua_S,"getLayerOrientation",tolua_Modules_CCTMXLayer_getLayerOrientation00);
   tolua_function(tolua_S,"getProperties",tolua_Modules_CCTMXLayer_getProperties00);
   tolua_function(tolua_S,"releaseMap",tolua_Modules_CCTMXLayer_releaseMap00);
   tolua_function(tolua_S,"tileAt",tolua_Modules_CCTMXLayer_tileAt00);
   tolua_function(tolua_S,"tileGIDAt",tolua_Modules_CCTMXLayer_tileGIDAt00);
   tolua_function(tolua_S,"setTileGID",tolua_Modules_CCTMXLayer_setTileGID00);
   tolua_function(tolua_S,"removeTileAt",tolua_Modules_CCTMXLayer_removeTileAt00);
   tolua_function(tolua_S,"positionAt",tolua_Modules_CCTMXLayer_positionAt00);
   tolua_function(tolua_S,"propertyNamed",tolua_Modules_CCTMXLayer_propertyNamed00);
   tolua_function(tolua_S,"getLayerName",tolua_Modules_CCTMXLayer_getLayerName00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTMXObjectGroup","CCTMXObjectGroup","CCObject",NULL);
  tolua_beginmodule(tolua_S,"CCTMXObjectGroup");
   tolua_function(tolua_S,"getGroupName",tolua_Modules_CCTMXObjectGroup_getGroupName00);
   tolua_function(tolua_S,"propertyNamed",tolua_Modules_CCTMXObjectGroup_propertyNamed00);
   tolua_function(tolua_S,"objectNamed",tolua_Modules_CCTMXObjectGroup_objectNamed00);
   tolua_function(tolua_S,"getPositionOffset",tolua_Modules_CCTMXObjectGroup_getPositionOffset00);
   tolua_function(tolua_S,"setPositionOffset",tolua_Modules_CCTMXObjectGroup_setPositionOffset00);
   tolua_function(tolua_S,"getProperties",tolua_Modules_CCTMXObjectGroup_getProperties00);
   tolua_function(tolua_S,"getObjects",tolua_Modules_CCTMXObjectGroup_getObjects00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"CCTMXOrientationOrtho",CCTMXOrientationOrtho);
  tolua_constant(tolua_S,"CCTMXOrientationHex",CCTMXOrientationHex);
  tolua_constant(tolua_S,"CCTMXOrientationIso",CCTMXOrientationIso);
  tolua_cclass(tolua_S,"CCTMXTiledMap","CCTMXTiledMap","CCNode",NULL);
  tolua_beginmodule(tolua_S,"CCTMXTiledMap");
   tolua_function(tolua_S,"create",tolua_Modules_CCTMXTiledMap_create00);
   tolua_function(tolua_S,"createWithXML",tolua_Modules_CCTMXTiledMap_createWithXML00);
   tolua_function(tolua_S,"layerNamed",tolua_Modules_CCTMXTiledMap_layerNamed00);
   tolua_function(tolua_S,"objectGroupNamed",tolua_Modules_CCTMXTiledMap_objectGroupNamed00);
   tolua_function(tolua_S,"propertyNamed",tolua_Modules_CCTMXTiledMap_propertyNamed00);
   tolua_function(tolua_S,"propertiesForGID",tolua_Modules_CCTMXTiledMap_propertiesForGID00);
   tolua_function(tolua_S,"getMapSize",tolua_Modules_CCTMXTiledMap_getMapSize00);
   tolua_function(tolua_S,"getTileSize",tolua_Modules_CCTMXTiledMap_getTileSize00);
   tolua_function(tolua_S,"getMapOrientation",tolua_Modules_CCTMXTiledMap_getMapOrientation00);
   tolua_function(tolua_S,"getObjectGroups",tolua_Modules_CCTMXTiledMap_getObjectGroups00);
   tolua_function(tolua_S,"getProperties",tolua_Modules_CCTMXTiledMap_getProperties00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"TMXLayerAttribNone",TMXLayerAttribNone);
  tolua_constant(tolua_S,"TMXLayerAttribBase64",TMXLayerAttribBase64);
  tolua_constant(tolua_S,"TMXLayerAttribGzip",TMXLayerAttribGzip);
  tolua_constant(tolua_S,"TMXLayerAttribZlib",TMXLayerAttribZlib);
  tolua_constant(tolua_S,"TMXPropertyNone",TMXPropertyNone);
  tolua_constant(tolua_S,"TMXPropertyMap",TMXPropertyMap);
  tolua_constant(tolua_S,"TMXPropertyLayer",TMXPropertyLayer);
  tolua_constant(tolua_S,"TMXPropertyObjectGroup",TMXPropertyObjectGroup);
  tolua_constant(tolua_S,"TMXPropertyObject",TMXPropertyObject);
  tolua_constant(tolua_S,"TMXPropertyTile",TMXPropertyTile);
  tolua_constant(tolua_S,"kCCTMXTileHorizontalFlag",kCCTMXTileHorizontalFlag);
  tolua_constant(tolua_S,"kCCTMXTileVerticalFlag",kCCTMXTileVerticalFlag);
  tolua_constant(tolua_S,"kCCTMXTileDiagonalFlag",kCCTMXTileDiagonalFlag);
  tolua_constant(tolua_S,"kCCFlipedAll",kCCFlipedAll);
  tolua_constant(tolua_S,"kCCFlippedMask",kCCFlippedMask);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CCTMXLayerInfo","CCTMXLayerInfo","CCObject",tolua_collect_CCTMXLayerInfo);
  #else
  tolua_cclass(tolua_S,"CCTMXLayerInfo","CCTMXLayerInfo","CCObject",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CCTMXLayerInfo");
   tolua_function(tolua_S,"getProperties",tolua_Modules_CCTMXLayerInfo_getProperties00);
   tolua_variable(tolua_S,"m_sName",tolua_get_CCTMXLayerInfo_m_sName,tolua_set_CCTMXLayerInfo_m_sName);
   tolua_variable(tolua_S,"m_tLayerSize",tolua_get_CCTMXLayerInfo_m_tLayerSize,tolua_set_CCTMXLayerInfo_m_tLayerSize);
   tolua_variable(tolua_S,"m_bVisible",tolua_get_CCTMXLayerInfo_m_bVisible,tolua_set_CCTMXLayerInfo_m_bVisible);
   tolua_variable(tolua_S,"m_cOpacity",tolua_get_CCTMXLayerInfo_unsigned_m_cOpacity,tolua_set_CCTMXLayerInfo_unsigned_m_cOpacity);
   tolua_variable(tolua_S,"m_bOwnTiles",tolua_get_CCTMXLayerInfo_m_bOwnTiles,tolua_set_CCTMXLayerInfo_m_bOwnTiles);
   tolua_variable(tolua_S,"m_uMinGID",tolua_get_CCTMXLayerInfo_unsigned_m_uMinGID,tolua_set_CCTMXLayerInfo_unsigned_m_uMinGID);
   tolua_variable(tolua_S,"m_uMaxGID",tolua_get_CCTMXLayerInfo_unsigned_m_uMaxGID,tolua_set_CCTMXLayerInfo_unsigned_m_uMaxGID);
   tolua_variable(tolua_S,"m_tOffset",tolua_get_CCTMXLayerInfo_m_tOffset,tolua_set_CCTMXLayerInfo_m_tOffset);
   tolua_function(tolua_S,"new",tolua_Modules_CCTMXLayerInfo_new00);
   tolua_function(tolua_S,"new_local",tolua_Modules_CCTMXLayerInfo_new00_local);
   tolua_function(tolua_S,".call",tolua_Modules_CCTMXLayerInfo_new00_local);
   tolua_function(tolua_S,"delete",tolua_Modules_CCTMXLayerInfo_delete00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CCTMXTilesetInfo","CCTMXTilesetInfo","CCObject",tolua_collect_CCTMXTilesetInfo);
  #else
  tolua_cclass(tolua_S,"CCTMXTilesetInfo","CCTMXTilesetInfo","CCObject",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CCTMXTilesetInfo");
   tolua_function(tolua_S,"new",tolua_Modules_CCTMXTilesetInfo_new00);
   tolua_function(tolua_S,"new_local",tolua_Modules_CCTMXTilesetInfo_new00_local);
   tolua_function(tolua_S,".call",tolua_Modules_CCTMXTilesetInfo_new00_local);
   tolua_function(tolua_S,"delete",tolua_Modules_CCTMXTilesetInfo_delete00);
   tolua_function(tolua_S,"rectForGID",tolua_Modules_CCTMXTilesetInfo_rectForGID00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CCTMXMapInfo","CCTMXMapInfo","CCObject",tolua_collect_CCTMXMapInfo);
  #else
  tolua_cclass(tolua_S,"CCTMXMapInfo","CCTMXMapInfo","CCObject",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CCTMXMapInfo");
   tolua_function(tolua_S,"getOrientation",tolua_Modules_CCTMXMapInfo_getOrientation00);
   tolua_function(tolua_S,"getMapSize",tolua_Modules_CCTMXMapInfo_getMapSize00);
   tolua_function(tolua_S,"getTileSize",tolua_Modules_CCTMXMapInfo_getTileSize00);
   tolua_function(tolua_S,"getLayers",tolua_Modules_CCTMXMapInfo_getLayers00);
   tolua_function(tolua_S,"getTilesets",tolua_Modules_CCTMXMapInfo_getTilesets00);
   tolua_function(tolua_S,"getObjectGroups",tolua_Modules_CCTMXMapInfo_getObjectGroups00);
   tolua_function(tolua_S,"getParentElement",tolua_Modules_CCTMXMapInfo_getParentElement00);
   tolua_function(tolua_S,"getParentGID",tolua_Modules_CCTMXMapInfo_getParentGID00);
   tolua_function(tolua_S,"getLayerAttribs",tolua_Modules_CCTMXMapInfo_getLayerAttribs00);
   tolua_function(tolua_S,"getStoringCharacters",tolua_Modules_CCTMXMapInfo_getStoringCharacters00);
   tolua_function(tolua_S,"getProperties",tolua_Modules_CCTMXMapInfo_getProperties00);
   tolua_function(tolua_S,"new",tolua_Modules_CCTMXMapInfo_new00);
   tolua_function(tolua_S,"new_local",tolua_Modules_CCTMXMapInfo_new00_local);
   tolua_function(tolua_S,".call",tolua_Modules_CCTMXMapInfo_new00_local);
   tolua_function(tolua_S,"delete",tolua_Modules_CCTMXMapInfo_delete00);
   tolua_function(tolua_S,"formatWithTMXFile",tolua_Modules_CCTMXMapInfo_formatWithTMXFile00);
   tolua_function(tolua_S,"formatWithXML",tolua_Modules_CCTMXMapInfo_formatWithXML00);
   tolua_function(tolua_S,"initWithTMXFile",tolua_Modules_CCTMXMapInfo_initWithTMXFile00);
   tolua_function(tolua_S,"initWithXML",tolua_Modules_CCTMXMapInfo_initWithXML00);
   tolua_function(tolua_S,"parseXMLFile",tolua_Modules_CCTMXMapInfo_parseXMLFile00);
   tolua_function(tolua_S,"parseXMLString",tolua_Modules_CCTMXMapInfo_parseXMLString00);
   tolua_function(tolua_S,"getTileProperties",tolua_Modules_CCTMXMapInfo_getTileProperties00);
   tolua_function(tolua_S,"setTileProperties",tolua_Modules_CCTMXMapInfo_setTileProperties00);
   tolua_function(tolua_S,"getCurrentString",tolua_Modules_CCTMXMapInfo_getCurrentString00);
   tolua_function(tolua_S,"setCurrentString",tolua_Modules_CCTMXMapInfo_setCurrentString00);
   tolua_function(tolua_S,"getTMXFileName",tolua_Modules_CCTMXMapInfo_getTMXFileName00);
   tolua_function(tolua_S,"setTMXFileName",tolua_Modules_CCTMXMapInfo_setTMXFileName00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCParticleBatchNode","CCParticleBatchNode","CCNode",NULL);
  tolua_beginmodule(tolua_S,"CCParticleBatchNode");
   tolua_function(tolua_S,"createWithTexture",tolua_Modules_CCParticleBatchNode_createWithTexture00);
   tolua_function(tolua_S,"create",tolua_Modules_CCParticleBatchNode_create00);
   tolua_function(tolua_S,"insertChild",tolua_Modules_CCParticleBatchNode_insertChild00);
   tolua_function(tolua_S,"disableParticle",tolua_Modules_CCParticleBatchNode_disableParticle00);
   tolua_function(tolua_S,"getTexture",tolua_Modules_CCParticleBatchNode_getTexture00);
   tolua_function(tolua_S,"setTexture",tolua_Modules_CCParticleBatchNode_setTexture00);
   tolua_function(tolua_S,"setBlendFunc",tolua_Modules_CCParticleBatchNode_setBlendFunc00);
   tolua_function(tolua_S,"getBlendFunc",tolua_Modules_CCParticleBatchNode_getBlendFunc00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCParticleFire","CCParticleFire","CCParticleSystemQuad",NULL);
  tolua_beginmodule(tolua_S,"CCParticleFire");
   tolua_function(tolua_S,"createWithTotalParticles",tolua_Modules_CCParticleFire_createWithTotalParticles00);
   tolua_function(tolua_S,"create",tolua_Modules_CCParticleFire_create00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCParticleFireworks","CCParticleFireworks","CCParticleSystemQuad",NULL);
  tolua_beginmodule(tolua_S,"CCParticleFireworks");
   tolua_function(tolua_S,"createWithTotalParticles",tolua_Modules_CCParticleFireworks_createWithTotalParticles00);
   tolua_function(tolua_S,"create",tolua_Modules_CCParticleFireworks_create00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCParticleSun","CCParticleSun","CCParticleSystemQuad",NULL);
  tolua_beginmodule(tolua_S,"CCParticleSun");
   tolua_function(tolua_S,"createWithTotalParticles",tolua_Modules_CCParticleSun_createWithTotalParticles00);
   tolua_function(tolua_S,"create",tolua_Modules_CCParticleSun_create00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCParticleGalaxy","CCParticleGalaxy","CCParticleSystemQuad",NULL);
  tolua_beginmodule(tolua_S,"CCParticleGalaxy");
   tolua_function(tolua_S,"createWithTotalParticles",tolua_Modules_CCParticleGalaxy_createWithTotalParticles00);
   tolua_function(tolua_S,"create",tolua_Modules_CCParticleGalaxy_create00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCParticleFlower","CCParticleFlower","CCParticleSystemQuad",NULL);
  tolua_beginmodule(tolua_S,"CCParticleFlower");
   tolua_function(tolua_S,"createWithTotalParticles",tolua_Modules_CCParticleFlower_createWithTotalParticles00);
   tolua_function(tolua_S,"create",tolua_Modules_CCParticleFlower_create00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCParticleMeteor","CCParticleMeteor","CCParticleSystemQuad",NULL);
  tolua_beginmodule(tolua_S,"CCParticleMeteor");
   tolua_function(tolua_S,"createWithTotalParticles",tolua_Modules_CCParticleMeteor_createWithTotalParticles00);
   tolua_function(tolua_S,"create",tolua_Modules_CCParticleMeteor_create00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCParticleSpiral","CCParticleSpiral","CCParticleSystemQuad",NULL);
  tolua_beginmodule(tolua_S,"CCParticleSpiral");
   tolua_function(tolua_S,"createWithTotalParticles",tolua_Modules_CCParticleSpiral_createWithTotalParticles00);
   tolua_function(tolua_S,"create",tolua_Modules_CCParticleSpiral_create00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCParticleExplosion","CCParticleExplosion","CCParticleSystemQuad",NULL);
  tolua_beginmodule(tolua_S,"CCParticleExplosion");
   tolua_function(tolua_S,"createWithTotalParticles",tolua_Modules_CCParticleExplosion_createWithTotalParticles00);
   tolua_function(tolua_S,"create",tolua_Modules_CCParticleExplosion_create00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCParticleSmoke","CCParticleSmoke","CCParticleSystemQuad",NULL);
  tolua_beginmodule(tolua_S,"CCParticleSmoke");
   tolua_function(tolua_S,"createWithTotalParticles",tolua_Modules_CCParticleSmoke_createWithTotalParticles00);
   tolua_function(tolua_S,"create",tolua_Modules_CCParticleSmoke_create00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCParticleSnow","CCParticleSnow","CCParticleSystemQuad",NULL);
  tolua_beginmodule(tolua_S,"CCParticleSnow");
   tolua_function(tolua_S,"createWithTotalParticles",tolua_Modules_CCParticleSnow_createWithTotalParticles00);
   tolua_function(tolua_S,"create",tolua_Modules_CCParticleSnow_create00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCParticleRain","CCParticleRain","CCParticleSystemQuad",NULL);
  tolua_beginmodule(tolua_S,"CCParticleRain");
   tolua_function(tolua_S,"createWithTotalParticles",tolua_Modules_CCParticleRain_createWithTotalParticles00);
   tolua_function(tolua_S,"create",tolua_Modules_CCParticleRain_create00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"kCCParticleDurationInfinity",kCCParticleDurationInfinity);
  tolua_constant(tolua_S,"kCCParticleStartSizeEqualToEndSize",kCCParticleStartSizeEqualToEndSize);
  tolua_constant(tolua_S,"kCCParticleStartRadiusEqualToEndRadius",kCCParticleStartRadiusEqualToEndRadius);
  tolua_constant(tolua_S,"kParticleStartSizeEqualToEndSize",kParticleStartSizeEqualToEndSize);
  tolua_constant(tolua_S,"kParticleDurationInfinity",kParticleDurationInfinity);
  tolua_constant(tolua_S,"kCCParticleModeGravity",kCCParticleModeGravity);
  tolua_constant(tolua_S,"kCCParticleModeRadius",kCCParticleModeRadius);
  tolua_constant(tolua_S,"kCCPositionTypeFree",kCCPositionTypeFree);
  tolua_constant(tolua_S,"kCCPositionTypeRelative",kCCPositionTypeRelative);
  tolua_constant(tolua_S,"kCCPositionTypeGrouped",kCCPositionTypeGrouped);
  tolua_cclass(tolua_S,"CCParticleSystem","CCParticleSystem","CCNode",NULL);
  tolua_beginmodule(tolua_S,"CCParticleSystem");
   tolua_function(tolua_S,"getBatchNode",tolua_Modules_CCParticleSystem_getBatchNode00);
   tolua_function(tolua_S,"getAtlasIndex",tolua_Modules_CCParticleSystem_getAtlasIndex00);
   tolua_function(tolua_S,"getParticleCount",tolua_Modules_CCParticleSystem_getParticleCount00);
   tolua_function(tolua_S,"getDuration",tolua_Modules_CCParticleSystem_getDuration00);
   tolua_function(tolua_S,"setDuration",tolua_Modules_CCParticleSystem_setDuration00);
   tolua_function(tolua_S,"getSourcePosition",tolua_Modules_CCParticleSystem_getSourcePosition00);
   tolua_function(tolua_S,"setSourcePosition",tolua_Modules_CCParticleSystem_setSourcePosition00);
   tolua_function(tolua_S,"getPosVar",tolua_Modules_CCParticleSystem_getPosVar00);
   tolua_function(tolua_S,"setPosVar",tolua_Modules_CCParticleSystem_setPosVar00);
   tolua_function(tolua_S,"getLife",tolua_Modules_CCParticleSystem_getLife00);
   tolua_function(tolua_S,"setLife",tolua_Modules_CCParticleSystem_setLife00);
   tolua_function(tolua_S,"getLifeVar",tolua_Modules_CCParticleSystem_getLifeVar00);
   tolua_function(tolua_S,"setLifeVar",tolua_Modules_CCParticleSystem_setLifeVar00);
   tolua_function(tolua_S,"getAngle",tolua_Modules_CCParticleSystem_getAngle00);
   tolua_function(tolua_S,"setAngle",tolua_Modules_CCParticleSystem_setAngle00);
   tolua_function(tolua_S,"getAngleVar",tolua_Modules_CCParticleSystem_getAngleVar00);
   tolua_function(tolua_S,"setAngleVar",tolua_Modules_CCParticleSystem_setAngleVar00);
   tolua_function(tolua_S,"getGravity",tolua_Modules_CCParticleSystem_getGravity00);
   tolua_function(tolua_S,"setGravity",tolua_Modules_CCParticleSystem_setGravity00);
   tolua_function(tolua_S,"getSpeed",tolua_Modules_CCParticleSystem_getSpeed00);
   tolua_function(tolua_S,"setSpeed",tolua_Modules_CCParticleSystem_setSpeed00);
   tolua_function(tolua_S,"getSpeedVar",tolua_Modules_CCParticleSystem_getSpeedVar00);
   tolua_function(tolua_S,"setSpeedVar",tolua_Modules_CCParticleSystem_setSpeedVar00);
   tolua_function(tolua_S,"getTangentialAccel",tolua_Modules_CCParticleSystem_getTangentialAccel00);
   tolua_function(tolua_S,"setTangentialAccel",tolua_Modules_CCParticleSystem_setTangentialAccel00);
   tolua_function(tolua_S,"getTangentialAccelVar",tolua_Modules_CCParticleSystem_getTangentialAccelVar00);
   tolua_function(tolua_S,"setTangentialAccelVar",tolua_Modules_CCParticleSystem_setTangentialAccelVar00);
   tolua_function(tolua_S,"getRadialAccel",tolua_Modules_CCParticleSystem_getRadialAccel00);
   tolua_function(tolua_S,"setRadialAccel",tolua_Modules_CCParticleSystem_setRadialAccel00);
   tolua_function(tolua_S,"getRadialAccelVar",tolua_Modules_CCParticleSystem_getRadialAccelVar00);
   tolua_function(tolua_S,"setRadialAccelVar",tolua_Modules_CCParticleSystem_setRadialAccelVar00);
   tolua_function(tolua_S,"getRotationIsDir",tolua_Modules_CCParticleSystem_getRotationIsDir00);
   tolua_function(tolua_S,"setRotationIsDir",tolua_Modules_CCParticleSystem_setRotationIsDir00);
   tolua_function(tolua_S,"getStartRadius",tolua_Modules_CCParticleSystem_getStartRadius00);
   tolua_function(tolua_S,"setStartRadius",tolua_Modules_CCParticleSystem_setStartRadius00);
   tolua_function(tolua_S,"getStartRadiusVar",tolua_Modules_CCParticleSystem_getStartRadiusVar00);
   tolua_function(tolua_S,"setStartRadiusVar",tolua_Modules_CCParticleSystem_setStartRadiusVar00);
   tolua_function(tolua_S,"getEndRadius",tolua_Modules_CCParticleSystem_getEndRadius00);
   tolua_function(tolua_S,"setEndRadius",tolua_Modules_CCParticleSystem_setEndRadius00);
   tolua_function(tolua_S,"getEndRadiusVar",tolua_Modules_CCParticleSystem_getEndRadiusVar00);
   tolua_function(tolua_S,"setEndRadiusVar",tolua_Modules_CCParticleSystem_setEndRadiusVar00);
   tolua_function(tolua_S,"getRotatePerSecond",tolua_Modules_CCParticleSystem_getRotatePerSecond00);
   tolua_function(tolua_S,"setRotatePerSecond",tolua_Modules_CCParticleSystem_setRotatePerSecond00);
   tolua_function(tolua_S,"getRotatePerSecondVar",tolua_Modules_CCParticleSystem_getRotatePerSecondVar00);
   tolua_function(tolua_S,"setRotatePerSecondVar",tolua_Modules_CCParticleSystem_setRotatePerSecondVar00);
   tolua_function(tolua_S,"isActive",tolua_Modules_CCParticleSystem_isActive00);
   tolua_function(tolua_S,"isBlendAdditive",tolua_Modules_CCParticleSystem_isBlendAdditive00);
   tolua_function(tolua_S,"setBlendAdditive",tolua_Modules_CCParticleSystem_setBlendAdditive00);
   tolua_function(tolua_S,"getStartSize",tolua_Modules_CCParticleSystem_getStartSize00);
   tolua_function(tolua_S,"setStartSize",tolua_Modules_CCParticleSystem_setStartSize00);
   tolua_function(tolua_S,"getStartSizeVar",tolua_Modules_CCParticleSystem_getStartSizeVar00);
   tolua_function(tolua_S,"setStartSizeVar",tolua_Modules_CCParticleSystem_setStartSizeVar00);
   tolua_function(tolua_S,"getEndSize",tolua_Modules_CCParticleSystem_getEndSize00);
   tolua_function(tolua_S,"setEndSize",tolua_Modules_CCParticleSystem_setEndSize00);
   tolua_function(tolua_S,"getEndSizeVar",tolua_Modules_CCParticleSystem_getEndSizeVar00);
   tolua_function(tolua_S,"setEndSizeVar",tolua_Modules_CCParticleSystem_setEndSizeVar00);
   tolua_function(tolua_S,"getStartColor",tolua_Modules_CCParticleSystem_getStartColor00);
   tolua_function(tolua_S,"setStartColor",tolua_Modules_CCParticleSystem_setStartColor00);
   tolua_function(tolua_S,"getStartColorVar",tolua_Modules_CCParticleSystem_getStartColorVar00);
   tolua_function(tolua_S,"setStartColorVar",tolua_Modules_CCParticleSystem_setStartColorVar00);
   tolua_function(tolua_S,"getEndColor",tolua_Modules_CCParticleSystem_getEndColor00);
   tolua_function(tolua_S,"setEndColor",tolua_Modules_CCParticleSystem_setEndColor00);
   tolua_function(tolua_S,"getEndColorVar",tolua_Modules_CCParticleSystem_getEndColorVar00);
   tolua_function(tolua_S,"setEndColorVar",tolua_Modules_CCParticleSystem_setEndColorVar00);
   tolua_function(tolua_S,"getStartSpin",tolua_Modules_CCParticleSystem_getStartSpin00);
   tolua_function(tolua_S,"setStartSpin",tolua_Modules_CCParticleSystem_setStartSpin00);
   tolua_function(tolua_S,"getStartSpinVar",tolua_Modules_CCParticleSystem_getStartSpinVar00);
   tolua_function(tolua_S,"setStartSpinVar",tolua_Modules_CCParticleSystem_setStartSpinVar00);
   tolua_function(tolua_S,"getEndSpin",tolua_Modules_CCParticleSystem_getEndSpin00);
   tolua_function(tolua_S,"setEndSpin",tolua_Modules_CCParticleSystem_setEndSpin00);
   tolua_function(tolua_S,"getEndSpinVar",tolua_Modules_CCParticleSystem_getEndSpinVar00);
   tolua_function(tolua_S,"setEndSpinVar",tolua_Modules_CCParticleSystem_setEndSpinVar00);
   tolua_function(tolua_S,"getEmissionRate",tolua_Modules_CCParticleSystem_getEmissionRate00);
   tolua_function(tolua_S,"setEmissionRate",tolua_Modules_CCParticleSystem_setEmissionRate00);
   tolua_function(tolua_S,"getTotalParticles",tolua_Modules_CCParticleSystem_getTotalParticles00);
   tolua_function(tolua_S,"setTotalParticles",tolua_Modules_CCParticleSystem_setTotalParticles00);
   tolua_function(tolua_S,"getTexture",tolua_Modules_CCParticleSystem_getTexture00);
   tolua_function(tolua_S,"setTexture",tolua_Modules_CCParticleSystem_setTexture00);
   tolua_function(tolua_S,"getBlendFunc",tolua_Modules_CCParticleSystem_getBlendFunc00);
   tolua_function(tolua_S,"setBlendFunc",tolua_Modules_CCParticleSystem_setBlendFunc00);
   tolua_function(tolua_S,"getOpacityModifyRGB",tolua_Modules_CCParticleSystem_getOpacityModifyRGB00);
   tolua_function(tolua_S,"setOpacityModifyRGB",tolua_Modules_CCParticleSystem_setOpacityModifyRGB00);
   tolua_function(tolua_S,"getPositionType",tolua_Modules_CCParticleSystem_getPositionType00);
   tolua_function(tolua_S,"setPositionType",tolua_Modules_CCParticleSystem_setPositionType00);
   tolua_function(tolua_S,"isAutoRemoveOnFinish",tolua_Modules_CCParticleSystem_isAutoRemoveOnFinish00);
   tolua_function(tolua_S,"setAutoRemoveOnFinish",tolua_Modules_CCParticleSystem_setAutoRemoveOnFinish00);
   tolua_function(tolua_S,"getEmitterMode",tolua_Modules_CCParticleSystem_getEmitterMode00);
   tolua_function(tolua_S,"setEmitterMode",tolua_Modules_CCParticleSystem_setEmitterMode00);
   tolua_function(tolua_S,"init",tolua_Modules_CCParticleSystem_init00);
   tolua_function(tolua_S,"initWithFile",tolua_Modules_CCParticleSystem_initWithFile00);
   tolua_function(tolua_S,"initWithDictionary",tolua_Modules_CCParticleSystem_initWithDictionary00);
   tolua_function(tolua_S,"initWithDictionary",tolua_Modules_CCParticleSystem_initWithDictionary01);
   tolua_function(tolua_S,"initWithTotalParticles",tolua_Modules_CCParticleSystem_initWithTotalParticles00);
   tolua_function(tolua_S,"addParticle",tolua_Modules_CCParticleSystem_addParticle00);
   tolua_function(tolua_S,"stopSystem",tolua_Modules_CCParticleSystem_stopSystem00);
   tolua_function(tolua_S,"resetSystem",tolua_Modules_CCParticleSystem_resetSystem00);
   tolua_function(tolua_S,"isFull",tolua_Modules_CCParticleSystem_isFull00);
   tolua_function(tolua_S,"updateWithNoTime",tolua_Modules_CCParticleSystem_updateWithNoTime00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CCParticleSystemQuad","CCParticleSystemQuad","CCParticleSystem",tolua_collect_CCParticleSystemQuad);
  #else
  tolua_cclass(tolua_S,"CCParticleSystemQuad","CCParticleSystemQuad","CCParticleSystem",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CCParticleSystemQuad");
   tolua_function(tolua_S,"new",tolua_Modules_CCParticleSystemQuad_new00);
   tolua_function(tolua_S,"new_local",tolua_Modules_CCParticleSystemQuad_new00_local);
   tolua_function(tolua_S,".call",tolua_Modules_CCParticleSystemQuad_new00_local);
   tolua_function(tolua_S,"delete",tolua_Modules_CCParticleSystemQuad_delete00);
   tolua_function(tolua_S,"initIndices",tolua_Modules_CCParticleSystemQuad_initIndices00);
   tolua_function(tolua_S,"initTexCoordsWithRect",tolua_Modules_CCParticleSystemQuad_initTexCoordsWithRect00);
   tolua_function(tolua_S,"setDisplayFrame",tolua_Modules_CCParticleSystemQuad_setDisplayFrame00);
   tolua_function(tolua_S,"setTextureWithRect",tolua_Modules_CCParticleSystemQuad_setTextureWithRect00);
   tolua_function(tolua_S,"initWithTotalParticles",tolua_Modules_CCParticleSystemQuad_initWithTotalParticles00);
   tolua_function(tolua_S,"setTexture",tolua_Modules_CCParticleSystemQuad_setTexture00);
   tolua_function(tolua_S,"updateQuadWithParticle",tolua_Modules_CCParticleSystemQuad_updateQuadWithParticle00);
   tolua_function(tolua_S,"setBatchNode",tolua_Modules_CCParticleSystemQuad_setBatchNode00);
   tolua_function(tolua_S,"setTotalParticles",tolua_Modules_CCParticleSystemQuad_setTotalParticles00);
   tolua_function(tolua_S,"create",tolua_Modules_CCParticleSystemQuad_create00);
   tolua_function(tolua_S,"create",tolua_Modules_CCParticleSystemQuad_create01);
   tolua_function(tolua_S,"createWithTotalParticles",tolua_Modules_CCParticleSystemQuad_createWithTotalParticles00);
   tolua_function(tolua_S,"setDisplayFrame",tolua_Modules_CCParticleSystemQuad_setDisplayFrame01);
   tolua_function(tolua_S,"setTextureWithRect",tolua_Modules_CCParticleSystemQuad_setTextureWithRect01);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"kCCScrollViewDirectionNone",kCCScrollViewDirectionNone);
  tolua_constant(tolua_S,"kCCScrollViewDirectionHorizontal",kCCScrollViewDirectionHorizontal);
  tolua_constant(tolua_S,"kCCScrollViewDirectionVertical",kCCScrollViewDirectionVertical);
  tolua_constant(tolua_S,"kCCScrollViewDirectionBoth",kCCScrollViewDirectionBoth);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CCScrollView","CCScrollView","CCLayer",tolua_collect_CCScrollView);
  #else
  tolua_cclass(tolua_S,"CCScrollView","CCScrollView","CCLayer",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CCScrollView");
   tolua_function(tolua_S,"new",tolua_Modules_CCScrollView_new00);
   tolua_function(tolua_S,"new_local",tolua_Modules_CCScrollView_new00_local);
   tolua_function(tolua_S,".call",tolua_Modules_CCScrollView_new00_local);
   tolua_function(tolua_S,"delete",tolua_Modules_CCScrollView_delete00);
   tolua_function(tolua_S,"init",tolua_Modules_CCScrollView_init00);
   tolua_function(tolua_S,"create",tolua_Modules_CCScrollView_create00);
   tolua_function(tolua_S,"create",tolua_Modules_CCScrollView_create01);
   tolua_function(tolua_S,"initWithViewSize",tolua_Modules_CCScrollView_initWithViewSize00);
   tolua_function(tolua_S,"setContentOffset",tolua_Modules_CCScrollView_setContentOffset00);
   tolua_function(tolua_S,"getContentOffset",tolua_Modules_CCScrollView_getContentOffset00);
   tolua_function(tolua_S,"setContentOffsetInDuration",tolua_Modules_CCScrollView_setContentOffsetInDuration00);
   tolua_function(tolua_S,"setZoomScale",tolua_Modules_CCScrollView_setZoomScale00);
   tolua_function(tolua_S,"setZoomScale",tolua_Modules_CCScrollView_setZoomScale01);
   tolua_function(tolua_S,"getZoomScale",tolua_Modules_CCScrollView_getZoomScale00);
   tolua_function(tolua_S,"setZoomScaleInDuration",tolua_Modules_CCScrollView_setZoomScaleInDuration00);
   tolua_function(tolua_S,"minContainerOffset",tolua_Modules_CCScrollView_minContainerOffset00);
   tolua_function(tolua_S,"maxContainerOffset",tolua_Modules_CCScrollView_maxContainerOffset00);
   tolua_function(tolua_S,"isNodeVisible",tolua_Modules_CCScrollView_isNodeVisible00);
   tolua_function(tolua_S,"pause",tolua_Modules_CCScrollView_pause00);
   tolua_function(tolua_S,"resume",tolua_Modules_CCScrollView_resume00);
   tolua_function(tolua_S,"isDragging",tolua_Modules_CCScrollView_isDragging00);
   tolua_function(tolua_S,"isTouchMoved",tolua_Modules_CCScrollView_isTouchMoved00);
   tolua_function(tolua_S,"isBounceable",tolua_Modules_CCScrollView_isBounceable00);
   tolua_function(tolua_S,"setBounceable",tolua_Modules_CCScrollView_setBounceable00);
   tolua_function(tolua_S,"getViewSize",tolua_Modules_CCScrollView_getViewSize00);
   tolua_function(tolua_S,"setViewSize",tolua_Modules_CCScrollView_setViewSize00);
   tolua_function(tolua_S,"getContainer",tolua_Modules_CCScrollView_getContainer00);
   tolua_function(tolua_S,"setContainer",tolua_Modules_CCScrollView_setContainer00);
   tolua_function(tolua_S,"getDirection",tolua_Modules_CCScrollView_getDirection00);
   tolua_function(tolua_S,"setDirection",tolua_Modules_CCScrollView_setDirection00);
   tolua_function(tolua_S,"ccTouchBegan",tolua_Modules_CCScrollView_ccTouchBegan00);
   tolua_function(tolua_S,"ccTouchMoved",tolua_Modules_CCScrollView_ccTouchMoved00);
   tolua_function(tolua_S,"ccTouchEnded",tolua_Modules_CCScrollView_ccTouchEnded00);
   tolua_function(tolua_S,"ccTouchCancelled",tolua_Modules_CCScrollView_ccTouchCancelled00);
   tolua_function(tolua_S,"setContentSize",tolua_Modules_CCScrollView_setContentSize00);
   tolua_function(tolua_S,"getContentSize",tolua_Modules_CCScrollView_getContentSize00);
   tolua_function(tolua_S,"updateInset",tolua_Modules_CCScrollView_updateInset00);
   tolua_function(tolua_S,"isClippingToBounds",tolua_Modules_CCScrollView_isClippingToBounds00);
   tolua_function(tolua_S,"setClippingToBounds",tolua_Modules_CCScrollView_setClippingToBounds00);
   tolua_function(tolua_S,"addChild",tolua_Modules_CCScrollView_addChild00);
   tolua_function(tolua_S,"addChild",tolua_Modules_CCScrollView_addChild01);
   tolua_function(tolua_S,"addChild",tolua_Modules_CCScrollView_addChild02);
   tolua_function(tolua_S,"setTouchEnabled",tolua_Modules_CCScrollView_setTouchEnabled00);
   tolua_constant(tolua_S,"kScrollViewScroll",CCScrollView::kScrollViewScroll);
   tolua_constant(tolua_S,"kScrollViewZoom",CCScrollView::kScrollViewZoom);
   tolua_function(tolua_S,"unregisterScriptHandler",tolua_Modules_CCScrollView_unregisterScriptHandler00);
   tolua_function(tolua_S,"getScriptHandler",tolua_Modules_CCScrollView_getScriptHandler00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTableViewCell","CCTableViewCell","CCNode",NULL);
  tolua_beginmodule(tolua_S,"CCTableViewCell");
   tolua_function(tolua_S,"getIdx",tolua_Modules_CCTableViewCell_getIdx00);
   tolua_function(tolua_S,"setIdx",tolua_Modules_CCTableViewCell_setIdx00);
   tolua_function(tolua_S,"reset",tolua_Modules_CCTableViewCell_reset00);
   tolua_function(tolua_S,"setObjectID",tolua_Modules_CCTableViewCell_setObjectID00);
   tolua_function(tolua_S,"getObjectID",tolua_Modules_CCTableViewCell_getObjectID00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"kCCTableViewFillTopDown",kCCTableViewFillTopDown);
  tolua_constant(tolua_S,"kCCTableViewFillBottomUp",kCCTableViewFillBottomUp);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CCTableView","CCTableView","CCScrollView",tolua_collect_CCTableView);
  #else
  tolua_cclass(tolua_S,"CCTableView","CCTableView","CCScrollView",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CCTableView");
   tolua_function(tolua_S,"new",tolua_Modules_CCTableView_new00);
   tolua_function(tolua_S,"new_local",tolua_Modules_CCTableView_new00_local);
   tolua_function(tolua_S,".call",tolua_Modules_CCTableView_new00_local);
   tolua_function(tolua_S,"delete",tolua_Modules_CCTableView_delete00);
   tolua_function(tolua_S,"setVerticalFillOrder",tolua_Modules_CCTableView_setVerticalFillOrder00);
   tolua_function(tolua_S,"getVerticalFillOrder",tolua_Modules_CCTableView_getVerticalFillOrder00);
   tolua_function(tolua_S,"initWithViewSize",tolua_Modules_CCTableView_initWithViewSize00);
   tolua_function(tolua_S,"updateCellAtIndex",tolua_Modules_CCTableView_updateCellAtIndex00);
   tolua_function(tolua_S,"insertCellAtIndex",tolua_Modules_CCTableView_insertCellAtIndex00);
   tolua_function(tolua_S,"removeCellAtIndex",tolua_Modules_CCTableView_removeCellAtIndex00);
   tolua_function(tolua_S,"reloadData",tolua_Modules_CCTableView_reloadData00);
   tolua_function(tolua_S,"dequeueCell",tolua_Modules_CCTableView_dequeueCell00);
   tolua_function(tolua_S,"cellAtIndex",tolua_Modules_CCTableView_cellAtIndex00);
   tolua_function(tolua_S,"scrollViewDidScroll",tolua_Modules_CCTableView_scrollViewDidScroll00);
   tolua_function(tolua_S,"scrollViewDidZoom",tolua_Modules_CCTableView_scrollViewDidZoom00);
   tolua_function(tolua_S,"ccTouchBegan",tolua_Modules_CCTableView_ccTouchBegan00);
   tolua_function(tolua_S,"ccTouchMoved",tolua_Modules_CCTableView_ccTouchMoved00);
   tolua_function(tolua_S,"ccTouchEnded",tolua_Modules_CCTableView_ccTouchEnded00);
   tolua_function(tolua_S,"ccTouchCancelled",tolua_Modules_CCTableView_ccTouchCancelled00);
   tolua_function(tolua_S,"_updateContentSize",tolua_Modules_CCTableView__updateContentSize00);
   tolua_constant(tolua_S,"kTableViewScroll",CCTableView::kTableViewScroll);
   tolua_constant(tolua_S,"kTableViewZoom",CCTableView::kTableViewZoom);
   tolua_constant(tolua_S,"kTableCellTouched",CCTableView::kTableCellTouched);
   tolua_constant(tolua_S,"kTableCellHighLight",CCTableView::kTableCellHighLight);
   tolua_constant(tolua_S,"kTableCellUnhighLight",CCTableView::kTableCellUnhighLight);
   tolua_constant(tolua_S,"kTableCellWillRecycle",CCTableView::kTableCellWillRecycle);
   tolua_constant(tolua_S,"kTableCellSizeForIndex",CCTableView::kTableCellSizeForIndex);
   tolua_constant(tolua_S,"kTableCellSizeAtIndex",CCTableView::kTableCellSizeAtIndex);
   tolua_constant(tolua_S,"kNumberOfCellsInTableView",CCTableView::kNumberOfCellsInTableView);
   tolua_function(tolua_S,"unregisterAllScriptHandler",tolua_Modules_CCTableView_unregisterAllScriptHandler00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"CCControlEventTouchDown",CCControlEventTouchDown);
  tolua_constant(tolua_S,"CCControlEventTouchDragInside",CCControlEventTouchDragInside);
  tolua_constant(tolua_S,"CCControlEventTouchDragOutside",CCControlEventTouchDragOutside);
  tolua_constant(tolua_S,"CCControlEventTouchDragEnter",CCControlEventTouchDragEnter);
  tolua_constant(tolua_S,"CCControlEventTouchDragExit",CCControlEventTouchDragExit);
  tolua_constant(tolua_S,"CCControlEventTouchUpInside",CCControlEventTouchUpInside);
  tolua_constant(tolua_S,"CCControlEventTouchUpOutside",CCControlEventTouchUpOutside);
  tolua_constant(tolua_S,"CCControlEventTouchCancel",CCControlEventTouchCancel);
  tolua_constant(tolua_S,"CCControlEventValueChanged",CCControlEventValueChanged);
  tolua_constant(tolua_S,"CCControlStateNormal",CCControlStateNormal);
  tolua_constant(tolua_S,"CCControlStateHighlighted",CCControlStateHighlighted);
  tolua_constant(tolua_S,"CCControlStateDisabled",CCControlStateDisabled);
  tolua_constant(tolua_S,"CCControlStateSelected",CCControlStateSelected);
  tolua_cclass(tolua_S,"CCControl","CCControl","CCLayer",NULL);
  tolua_beginmodule(tolua_S,"CCControl");
   tolua_function(tolua_S,"getState",tolua_Modules_CCControl_getState00);
   tolua_function(tolua_S,"setEnabled",tolua_Modules_CCControl_setEnabled00);
   tolua_function(tolua_S,"isEnabled",tolua_Modules_CCControl_isEnabled00);
   tolua_function(tolua_S,"setSelected",tolua_Modules_CCControl_setSelected00);
   tolua_function(tolua_S,"isSelected",tolua_Modules_CCControl_isSelected00);
   tolua_function(tolua_S,"setHighlighted",tolua_Modules_CCControl_setHighlighted00);
   tolua_function(tolua_S,"isHighlighted",tolua_Modules_CCControl_isHighlighted00);
   tolua_function(tolua_S,"hasVisibleParents",tolua_Modules_CCControl_hasVisibleParents00);
   tolua_function(tolua_S,"isOpacityModifyRGB",tolua_Modules_CCControl_isOpacityModifyRGB00);
   tolua_function(tolua_S,"setOpacityModifyRGB",tolua_Modules_CCControl_setOpacityModifyRGB00);
   tolua_function(tolua_S,"sendActionsForControlEvents",tolua_Modules_CCControl_sendActionsForControlEvents00);
   tolua_function(tolua_S,"addHandleOfControlEvent",tolua_Modules_CCControl_addHandleOfControlEvent00);
   tolua_function(tolua_S,"removeHandleOfControlEvent",tolua_Modules_CCControl_removeHandleOfControlEvent00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCControlButton","CCControlButton","CCControl",NULL);
  tolua_beginmodule(tolua_S,"CCControlButton");
   tolua_function(tolua_S,"getCurrentTitle",tolua_Modules_CCControlButton_getCurrentTitle00);
   tolua_function(tolua_S,"getCurrentTitleColor",tolua_Modules_CCControlButton_getCurrentTitleColor00);
   tolua_function(tolua_S,"doesAdjustBackgroundImage",tolua_Modules_CCControlButton_doesAdjustBackgroundImage00);
   tolua_function(tolua_S,"setAdjustBackgroundImage",tolua_Modules_CCControlButton_setAdjustBackgroundImage00);
   tolua_function(tolua_S,"getTitleLabel",tolua_Modules_CCControlButton_getTitleLabel00);
   tolua_function(tolua_S,"getBackgroundSprite",tolua_Modules_CCControlButton_getBackgroundSprite00);
   tolua_function(tolua_S,"getPreferredSize",tolua_Modules_CCControlButton_getPreferredSize00);
   tolua_function(tolua_S,"setPreferredSize",tolua_Modules_CCControlButton_setPreferredSize00);
   tolua_function(tolua_S,"getZoomOnTouchDown",tolua_Modules_CCControlButton_getZoomOnTouchDown00);
   tolua_function(tolua_S,"getLabelAnchorPoint",tolua_Modules_CCControlButton_getLabelAnchorPoint00);
   tolua_function(tolua_S,"isPushed",tolua_Modules_CCControlButton_isPushed00);
   tolua_function(tolua_S,"getVerticalMargin",tolua_Modules_CCControlButton_getVerticalMargin00);
   tolua_function(tolua_S,"getHorizontalOrigin",tolua_Modules_CCControlButton_getHorizontalOrigin00);
   tolua_function(tolua_S,"setMargins",tolua_Modules_CCControlButton_setMargins00);
   tolua_function(tolua_S,"create",tolua_Modules_CCControlButton_create00);
   tolua_function(tolua_S,"create",tolua_Modules_CCControlButton_create01);
   tolua_function(tolua_S,"create",tolua_Modules_CCControlButton_create02);
   tolua_function(tolua_S,"create",tolua_Modules_CCControlButton_create03);
   tolua_function(tolua_S,"getTitleForState",tolua_Modules_CCControlButton_getTitleForState00);
   tolua_function(tolua_S,"setTitleForState",tolua_Modules_CCControlButton_setTitleForState00);
   tolua_function(tolua_S,"getTitleColorForState",tolua_Modules_CCControlButton_getTitleColorForState00);
   tolua_function(tolua_S,"setTitleColorForState",tolua_Modules_CCControlButton_setTitleColorForState00);
   tolua_function(tolua_S,"getTitleLabelForState",tolua_Modules_CCControlButton_getTitleLabelForState00);
   tolua_function(tolua_S,"setTitleLabelForState",tolua_Modules_CCControlButton_setTitleLabelForState00);
   tolua_function(tolua_S,"setTitleTTFForState",tolua_Modules_CCControlButton_setTitleTTFForState00);
   tolua_function(tolua_S,"getTitleTTFForState",tolua_Modules_CCControlButton_getTitleTTFForState00);
   tolua_function(tolua_S,"setTitleTTFSizeForState",tolua_Modules_CCControlButton_setTitleTTFSizeForState00);
   tolua_function(tolua_S,"getTitleTTFSizeForState",tolua_Modules_CCControlButton_getTitleTTFSizeForState00);
   tolua_function(tolua_S,"setTitleBMFontForState",tolua_Modules_CCControlButton_setTitleBMFontForState00);
   tolua_function(tolua_S,"getTitleBMFontForState",tolua_Modules_CCControlButton_getTitleBMFontForState00);
   tolua_function(tolua_S,"getBackgroundSpriteForState",tolua_Modules_CCControlButton_getBackgroundSpriteForState00);
   tolua_function(tolua_S,"setBackgroundSpriteForState",tolua_Modules_CCControlButton_setBackgroundSpriteForState00);
   tolua_function(tolua_S,"setBackgroundSpriteFrameForState",tolua_Modules_CCControlButton_setBackgroundSpriteFrameForState00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"kKeyboardReturnTypeDefault",kKeyboardReturnTypeDefault);
  tolua_constant(tolua_S,"kKeyboardReturnTypeDone",kKeyboardReturnTypeDone);
  tolua_constant(tolua_S,"kKeyboardReturnTypeSend",kKeyboardReturnTypeSend);
  tolua_constant(tolua_S,"kKeyboardReturnTypeSearch",kKeyboardReturnTypeSearch);
  tolua_constant(tolua_S,"kKeyboardReturnTypeGo",kKeyboardReturnTypeGo);
  tolua_constant(tolua_S,"kEditBoxInputModeAny",kEditBoxInputModeAny);
  tolua_constant(tolua_S,"kEditBoxInputModeEmailAddr",kEditBoxInputModeEmailAddr);
  tolua_constant(tolua_S,"kEditBoxInputModeNumeric",kEditBoxInputModeNumeric);
  tolua_constant(tolua_S,"kEditBoxInputModePhoneNumber",kEditBoxInputModePhoneNumber);
  tolua_constant(tolua_S,"kEditBoxInputModeUrl",kEditBoxInputModeUrl);
  tolua_constant(tolua_S,"kEditBoxInputModeDecimal",kEditBoxInputModeDecimal);
  tolua_constant(tolua_S,"kEditBoxInputModeSingleLine",kEditBoxInputModeSingleLine);
  tolua_constant(tolua_S,"kEditBoxInputFlagPassword",kEditBoxInputFlagPassword);
  tolua_constant(tolua_S,"kEditBoxInputFlagSensitive",kEditBoxInputFlagSensitive);
  tolua_constant(tolua_S,"kEditBoxInputFlagInitialCapsWord",kEditBoxInputFlagInitialCapsWord);
  tolua_constant(tolua_S,"kEditBoxInputFlagInitialCapsSentence",kEditBoxInputFlagInitialCapsSentence);
  tolua_constant(tolua_S,"kEditBoxInputFlagInitialCapsAllCharacters",kEditBoxInputFlagInitialCapsAllCharacters);
  tolua_cclass(tolua_S,"CCEditBox","CCEditBox","CCControlButton",NULL);
  tolua_beginmodule(tolua_S,"CCEditBox");
   tolua_function(tolua_S,"create",tolua_Modules_CCEditBox_create00);
   tolua_function(tolua_S,"registerScriptEditBoxHandler",tolua_Modules_CCEditBox_registerScriptEditBoxHandler00);
   tolua_function(tolua_S,"addEditBoxEventListener",tolua_Modules_CCEditBox_addEditBoxEventListener00);
   tolua_function(tolua_S,"unregisterScriptEditBoxHandler",tolua_Modules_CCEditBox_unregisterScriptEditBoxHandler00);
   tolua_function(tolua_S,"removeEditBoxEventListener",tolua_Modules_CCEditBox_removeEditBoxEventListener00);
   tolua_function(tolua_S,"setText",tolua_Modules_CCEditBox_setText00);
   tolua_function(tolua_S,"getText",tolua_Modules_CCEditBox_getText00);
   tolua_function(tolua_S,"setFont",tolua_Modules_CCEditBox_setFont00);
   tolua_function(tolua_S,"setFontName",tolua_Modules_CCEditBox_setFontName00);
   tolua_function(tolua_S,"setFontSize",tolua_Modules_CCEditBox_setFontSize00);
   tolua_function(tolua_S,"setFontColor",tolua_Modules_CCEditBox_setFontColor00);
   tolua_function(tolua_S,"setPlaceholderFont",tolua_Modules_CCEditBox_setPlaceholderFont00);
   tolua_function(tolua_S,"setPlaceholderFontName",tolua_Modules_CCEditBox_setPlaceholderFontName00);
   tolua_function(tolua_S,"setPlaceholderFontSize",tolua_Modules_CCEditBox_setPlaceholderFontSize00);
   tolua_function(tolua_S,"setPlaceholderFontColor",tolua_Modules_CCEditBox_setPlaceholderFontColor00);
   tolua_function(tolua_S,"setPlaceHolder",tolua_Modules_CCEditBox_setPlaceHolder00);
   tolua_function(tolua_S,"getPlaceHolder",tolua_Modules_CCEditBox_getPlaceHolder00);
   tolua_function(tolua_S,"setInputMode",tolua_Modules_CCEditBox_setInputMode00);
   tolua_function(tolua_S,"setMaxLength",tolua_Modules_CCEditBox_setMaxLength00);
   tolua_function(tolua_S,"getMaxLength",tolua_Modules_CCEditBox_getMaxLength00);
   tolua_function(tolua_S,"setInputFlag",tolua_Modules_CCEditBox_setInputFlag00);
   tolua_function(tolua_S,"setReturnType",tolua_Modules_CCEditBox_setReturnType00);
   tolua_function(tolua_S,"getReturnType",tolua_Modules_CCEditBox_getReturnType00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"SimpleAudioEngine","SimpleAudioEngine","",NULL);
  tolua_beginmodule(tolua_S,"SimpleAudioEngine");
   tolua_function(tolua_S,"sharedEngine",tolua_Modules_SimpleAudioEngine_sharedEngine00);
   tolua_function(tolua_S,"preloadBackgroundMusic",tolua_Modules_SimpleAudioEngine_preloadBackgroundMusic00);
   tolua_function(tolua_S,"playBackgroundMusic",tolua_Modules_SimpleAudioEngine_playBackgroundMusic00);
   tolua_function(tolua_S,"stopBackgroundMusic",tolua_Modules_SimpleAudioEngine_stopBackgroundMusic00);
   tolua_function(tolua_S,"pauseBackgroundMusic",tolua_Modules_SimpleAudioEngine_pauseBackgroundMusic00);
   tolua_function(tolua_S,"resumeBackgroundMusic",tolua_Modules_SimpleAudioEngine_resumeBackgroundMusic00);
   tolua_function(tolua_S,"rewindBackgroundMusic",tolua_Modules_SimpleAudioEngine_rewindBackgroundMusic00);
   tolua_function(tolua_S,"willPlayBackgroundMusic",tolua_Modules_SimpleAudioEngine_willPlayBackgroundMusic00);
   tolua_function(tolua_S,"isBackgroundMusicPlaying",tolua_Modules_SimpleAudioEngine_isBackgroundMusicPlaying00);
   tolua_function(tolua_S,"getBackgroundMusicVolume",tolua_Modules_SimpleAudioEngine_getBackgroundMusicVolume00);
   tolua_function(tolua_S,"setBackgroundMusicVolume",tolua_Modules_SimpleAudioEngine_setBackgroundMusicVolume00);
   tolua_function(tolua_S,"getEffectsVolume",tolua_Modules_SimpleAudioEngine_getEffectsVolume00);
   tolua_function(tolua_S,"setEffectsVolume",tolua_Modules_SimpleAudioEngine_setEffectsVolume00);
   tolua_function(tolua_S,"playEffect",tolua_Modules_SimpleAudioEngine_playEffect00);
   tolua_function(tolua_S,"stopEffect",tolua_Modules_SimpleAudioEngine_stopEffect00);
   tolua_function(tolua_S,"preloadEffect",tolua_Modules_SimpleAudioEngine_preloadEffect00);
   tolua_function(tolua_S,"unloadEffect",tolua_Modules_SimpleAudioEngine_unloadEffect00);
   tolua_function(tolua_S,"pauseEffect",tolua_Modules_SimpleAudioEngine_pauseEffect00);
   tolua_function(tolua_S,"resumeEffect",tolua_Modules_SimpleAudioEngine_resumeEffect00);
   tolua_function(tolua_S,"pauseAllEffects",tolua_Modules_SimpleAudioEngine_pauseAllEffects00);
   tolua_function(tolua_S,"resumeAllEffects",tolua_Modules_SimpleAudioEngine_resumeAllEffects00);
   tolua_function(tolua_S,"stopAllEffects",tolua_Modules_SimpleAudioEngine_stopAllEffects00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_Modules (lua_State* tolua_S) {
 return tolua_Modules_open(tolua_S);
};
#endif

