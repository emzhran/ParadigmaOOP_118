#include <iostream>
#include <vector>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main() {
	ibu* varIbu1 = new ibu("Dini");
	ibu* varIbu2 = new ibu("Novi");
	anak* varAnak1 = new anak("Tono");
	anak* varAnak2 = new anak("Rini");
	anak* varAnak3 = new anak("Dewi");

	varIbu1->tambahAnak(varAnak1);
	varIbu1->tambahAnak(varAnak2);
	varIbu1->tambahAnak(varAnak3);
	varIbu2->tambahAnak(varAnak1);

	varIbu1->cetakAnak();
	varIbu2->cetakAnak();

	delete varIbu1;
	delete varIbu2;
	delete varAnak1;
	delete varAnak2;
	delete varAnak3;

	return 0;
}