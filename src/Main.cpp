#include <iostream>

#include "../include/main.hpp"

int main(void){
	Point a(1., 2., 3.);
    std::cout << "point a creer\n";
    Point b(4., 5., 6.);
    std::cout << "point b creer\n";
    Point c(7., 8., 9.);
    std::cout << "point c creer\n";
    Point d(1., 2., 3.);
    std::cout << "point d creer\n";
    
    
    Triangle t(a,b,c);
    if (a == d) {
        std::cout << "a==d\n";
    }
    else {
        std::cout << "a!=d\n";
    }
    t.print();

	return 0;
}
