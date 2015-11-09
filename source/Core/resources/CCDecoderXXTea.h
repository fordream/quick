#ifndef __CCDECODERXXTEA_H__
#define __CCDECODERXXTEA_H__

#include "CCFileUtils.h"

NS_CC_BEGIN

/*
    usage:

    CCFileUtils::sharedFileUtils()
        ->setDecoder(new CCDecoderXXTea("your_sign", "your_key"));
*/

class CC_DLL CCDecoderXXTea : public CCFileUtilsDecoder
{
public:
    CCDecoderXXTea(const std::string& sign, const std::string& key);

    virtual unsigned char* decode(unsigned char* buffer_in, unsigned long* size_inout);

protected:

    std::string _key;
    std::string _sign;
};

NS_CC_END

#endif //__CCDECODERXXTEA_H__
