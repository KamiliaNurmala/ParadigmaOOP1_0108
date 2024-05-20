#include <iostream>
#include <vector>
using namespace std;
#include <string>

class pasien {
public:
	string nama;
	vector<dokter*> daftar_dokter;
	pasien(string pNama) : nama(pNama) {
		cout << "Pasien \"" << nama << "\" ada\n";
	}
	~pasien() {
		cout << "Pasien \"" << nama << "\" tidak ada\n";
	}
	void tambahDokter(dokter*);
	void cetakDokter();
};