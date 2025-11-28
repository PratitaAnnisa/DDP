#include <iostream>
using namespace std;

// Fungsi untuk menghitung rata-rata
float rerata(float a, float b, float c) {
    return (a + b + c) / 3;
}

// Fungsi untuk kategori kelulusan based on nilai rata-rata
string kat_kelulusan(float hasilrerata) {
    if (hasilrerata >= 75) {
        return "Kategori Kelulusan = Lulus";
        //return yang ada di dalam fungsi berguna sebagai cout atau print (nilai di variabel itu)
        //namun belum bisa jadi output, TETAP HARUS PAKAI COUT di int main (main programnya)
    } else {
        return "Kategori Kelulusan = Tidak Lulus";
    }
}

int main() {
    float tugas1, tugas2, tugas3;

    cout << "Nilai Tugas 1: ";
    cin >> tugas1;
    cout << "Nilai Tugas 2: ";
    cin >> tugas2;
    cout << "Nilai Tugas 3: ";
    cin >> tugas3;

    float hasilrerata = rerata(tugas1, tugas2, tugas3);
    //artinya utk menghitung hasil rerata, nilai nilai tugas itu dikirim ke fungsi 'rerata' utk dihitung
    cout << "Rata-rata Tugas: " << hasilrerata << endl;

    string kategori = kat_kelulusan(hasilrerata);
    //artinya utk melihat apakah lulus atau tidak, hasil rerata akan dikiirm ke fungsi kat_lulus utk dicek menggunakan if else
    cout << kategori << endl;
}
