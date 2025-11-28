#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	string judulbuku[100];
	string cekbuku;
	char next;
	char ceklagi;
	int hargabuku[100];
	int stokbuku[100];
	int banyakbuku = 0;
	int tambahan_buku;
	int pilihmenu;
	bool find;
	
	do{
		cout << "Toko buku Nami" << endl;
		cout << "1. tambah buku" << endl;
		cout << "2. DAftar Buku" << endl;
		cout << "3. Cari Buku" << endl;
		cout << "4. Lihat Aset" << endl;
		cout << "5. Transaksi Penjualan" << endl;
		cout << "6. Laporan" << endl;
		cout << "7. keLuar" << endl;
		cout << "Masukkan No Menu: ";
		cin >> pilihmenu;
		
		switch (pilihmenu){
			case 1:
			system ("cls");
			cout << "Mau Input Berapa Buku: ";
			cin >> tambahan_buku;
			cout << endl;
			
			cin.ignore();
			if (tambahan_buku > 100){
				cout << "Error" << endl;
				cout << "Kembali ke Menu? (Y/N): ";
				cin >> next;
				}
			else {
			for (; tambahan_buku > 0; tambahan_buku--) {
		string judulBaru;
		bool duplikat;

		cout << "Data Buku Ke-" << banyakbuku + 1 << endl;

		do {
			duplikat = false;
			cout << "Input Judul Buku\t: ";
			getline(cin, judulBaru);

			for (int i = 0; i < banyakbuku; i++) {
				if (judulbuku[i] == judulBaru) {
					duplikat = true;
					cout << "Judul sudah ada! Masukkan judul lain.\n";
					break;
				}
			}
		} while (duplikat);

			int hargaInput;
		do {
			cout << "Input Harga Buku\t: ";
			cin >> hargaInput;
			if (hargaInput < 0) {
				cout << "Harga tidak boleh negatif!\n";
			}
		} while (hargaInput < 0);

		int stokInput;
		do {
			cout << "Input Stok Buku\t\t: ";
			cin >> stokInput;
			if (stokInput < 0) {
				cout << "Stok tidak boleh negatif!\n";
				}
		} while (stokInput < 0);

			judulbuku[banyakbuku] = judulBaru;
			hargabuku[banyakbuku] = hargaInput;
			stokbuku[banyakbuku] = stokInput;
			banyakbuku++;

			cout << endl;
			cin.ignore();
			
			}
		}
			cout << "Lanjut ke Menu (Y/N): ";
			cin >> next;
			system ("cls");
			break;
			
			case 2:
			system ("cls");
			if (banyakbuku == 0){
				cout << "Belum ada Buku di Rak!"<< endl;
				cout << "Kembali ke Menu? (Y/N): ";
				cin >> next;
				}
			else {
				cout << "--- Daftar Buku ---" << endl;
				cout << setfill('-') << setw(55) << "-" << endl; //batas atas tabel
				cout << setfill(' ') << "| " << setw(5) << left << "no"
				<< "| " << setw(25) << left << "Judul"
				<< "| " << setw(10) << left << "Harga"
				<< "| " << setw(5) << left << "Stok" << "|\n";
				cout << setfill('-') << setw(55) << "-" << endl;
	
			for (int i = 0; i < banyakbuku; i++) {
				cout << setfill(' ') << "| " << setw(5) << left << i+1
				<< "| " << setw(25) << left << judulbuku[i]
				<< "| " << setw(10) << left << hargabuku[i]
				<< "| " << setw(5) << left << stokbuku[i] << "|\n";
				}
				cout << setfill('-') << setw(55) << "-" << endl;
			
				cout << endl;
				cout << "Lanjut ke Menu (Y/N): ";
				cin >> next;
				cin.ignore();
				}
			system ("cls");	
			break;
				
			case 3:
			system ("cls");
			if (banyakbuku == 0){
				cout << "Belum ada Buku di Rak!"<< endl;
				cout << "Kembali ke Menu? (Y/N): ";
				cin >> next;
				}
			else { 
				do{
				cout << "Input keyword Judul Buku\t: ";
				cin.ignore();
				getline(cin, cekbuku);

			find = false;
			
			for (int i = 0; i < banyakbuku; i++) {
				if (judulbuku[i].find(cekbuku) != string::npos) {
					find = true;
					cout << "Ditemukan: Buku \"" << judulbuku[i] << "\" | Harga: " << hargabuku[i] << " | Stok: " << stokbuku[i] << endl;
					cout << "Cek Buku lain? (Y/N): ";
					cin >> ceklagi;
					}
				}

				if (!find) {
					cout << "Tidak ada buku yang cocok!" << endl;
					cout << "Cek Buku lain? (Y/N): ";
					cin >> ceklagi;
					}
				
				if (banyakbuku == 0){
					cout << "Belum ada Buku di Rak!"<< endl;
					cout << "Cek Buku lain? (Y/N): ";
					cin >> ceklagi;
					}
				}while (ceklagi == 'y' || ceklagi == 'Y');
				
				cout << endl;
				cout << "Lanjut ke Menu (Y/N): ";
				cin >> next;
				
			system("cls");
			break;
			}
			
			case 4:
			system("cls");

			if (banyakbuku == 0) {
				cout << "Belum ada Buku di Rak!" << endl;
				cout << "Lanjut ke Menu (Y/N): ";
				cin >> next;
				}
			else {
				int totalAset = 0;
				int totalHarga = 0;
				int maxHarga = hargabuku[0];
				int minHarga = hargabuku[0];
				string bukuTermahal = judulbuku[0];
				string bukuTermurah = judulbuku[0];

			for (int i = 0; i < banyakbuku; i++) {
				totalAset += hargabuku[i] * stokbuku[i];
				totalHarga += hargabuku[i];

				if (hargabuku[i] > maxHarga) {
					maxHarga = hargabuku[i];
					bukuTermahal = judulbuku[i];
					}
				if (hargabuku[i] < minHarga) {
					minHarga = hargabuku[i];
					bukuTermurah = judulbuku[i];
					}
			}

		double rerataHarga = (double)totalHarga / banyakbuku;

		cout << "--- Laporan Aset Buku ---" << endl;
		cout << "Total Aset Buku\t\t: " << totalAset << endl;
		cout << "Rerata Harga Buku\t: " << rerataHarga << endl;
		cout << "Judul Buku Termahal\t: " << bukuTermahal << " (" << maxHarga << ")" << endl;
		cout << "Judul Buku Termurah\t: " << bukuTermurah << " (" << minHarga << ")" << endl;
		}
		
			case 7:
			system ("cls");
			cout << "Terima kasih sudah beberlanja di toko Nami";
			int totalStok = 0;
			for (int i = 0; i < banyakbuku; i++) {
				totalStok += stokbuku[i];
			}
        cout << "\nSisa buku adalah: " << totalStok << endl;
			return 0;
		}
		
		}while (next == 'y' || next == 'Y');
	
	}

