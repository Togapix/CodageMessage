#include "EcritureFichier.h"

EcritureFichier::EcritureFichier(string adresse, string resultat) {
	this->adresse = adresse;
	this->resultat = resultat;
	ofstream myFile(adresse.c_str());
	if (myFile) {
		myFile << resultat << endl;
		myFile.close();
	}
	else {
		cout << "Fichier d'ecriture non trouvé" << endl;
	}
}