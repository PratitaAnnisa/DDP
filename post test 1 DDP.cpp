#include <iostream>
using namespace std;

int main (){
	
	int Hb, Hpsl, Hpng, total, sel;
	string nama;
	
	cout << "Berikut daftar belanjaan Anda:" << endl;
	
	string alat[3] = {"Buku", "Penghapus", "Pensil"};
	for (int i = 0; i < 3; i++) {
		cout << alat[i] << endl;
	}
	
	cout << endl;
	
	cout << "Masukkan nama pelanggan: ";
	cin >> nama;
	
	Hb = 5000;
	Hpsl = 2000;
	Hpng = 1000;
	
	total = Hb + Hpsl + Hpng;
	sel = Hb - Hpng;
	
	cout << "Total Belanja " << nama << " adalah Rp " << total << endl;
	cout << "Dengan selisih  Rp: " << sel << endl;
	
}
