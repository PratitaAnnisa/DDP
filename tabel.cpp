#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	cout << "+========================================+" << endl;
	cout << "|	       TRAKSASI	    		 |" << endl;
	cout << "+========================================+" << endl;
	
	cout << "+========================================+" << endl;
	cout << "|	  	 MAIN MENU		 |" << endl;
	cout << "+========================================+" << endl;
	
			cout << "+========================================+" << endl;
		cout << "|	  	 MAIN MENU		 |" << endl;
		cout << "+========================================+" << endl;
		cout << "| 1. Input Menu                          |" << endl;
		cout << "| 2. Daftar Menu                         |" << endl;
		cout << "| 3. Pencarian Menu                      |" << endl;
		cout << "| 4. Cetak Menu                          |" << endl;
		cout << "=========================================+" << endl;
	
		cout << "+========================================+" << endl;
		cout << "|		DAFTAR MENU		 |" << endl;
		cout << "+========================================+" << endl;
    //cout << setfill('-') << setw(62) << "-" << endl;
    cout << setfill(' ') << "|" << setw(4) << left << "Kode"
         << "| " << setw(20) << left << "Nama Hidangan"
         << "| " << setw(12) << left << "Harga" << "|\n";
    //cout << setfill('-') << setw(50) << "-" << endl;

    /*for (int i = 0; i < banyak_buku; i++) {
        cout << setfill(' ') << "| " << setw(5) << left << "-"
             << "| " << setw(25) << left << ";"
             << "| " << setw(15) << left << "-" << "|\n";
	} */
    cout << setfill('-') << setw(62) << "-" << endl;	
    
    cout << endl << endl << endl;
    	cout << "+========================================+" << endl;
		cout << "|		DAFTAR MENU		 |" << endl;
		cout << "+========================================+" << endl;
		cout << "PEMBUKA" << endl;
		cout << setfill(' ') << "|" << setw(4) << left << "Kode"
         << "| " << setw(20) << left << "Nama Makanan"
         << "| " << setw(12) << left << "Harga" << "|\n";
        cout << "HIDANGAN UTAMA" << endl;
        cout << setfill(' ') << "|" << setw(4) << left << "Kode"
         << "| " << setw(20) << left << "Nama Makanan"
         << "| " << setw(12) << left << "Harga" << "|\n";
        cout << "DESSERT" << endl;
        cout << setfill(' ') << "|" << setw(4) << left << "Kode"
         << "| " << setw(20) << left << "Nama Makanan"
         << "| " << setw(12) << left << "Harga" << "|\n";
        cout << "MINUMAN" << endl;
        cout << setfill(' ') << "|" << setw(4) << left << "Kode"
         << "| " << setw(20) << left << "Nama Makanan"
         << "| " << setw(12) << left << "Harga" << "|\n";	
	
}

/*void cetakMenu(){
		cout << "+========================================+" << endl;
		cout << "|		DAFTAR MENU		 |" << endl;
		cout << "+========================================+" << endl;
		cout << "PEMBUKA" << endl;
		cout << setfill(' ') << "|" << setw(4) << left << "Kode"
         << "| " << setw(20) << left << "Nama Makanan"
         << "| " << setw(12) << left << "Harga" << "|\n";
        
        cout << endl;
        cout << "HIDANGAN UTAMA" << endl;
        cout << setfill(' ') << "|" << setw(4) << left << "Kode"
         << "| " << setw(20) << left << "Nama Makanan"
         << "| " << setw(12) << left << "Harga" << "|\n";
         
        cout << endl;
        cout << "DESSERT" << endl;
        cout << setfill(' ') << "|" << setw(4) << left << "Kode"
         << "| " << setw(20) << left << "Nama Makanan"
         << "| " << setw(12) << left << "Harga" << "|\n";
         
        cout << endl;
        cout << "MINUMAN" << endl;
        cout << setfill(' ') << "|" << setw(4) << left << "Kode"
         << "| " << setw(20) << left << "Nama Makanan"
         << "| " << setw(12) << left << "Harga" << "|\n";
} */
