#include "Test.h"
#include "Canvas.h"

#include <iostream>
namespace cobre
{
	namespace test
	{
		void canvasAccess()
		{
			Canvas def{};
			Canvas sized{10,20};
			sized[5];	
		}
	}
}
