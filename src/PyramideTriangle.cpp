#include "../include/PyramideTriangle.hpp"

PyramideTriangle::PyramideTriangle(Point p1,Point p2,Point p3,Point p4){
	this->p1=p1;
	this->p2=p2;
	this->p3=p3;
	this->p4=p4;
}

PyramideTriangle::PyramideTriangle(void){
	this->p1 = Point();
    this->p2 = Point();
    this->p3 = Point();
    this->p4 = Point();
}


PyramideTriangle::~PyramideTriangle(){

}


bool PyramideTriangle::operator==(const PyramideTriangle &t) {
    return this->p1 == t.p1 && this->p2 == t.p2 && this->p3 == t.p3 && this->p4 == p4;
}

bool PyramideTriangle::operator!=(const PyramideTriangle &t) {
    return this->p1 != t.p1 || this->p2 != t.p2 || this->p3 != t.p3 || this->p4 != t.p4;
}

PyramideTriangle PyramideTriangle::operator=(const PyramideTriangle &t) {
    this->p1 = t.p1;
    this->p2 = t.p2;
    this->p3 = t.p3;
	this->p4 = t.p4;
    return (*this);
}

void PyramideTriangle::print() {
	p1.print();
    p2.print();
    p3.print();
	p4.print();
}

Point PyramideTriangle::getP1() const {
    return p1;
}

Point PyramideTriangle::getP2() const {
    return p2;
}

Point PyramideTriangle::getP3() const {
    return p3;
}

Point PyramideTriangle::getP4() const {
    return p4;
}
