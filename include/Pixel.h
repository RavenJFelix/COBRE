#ifndef COBRE_PIXEL_H
#define COBRE_PIXEL_H
#include "Pos2D.h"

namespace cobre
{
	struct Pixel
	{
		Pos2D m_pos;
		int m_zdepth;
		char m_texture;
	};
}

#endif

