#ifndef LINE_H
#define LINE_H

#include <iostream>
using namespace std;

#include "Shape.h"

class Line : public Shape {
protected:
	virtual void draw();
};

#endif