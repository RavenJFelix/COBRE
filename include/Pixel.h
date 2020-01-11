#ifndef COBRE_PIXEL_H
#define COBRE_PIXEL_H
#include "Pos2D.h"

namespace cobre
{
	namespace core
	{
		struct Pixel
		{
			Pos2D m_pos;
			char m_texture;
			int m_zdepth;
		};
	}
}

#endif

