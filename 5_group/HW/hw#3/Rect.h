#include <iostream>
using namespace std;

#ifndef RECT_H
#define RECT_H

class Rect : public Shape {
protected:
	virtual void draw();
};

#endif // !RECT_H
