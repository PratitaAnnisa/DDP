#include <iostream>
using namespace std;

int main() {
    int tinggi;

    cout << "Masukkan tinggi piramida: ";
    cin >> tinggi;

    int angka = 1;

    for (int i = 1; i <= tinggi; i++) {
        // Spasi untuk membuat bentuk segitiga
        for (int j = 1; j <= tinggi - i; j++) {
            cout << "  ";
        }

        // Cetak angka dengan pola segitiga
        for (int k = 1; k <= i; k++) {
            cout << angka << "   ";
            angka++;
        }

        cout << endl;
    }
    return 0;
}
