#ifndef COBRE_PIXEL_H
#define COBRE_PIXEL_H
#include "CobreDef.h"
#include "Pair2D.h"

#include <stdlib.h>

namespace cobre
{
	namespace core
	{
		struct Pixel
		{
			
			canvasPos_t pos;
			char texture;
			int zdepth;
		};
		bool depthComp(const Pixel &p1, const Pixel &p2);
	}
}

#endif

