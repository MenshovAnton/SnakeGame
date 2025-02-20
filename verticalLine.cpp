#include <iostream>
#include <list>
#include "verticalLine.h"
#include "point.h"
#include "figure.h"

verticalLine::verticalLine(int yTop, int yBottom, int x, char sym)
{
	for (int y = yTop; y <= yBottom; y++) {
		point p{ x, y, sym };
		pList.push_back(p);
	}
}
