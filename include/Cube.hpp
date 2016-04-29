
#ifndef PROJECT_Cube_HPP
#define PROJECT_Cube_HPP

#include <iostream>
#include "Point.hpp"
#include "Vector.hpp"

class Cube {
protected :
	Point p1;
	Vector v1;
	Vector v2;
	Vector v3;
public :
	Cube(Point p1,Vector v1,Vector v2,Vector v3);
	Cube(Point p1,int width,int height, int hight);
	~Cube();
	bool operator==(const Cube &p);
    bool operator!=(const Cube &p);
    Cube operator=(const Cube &p);
	void print();
    Point getP1() const;
	Vector getV1() const;
	Vector getV2() const;
	Vector getV3() const;
};

#endif
