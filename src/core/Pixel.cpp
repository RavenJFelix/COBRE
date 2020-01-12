#include "Pixel.h"

namespace cobre
{
	namespace core
	{
		bool depthComp(const Pixel &p1, const Pixel &p2)
		{
			return (p1.zdepth < p2.zdepth);
		}
	}
}
