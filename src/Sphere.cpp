//
// Created by cmgif on May, 4th 2016
//

#include "../include/Sphere.hpp"

Sphere::Sphere(Point center, float radius,Color color)
        : center(center),
          radius(radius),
	color(color) { }

Sphere::Sphere(void) : center(Point(0., 0., 0.)), radius(1.), color(1., 1., 1.){ }

Sphere::~Sphere() { }


bool Sphere::operator==(const Sphere &s) {
    return this->center == s.center && this->radius == s.radius;
}

bool Sphere::operator!=(const Sphere &s) {
    return this->center != s.center || this->radius != s.radius;
}

Sphere &Sphere::operator=(const Sphere &s) {
    this->center = s.center;
    this->radius = s.radius;
	this->color = s.color;
    return (*this);
}

bool Sphere::intersect(const Ray &ray, float& dist) {
  
    Vector dir = ray.getDirection();
    Vector ori(ray.getOrigin() , center);

    float a = dir.scalarProduct(dir);
    float b = 2 * dir.scalarProduct(ori);
    float c = ori.scalarProduct(ori) - radius * radius;
	float delta = (b * b - 4 * a * c);
    if(delta < 0.){
      return false;
	}
    float rDelta = sqrt(delta);
    if(dist = - (b + rDelta) < 0.){
      dist = - (b - rDelta);
	}
    return true;
  }

Color Sphere::getColor() const {
	return color;
}

void Sphere::print(void) const {
	std::cout << "Center: ";
    center.print();
    std::cout << " r: " << radius;
    std::cout << " color: ";
	color.print();
	std::cout << std::endl;
}
