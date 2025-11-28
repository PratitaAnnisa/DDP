#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	
	//mendeklarasikann variabel dan array
    int chance, banyak_buku, no_opsi, tambahan_buku;
    string UN, user, pw, nim, next, cek_buku;
    
    bool login, ditemukan;
   
	int stok[100] = {17, 8, 0};
	string penulis[100] = {"Leila S. Chudori", "George Orwell", "W. K. Liotohe"};
	string judul[100] = {"Laut Bercerita", "Animal Farm", "10 Dosa Besar Soeharto"};
	
	banyak_buku = 3;
	//menetapkan nilai username dan nim sebagai password
    UN = "tita";
    nim = "014";
    chance = 3; //kesempatan login hanya 3 kali
	
	cout << setfill('=') << setw(5) << "=" //batas kiri
		 << " Login Ke Database Perpustakaan " 
		 << setfill('=') << setw(5) << "=" << endl; //batas kanan
	
    while (chance > 0) { //ketika kesempatan login masih 0
        //masukkan username dan nim untuk login
        cout << "Username\t: "; 
        cin >> user;
        cout << "Password\t: ";
        cin >> pw;

        if (pw != nim && user != UN) { //ketika password dan username salah
            cout << "Password dan Username Salah!" << endl;
            login = false; //kondisi login = salah, login gagal
            chance--; //banyaknya kesempatan login akan terus berkurang
            if (chance > 0) {
                cout << "Kesempatan Tersisa: " << chance << endl;
                cout << endl;
            }
        }
        else if (pw == nim && user != UN) { //ketika password benar namun username salah
            cout << "Username Salah!" << endl;
            login = false;
            chance--;
            if (chance > 0) {
                cout << "Kesempatan Tersisa: " << chance << endl;
                cout << endl;
            }
        }
        else if (pw != nim && user == UN) { //ketika password salah namun username benar
            cout << "Password Salah!" << endl;
            login = false; 
            chance--;
            if (chance > 0) {
                cout << "Kesempatan Tersisa: " << chance << endl;
                cout << endl;
            }
        }
        else { //ketika username dan password benar, maka login bergasil (kondisi login = benar)
            cout << "Login Berhasil" << endl << endl;
            //system ("cls"); //membersihkan layar consol
            login = true;
            break;
        }
	}
		
	if (login == true) { //ketika sudah berhasil login, login = benar
		do{ //maka jalankan program:
		//system ("cls");
		//menampilkan menu database perpustakaan
		cout << setfill('=') << setw(21) << "="
		 << "DATABASE PERPUSTAKAAN" 
		 << setfill('=') << setw(21) << "=" << endl;
		 
		 cout << "[1] Lihat Data Buku" << endl;
		 cout << "[2] Tambah Data Buku" << endl;
		 cout << "[3] Cek Ketersediaan Buku" << endl;
		 cout << "[0] Logout" << endl;
		 
		 int salah_opsi = 0; //saat kembali ke menu awal, kesempatan salah mulai daro 0 lagi
			do {
				//memasukkan nomor opsi
				cout << ">> "; 
				cin >> no_opsi;
				if (no_opsi < 0 || no_opsi > 3) { //menu opsi jika negatif atau lebih dari 3
					salah_opsi++;
					cout << "Opsi di luar jangkauan.\n\nMasukkan Nilai Baru!" << endl;
					if(salah_opsi >= 6){ //input di luar jangkauan opsi hanya dapat dilakukan 5 kali
						//system("cls");
						cout << "Program keluar.\nTerlalu Banyak Kesalahan Dalam Memasukkan Opsi menu!!!\n";
						return 0;
					}
				}

			} while (no_opsi < 0 || no_opsi > 3);
		
		//system ("cls");
		
		if(no_opsi==1){ //ketika opsi yang dipilih nomor 1
		 	
		 	//menampilkan data buku apa saja yang telah ada
			cout << setfill('-') << setw(62) << "-" << endl; //batas atas tabel
			cout << setfill(' ') << "| " << setw(25) << left << "Judul"
				<< "| " << setw(25) << left << "Penulis"
				<< "| " << setw(5) << left << "Stok" << "|\n";
			cout << setfill('-') << setw(62) << "-" << endl; //batas bawah tabel
	
			for (int i = 0; i < banyak_buku; i++) {
				cout << setfill(' ') << "| " << setw(25) << left << judul[i]
				<< "| " << setw(25) << left << penulis[i]
				<< "| " << setw(5) << left << stok[i] << "|\n";
			}
			cout << setfill('-') << setw(62) << "-" << endl;
			
			//balik ke menu atau keluar
			cout << endl;
			cout << "Lanjut ke Menu (Y/N): ";
			cin >> next;
			cin.ignore();
			
		//system ("cls");	
		}
		
		else if (no_opsi==2){ //jika opsi yang dipilih adalah nomor 2
			
			cout << "Banyak Data Buku Baru Yang Hendak Diinput: ";
			cin >> tambahan_buku;
			
			cin.ignore();
			cout << endl;
			
			for (; tambahan_buku  > 0; tambahan_buku--) { //kak, kenapa disini kena warning unused yah😭😭😭
				cout << "Data Buku Ke-" << banyak_buku + 1 << endl; //looping akan berjalan sebanyak nilai banyaknya buku baru yang ingin diinput
				cout << "Input Judul Buku\t: ";
				getline(cin, judul[banyak_buku]);
				cout << "Input Penulis Buku\t: ";
				getline(cin, penulis[banyak_buku]);
				cout << "Input Stok Buku\t\t: ";
				cin >> stok[banyak_buku];
				cin.ignore();
				cout << endl;
				
				banyak_buku = banyak_buku + 1;
			}
			cout << endl;
			cout << "Lanjut ke Menu (Y/N): "; //opsi balik ke menu atau keluar
			cin >> next;
			
			cin.ignore();
			
		//system("cls");
		}
		
		else if (no_opsi == 3) { //jika opsi yang dipilih adalah nomor 3
				cout << setfill('=') << setw(5) << "=" //masuk ke program cek stok buku
					 << " Cek Stok Buku " 
					 << setfill('=') << setw(5) << "=" << endl;
				cout << "Input Judul Buku\t: ";
				cin.ignore();
				getline(cin, cek_buku);

			ditemukan = false;

			for (int i = 0; i < banyak_buku; i++) {
				if (cek_buku == judul[i]) {  //judul buku yang dimasukkan akan dicek, apakah sama persis seperti yang ada di array judul
												//cek satu satu, mulai dari judul indek ke 0 sampai terakhir
					ditemukan = true; //judul buku ketemu, kondisi ditemukan = benar			
					if (stok[i] > 0) { //ketika buku yang ditemukan memiliki stok minimal 0
						cout << "Buku \"" << judul[i] << "\" tersedia. Stok saat ini: " << stok[i] << " buku." << endl;
					} 
					else { //ketika buku yang ditemukan sudah tidak memiliki stok tersisa
						cout << "Tidak ada copy dari buku \"" << judul[i] << "\" yang tersedia." << endl;
					}
					break;
				}
			}

				if (!ditemukan) { //jika judul buku tidak ada, maka kondisi ditemukan = false
					cout << "Buku \"" << cek_buku << "\" tidak tersedia dalam database." << endl;
				}
				
				cout << endl;
				cout << "Lanjut ke Menu (Y/N): "; //opsi balik ke menu atau keluar
				cin >> next;
				
		//system("cls");
		}
		else if (no_opsi == 0){ //jika opsi yang dipilih adalaj 0, maka logout
			cout << "Anda Telah Logout" ;
			return 0; //program keluar
		}
		
		} while (next == "Y" || next == "y"); //program diatas akan jalan terus ketika lanjut ke menu (next) = Y/y
	}
    else { //ketika percobaan login telah mencapai batasnya (3kali)
        cout << "Kesempatan Habis, Login Gagal!" << endl;
    }
	
    return 0;
}
