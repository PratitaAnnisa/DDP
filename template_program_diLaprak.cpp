
#include <iostream>
#include <iomanip>
#include<ctime>
using namespace std;

int main() {
    char idKasir;
    string kasir, shift;
    cout << left << setw(20) << setfill(' ') << "ID Kasir" << " : "; cin >> idKasir;
    cout << left << setw(20) << setfill(' ') << "Shift Kasir (1/2/3)" << " : "; cin >> shift;
    cout << endl;

    switch (idKasir){
        case 'J' :
            kasir = "Jessica";
            break;
        case 'N' :
            kasir = "Natalia";
            break;
        case 'A' :
            kasir = "Agust D";
            break;
        case 'F' :
            kasir = "Jenifer";
            break;
    }
    cout << "Hallo, " << kasir << ". Kamu bekerja pada shift ke-" << shift << " hari ini. Semangat! \n\n";
  
    int banyakJenis;
    cout << left << setw(20) << setfill(' ') << "Banyak Jenis Obat yang Dibeli" << " : "; cin >> banyakJenis;
    cout << endl;
    
    string nama[banyakJenis], x;
    int banyakItem[banyakJenis], harga[banyakJenis], subtotal[banyakJenis], total, tunai, kembali, i;
	
	for(i=0; i<banyakJenis; i++){
		cout << setw(35) << setfill('=') << "" <<endl;
		cout << "Produk ke-" << i+1 << endl;
		cout << left << setw(10) << setfill(' ') << "Nama Obat" << " : "; cin.ignore();	getline(cin, x);
		if (x.length() > 20) {
                x = x.substr(0, 20); 
		}
		nama[i] = x;
		
		cout << left << setw(10) << setfill(' ') << "Banyak" << " : "; cin >> banyakItem[i];
		cout << left << setw(10) << setfill(' ') << "Harga" << " : "; cin >> harga[i];
		subtotal[i] = banyakItem[i]*harga[i];
		total = total+subtotal[i];
	}
    
    system("cls");
    time_t timetoday;
    time (&timetoday);
    
    cout << setw(41) << setfill('=') << "" <<endl;
	cout << "            APOTEK DATARMACYS            " << endl;
	cout << setw(41) << setfill('=') << "" <<endl;
	cout << "/" << shift<< "/" << kasir << "/" << right << setw(31) << setfill(' ') << asctime(localtime(&timetoday));
	cout << setw(41) << setfill('-') << "" <<endl;
    
    for(i=0; i<banyakJenis; i++){
        cout << left << setw(23) << setfill(' ') << nama[i] << right << setw(4) << banyakItem[i] << setw(7) << harga[i] << setw(7) << subtotal[i] << endl;
    }
    
	cout << setw(27) << setfill(' ') << "" << setw(14) << setfill('-') << "" << endl;
	cout << setw(27) << setfill(' ') << "" << "TOTAL  " << right << setw(7) << total <<endl;
	cout << setw(27) << setfill(' ') << "" << "TUNAI  "; cin >> tunai;
    if (tunai > total) {
        kembali = tunai-total;
    } else {
        kembali = 0;
    } 
    
    cout << setw(27) << setfill(' ') << "" << "KEMBALI" << right << setw(7) << kembali <<endl;
    cout << setw(41) << setfill('-') << "" <<endl;
    cout << "           Semoga Lekas Sembuh           \n";
    cout << setw(41) << setfill('=') << "" <<endl;
}
