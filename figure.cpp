#include "figure.h"
#include <list>
#include "point.h"

std::list<point> pList;

void figure::draw()
{
	for (point p : pList)
	{
		p.draw();
	}
}