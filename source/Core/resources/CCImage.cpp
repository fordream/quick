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
#define __CC_PLATFORM_IMAGE_CPP__
//#include "platform/CCImageCommon_cpp.h"
#include "SDL_ttf.h"
#include "CCFileUtils.h"
#include "CCImage.h"
#include "CCStdC.h"
#include "../stb/stb_image.h"
#include "CCCommon.h"
#include "../stb/stb_image_write.h"

NS_CC_BEGIN

CCImage::CCImage()
: m_nWidth(0)
, m_nHeight(0)
, m_nBitsPerComponent(0)
, m_pData(0)
, m_bHasAlpha(false)
, m_bPreMulti(false)
, _img_free_func(NULL)
{

}

CCImage::~CCImage()
{
    if (_img_free_func)
        _img_free_func(m_pData);
    else
	    CC_SAFE_DELETE_ARRAY(m_pData);
}


bool CCImage::initWithImageFile(const char * strPath, EImageFormat eImgFmt/* = eFmtPng*/)
{
	std::string fullPath = CCFileUtils::sharedFileUtils()->fullPathForFilename(strPath);

	return initWithImageFileThreadSafe(fullPath.c_str(), eImgFmt);
}

bool CCImage::initWithImageData(void * pData,
	int nDataLen,
	EImageFormat eFmt/* = eSrcFmtPng*/,
	int nWidth/* = 0*/,
	int nHeight/* = 0*/,
	int nBitsPerComponent/* = 8*/)
{

	if (eFmt != kFmtRawData)
	{
		int w, h, components;
        // may be very slow for jpg.
        m_pData = stbi_load_from_memory((stbi_uc*)pData, nDataLen, &w, &h, (int*)&components, 4);

        _img_free_func = stbi_image_free;

		m_nWidth = w;
		m_nHeight = h;

	}
	else
	{
		bool bRet = false;
		do
		{
			CC_BREAK_IF(0 == nWidth || 0 == nHeight);

			m_nBitsPerComponent = nBitsPerComponent;
			m_nHeight = (short)nHeight;
			m_nWidth = (short)nWidth;
			m_bHasAlpha = true;
			m_bPreMulti = false;

			// only RGBA8888 supported
			int nBytesPerComponent = 4;
			int nSize = nHeight * nWidth * nBytesPerComponent;
			m_pData = new unsigned char[nSize];
			CC_BREAK_IF(!m_pData);
			memcpy(m_pData, pData, nSize);

			bRet = true;
		} while (0);
	}
	m_bHasAlpha = true;


	return true;
}

bool CCImage::initWithImageFileThreadSafe(const char *fullpath, EImageFormat imageType/* = kFmtPng*/)
{
	bool bRet = false;
	unsigned long nSize = 0;

	unsigned char* pBuffer = CCFileUtils::sharedFileUtils()->getFileData(fullpath, "rb", &nSize);
	if (pBuffer != NULL && nSize > 0)
	{
		bRet = initWithImageData(pBuffer, nSize, imageType);
	}
	CC_SAFE_DELETE_ARRAY(pBuffer);

	return bRet;
}

bool CCImage::saveToFile(const char *pszFilePath, bool bIsToRGB/* = true*/)
{
	if (strstr(pszFilePath, ".png") != NULL)
	{
		stbi_write_png(pszFilePath, m_nWidth, m_nHeight, 4, m_pData, 0);
		return true;
	}
	else if (strstr(pszFilePath, ".bmp") != NULL)
	{
		stbi_write_bmp(pszFilePath, m_nWidth, m_nHeight, 4, m_pData);
		return true;
	}
	else if (strstr(pszFilePath, ".tga") != NULL)
	{
		stbi_write_tga(pszFilePath, m_nWidth, m_nHeight, 4, m_pData);
		return true;
	}

	return false;
}


NS_CC_END
