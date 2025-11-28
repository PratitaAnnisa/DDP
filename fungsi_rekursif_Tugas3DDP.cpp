#include <iostream>
using namespace std;

int RumusJumlah(int i) {
    return (i * (i + 1)) / 2; //Rumus Tetap untuk menghitung jumlah kelereng
}

int totalKelereng(int n) {
    if (n == 1)
        return RumusJumlah(1);
    else
        return RumusJumlah(n) + totalKelereng(n - 1); //recursive case (tempat melooping)
}

int JumlahKelerengFor(int n) {
    int totalFor= 0;
    for (int i = 1; i <= n; i++) { //perulangan for biasa
        totalFor += RumusJumlah(i);
    }
    return totalFor;
}

int main() {
	cout << "Selamat datang di Penghitungan Deret Segitiga" << endl << endl;
	string hitungLagi;
	//agar user dapat melakukan perhitungan sebanyak yang ia mau
	do{
    int jumlahBaris;
    cout << "Masukkan jumlah baris piramida: ";
    cin >> jumlahBaris;
    cout << endl;

    while (jumlahBaris < 1) {
        cout << "Jumlah baris minimal 1!!!" << endl << endl;
        cout << "Masukkan jumlah baris piramida: ";
        cin >> jumlahBaris;
		cout << endl;
    }

    int total1 = totalKelereng(jumlahBaris);
    int total2 = JumlahKelerengFor(jumlahBaris);
	
	cout << "=== Hasil Perhitungan ======================================" << endl;
	cout << ">Rekursif: " << endl;
    cout << "Total seluruh kelereng dari baris 1 sampai " << jumlahBaris << " adalah: " << total1 << endl;
    cout << ">Perulangan: " << endl;
    cout << "Total seluruh kelereng dari baris 1 sampai " << jumlahBaris << " adalah: " << total2 << endl;
    cout << "============================================================" << endl;
    cout << endl;
    cout << "Apakah masih ingin menghitung jumlah baris lain? (Y/N)" << endl;
    cout << ">> ";
    cin >> hitungLagi; //opsi jika user ingin lanjut menghitung atau tidak
    cout << endl;
} while (hitungLagi == "y"|| hitungLagi =="Y");

	cout << "Program Keluar, Terima Kasih";
    return 0;
}
