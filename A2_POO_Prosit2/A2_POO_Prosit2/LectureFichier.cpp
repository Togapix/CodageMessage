#include "LectureFichier.h"

LectureFichier::LectureFichier(string adresse) {
	this->adresse = adresse;
	ifstream myFile(adresse, ios::in);
	string string_lu;
	if (myFile) {
		while (getline(myFile, string_lu)) {
			cout << string_lu << endl;
			this->resultat += "_____";
			this->resultat += string_lu;
		}
	}
	else {
		cout << "Fichier texte non trouve" << endl;
	}
}

string LectureFichier::GetResultat() {
	return this->resultat;
}