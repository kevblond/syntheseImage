
#ifndef RAY_HPP
#define RAY_HPP

#include <iostream>
#include "Point.hpp"
#include "Vector.hpp"

class Ray{
  private:
    Point origin;
    Vector direction;
 
  public:
	Ray();
    Ray(Point origin,Vector direction);
    ~Ray();
 
    Point getOrigin() const;
    Vector getDirection() const;
};
#endif
