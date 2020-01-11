#include "Canvas.h"

#include <iostream>
#include <stddef.h>

namespace cobre
{
	namespace core
	{
		std::string& Canvas::operator[](int index)
		{
			return m_frame[index];
		}

		void Canvas::clear()
		{
			std::string blank(m_size.x, m_background);

			for(std::size_t i{0}; i < m_size.y;i++)
			{
				m_frame[i] = blank;
			}
		}	

		std::ostream& operator<< (std::ostream &out, const Canvas &canvas)
		{
			for(std::size_t i{0}; i < canvas.m_size.y; i++)
			{
				out << canvas.m_frame[i] << '\n';
			}
			return out;	
		}

	}
}
