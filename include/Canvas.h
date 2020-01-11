#ifndef COBRE_CANVAS_H
#define COBRE_CANVAS_H
#include <cassert>
#include <iostream>
#include <string>
#include <vector>

#include "Pixel.h"
#include "Size2D.h"
namespace cobre
{
	namespace core
	{
		class Canvas
		{
			private:
				std::vector<std::string> m_frame{};
				Size2D m_size{};
				char m_background{' '};
			public:
				Canvas(){}
				Canvas(std::size_t x, std::size_t y):
					m_frame{x}, m_size{x, y}

				{
					for (std::size_t i{0}; i < y; i++)
					{
						m_frame[i].resize(x);
					}	
				}
				void resize(int xSize, int ySize);	
				void clear();
				void paint();

				char getBackground () const {return m_background;}
				void setBackground (char background) {m_background = background;}
				Size2D& getSize() {return m_size;}
				std::string& operator[](int lineIndex);
				char& operator()(std::size_t x, std::size_t y);

				friend std::ostream& operator<< (std::ostream &out, const Canvas &canvas);
				friend void operator<< (Canvas &canvas, const Pixel p);

		};
	}
}

#endif
