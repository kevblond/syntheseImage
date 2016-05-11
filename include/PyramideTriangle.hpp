
#ifndef PROJECT_PyramideTriangle_HPP
#define PROJECT_PyramideTriangle_HPP

#include <iostream>
#include "Object.hpp"
#include "Point.hpp"

class PyramideTriangle : public Object {
protected :
	Point p1;
	Point p2;
	Point p3;
	Point p4;
public :
	PyramideTriangle(Point p1,Point p2,Point p3,Point p4);
	PyramideTriangle(void);
	virtual ~PyramideTriangle();
	bool operator==(const PyramideTriangle &p);
    bool operator!=(const PyramideTriangle &p);
    PyramideTriangle &operator=(const PyramideTriangle &p);
	virtual void print(void) const;
    Point getP1() const;
    Point getP2() const;
    Point getP3() const;
	Point getP4() const;
};

#endif
