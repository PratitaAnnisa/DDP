#include <iostream>
using namespace std;



float rerata(float n1, float n2){
	return (n1+n2)/2;
}

string statusLulus(float avg){
	if(avg >= 70){
		return "Lulus";
	} else{
		return "Tidak Lulus";
	}
}

int main(){
	
	string nama;
	float nilai1, nilai2;
	
	cout << "Masukkan nama: ";
	getline(cin, nama);
	//cin.ignore();
	cout << "Masukkan Nilai 1: ";
	cin >> nilai1;
	cout << "Masukkan Nilai 2: ";
	cin >> nilai2;
	
	float avg = rerata(nilai1,nilai2);
	string status = statusLulus(avg);
	
	cout << "=== Hasil Akhir ===" << endl;
	cout << "Nama Mahasiswa		  : " << nama << endl;
	cout << "Status Kelulusan Anda: " << status << endl << "Dengan rerata: " << avg;
}
