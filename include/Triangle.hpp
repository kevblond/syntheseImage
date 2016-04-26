
#ifndef PROJECT_Triangle_HPP
#define PROJECT_Triangle_HPP

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
    float getP1() const;
    float getP2() const;
    float getP3() const;
};

#endif