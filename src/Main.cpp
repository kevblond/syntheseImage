

#include "../include/Main.hpp"

using namespace std;

void niveau1(std::string nomFichier, std::string nomImage){
	//read(nomFichier);
	int nbCube=0, nbPyramide = 0, nbPoints = 0;
	Cube c;
	PyramideTriangle t;
	Point p;
	ifstream fichier(nomFichier.c_str(),ios::in);
	if(fichier){
		while(fichier.eof() != 1) {
		    std::string type;
			float x,y,z;
			int width,lenght,height;
			fichier >> type;
			if(type.compare("Cube")==0){
				fichier>>x>>y>>z>>width>>lenght>>height;
				c=Cube(Point(x,y,z),width,lenght,height);
				nbCube++;
				c.print();
			}
			else if(type.compare("PyramideTriangle")==0){
			    Point points[4];
			    for (int i = 0; i < 4; ++i) {
		    	    fichier >> x >> y >> z;
		    	    points[i] = Point(x, y, z);
			    }
			    nbPyramide++;
			    t = PyramideTriangle(points[0], points[1], points[2], points[3]);
			    t.print();
			}
			else if(type.compare("Point")==0){
			    fichier >> x >> y >> z;
			    nbPoints++;
			    p = Point(x, y, z);
			    p.print();
			}
		}
		fichier.close();
	}
	else{
		std::cout << "cannot open file" << nomFichier << endl;
	}
}
/*
void niveau2(char* nomFichier, char* nomImage){
	read(nomFichier);
}
void niveau3(char* nomFichier, char* nomImage){
	read(nomFichier);
}
*/

int main(int argc, char* argv[]){
    std::vector<std::string> allArgs(argv, argv + argc);
    if (argc != 7) {
        std::cout << "wrong argument, type : ./exe -n 1 -i fichier -o image.ppm\n";
        return 0;
    }
	if(allArgs[1].compare("-n") !=0
	    || allArgs[3].compare("-i")!=0
	    || allArgs[5].compare("-o")!=0 ){
		std::cout << "wrong argument, type : ./exe -n 1 -i fichier -o image.ppm\n";
		return 0;
	}
    int niveau = atoi(allArgs[2].c_str());
    std::string nomFichier = allArgs[4];
    std::string nomImage = allArgs[6];
	switch(niveau){
	case 1:
		niveau1(nomFichier, nomImage);
		break;
	/*
    case 2:
		niveau2(nomFichier,argv[5]);
		break;
	case 3:
		niveau3(nomFichier,argv[5]);
		break;
    */
	default:
		std::cout << "wrong argument level : 1, 2 or 3\n";
	}
	/*
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
    */
    cout << "Test camera" << endl;
    Camera c(Point(10.,10.,10.), 0.25*PI, +0.25*PI, 6.);
    c.print();
    cout << "Fin test camera" << endl;
	return 0;
}
