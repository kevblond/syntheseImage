

#include "../include/main.hpp"

int main(void){
	Point a(1., 2., 3.);
    std::cout << "point a creer\n";
    Point b(1., 2., 3.);
    std::cout << "point b creer\n";


    if (a == b) {
        std::cout << "a==b\n";
    }
    else {
        std::cout << "a!=b\n";
    }
    std::cout << "a p1: " << a.getP1() << "\n";
    std::cout << "a p2: " << a.getP2() << "\n";
    std::cout << "a p3: " << a.getP3() << "\n";


	return 0;
}