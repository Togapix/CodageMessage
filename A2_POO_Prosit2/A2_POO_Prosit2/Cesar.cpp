#include "Cesar.h"

Cesar::Cesar(string cesarNotDone) {
	this->cesarNotDone = cesarNotDone;
	Cryptage();
	cout << this->cesarDone << endl;
}

void Cesar::Cryptage() {
	int taille = this->cesarNotDone.length();
	string cesarDoing(taille,'x');
    for (int i = 0; i < taille; i++)
    {
        if (this->cesarNotDone[i] == char(127))
        {
            cesarDoing[i] = char(0);
        }
        else
        {
            cesarDoing[i] = cesarNotDone[i] + 1;
        }
    }
    this->cesarDone = cesarDoing;
}

string Cesar::GetCesarDone() {
	return this->cesarDone;
}
