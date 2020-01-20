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

        void Rengine::resize(std::size_t x, std::size_t y)
        {
            m_frame.resize(x, y);
        }

    }
}

