#ifndef COBRE_PIXEL_H
#define COBRE_PIXEL_H
#include "Pair2D.h"

#include <stdlib.h>

namespace cobre
{
	namespace core
	{
		struct Pixel
		{
			using  pos_t = Pair2D<std::size_t>;
			
			pos_t m_pos;
			char m_texture;
			int m_zdepth;
		};
	}
}

#endif

