#include "PixelBuffer.h"
#include "Pixel.h"

#include <algorithm>
namespace cobre
{
	namespace core
	{

		void PixelBuffer::zSort()
		{
			std::sort(m_pixels.begin(), m_pixels.end(), depthComp);
		}
		Pixel& PixelBuffer::operator[] (std::size_t index)
		{
			return m_pixels[index];
		}

	}
}
