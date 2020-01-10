#ifndef COBRE_CANVAS_H
#define COBRE_CANVAS_H
#include <cassert>
#include <iostream>
#include <string>
#include <vector>

namespace cobre
{
	class Canvas
	{
	private:
		std::vector<std::string> m_frame{};
	public:
		Canvas(){}
		Canvas(std::size_t x, std::size_t y):
			m_frame{x}
		{

		}
		void resize(int xSize, int ySize);	
		void clear();
		void paint();
		std::string& operator[](int lineIndex);

	};
}

#endif
