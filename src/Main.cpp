#include <iostream>

#include "../include/main.hpp"

int main(void){
	Point a(1., 2., 3.);
    std::cout << "point a creer\n";
    Point b(4., 5., 6.);
    std::cout << "point b creer\n";
    Point c(7., 8., 9.);
    std::cout << "point c creer\n";
    Point d(10., 11., 13.);
    std::cout << "point d creer\n";
    
    Vector v1(6., 0., 0.);
    Vector v2(0., 8., 0.);
    Vector v3(0., 0., 10.);

    Cube rectangle(a, v1, v2, v3);
    PyramideTriangle t(a,b,c,d);
    t.print();
    rectangle.print();
	return 0;
}
