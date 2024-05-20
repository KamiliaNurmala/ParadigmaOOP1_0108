#include <iostream>
using namespace std;

#include "Anak.h"
#include "Ibu.h"

int main() { // agregasi
	Ibu* varIbu = new Ibu("dini");
	Ibu* varIbu2 = new Ibu("tono");
	anak* varAnak1 = new anak("tono");
	anak* varAnak2 = new anak("rini");
	anak* varAnak3 = new anak("Dewi");

	varIbu->tambahAnak(varAnak1);
	varIbu->tambahAnak(varAnak2);
	varIbu2->tambahAnak(varAnak3);
	varIbu2->tambahAnak(varAnak1);

	varIbu->cetakAnak();
	varIbu2->cetakAnak();

	delete varIbu;
	delete varIbu2;
	delete varAnak1;
	delete varAnak2;
	delete varAnak3;

	return 0;
}