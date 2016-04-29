#include "../include/Camera.hpp"

Camera::Camera(Point pos,Point target,double theta,double phi,double dist){
	this->pos=pos;
	this->target=target;
	this->theta=theta;
	this->phi=phi;
	this->dist=dist;
}

Camera::Camera(Point pos,double theta,double phi,double dist){
	this->pos=pos;
	this->target=Point(0.,0.,0.);
	this->theta=theta;
	this->phi=phi;
	this->dist=dist;
}

Camera::~Camera(){

}

void Camera::print(){
	std::cout << "pos :\n";
	pos.print();
	std::cout << "target :\n";
	target.print();
	std::cout << "theta :"<<theta<<"\n";
	std::cout << "phi :"<<phi<<"\n";
	std::cout << "dist :"<<dist<<"\n";
}
Point Camera::getPos() const{
	return pos;
}
Point Camera::getTarget() const{
	return target;
}
double Camera::getTheta() const{
	return theta;
}
double Camera::getPhi() const{
	return phi;
}
double Camera::getDist() const{
	return dist;
}
