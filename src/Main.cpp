#include <iostream>
#include <string.h>

#include "../include/main.hpp"


void niveau1(char[] nomFichier, char[] nomImage){
	ReadFile::read(nomFichier);
}
void niveau2(char[] nomFichier, char[] nomImage){
	ReadFile::read(nomFichier);
}
void niveau3(char[] nomFichier, char[] nomImage){
	ReadFile::read(nomFichier);
}

int main(int argc, char* argv[][]){
	if(strcmp(argv[1],"-n")!=0 || strcmp(argv[3],"-i")!=0 || strcmp(argv[5],"-o")!=0 ){
		std::cout << "wrong argument, type : ./exe -n 1 -i fichier -o image.ppm\n";
	}
	switch(atoi(argv[2]){
	case 1:
		niveau1(argv[4],argv[5]);
		break;
	case 2:
		niveau2(argv[4],argv[5]);
		break;
	case 3:
		niveau3(argv[4],argv[5]);
		break;
	default:
		std::cout << "wrong argument level : 1, 2 or 3\n";
	}
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
