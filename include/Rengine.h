#ifndef RENGINE_H
#define RENGINE_H

#include "Canvas.h"
#include "Pixel.h"
#include "PixelBuffer.h"

#include <vector>

namespace cobre
{
    namespace core
    {
        class Rengine
        {
            private:
                std::vector<Pixel> m_pixBuffer;
            public:
                Rengine(){}


        };
    }
}	

#endif
