//
// Created by Narex on 05/04/2016.
//

#include "../include/Vector.hpp"

Vector::Vector(float x, float y, float z)
        : x(x),
          y(y),
          z(z) { }

Vector::Vector(void) : x(0), y(0), z(0) { }

Vector::~Vector() { }

Vector Vector::operator+(const Vector &p) {
    return Vector(this->x + p.x, this->y + p.y, this->z + p.z);
}

Vector Vector::operator-(const Vector &p) {
    return Vector(this->x - p.x, this->y - p.y, this->z - p.z);
}

bool Vector::operator==(const Vector &p) {
    return this->x == p.x && this->y == p.y && this->z == p.z;
}

bool Vector::operator!=(const Vector &p) {
    return this->x != p.x || this->y != p.y || this->z != p.z;
}

Vector Vector::operator=(const Vector &p) {
    this->x = p.x;
    this->y = p.y;
    this->z = p.z;
    return (*this);
}

void Vector::print(){
	std::cout << "Vector: x: " << x << "; y: " << y << "; z: " << z << std::endl;
}

float Vector::getX() const {
    return x;
}

float Vector::getY() const {
    return y;
}

float Vector::getZ() const {
    return z;
}

float Vector::scalarProduct(const Vector &v) {
    return this->x * v.x + this->y * v.y + this->z * v.z;
}

float Vector::getNorme() {
    return sqrt(scalarProduct(*this));
}

