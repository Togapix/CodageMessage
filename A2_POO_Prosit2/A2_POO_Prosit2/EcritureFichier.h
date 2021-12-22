#pragma once
#include <string>
#include<iostream>
#include <fstream>
using namespace std;

class EcritureFichier
{
private :
	string adresse;
	string resultat;
public :
	EcritureFichier(string adresse, string resultat);
};

