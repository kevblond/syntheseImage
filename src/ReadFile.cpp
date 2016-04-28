#include "../include/ReadFile.hpp"

using namespace std;

void read(std::string nomFichier) {
	ifstream fichier(nomFichier.c_str(),ios::in);
	if(fichier){
		
		while(fichier.eof() != 1) {
		    std::string type, x,y,z,width,lenght,height;
			fichier >> type;
			if(strcmp(type,"Cube")==0){
			}
			else if(strcmp(type,"PyramideTriangle")==0){
			
			}
			else if(strcmp(type,"Point")==0){
			
			}
		}
		fichier.close();
	}
	else{
		std::cout << "cannot open file" << nomFichier << endl;
	}
}
