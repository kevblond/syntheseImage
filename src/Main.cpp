

#include "../include/Main.hpp"

using namespace std;

Camera parse(std::string nomFichier, std::string nomImage, std::vector<Object*> &objects){
	
	ifstream fichier(nomFichier.c_str(),ios::in);
	Camera c;
	if (fichier) {
		while (fichier.eof() != 1) {
		    std::string type;
			float x,y,z;
			float r,g,b;
			double u,v,w;
			int width, lenght, height;
			fichier >> type;
			if (type.compare("Cube") == 0) {
				fichier >> x >> y >> z >> width >> lenght >> height >> r >> g >> b;
				objects.push_back(new Cube(Point(x, y, z), width, lenght, height,Color(r,g,b)));
			}
			else if (type.compare("PyramideTriangle") == 0) {
			    Point points[4];
			    for (int i = 0; i < 4; ++i) {
		    	    fichier >> x >> y >> z;
		    	    points[i] = Point(x, y, z);
			    }
				fichier >> r >> g >> b;
			    objects.push_back(new PyramideTriangle(points[0], points[1], points[2], points[3],Color(r,g,b)));
			}
			else if (type.compare("Camera") == 0) {
				fichier >> x >> y >> z >> u >> v >> w;
			    c=new Camera(Point(x,y,z),u,v,w);
			}
		}
		fichier.close();
	}
	else{
		std::cout << "cannot open file" << nomFichier << endl;
	}
	return c;
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
	std::vector<Object *> objects;
	Camera c;
	switch(niveau){
	case 1:
		c=parse(nomFichier, nomImage, objects);
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
	Point posCam = c.getPos();
	float dist(0);
	float pas(1.57 /640.f);
	for(int i(0);i<480;++i){
		float angle_y = -pas * (i - 240);
		for(int j(0);j<640;++j){
			float angle_x = -pas * (j - 320);
			Vector dir(angle_x,angle_y,1);
			Ray r(posCam,dir);
			for(int i(0);i<objects.size();++i){
				//objects[i]->print();
				if(objects[i].intersect(r,dist){
					Color c = objects[i].getColor();
					//met c sur le pixel i j;
				}
				delete objects[i];
				objects[i]=0;
			}
		}
	}
	
	/*for(int i(0);i<objects.size();++i){
		objects[i]->print();
		delete objects[i];
		objects[i]=0;
	}*/
    
	return 0;
}
