#ifndef COBRE_DEFINITIONS_H
#define COBRE_DEFINITIONS_H
#include "Pair2D.h"

#include <stdlib.h>
namespace cobre
{
	namespace core
	{
		using size2d_t = Pair2D<std::size_t>;
		using canvasPos_t = Pair2D<std::size_t>;
		using realmPos_t = Pair2D<float>;
		using realmPosQuant_t = Pair2D<long>;
	}
}
#endif
