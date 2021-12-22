#pragma once
#include <string>
#include<iostream>
using namespace std;

class Cesar
{
private:
	string cesarNotDone;
	string cesarDone;
	void Cryptage();
public:
	Cesar(string cesarNotDone);
	string GetCesarDone();
};

