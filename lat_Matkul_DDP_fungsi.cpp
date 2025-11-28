#include <iostream>
using namespace std;

float nilaitugas(float tugas){
	return tugas*0.3;
}

float nilaiuts(float uts){
	return uts*0.3;
}

float nilaiuas(float uas){
	return uas*0.4;
}

float nilaiAkhir(float nTugas, float nUts, float nUas){
	return (nTugas + nUts + nUas)/3;
}

int main(){
	int jumlah;
	float tugas, uts, uas;
	string nama;
	cout << "Jumlah data mahasiswa: ";
	cin >> jumlah;
	
	for(int i = 0; i < jumlah; i++){
		cout << "Data Mahasiswa ke- " << i+1 << endl;
		cout << "Nama		: ";
		cin.ignore();
		getline(cin,nama);
		cout << "Nilai Tugas: ";
		cin >> nilaitugas(tugas);
		cout << "Nilai UTS	: ";
		cin >> nilaiuts(uts);
		cout << "Nilai UAS	: ";
		cin >> nilaiuas(uas);
		cout << endl;
	}
	
	float nTugas = nilaitugas(tugas);
	float nUts = nilaiuts(uts);
	float nUas = nilaiuas(uas);
	
	float nAkhir = nilaiAkhir(nTugas, nUts, nUas);
	cout << "Nilai Akhir" << nAkhir; 
	
	
}
