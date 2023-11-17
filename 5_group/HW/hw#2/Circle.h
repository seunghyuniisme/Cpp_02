#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
using namespace std;

#include "Shape.h"

class Circle : public Shape {
protected:
	virtual void draw();
};

#endif