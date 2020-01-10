#include "Pixel.h"
#include "Canvas.h"

#include <iostream>

int main()
{
	cobre::Canvas c{};
	cobre::Canvas sized{10, 20};
	std::cout << sized[9];
	return 0;
}
