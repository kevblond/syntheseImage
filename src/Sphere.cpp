//
// Created by cmgif on May, 4th 2016
//

#include "../include/Sphere.hpp"

Sphere::Sphere(Point center, float radius)
        : center(center),
          radius(radius) { }

Sphere::Sphere(void) : center(Point(0., 0., 0.)), radius(1.) { }

Sphere::~Sphere() { }


bool Sphere::operator==(const Sphere &s) {
    return this->center == s.center && this->radius == s.radius;
}

bool Sphere::operator!=(const Sphere &s) {
    return this->center != s.center || this->radius != s.radius;
}

Sphere Sphere::operator=(const Sphere &s) {
    this->center = s.center;
    this->radius = s.radius;
    return (*this);
}

void Sphere::print() {
	std::cout << "Sphere: C: ";
    center.print();
    std::cout << "; r: " << radius << endl;
}
