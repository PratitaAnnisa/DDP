#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	//mendeklarasikan variabel yang ada
	string nama;
	int n_barang, jmlh, subtotal, disc, uang, tot_bayar;
	
	//membuat daftar array
	int no_barang[5] = {1, 2, 3, 4, 5};
	string barang[5] = {"Beras", "Minyak Goreng", "Gula", "Susu Bubuk", "Telur"};
	int harga[5] = {65000, 38000, 15000, 42000, 28000};
	
	//pagar tabel untuk judul
	cout << setfill('=') << setw(40) << "=" << endl; //batas atas
	cout << setfill(' ') << setw(5) << " "
		 << "SELAMAT DATANG DI TOKO TIKI"
		 << setfill (' ') << setw(5) << " " << endl;
	cout << setfill('=') << setw(40) << "=" << endl; //batas bawah
	
	cout << endl;
	
	//untuk menampilkan tabel (nama kolom harga, nama barang, dan nomor kode)
	cout << setfill('-') << setw(40) << "-" << endl; //batas atas tabel
	cout << setfill(' ') << "| " << setw(3) << left << "NO"
		 << "| " << setw(15) << left << "NAMA BARANG"
		 << "| " << setw(15) << left << "HARGA BARANG" << "|\n";
	cout << setfill('-') << setw(40) << "-" << endl;
	
	//perulangan untuk mengisi setiap kolom pada tabel
	for (int i = 0; i < 5; i++) {
		cout << setfill(' ') << "| " << setw(3) << left << no_barang[i]
		 << "| " << setw(15) << left << barang[i]
		 << "| " << setw(10) << left << "RP" << harga[i] << "|\n";
	}
	cout << setfill('-') << setw(40) << "-" << endl; //batas bawah tabel
	
	cout << endl;
	
	//mulai meminta input nama, nomor barang dan jumlah barang yang akan dibeli
	cout << "Masukkan Nama Pembeli	: ";
	getline(cin, nama);
	
	cout << "Masukkan Nomor Barang	: "; 
	cin >> n_barang; //akan memengaruhi keadaan selanjutnya berdasarkan kode nomor yang diinput
	
	cout << "Masukkan Jumlah Beli	: "; 
	cin >> jmlh; //akan dikalikan dengan harga barang untuk menjadi nilai subtotal
	
	cout << endl;
	
	cout << setfill('=') << setw(12) << "=" //batas kiri
		 << " STRUK BELANJA " 
		 << setfill('=') << setw(13) << "=" << endl; //batas kanan
	
	cout << "Nama Pembeli	: " << nama << endl; //mengeluarkan nama yang telah diinput
	
	if (n_barang==1){ //kondisi jika nomor barang yang diinput adalah 1
		cout << "Nama Barang	: " << barang[0] << endl;
		cout << "Harga Barang	: Rp " << harga[0] << endl; //maka data array yang muncul adalah indeks ke 0
		cout << "Jumlah Beli	: " << jmlh << endl;
		subtotal = harga[0] * jmlh;
		cout << "Subtotal	: Rp " << subtotal << endl; //subtotal akan memengaruhi kondisi diskon
//kondisi ini akan berubah menyesuaikan dengan nomor barang yang diinputkan
		
		if (subtotal > 150000) { 	//jika subtotal lebih dari 150.000, maka:
			disc = subtotal * 0.06; 	//akan dapat diskon 6%
			cout << "Diskon		: Rp " << disc << endl;
			tot_bayar = subtotal - disc; 	//maka total bayar adalah subtotal - potongan (diskon)
			cout << "Total Bayar	: Rp " << tot_bayar << endl;
		} //proses perhitungan diskon akan dapat berubah sesuai dengan kondisi subtotal yang sesuai
		else if (subtotal > 100000) { 	
			disc = subtotal * 0.04; 
			cout << "Diskon		: Rp " << disc << endl;
			tot_bayar = subtotal - disc;
			cout << "Total Bayar	: Rp " << tot_bayar << endl;
		}
		else if (subtotal > 50000) {
			disc = subtotal * 0.02;
			cout << "Diskon		: Rp " << disc << endl;
			tot_bayar = subtotal - disc;
			cout << "Total Bayar	: Rp " << tot_bayar << endl;
		}
		else {
			disc = 0;
			cout << "Diskon		: Rp " << disc << endl;
			tot_bayar = subtotal - disc;
			cout << "Total Bayar	: Rp " << tot_bayar << endl;
		}
	}
	else if (n_barang==2) { // jika nomor barang yang diinputkan adalah 2
		cout << "Nama Barang	: " << barang[1] << endl;
		cout << "Harga Barang	: Rp " << harga[1] << endl;
		cout << "Jumlah Beli	: " << jmlh << endl;
		subtotal = harga[1] * jmlh;
		cout << "Subtotal	: Rp " << subtotal << endl;
		
		if (subtotal > 150000) {
			disc = subtotal * 0.06;
			cout << "Diskon		: Rp " << disc << endl;
			tot_bayar = subtotal - disc;
			cout << "Total Bayar	: Rp " << tot_bayar << endl;
		}
		else if (subtotal > 100000) {
			disc = subtotal * 0.04;
			cout << "Diskon		: Rp " << disc << endl;
			tot_bayar = subtotal - disc;
			cout << "Total Bayar	: Rp " << tot_bayar << endl;
		}
		else if (subtotal > 50000) {
			disc = subtotal * 0.02;
			cout << "Diskon		: Rp " << disc << endl;
			tot_bayar = subtotal - disc;
			cout << "Total Bayar	: Rp " << tot_bayar << endl;
		}
		else {
			disc = 0;
			cout << "Diskon		: Rp " << disc << endl;
			tot_bayar = subtotal - disc;
			cout << "Total Bayar	: Rp " << tot_bayar << endl;
		}
	}
	else if (n_barang==3) { //jika nomor barang yang diinputkan adalah 3
		cout << "Nama Barang	: " << barang[2] << endl;
		cout << "Harga Barang	: Rp " << harga[2] << endl;
		cout << "Jumlah Beli	: " << jmlh << endl;
		subtotal = harga[2] * jmlh;
		cout << "Subtotal	: Rp " << subtotal << endl;
		
		if (subtotal > 150000) {
			disc = subtotal * 0.06;
			cout << "Diskon		: Rp " << disc << endl;
			tot_bayar = subtotal - disc;
			cout << "Total Bayar	: Rp " << tot_bayar << endl;
		}
		else if (subtotal > 100000) {
			disc = subtotal * 0.04;
			cout << "Diskon		: Rp " << disc << endl;
			tot_bayar = subtotal - disc;
			cout << "Total Bayar	: Rp " << tot_bayar << endl;
		}
		else if (subtotal > 50000) {
			disc = subtotal * 0.02;
			cout << "Diskon		: Rp " << disc << endl;
			tot_bayar = subtotal - disc;
			cout << "Total Bayar	: Rp " << tot_bayar << endl;
		}
		else {
			disc = 0;
			cout << "Diskon		: Rp " << disc << endl;
			tot_bayar = subtotal - disc;
			cout << "Total Bayar	: Rp " << tot_bayar << endl;
		}
	}
	else if (n_barang==4) { //jika nomor barang yang diinputkan adalah 4
		cout << "Nama Barang	: " << barang[3] << endl;
		cout << "Harga Barang	: Rp " << harga[3] << endl;
		cout << "Jumlah Beli	: " << jmlh << endl;
		subtotal = harga[3] * jmlh;
		cout << "Subtotal	: Rp " << subtotal << endl;
		
		if (subtotal > 150000) {
			disc = subtotal * 0.06;
			cout << "Diskon		: Rp " << disc << endl;
			tot_bayar = subtotal - disc;
			cout << "Total Bayar	: Rp " << tot_bayar << endl;
		}
		else if (subtotal > 100000) {
			disc = subtotal * 0.04;
			cout << "Diskon		: Rp " << disc << endl;
			tot_bayar = subtotal - disc;
			cout << "Total Bayar	: Rp " << tot_bayar << endl;
		}
		else if (subtotal > 50000) {
			disc = subtotal * 0.02;
			cout << "Diskon		: Rp " << disc << endl;
			tot_bayar = subtotal - disc;
			cout << "Total Bayar	: Rp " << tot_bayar << endl;
		}
		else {
			disc = 0;
			cout << "Diskon		: Rp " << disc << endl;
			tot_bayar = subtotal - disc;
			cout << "Total Bayar	: Rp " << tot_bayar << endl;
		}
	}
	else if (n_barang==5) { //jika nomor barang yang diinputkan adalah 5
		cout << "Nama Barang	: " << barang[4] << endl;
		cout << "Harga Barang	: Rp " << harga[4] << endl;
		cout << "Jumlah Beli	: " << jmlh << endl;
		subtotal = harga[4] * jmlh;
		cout << "Subtotal	: Rp " << subtotal << endl;
		
		if (subtotal > 150000) {
			disc = subtotal * 0.06;
			cout << "Diskon		: Rp " << disc << endl;
			tot_bayar = subtotal - disc;
			cout << "Total Bayar	: Rp " << tot_bayar << endl;
		}
		else if (subtotal > 100000) {
			disc = subtotal * 0.04;
			cout << "Diskon		: Rp " << disc << endl;
			tot_bayar = subtotal - disc;
			cout << "Total Bayar	: Rp " << tot_bayar << endl;
		}
		else if (subtotal > 50000) {
			disc = subtotal * 0.02;
			cout << "Diskon		: Rp " << disc << endl;
			tot_bayar = subtotal - disc;
			cout << "Total Bayar	: Rp " << tot_bayar << endl;
		}
		else {
			disc = 0;
			cout << "Diskon		: Rp " << disc << endl;
			tot_bayar = subtotal - disc;
			cout << "Total Bayar	: Rp " << tot_bayar << endl;
		}
	}
	else { //apabila nomor barang yang diinput >6 (yang mana tidak ada dalam daftar)
		cout << "Nomor Kode tidak tersedia" << endl;
	}
	
	cout << endl;
	
	//bagian pembayaran
	cout << setfill('-') << setw(14) << "-"
		 << " PEMBAYARAN " 
		 << setfill('-') << setw(14) << "-" << endl;
	
	cout << "Jumlah uang	: Rp "; //input nilai uang
	cin >> uang;
	cout << endl;
	
	//kondisi pembelian akan berhasil jika uang >= total bayar
	if (uang >= tot_bayar) {
		 cout << setfill('-') << setw(11) << "-"
		 << " PEMBELIAN BERHASIL " 
		 << setfill('-') << setw(9) << "-" << endl;
		 cout << "Kembalian	: Rp " << uang - tot_bayar; 
	}
	else { //kondisi uang < total bayar, maka pembelian gagal
		 cout << " MAAF UANG ANDA KURANG. PEMBELIAN GAGAL" << endl;
	}
	
}
