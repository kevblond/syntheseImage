#include "../include/Color.hpp"


Color::Color(float R, float G,float B) {
	this->R=R;
	this->G=G;
	this->B=B;
}
Color::Color() {
this->R=0.;
this->G=0.;
this->B=0.;
}

Color::~Color(){
  
}

float Color::getR() const{
	return R;
}
float Color::getG() const{
	return G;
}
float Color::getB() const{
	return B;
}
void Color::print() const{
	std::cout << "testprint" << std::endl;
}
