#ifndef UI_H
#define UI_H

#include <iostream>
using namespace std;

#include "Shape.h"

class UI {
public:
	static int getMenu();
	static int getShapeTypeToInsert();
	static int getShapeIndexToDelete();
};

#endif