#ifndef COBRE_GELEMENT_H
#define COBRE_GELEMENT_H
#include "PixelBuffer.h"

namespace cobre
{
    namespace core
    {
        class Gelement
        {
            virtual PixelBuffer draw() = 0; 
        };
    }
}
#endif
