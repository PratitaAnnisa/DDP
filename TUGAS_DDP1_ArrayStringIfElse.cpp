#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	string nama;
	int n_barang, jmlh, subtotal, disc = 0, uang, tot_bayar;

	int no_barang[5] = {1, 2, 3, 4, 5};
	string barang[5] = {"Beras", "Minyak Goreng", "Gula", "Susu Bubuk", "Telur"};
	int harga[5] = {65000, 38000, 15000, 42000, 28000};

	cout << setfill('=') << setw(40) << "=" << endl;
	cout << setfill(' ') << setw(5) << " "
		 << "SELAMAT DATANG DI TOKO TIKI"
		 << setfill (' ') << setw(5) << " " << endl;
	cout << setfill('=') << setw(40) << "=" << endl;

	cout << setfill('-') << setw(40) << "-" << endl;
	cout << setfill(' ') << "| " << setw(3) << left << "NO"
		 << "| " << setw(15) << left << "NAMA BARANG"
		 << "| " << setw(15) << left << "HARGA BARANG" << "|\n";
	cout << setfill('-') << setw(40) << "-" << endl;

	for (int i = 0; i < 5; i++) {
		cout << setfill(' ') << "| " << setw(3) << left << no_barang[i]
			 << "| " << setw(15) << left << barang[i]
			 << "| " << setw(10) << left << "RP" << harga[i] << "|\n";
	}
	cout << setfill('-') << setw(40) << "-" << endl << endl;
	
	cout << "Masukkan Nama Pembeli	: ";
	getline(cin, nama);
	
	cout << "Masukkan Nomor Barang	: "; 
	cin >> n_barang;
	if (n_barang < 1 || n_barang > 5) {
		cout << "Nomor Kode barang tidak tersedia" << endl;
		return 0;
	}
	
	cout << "Masukkan Jumlah Beli	: "; 
	cin >> jmlh;
	cout << endl;
	
	if (n_barang >= 1 && n_barang <= 5) {
		int index = n_barang - 1;
		subtotal = harga[index] * jmlh;

		if (subtotal > 150000)
			disc = subtotal * 0.06;
		else if (subtotal > 100000)
			disc = subtotal * 0.04;
		else if (subtotal > 50000)
			disc = subtotal * 0.02;

		tot_bayar = subtotal - disc;

		cout << setfill('=') << setw(12) << "=" << " STRUK BELANJA " << setfill('=') << setw(13) << "=" << endl;
		cout << "Nama Pembeli\t: " << nama << endl;
		cout << "Nama Barang\t: " << barang[index] << endl;
		cout << "Harga Barang\t: Rp " << harga[index] << endl;
		cout << "Jumlah Beli\t: " << jmlh << endl;
		cout << "Subtotal\t: Rp " << subtotal << endl;
		cout << "Diskon\t\t: Rp " << disc << endl;
		cout << "Total Bayar\t: Rp " << tot_bayar << endl;
	}

	cout << endl << setfill('-') << setw(14) << "-" << " PEMBAYARAN " << setfill('-') << setw(14) << "-" << endl;
	cout << "Jumlah uang\t: Rp ";
	cin >> uang;
	cout << endl;

	if (uang >= tot_bayar) {
		cout << setfill('-') << setw(11) << "-" << " PEMBELIAN BERHASIL " << setfill('-') << setw(9) << "-" << endl;
		cout << "Kembalian\t: Rp " << uang - tot_bayar << endl;
	} else {
		cout << "MAAF UANG ANDA KURANG. PEMBELIAN GAGAL" << endl;
	}
}
