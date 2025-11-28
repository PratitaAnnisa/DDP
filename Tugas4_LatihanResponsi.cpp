#include <iostream>
#include <iomanip>
using namespace std;

int jmlhData;
string lanjut;
bool login;
int cariMenu;
int indexMenu = 0;

struct DataMenu {
	int kode;
	string namaMakanan;
	int harga;
	string tipe;
}; DataMenu menu[100];

void admin();
void loginMasuk();
void inputMenu();
void daftarMenu();
void searchMenu();
void cetakMenu();
void pelanggan();

int main(){
	do{
		string masukAS;
		cout << "Masuuk sebagai (A/B): " << endl;
		cout << "A. ADMIN" << endl;
		cout << "B. Pelanggan" << endl;
		cout << ">> ";
		cin >> masukAS;
		if(masukAS == "A" || masukAS == "a"){
			admin();
		} else if (masukAS == "B" || masukAS == "b"){
			pelanggan();
		} else {
			cout << "Input Tidak Valid!!!" << endl;
		}
	} while (lanjut == "N" || lanjut == "n");
	
}

void loginMasuk(){
	int chance = 3;
	string un, pw;
	string username = "admin";
	string password = "12345";
	
	while (chance > 0){
		cout << "Username\t: ";
		cin >> un;
		cout << "Password\t: ";
		cin >> pw;
		login = false;
		if (un != username && pw != password){
			cout << "Password & Username Salah" << endl;
		} else if (un == username && pw != password){
			cout << "Password Salah" << endl;
		} else if (un != username && pw == password){
			cout << "Usename Salah" << endl;
		} else {
			cout << "Login Berhasil" << endl;
			login = true;
			break;
		}
		
		chance--;
        if (chance > 0) {
            cout << "Kesempatan Tersisa: " << chance << endl << endl;
        }
	}
}

void inputMenu(){
	cout << "+========================================+" << endl;
	cout << "|	   INPUT MENU MAKANAN		 |" << endl;
	cout << "+========================================+" << endl;
	cout << "Jumlah Menu Yang Mau Ditambahkan: ";
	cin >> jmlhData;

	for(int i=0; i < jmlhData; i++){ 
		cout << "--- Menu " << i+1 << " ---" << endl;
		cout << "Kode: ";
		cin >> menu[indexMenu].kode;
		cout << "Nama Makanan: ";
		cin.ignore();
		getline(cin,(menu[indexMenu].namaMakanan));
		cout << "Harga: ";
		cin >> menu[indexMenu].harga;
		cout << "Tipe: ";
		cin.ignore();
		getline(cin,(menu[indexMenu].tipe));
		cout << "Menu Berhasil Ditambahkan" << endl;
		cout << endl;
		indexMenu++;
		}
}

void daftarMenu(){
		cout << "+========================================+" << endl;
		cout << "|		DAFTAR MENU		 |" << endl;
		cout << "+========================================+" << endl;
		
	for(int i=0; i < indexMenu; i++){ 
		cout << "kode: " << menu[i].kode << endl;
		cout << "Nama Makanan: "<< menu[i].namaMakanan << endl;
		cout << "Harga: " <<  menu[i].harga << endl;
		cout << "Tipe: " <<  menu[i].tipe << endl;
		cout << "--------------------------------------" << endl;
		}
}

void searchMenu(){
	cout << "+========================================+" << endl;
	cout << "|	  PENCARIAN MENU MAKANAN	 |" << endl;
	cout << "+========================================+" << endl;
	cout << "Masukkan Kode Menu: ";
	cin >> cariMenu;
	
	bool ditemukan = false;
	for (int i = 0; i < indexMenu; i++) {
		if (cariMenu == menu[i].kode) {
			cout << "kode: " << menu[i].kode << endl;
			cout << "Nama Makanan: "<< menu[i].namaMakanan << endl;
			cout << "Harga: " <<  menu[i].harga << endl;
			cout << "Tipe: " <<  menu[i].tipe << endl;
			cout << "--------------------------------------" << endl;
			ditemukan = true;
			break;
		}
	}

	if (ditemukan == false) {
		cout << "Menu dengan kode tersebut tidak ditemukan!" << endl;
	}
}

