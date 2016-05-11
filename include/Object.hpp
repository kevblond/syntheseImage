
#ifndef PROJECT_OBJECT_HPP
#define PROJECT_OBJECT_HPP

#include <iostream>

using namespace std;

class Object{
public:
    Object ();
    Object(const Object &o);
    virtual ~Object();
	virtual void print(void) const = 0;
	virtual bool intersect(const Ray& ray, float& dist) = 0;
    virtual void computeColorNormal(const Ray& ray, float dist, Color& color, Vector3df& normal) = 0;
};

#endif //PROJECT_OBJECT_HPP
