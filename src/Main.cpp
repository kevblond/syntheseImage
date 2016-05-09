

#include "../include/Main.hpp"

using namespace std;

void parse(std::string nomFichier, std::string nomImage, std::list<Object *> *objects){
	//read(nomFichier);
	int nbCube=0, nbPyramide = 0, nbPoints = 0;
	
	Cube c;
	PyramideTriangle t;
	Object *o;
	
	ifstream fichier(nomFichier.c_str(),ios::in);
	if (fichier) {
		while (fichier.eof() != 1) {
		    std::string type;
			float x,y,z;
			int width, lenght, height;
			fichier >> type;
			if (type.compare("Cube") == 0) {
				fichier >> x >> y >> z >> width >> lenght >> height;
				c = Cube(Point(x, y, z), width, lenght, height);
				nbCube++;
				objects->push_back(&c);
			}
			else if (type.compare("PyramideTriangle") == 0) {
			    Point points[4];
			    for (int i = 0; i < 4; ++i) {
		    	    fichier >> x >> y >> z;
		    	    points[i] = Point(x, y, z);
			    }
			    nbPyramide++;
			    t = PyramideTriangle(points[0], points[1], points[2], points[3]);
			    objects->push_back(&t);
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
	std::list<Object *> objects;
	switch(niveau){
	case 1:
		parse(nomFichier, nomImage, &objects);
		cout << "Fin niveau 1" << endl;
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
	std::list<Object>::iterator lit(objects.begin()), lend(objects.end());
	for (; lit != lend; ++lit)
	    lit->print();
	cout << endl;
	*/
    
    /*cout << "Test camera" << endl;
    Camera c(Point(10.,10.,10.), 0.25*PI, +0.25*PI, 6.);
    c.print();
    cout << "Fin test camera" << endl;*/
	return 0;
}
