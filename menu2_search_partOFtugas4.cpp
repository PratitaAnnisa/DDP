#include <iostream>
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

void loginMasuk();
void inputMenu();
void daftarMenu();
void searchMenu();

int main(){
	cout << "Selamat Datang" << endl;
	
	//if(login == true){
		do{
		int menu;
		cout << "Input Menu: " << endl;
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
					default:
						cout << "Opsi di luar opsi!!!" << endl;
				}

				cout << "Lanjut ke Menu (Y/N): ";
				cin >> lanjut;
				system("cls");

			} while (lanjut == "Y" || lanjut == "y");
			
	/*} else {
		cout << "Login Gagal, Program Keluar" << endl;
	} */
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

	for(int i = 0; i < jmlhData; i++){ 
		cout << "--- Menu " << i + 1 << " ---" << endl;
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
		cout << "Menu Berhasil Ditambahkan" << endl << endl;
		indexMenu++;
		}
}

void daftarMenu(){
		cout << "+========================================+" << endl;
		cout << "|		DAFTAR MENU		 |" << endl;
		cout << "+========================================+" << endl;
		
	for(int i=0; i < jmlhData; i++){ 
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
	cout << "+========================================+" << endl;
	cout << "|	  DATA MENU DITEMUKAN		 |" << endl;
	cout << "+========================================+" << endl << endl;;
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
