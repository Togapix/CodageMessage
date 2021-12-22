// A2_POO_Prosit2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "LectureFichier.h"
#include "EcritureFichier.h"
#include "Cesar.h"
#include "Xor.h"
using namespace std;

int main()
{
	LectureFichier oui("C:/Users/tomst/OneDrive/Bureau/Prosit_2_in.txt");
	Cesar a(oui.GetResultat());
	Xor test(a.GetCesarDone());
	EcritureFichier lafin("C:/Users/tomst/OneDrive/Bureau/Prosit_2_out.txt", test.GetXorDone());

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
