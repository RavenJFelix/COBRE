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

		const Pixel& PixelBuffer::operator[] (std::size_t index) const
		{
			return m_pixels[index];
		}
		void operator<< (PixelBuffer &buffer, Pixel &p)
		{
			buffer.m_pixels.push_back(p);		
		}

		void PixelBuffer::clear()
		{

			m_pixels.clear();
		}


	}
}
