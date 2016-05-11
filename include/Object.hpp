
#ifndef PROJECT_OBJECT_HPP
#define PROJECT_OBJECT_HPP

#include <iostream>

#include "Ray.hpp"
#include "Color.hpp"

class Object{
public:
    Object ();
    Object(const Object &o);
    virtual ~Object();
	virtual void print(void) const = 0;
	virtual bool intersect(const Ray& ray, float& dist) = 0;
    virtual Color getColor() const = 0;
};

#endif //PROJECT_OBJECT_HPP
