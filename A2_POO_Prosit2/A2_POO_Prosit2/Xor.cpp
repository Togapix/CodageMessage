#include "Xor.h"

Xor::Xor(string xorNotDone) {
	this->xorNotDone = xorNotDone;
	Cryptage();
	cout << this->xorNotDoneBinary << endl;
	cout << this->xorDone << endl;
}

string Xor::TextToBinaryString() {
	string binaryString = "";
	for (char& _char : this->xorNotDone) {
		binaryString += bitset<7>(_char).to_string();
	}
	return binaryString;
}

void Xor::Cryptage() {
	this->xorNotDoneBinary = TextToBinaryString();
	for (int i = 0; i < xorNotDoneBinary.length(); i = i + 7) {
		for (int j = 0; j < 7; j++) {
			if (this->xorNotDoneBinary[i] == this->cle[j]) {
				this->xorDone += "0";
			}
			else {
				this->xorDone += "1";
			}
		}
	}
}


string Xor::GetXorDone() {
	return this->xorDone;
}