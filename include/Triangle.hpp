
#ifndef PROJECT_Triangle_HPP
#define PROJECT_Triangle_HPP

#include "Point.hpp"

class Triangle {
protected :
	Point p1;
	Point p2;
	Point p3;
public :
	Triangle(Point p1,Point p2,Point p3);
	
	~Triangle();
	bool operator==(const Triangle &p);
    bool operator!=(const Triangle &p);
    Triangle operator=(const Triangle &p);
	void print();
    Point getP1() const;
    Point getP2() const;
    Point getP3() const;
};

#endif
