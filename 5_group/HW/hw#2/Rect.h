#ifndef RECT_H
#define RECT_H

#include <iostream>
using namespace std;

#include "Shape.h"

class Rect : public Shape {
protected:
	virtual void draw();
};

#endif