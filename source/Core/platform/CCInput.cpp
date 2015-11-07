#include "CCInput.h"
#include "CCPlatformMacros.h"
#include "SDL_events.h"
#include "CCApplication.h"
#include "CCEGLView.h"
#include "cocoa/CCGeometry.h"


namespace cocos2d
{


CCInput::CCInput()
{

}

CCInput::~CCInput()
{

}

void CCInput::update()
{
    SDL_Event event;
    while (SDL_PollEvent(&event))
        handleEvent(&event);
}

void CCInput::handleEvent(void* evt)
{
    SDL_Event& e = *static_cast<SDL_Event*>(evt);
    const CCSize& size = CCEGLView::sharedOpenGLView()->getFrameSize();

    switch (e.type)
    {
    case SDL_QUIT:
        CCApplication::sharedApplication()->quit();
        break;
    case SDL_MOUSEBUTTONDOWN:
    {
        int x, y;
        SDL_GetMouseState(&x, &y);

        SDL_Event event;
        event.type = SDL_FINGERDOWN;
        event.tfinger.touchId = 0;
        event.tfinger.fingerId = e.button.button - 1;
        event.tfinger.pressure = 1.0f;
        event.tfinger.x = (float)x / size.width;
        event.tfinger.y = (float)y / size.height;
        event.tfinger.dx = 0;
        event.tfinger.dy = 0;
        SDL_PushEvent(&event);
        break;
    }
    case SDL_MOUSEBUTTONUP:
    {
        int x, y;
        SDL_GetMouseState(&x, &y);

        SDL_Event event;
        event.type = SDL_FINGERUP;
        event.tfinger.touchId = 0;
        event.tfinger.fingerId = e.button.button - 1;
        event.tfinger.pressure = 0.0f;
        event.tfinger.x = (float)x / size.width;
        event.tfinger.y = (float)y / size.height;
        event.tfinger.dx = 0;
        event.tfinger.dy = 0;
        SDL_PushEvent(&event);
        break;
    }
    case SDL_MOUSEMOTION:
    {
        int x, y;
        SDL_GetMouseState(&x, &y);

        SDL_Event event;
        event.type = SDL_FINGERMOTION;
        event.tfinger.touchId = 0;
        event.tfinger.fingerId = 0;
        event.tfinger.pressure = 1.0f;
        event.tfinger.x = (float)x / size.width;
        event.tfinger.y = (float)y / size.height;
        event.tfinger.dx = (float)e.motion.xrel / size.width;
        event.tfinger.dy = (float)e.motion.yrel / size.height;
        SDL_PushEvent(&event);
        break;
    }
    case SDL_FINGERDOWN:
    {
        CCPoint pt((int)(e.tfinger.x * size.width), (int)(e.tfinger.y * size.height));
        int id = 0;
        CCEGLView::sharedOpenGLView()->handleTouchesBegin(1, &id, &pt.x, &pt.y);
        break;
    }
    case SDL_FINGERUP:
    {
        CCPoint pt((int)(e.tfinger.x * size.width), (int)(e.tfinger.y * size.height));
        int id = 0;
        CCEGLView::sharedOpenGLView()->handleTouchesEnd(1, &id, &pt.x, &pt.y);
        break;
    }
    case SDL_FINGERMOTION:
    {
        CCPoint pt((int)(e.tfinger.x * size.width), (int)(e.tfinger.y * size.height));
        int id = 0;
        CCEGLView::sharedOpenGLView()->handleTouchesMove(1, &id, &pt.x, &pt.y);
        break;
    }
    default:
        break;
    }
}

}
