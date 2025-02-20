#pragma once
#include <list>
#include "point.h"
class figure
{
public:
	std::list<point> pList;
	void draw();
};

