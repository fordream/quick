/****************************************************************************
Copyright (c) 2010 cocos2d-x.org

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

#ifndef __CC_IMAGE_H__
#define __CC_IMAGE_H__

#include "cocoa/CCObject.h"
#include "ccTypes.h"

NS_CC_BEGIN

#if (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_WP8)
class CCFreeTypeFont;
#endif

/**
 * @addtogroup platform
 * @{
 */

typedef enum
{
    kFmtJpg = 0,
    kFmtPng,
    kFmtTiff,
    kFmtWebp,
    kFmtRawData,
    kFmtUnKnown
}EImageFormat;

class CC_DLL CCImage : public CCObject
{
public:
    /**
     @js ctor
     */
    CCImage();
    /**
     * @js NA
     * @lua NA
     */
    ~CCImage();
    
    /**
    @brief  Load the image from the specified path. 
    @param strPath   the absolute file path.
    @param imageType the type of image, currently only supporting two types.
    @return  true if loaded correctly.
    */
    bool initWithImageFile(const char * strPath, EImageFormat imageType = kFmtPng);

    /*
     @brief The same result as with initWithImageFile, but thread safe. It is caused by
            loadImage() in CCTextureCache.cpp.
     @param fullpath  full path of the file.
     @param imageType the type of image, currently only supporting two types.
     @return  true if loaded correctly.
     */
    bool initWithImageFileThreadSafe(const char *fullpath, EImageFormat imageType = kFmtPng);

    /**
    @brief  Load image from stream buffer.

    @warning kFmtRawData only supports RGBA8888.
    @param pBuffer  stream buffer which holds the image data.
    @param nLength  data length expressed in (number of) bytes.
    @param nWidth, nHeight, nBitsPerComponent are used for kFmtRawData.
    @return true if loaded correctly.
    @js NA
    */
    bool initWithImageData(void * pData, 
		int nDataLen,
		EImageFormat eFmt = kFmtUnKnown,
		int nWidth = 0,
		int nHeight = 0,
		int nBitsPerComponent = 8);

    unsigned char *   getData()               { return m_pData; }
    int               getDataLen()            { return m_nWidth * m_nHeight; }
	
	//ccColor4B getColor4B(float x, float y);
	//ccColor4F getColor4F(float x, float y);


	ccColor4B getColor4B(float x, float y)
	{
		ccColor4B color = { 0, 0, 0, 0 };
		int ix = (int)x - 1;
		int iy = (int)y - 1;
        unsigned char* pos = m_pData;
        pos += (iy*getWidth() + ix) * 4;
        color.r = *(pos++);
        color.g = *(pos++);
        color.b = *(pos++);
        color.a = *(pos++);
		return color;
	};

	ccColor4F getColor4F(float x, float y)
	{
		return ccc4FFromccc4B(getColor4B(x, y));
	};


    bool hasAlpha()                     { return m_bHasAlpha;   }
    bool isPremultipliedAlpha()         { return m_bPreMulti;   }


    /**
    @brief    Save CCImage data to the specified file, with specified format.
    @param    pszFilePath        the file's absolute path, including file suffix.
    @param    bIsToRGB        whether the image is saved as RGB format.
    */
    bool saveToFile(const char *pszFilePath, bool bIsToRGB = true);

    CC_SYNTHESIZE_READONLY(unsigned short,   m_nWidth,       Width);
    CC_SYNTHESIZE_READONLY(unsigned short,   m_nHeight,      Height);
    CC_SYNTHESIZE_READONLY(int,     m_nBitsPerComponent,   BitsPerComponent);

protected:

    // @warning kFmtRawData only support RGBA8888
    bool _initWithRawData(void *pData, int nDatalen, int nWidth, int nHeight, int nBitsPerComponent, bool bPreMulti);

    unsigned char *m_pData;
    bool m_bHasAlpha;
    bool m_bPreMulti;

#if (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_WP8)
    CCFreeTypeFont* m_ft;
#endif

private:
    // noncopyable
    CCImage(const CCImage&    rImg);
    CCImage & operator=(const CCImage&);


};

// end of platform group
/// @}

NS_CC_END

#endif    // __CC_IMAGE_H__
