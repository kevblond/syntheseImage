#include "../include/Cube.hpp"

Cube::Cube(Point p1,Vector v1,Vector v2,Vector v3,Color color){
	if(v1.getNorme() != v2.getNorme || v2.getNorme != v3.getNorme()){
		std::exit(EXIT_FAILURE);
	}
	/*
	if(!v1.perpendiculaire(v2) || !v2.perpendiculaire(v3)){
		std::exit(EXIT_FAILURE);
	}
	*/
	this->p1 = p1;
	this->v1 = v1;
	this->v2 = v2;
	this->v3 = v3;
	this->color = color;
}

Cube::Cube(Point p1,int width,int height, int hight,Color color){
	this->p1 = p1;
	
	this->v1 = Vector(width,0.,0.);
	this->v2 = Vector(0.,height,0.);
	this->v3 = Vector(0.,0.,hight);
	this->color = color;
}
Cube::Cube(void){
	this->p1 = Point();
	this->v1 = Vector();
	this->v2 = Vector();
	this->v3 = Vector();
	this->color = Color();
}
Cube::~Cube(){

}


bool Cube::operator==(const Cube &c) {
    return this->v1.getNorme() == v1.getNorme() && this->v2.getNorme() == v2.getNorme() && this->v3.getNorme() == v3.getNorme();
}

bool Cube::operator!=(const Cube &c) {
    return this->v1.getNorme() != v1.getNorme() || this->v2.getNorme() != v2.getNorme() || this->v3.getNorme() != v3.getNorme();
}

Cube &Cube::operator=(const Cube &c) {
	return *Cube(c.p1,c.v1,c.v2,c.v3,c.color);
}

void Cube::print(void) const {
	std::cout << "Cube : " << std::endl;
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

Color Cube::getColor(void) const {
	return color;
}

double Cube::minX() const{
	double minVector = std::min(std::min(p1.getX,v1.getX()),std::min(v2.getX(),v3.getX()));
	if(p1.getX()<v1.getX() && p1.getX()<v2.getX() && p1.getX()<v3.getX()){
		return p1.getX();
	}
	return p1.getX() - std::abs(minVector);
}
double Cube::minY() const{
	double minVector = std::min(std::min(p1.getY,v1.getY()),std::min(v2.getY(),v3.getY()));
	if(p1.getY()<v1.getY() && p1.getY()<v2.getY() && p1.getY()<v3.getY()){
		return p1.getY();
	}
	return p1.getY() - std::abs(minVector);
}
double Cube::minZ() const{
	double minVector = std::min(std::min(p1.getZ,v1.getZ()),std::min(v2.getZ(),v3.getZ()));
	if(p1.getZ()<v1.getZ() && p1.getZ()<v2.getZ() && p1.getZ()<v3.getZ()){
		return p1.getZ();
	}
	return p1.getZ() - std::abs(minVector);
}
double Cube::maxX() const{
	double maxVector = std::max(std::max(p1.getX,v1.getX()),std::max(v2.getX(),v3.getX()));
	if(p1.getX()>v1.getX() && p1.getX()>v2.getX() && p1.getX()>v3.getX()){
		return p1.getX();
	}
	return p1.getX() + std::abs(maxVector);
}
double Cube::maxY() const{
	double maxVector = std::max(std::max(p1.getY,v1.getY()),std::max(v2.getY(),v3.getY()));
	if(p1.getY()>v1.getY() && p1.getY()>v2.getY() && p1.getY()>v3.getY()){
		return p1.getY();
	}
	return p1.getY() + std::abs(maxVector);
}
double Cube::maxZ() const{
	double maxVector = std::max(std::max(p1.getZ,v1.getZ()),std::max(v2.getZ(),v3.getZ()));
	if(p1.getZ()>v1.getZ() && p1.getZ()>v2.getZ() && p1.getZ()>v3.getZ()){
		return p1.getZ();
	}
	return p1.getZ() + std::abs(maxVector);
}

bool Cube::intersect(const Ray& ray, float& dist) {
    double tmin = std::numeric_limits<double>::min(), tmax = std::numeric_limits<double>::max();//-infini et infini
    if (ray.getDirection.getX() != 0.0) {
        double tx1 = (this.minX() - ray.getOrigin().getX())/ray.getDirection().getX();
        double tx2 = (this.maxX() - ray.getOrigin().getX())/ray.getDirection().getX();
        tmin = std::max(tmin, std::min(tx1, tx2));
        tmax = std::min(tmax, std::max(tx1, tx2));
    }
 
    if (ray.getDirection.getY() != 0.0) {
        double ty1 = (this.minY() - ray.getOrigin().getY())/ray.getDirection().getY();
        double ty2 = (this.maxY() - ray.getOrigin().getY())/ray.getDirection().getY();
        tmin = std::max(tmin, std::min(ty1, ty2));
        tmax = std::min(tmax, std::max(ty1, ty2));
    }
	if (ray.getDirection.getZ() != 0.0) {
        double tz1 = (this.minZ() -  ray.getOrigin().getZ())/ray.getDirection().getZ();
        double tz2 = (this.maxZ() -  ray.getOrigin().getZ())/ray.getDirection().getZ();
        tmin = std::max(tmin, std::min(tz1, tz2));
        tmax = std::min(tmax, std::max(tz1, tz2));
    }
	dist = tmin;
    return tmax >= tmin;
}
