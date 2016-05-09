//
// Created by [...] on 05/04/2016.
//

#include "../include/Point.hpp"

Point::Point(float x, float y, float z)
        : x(x),
          y(y),
          z(z) { }

Point::Point(void) : x(0), y(0), z(0) { }

Point::~Point() { }

bool Point::operator==(const Point &p) {
    return this->x == p.x && this->y == p.y && this->z == p.z;
}

bool Point::operator!=(const Point &p) {
    return this->x != p.x || this->y != p.y || this->z != p.z;
}

Point &Point::operator=(const Point &p) {
    this->x = p.x;
    this->y = p.y;
    this->z = p.z;
    return (*this);
}

void Point::print(void) const {
	std::cout << "Point: x: " << x << "; y: " << y << "; z: " << z << std::endl;
}

float Point::getX() const {
    return x;
}

float Point::getY() const {
    return y;
}

float Point::getZ() const {
    return z;
}

float Point::sqrDist(const Point &p) {
    float dx = p.x - this->x;
    float dy = p.y - this->y;
    return SQR(dx) + SQR(dy);
}


