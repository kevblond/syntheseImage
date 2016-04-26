
#include "../include/Triangle.hpp"

Triangle::Triangle(Point p1,Point p2,Point p3){
	this.p1=p1;
	this.p2=p2;
	this.p3=p3;
}

~Triangle::Triangle(){

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


float Point::getP1() const {
    return p1;
}

float Point::getP2() const {
    return p2;
}

float Point::getP3() const {
    return p3;
}