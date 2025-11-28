#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung jumlah kelereng dari baris pertama hingga ke-n
int jumlahKelerengRekursif(int n) {
    if (n == 1){
        return 1;
	}
    else {
        return (n + n) * jumlahKelerengRekursif(n - 1);
	}
}

// Fungsi iteratif menggunakan perulangan for
/*int jumlahKelerengIteratif(int n) {
    int total = 0;
    for (int i = 1; i <= n; i++) {
        total += i;
    }
    return total;
}*/

int main() {
    int jumlahBaris;

    cout << "Masukkan jumlah baris piramida: ";
    cin >> jumlahBaris;

    // Validasi input
    if (jumlahBaris < 1) {
        cout << "Jumlah baris harus minimal 1." << endl;
        return 1;
    }

    int totalRekursif = jumlahKelerengRekursif(jumlahBaris);
    //int totalIteratif = jumlahKelerengIteratif(jumlahBaris);

    cout << "Hasil Perhitungan" << endl;
    cout << "Total kelereng (rekursif): " << totalRekursif << endl;
    //cout << "Total kelereng (iteratif): " << totalIteratif << endl;

    // Bandingkan hasil
    /*if (totalRekursif == totalIteratif) {
        cout << "✅ Hasil rekursif dan iteratif sama." << endl;
    } else {
        cout << "⚠️ Hasil berbeda, periksa kembali fungsi!" << endl;
    }*/

    return 0;
}

