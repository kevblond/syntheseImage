#include "../include/Ray.hpp"

Ray::Ray()
	: origin(Point()),
	  direction(Vector()) { }

Ray::Ray(Point origin,Vector direction)
	: origin(origin),
	  direction(direction) { }

Ray::~Ray(){
  
}

Point Ray::getOrigin() const {
    return origin;
}

Vector Ray::getDirection() const{
    return direction;
}
