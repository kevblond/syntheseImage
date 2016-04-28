#include "../include/ReadFile.hpp"

void ReadFile::read(char[] nomFichier) {
	ifstream fichier(nomFichier.c_str(),ios::in);
	if(fichier){
		String type;
		while(getline(fichier,line){
			std::cout<< line << "\n";
		}
		fichier.close();
	}
	else{
		std::cout << "cannot open file" << nomFichier << "\n";
	}
}
