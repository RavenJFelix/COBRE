#ifndef COBRE_PIXEL_BUFFER_H
#define COBRE_PIXEL_BUFFER_H
#include "Pixel.h"

#include <vector>
namespace cobre
{
	namespace core
	{
		class PixelBuffer
		{
		private:
			std::vector<Pixel> m_pixels{};
		
		public:
			PixelBuffer(){}
			PixelBuffer(std::size_t size):
				m_pixels{size}
			{
			}
			/**
			 * Sorts all Pixels in ascending order by zdepth
			 * so higher pixels take precedence in the final render
			 */
			std::size_t size() {return m_pixels.size();}
			void zSort();
			Pixel& operator[] (std::size_t index);
		};
	}
}

#endif
