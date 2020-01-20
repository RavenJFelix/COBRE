#include "Rengine.h"

namespace cobre
{
    namespace core
    {
        void Rengine::render()
        {
            m_pixels.zSort();
            m_frame << m_pixels;
        }

        std::ostream& operator<<(std::ostream &out, Rengine &rengine)
        {
            return out << rengine.m_frame;
        }

        void operator<<(Rengine &rengine, PixelBuffer &buffer)
        {
            rengine.m_frame << buffer;
        }
    }
}

