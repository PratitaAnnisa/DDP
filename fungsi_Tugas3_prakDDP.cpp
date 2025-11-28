

#include <iostream>
#include <iomanip>
using namespace std;

// Deklarasi variabel global
int stok[100] = {17, 8, 0};
string penulis[100] = {"Leila S. Chudori", "George Orwell", "W. K. Liotohe"};
string judul[100] = {"Laut Bercerita", "Animal Farm", "10 Dosa Besar Soeharto"};
int banyak_buku = 3;

// Fungsi untuk melihat data buku
void lihatBuku() {
    cout << setfill('-') << setw(62) << "-" << endl;
    cout << setfill(' ') << "| " << setw(25) << left << "Judul"
         << "| " << setw(25) << left << "Penulis"
         << "| " << setw(5) << left << "Stok" << "|\n";
    cout << setfill('-') << setw(62) << "-" << endl;

    for (int i = 0; i < banyak_buku; i++) {
        cout << setfill(' ') << "| " << setw(25) << left << judul[i]
             << "| " << setw(25) << left << penulis[i]
             << "| " << setw(5) << left << stok[i] << "|\n";
	}
    cout << setfill('-') << setw(62) << "-" << endl;
}

// Fungsi untuk menambah data buku
void tambahBuku() {
    int tambahan_buku;
    cout << "Mau Input Berapa Buku: ";
    cin >> tambahan_buku;
    cin.ignore();

    for (; tambahan_buku > 0; tambahan_buku--) {
        cout << "Data Buku Ke-" << banyak_buku + 1 << endl;
        cout << "Input Judul Buku\t: ";
        getline(cin, judul[banyak_buku]);
        cout << "Input Penulis Buku\t: ";
        getline(cin, penulis[banyak_buku]);
        cout << "Input Stok Buku\t\t: ";
        cin >> stok[banyak_buku];
        cin.ignore();
        banyak_buku++;
    }
}

//fungsi untuk mengubah judul buku yang kita input (yang hendak dicari) agar berubah menjadi 1 format yang sama 
string pengubah(string jdl){ //fungsi pengembali nilai
	int panjangJudul = jdl.length() ;
	//melooping di fungsi ini sendiri sejumlah banyaknya huruf dalam kalimat
	for (int i = 0; i < panjangJudul; i++){ 
		jdl[i] = tolower(jdl[i]);
	}
	return jdl;
}


// Fungsi untuk cek ketersediaan buku
void cekKetersediaan() {
    string cek_buku;
    cout << "Cek Stok Buku" << endl;
    cout << "Input Judul Buku\t: ";
    cin.ignore();
    getline(cin, cek_buku);

    bool ditemukan = false;
    for (int i = 0; i < banyak_buku; i++) {
		//judul buku yang masuk akan dikirim ke fungsi pengubah untuk disamakan format hurufnya
        if (pengubah(cek_buku) == pengubah(judul[i])) {
            ditemukan = true;
            if (stok[i] > 0) {
                cout << "Buku \"" << judul[i] << "\" tersedia. Stok saat ini: " << stok[i] << " buku." << endl;
            } else {
                cout << "Tidak ada copy dari buku \"" << judul[i] << "\" yang tersedia." << endl;
            }
            break;
        }
    }

    if (!ditemukan) {
        cout << "Buku \"" << cek_buku << "\" tidak tersedia dalam database." << endl;
    }
}

void logout(){
		 cout << "Anda Telah Logout" << endl;
}

int main() {
    int chance = 3;
    string UN = "tita", nim = "014", user, pw, next;
    bool login = false;

    cout << setfill('=') << setw(5) << "="
         << " Login Ke Database Perpustakaan "
         << setfill('=') << setw(5) << "=" << endl;

    while (chance > 0) {
        cout << "Username: ";
        cin >> user;
        cout << "Password: ";
        cin >> pw;

        if (pw != nim && user != UN) {
            cout << "Password dan Username Salah!" << endl;
        } else if (pw == nim && user != UN) {
            cout << "Username Salah!" << endl;
        } else if (pw != nim && user == UN) {
            cout << "Password Salah!" << endl;
        } else {
            cout << "Login Berhasil" << endl << endl;
            login = true;
            break;
        }

        chance--;
        if (chance > 0) {
            cout << "Kesempatan Tersisa: " << chance << endl << endl;
        }
    }

    system("cls");

    if (login) {
        int no_opsi;
        do {
            cout << setfill('=') << setw(21) << "="
                 << "DATABASE PERPUSTAKAAN"
                 << setfill('=') << setw(21) << "=" << endl;

            cout << "[1] Lihat Data Buku" << endl;
            cout << "[2] Tambah Data Buku" << endl;
            cout << "[3] Cek Ketersediaan Buku" << endl;
            cout << "[0] Logout" << endl;

            cout << ">> ";
            cin >> no_opsi;
            system("cls");

            switch (no_opsi) {
                case 1:
                    lihatBuku();
                    break;
                case 2:
                    tambahBuku();
                    break;
                case 3:
                    cekKetersediaan();
                    break;
                case 0:
                    logout();
                    return 0;
                default:
                    cout << "Opsi di luar opsi!!!" << endl;
            }

            cout << "Lanjut ke Menu (Y/N): ";
            cin >> next;
            system("cls");

        } while (next == "Y" || next == "y");
    } else {
        cout << "Login Gagal, Kesempatan Habis" << endl;
    }

    return 0;
}
