#include "../include/ReadFile.hpp"

using namespace std;

void read(std::string nomFichier) {
	ifstream fichier(nomFichier.c_str(),ios::in);
	if(fichier){
		
		while(fichier.eof() != 1) {
		    std::string type, bla, bli, sep;
			fichier >> type >> bla >> bli;
			cout << type << bla << bli << endl;
			std::cout << fichier.eof() << endl;
		}
		fichier.close();
	}
	else{
		std::cout << "cannot open file" << nomFichier << endl;
	}
}
