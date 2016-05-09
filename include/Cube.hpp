
#ifndef PROJECT_Cube_HPP
#define PROJECT_Cube_HPP

#include <iostream>
#include "Object.hpp"
#include "Point.hpp"
#include "Vector.hpp"

class Cube : public Object {
protected :
	Point p1;
	Vector v1;
	Vector v2;
	Vector v3;
public :
	Cube(Point p1,Vector v1,Vector v2,Vector v3);
	Cube(Point p1,int width,int height, int hight);
	Cube(void);
	~Cube();
	bool operator==(const Cube &p);
    bool operator!=(const Cube &p);
    Cube &operator=(const Cube &p);
	virtual void print(void) const;
    Point getP1() const;
	Vector getV1() const;
	Vector getV2() const;
	Vector getV3() const;
};

#endif
