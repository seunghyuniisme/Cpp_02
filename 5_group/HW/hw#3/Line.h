#include <iostream>
using namespace std;

#ifndef LINE_H
#define LINE_H

class Line : public Shape {
protected:
	virtual void draw();
};

#endif // !LINE_H
