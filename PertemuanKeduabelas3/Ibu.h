#pragma once
#ifndef IBU_H
#define IBU_H

#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Ibu {
public:
	string nama;
	vector<anak*> daftar_anak;

	Ibu(string pNama) :nama(pNama) {
		cout << "Ibu \"" << nama << "\" ada\n";
	}
	~Ibu() {
		cout << "Ibu \"" << nama << "\" tidak ada\n";
	}

	void tambahAnak(anak*);
	void cetakAnak();
};

void Ibu::tambahAnak(anak* pAnak) {
	daftar_anak.push_back(pAnak);
}
#endif