void cetakMenu(){
	
	string kategori[] = {"Pembuka", "Hidangan Utama", "Dessert", "Minuman"};
	cout << "+========================================+" << endl;
	cout << "|           DAFTAR MENU MAKANAN          |" << endl;
	cout << "+========================================+" << endl;
	
	for (int k = 0; k < 4; k++) {
		cout << kategori[k] << endl;
		cout << "==========================================" << endl;
		cout << setfill(' ') << "|" << setw(4) << left << "Kode"
			 << "| " << setw(20) << left << "Nama Makanan"
			 << "| " << setw(12) << left << "Harga" << "|\n";
		cout << "------------------------------------------" << endl;

		bool ada = false;
		for (int i = 0; i < indexMenu; i++) {
			if (menu[i].tipe == kategori[k]) {
				cout << "| " << setw(3) << left << menu[i].kode
					 << "| " << setw(20) << left << menu[i].namaMakanan
					 << "| Rp " << setw(9) << left << menu[i].harga << "|\n";
				cout << "------------------------------------------" << endl;
				ada = true;
			}
		}
		if (ada == false) {
			cout << "|   Tidak ada menu dalam kategori ini    |\n";
		}
		cout << endl;
	}
}

void admin(){
	cout << "LOGIN ADMIN" << endl;
	loginMasuk();
	
	if(login == true){
		do{
		cout << "+========================================+" << endl;
		cout << "|	  	 MAIN MENU		 |" << endl;
		cout << "+========================================+" << endl;
		cout << "| 1. Input Menu                          |" << endl;
		cout << "| 2. Daftar Menu                         |" << endl;
		cout << "| 3. Pencarian Menu                      |" << endl;
		cout << "| 4. Cetak Menu                          |" << endl;
		cout << "=========================================+" << endl;
		int menu;
		cout << "Input Menu >> ";
		cin >> menu;
	
				switch (menu) {
					case 1:
						inputMenu();
						break;
					case 2:
						daftarMenu();
						break;
					case 3:
						searchMenu();
						break;
					case 4:
						cetakMenu();
						break;
					default:
						cout << "Opsi di luar jangkauan!!!" << endl;
				}

				cout << "Lanjut ke Menu (Y/N): ";
				cin >> lanjut;
				system("cls");

			} while (lanjut == "Y" || lanjut == "y");
			
	} else {
		cout << "Login Gagal, Program Keluar" << endl;
	}
}

void pelanggan(){
	string hari;
	int jmlhItem, jmlhBeli;
	int kodeBeli;
	bool ditemukan;
		cout << "+========================================+" << endl;
		cout << "|	       TRAKSASI	    		 |" << endl;
		cout << "+========================================+" << endl;
		
		cout << "Hari Transaksi: ";
		cin >> hari;
		
		cout << "Jumlah item yang ingin dibeli: ";
		cin >> jmlhItem;
		
		for(int i = 0; i < jmlhItem; i++){
			cout << "--- ITEM " << i+1 << " ---" << endl;
			cout << "Kode: ";
			cin >> kodeBeli;
			for(int j = 0; j < indexMenu; j++){
				if (kodeBeli == menu[i].kode) {
					ditemukan = true;
					cout << "Menu: " << menu[i].namaMakanan
						 << " [Rp. " << menu[i].harga << "]" << endl;
					cout << "Jumlah Beli: ";
					cin >> jmlhBeli;
					break;
				} else {
					cout << "Kode Tidak Tersedia" << endl;
				}
			} if(ditemukan == false) {
					cout << "Kode Tidak Tersedia" << endl;
			}
		}
		
		cout << "Jumlah Beli: ";
		cin >> jmlhBeli;
		
}
