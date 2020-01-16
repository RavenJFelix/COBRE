#include "PixelBuffer.h"
#include "Pixel.h"

#include <algorithm>
#include <iterator>
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
			buffer.m_pixels.push_back(std::move(p));		
		}
		void operator<< (PixelBuffer &destBuff, PixelBuffer &sourceBuff)
		{
			destBuff.m_pixels.insert(destBuff.m_pixels.end(),
						std::make_move_iterator(sourceBuff.m_pixels.begin()),
						std::make_move_iterator(sourceBuff.m_pixels.end()));
		}

		void PixelBuffer::clear()
		{

			m_pixels.clear();
		}
	}
}
