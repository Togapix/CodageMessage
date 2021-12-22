#pragma once
#include <string>
#include<iostream>
#include <fstream>
using namespace std;

class LectureFichier
{
private :
	string adresse;
	string resultat;
public :
	LectureFichier(string adresse);
	string GetResultat();
};
