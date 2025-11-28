#include <iostream>
using namespace std;

struct mahasiswa {
	char kelas;
	string nim;
	float nilai;
};

mahasiswa mhs[3]; //variabel mhs dengan tipe data mahasiswa

int main(){
	int jmlhData;
	//hanya dapat memasukkan data sebanyak 3
	jmlhData = 3;
	//perulangan untuk meminta inputan data mhs
	for(int i=0; i < jmlhData; i++){ 
		cout << "Masukkan data mahasiswa Ke-" << i+1 << endl;
		cout << "Kelas Mahasiswa\t: ";
		cin >> mhs[i].kelas;
		cout << "NIM Mahasiswa\t: ";
		cin >> mhs[i].nim;
		cout << "Nilai Mahasiswa\t: ";
		cin >> mhs[i].nilai;
		cout << endl;
		}
		
		cout << "======================================" << endl;
		cout << "DATA MAHASISWA" << endl;
		cout << "======================================" << endl;
	//perulangan untuk menampilkan hasil inptan data mhs
	for(int i=0; i < jmlhData; i++){ 
		cout << "Kelas\t: " << mhs[i].kelas << endl;
		cout << "NIM\t: "<< mhs[i].nim << endl;
		cout << "Nilai\t: " <<  mhs[i].nilai << endl;
		cout << "--------------------------------------" << endl;
		}
}
