//
// Created by cmgif on May, 4th 2016
//

#ifndef PROJECT_SPHERE_HPP
#define PROJECT_SPHERE_HPP

#include <iostream>
#include "Object.hpp"
#include "Point.hpp"

class Sphere : public Object {
    protected:
        Point center;
        float radius;
    
    public:
        Sphere(void);
        Sphere(Point center, float radius);

        ~Sphere();
        bool operator==(const Sphere &s);
        bool operator!=(const Sphere &s);
        Sphere operator=(const Sphere &s);
		virtual void print();
};


#endif //PROJECT_SPHERE_HPP
