#include <iostream>
using namespace std;

int main(){
	int menu;
	char next;
	
	cout << "=============" << endl;
	cout << "|   Login   |" << endl;
	cout << "=============" << endl;
	
	int kesempatan = 3;
	string pass_nim = "143";
	string username = "febi";
	
	while (kesempatan > 0){
		string pass, nama;
		cout << "Masukkan Username : "; cin >> nama; 
		cout << "Masukkan PIN Anda : "; cin >> pass;
		if (pass == pass_nim && nama == username){
			cout << "Login Berhasil!!" << endl; system("cls");
			break;                                                                                
		   
		} else {
			kesempatan--;
			cout << "Ada yang keliru.. Coba Lagi!" << endl;
			cout << "Sisa Kesempatan : " << kesempatan << endl; 
			}
	
	} 
	if(kesempatan == 0){
		cout << "Bye" << endl;
		exit (0);
	} else {
		do {
			system ("cls");
			int kh, cp, et, harga;
		
			cout << "==========================================" << endl;
			cout << "|        ==Menu Warung Mas Budi==        |" << endl;
			cout << "==========================================" << endl;
			cout << "| 1. Kopi Hitam    - Rp 7000  | Stok: 40 |" << endl;
			cout << "| 2. Cappuccino    - Rp 10000 | Stok: 25 |" << endl;
			cout << "| 3. Es Teh Manis  - Rp 5000  | Stok: 35 |" << endl;
			cout << "| 4. Keluar & Tampilkan Laporan          |" << endl;
			cout << "==========================================" << endl;
			cout << "Pilih Menu (1-4): "; cin >> menu;
		
			switch (menu){
				case 1: 
				cout << "Masukkan jumlah pesanan Kopi Hitam: "; cin >> kh;
				harga = kh*7000;
				if (kh <= 40){
					cout << "Pesanan Berhasil! Harga = Rp " << harga << endl;
				} else { 
					cout << "Maaf, stok tidak dapat memenuhi permintaan." << endl;
				} break;
				
				case 2:
				cout << "Masukkan jumlah pesanan Cappuccino: "; cin >> cp;
				harga = cp*10000;
				if (cp <= 25){
					cout << "Pesanan Berhasil! Harga = Rp " << harga << endl;
				} else { 
					cout << "Maaf, stok tidak dapat memenuhi permintaan." << endl;
				} break;
			
				case 3:
				cout << "Masukkan jumlah pesanan Es Teh Manis: "; cin >> et;
				harga = et*5000;
				if (et <= 35){
					cout << "Pesanan Berhasil! Harga = Rp " << harga << endl;
				} else { 
					cout << "Maaf, stok tidak dapat memenuhi permintaan." << endl;
				} break;
				
				case 4:
				cout << "===LAPORAN PENGELUARAN===" << endl;
			
		} cout << "Apakah ingin pesan lagi? (y/n): ";
		  cin >> next;
		
        } while (next == 'y' || next == 'Y');
	
		}

	return 0;
}
