#include <iostream>
#include "../include/Triangle.hpp"

Triangle::Triangle(Point p1,Point p2,Point p3){
	this->p1=p1;
	this->p2=p2;
	this->p3=p3;
}

Triangle::~Triangle(){

}


bool Triangle::operator==(const Triangle &t) {
    return this->p1 == t.p1 && this->p2 == t.p2 && this->p3 == t.p3;
}

bool Triangle::operator!=(const Triangle &t) {
    return this->p1 != t.p1 || this->p2 != t.p2 || this->p3 != t.p3;
}

Triangle Triangle::operator=(const Triangle &t) {
    this->p1 = t.p1;
    this->p2 = t.p2;
    this->p3 = t.p3;
    return (*this);
}

void Triangle::print() {
	p1.print();
    p2.print();
    p3.print();
}

Point Triangle::getP1() const {
    return p1;
}

Point Triangle::getP2() const {
    return p2;
}

Point Triangle::getP3() const {
    return p3;
}
