#pragma once
#include <string>
#include<iostream>
#include <bitset>
using namespace std;

class Xor
{
private :
	string xorNotDone;
	const string cle = "0101110";
	string xorDone;
	string xorNotDoneBinary;
	string TextToBinaryString();
	void Cryptage();
public :
	Xor(string xorNotDone);
	string GetXorDone();
};

