#include "../include/Cube.hpp"

Cube::Cube(Point p1,Vector v1,Vector v2,Vector v3){
	this->p1 = p1;
	this->v1 = v1;
	this->v2 = v2;
	this->v3 = v3;
}

Cube::Cube(Point p1,int width,int height, int hight){
	this->p1 = p1;
	
	this->v1 = Vector(width,0.,0.);
	this->v2 = Vector(0.,height,0.);
	this->v3 = Vector(0.,0.,hight);
}
Cube::Cube(void){
	this->p1 = Point(0.,0.,0.);
	this->v1 = Vector(1.,0.,0.);
	this->v2 = Vector(0.,1.,0.);
	this->v3 = Vector(0.,0.,1.);
}
Cube::~Cube(){

}


bool Cube::operator==(const Cube &c) {
    return this->v1.getNorme() == v1.getNorme() && this->v2.getNorme() == v2.getNorme() && this->v3.getNorme() == v3.getNorme();
}

bool Cube::operator!=(const Cube &c) {
    return this->v1.getNorme() != v1.getNorme() || this->v2.getNorme() != v2.getNorme() || this->v3.getNorme() != v3.getNorme();
}

Cube Cube::operator=(const Cube &c) {
    this->p1 = c.p1;
	this->v1 = c.v1;
	this->v2 = c.v2;
	this->v3 = c.v3;
    return (*this);
}

void Cube::print() {
	p1.print();
    v1.print();
	v2.print();
	v3.print();
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

Vector Cube::getV3() const {
    return v3;
}