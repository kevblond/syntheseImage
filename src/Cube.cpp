#include <iostream>
#include "../include/Cube.hpp"

Cube::Cube(Point p1,Vector v1,Vector v2){
	this->p1 = p1;
	this->v1 = v1;
	this->v2 = v2;
}

Cube::~Cube(){

}


bool Cube::operator==(const Cube &c) {
    return this->v1.getNorme() == v1.getNorme() && this->v2.getNorme() == v2.getNorme();
}

bool Cube::operator!=(const Cube &c) {
    return this->v1.getNorme() != v1.getNorme() || this->v2.getNorme() != v2.getNorme();
}

Cube Cube::operator=(const Cube &c) {
    this->p1 = c.p1;
	this->v1 = c.v1;
	this->v2 = c.v2;
    return (*this);
}

void Cube::print() {
	p1.print();
    v1.print();
	v2.print();
}

Point Cube::getP1() const {
    return p1;
}

Vector Cube::getV1() const {
    return v1;
}

Vector Cube::getV2() const {
    return v2;
}