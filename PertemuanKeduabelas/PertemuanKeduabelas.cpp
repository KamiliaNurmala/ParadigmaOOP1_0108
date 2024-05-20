#include <iostream>
#include <string>
using namespace std;

#include "jantung.h"
#include "manusia.h"

int main() { //composisi
	Manusia* varManusia = new Manusia("Jono");
	delete varManusia;
	return 0;

}