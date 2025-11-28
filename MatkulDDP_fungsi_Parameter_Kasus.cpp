#include<iostream>
using namespace std;

void perbandingan(int n1, int n2, string nama1, string nama2) {
	cout << endl;
	cout << "===== HASIL PERBANDINGAN NILAI =====" << endl; 
	if(n1 > n2){
		cout << nama1 << " memiliki nilai lebih tinggi (" << n1 << ") daripada " << nama2 << " (" << n2 << ") ";
	}
	else if (n1 < n2){
		cout << nama1 << " memiliki nilai lebih rendah (" << n1 << ") daripada " << nama2 << " (" << n2 << ") ";
	}
	else
		cout << nama1 << " smemiliki nilai (" << n1 << ") sama dengan " << nama2;
	
}

void TukarPosisi(int &n1, int &n2, string &nama1, string &nama2){
	
	int x;
		n1 = n2;
		x = n2;
	string tempNama;
		nama1 = nama2;
		tempNama = nama2;
		
	cout << "Data Berhasil Ditukar!" << endl;
	if(n1 > n2){
		cout << "Sekarang posisi pertama diisi oleh " << nama2 << " dengan nilai (" << n1 << ")";
	}
	else if (n1 < n2){
		cout << "Sekarang posisi pertama diisi oleh " << nama1 << " dengan nilai (" << n2 << ")";
	}
	else
		cout << nama1 << " smemiliki nilai (" << n1 << ") sama dengan " << nama2;
}

int main(){
	int nilai1, nilai2;
	string nama1, nama2;
	char tukar;
	
	cout << "===== INPUT DATA MAHASISWA =====" << endl;
	cout << "Masukkan nama panggilan mahasiswa pertama: ";
	cin >> nama1;
	cout << "Masukkan nilai akhir " << nama1 << ": ";
	cin >> nilai1;
	
	cout << "Masukkan nama panggilan mahasiswa kedua: ";
	cin >> nama2;
	cout << "Masukkan nilai akhir " << nama2 << ": ";
	cin >> nilai2;
	
	perbandingan(nilai1,nilai2,nama1,nama2);
	
	cout << endl;
	cout << "Apakah anda ingin menukar posisi mahasiswa? (y/n): ";
	cin >> tukar;
	
	if(tukar == 'y'){
		TukarPosisi(nilai1,nilai2,nama1,nama2);
		cout << nilai1 << " " << nama1 << endl;
		cout << nilai2 << " " << nama2 << endl;
	}
	else
		return 0;
	
}
