#include <iostream>
using namespace std;

int main (){
	
	string nama, kelas;
	int nim;
	float tugas, uas, uts, n_akhir;
	
	cout << "Nama: ";
	getline(cin, nama);
	
	cout << "Kelas: ";
	cin >> kelas;
	
	cout << "NIM: ";
	cin >> nim;
	
	cout << "Input Nilai Tugas: ";
	cin >> tugas;
	
	cout << "Input Nilai UTS: ";
	cin >> uts;
	
	cout << "Input Nilai UAS: ";
	cin >> uas;
	
	cout << endl;
	cout << endl;
	
	cout << "==================================" << endl;
	cout << "         HASIL PENILAIAN" << endl;
	cout << "==================================" << endl;
	
	n_akhir = (tugas + uts + uas) / 3 ;
	
	if (n_akhir >= 70){
		cout << "NAMA: " << nama << endl;
		cout << "NIM: " << nim << endl;
		cout << "KELAS: " << kelas << endl;
		cout << "NILAI AKHIR: " << n_akhir << endl;
		cout << "STATUS: LULUS" << endl;
	}
	else {
		cout << "NAMA: " << nama << endl;
		cout << "NIM: " << nim << endl;
		cout << "KELAS: " << kelas << endl;
		cout << "NILAI AKHIR: " << n_akhir << endl;
		cout << "STATUS: TIDAK LULUS" << endl;
	}
 
}
