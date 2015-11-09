
#include "CCLuaEngine.h"
#include "CCFileUtils.h"
#include "CCDecoderXXTea.h"
#include "xxtea.h"


namespace cocos2d
{

CCDecoderXXTea::CCDecoderXXTea(const std::string& sign, const std::string& key)
: _sign(sign)
, _key(key)
{
}


unsigned char* CCDecoderXXTea::decode(unsigned char* buffer_in, unsigned long* size_inout)
{
    unsigned char* buffer;

    if (memcmp(buffer_in, _sign.c_str(), _sign.size()) == 0) 
    {
        xxtea_long len = 0;
        unsigned char * tbuff;
        tbuff = xxtea_decrypt(buffer_in + _sign.size(),
            (xxtea_long)(*size_inout) - (xxtea_long)_sign.size(),
            (unsigned char*)_key.c_str(),
            (xxtea_long)_key.size(),
            &len);

        buffer = new unsigned char[len];
        memcpy(buffer, tbuff, len);
        free(tbuff);

        *size_inout = len;
        return buffer;
    }

    return NULL;
}

}