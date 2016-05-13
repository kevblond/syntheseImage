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

bool Cube::intersect(const Ray& ray, float& dist) {
    double tmin = -99999, tmax = 99999;//-infini et infini
	/*
	* implementer minX minY minZ maxX maxY maxZ dans cube ou trouvez un moyen plus facile de le trouver.
    if (ray.getDirection.getX() != 0.0) {
        double tx1 = (this.min.x - ray.getOrigin().getX())/ray.getDirection().getX();
        double tx2 = (this.max.x - ray.getOrigin().getX())/ray.getDirection().getX();
 
        tmin = max(tmin, min(tx1, tx2));
        tmax = min(tmax, max(tx1, tx2));
    }
 
    if (ray.getDirection.getY() != 0.0) {
        double ty1 = (this.min.y - ray.getOrigin().getY())/ray.getDirection().getY();
        double ty2 = (this.max.y - ray.getOrigin().getY())/ray.getDirection().getY();
 
        tmin = max(tmin, min(ty1, ty2));
        tmax = min(tmax, max(ty1, ty2));
    }
	if (ray.getDirection.getZ() != 0.0) {
        double tz1 = (this.min.z -  ray.getOrigin().getZ())/ray.getDirection().getZ();
        double tz2 = (this.max.z -  ray.getOrigin().getZ())/ray.getDirection().getZ();
 
        tmin = max(tmin, min(tz1, tz2));
        tmax = min(tmax, max(tz1, tz2));
    }
	*/
    return tmax >= tmin;
}
