
#ifndef PROJECT_Camera_HPP
#define PROJECT_Camera_HPP

#include <iostream>
#include "Point.hpp"

class Camera {
protected :
	Point pos;
	Point target;
	double theta;
	double phi;
	double dist;
public :
	Camera(Point pos,Point target,double theta,double phi,double dist);
	Camera(Point pos,double theta,double phi,double dist);
	~Camera();
	bool operator==(const Camera &p);
    bool operator!=(const Camera &p);
    Camera operator=(const Camera &p);
	void print();
	Point getPos() const;
	Point getTarget() const;
	double getTheta() const;
	double getPhi() const;
	double getDist() const;
};

#endif