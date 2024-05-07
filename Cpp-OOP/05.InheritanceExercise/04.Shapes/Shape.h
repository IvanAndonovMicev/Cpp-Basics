#ifndef Shape_h
#define Shape_h

#include "Vector2D.h"

class Shape {
protected:

	Vector2D center;
	double area;

public:

	Shape(const Vector2D& center = Vector2D(0, 0)) : center(center), area(0) {}

	const Vector2D& getCenter(void) const { return center; }

	double getArea(void) const { return area; }
};

#endif // !Shape_h
