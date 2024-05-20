#pragma once
#ifndef MANUSIA_H
#define MANUSIA_H

#include <iostream>
using namespace std;

class Manusia {
public: 
	string nama;
	Jantung varJantung;

	Manusia(string pName) : nama(pName) {
		cout << nama << " hidup\n";
	}

	~Manusia() {
		cout << nama << " mati\n";
	}
};
#endif