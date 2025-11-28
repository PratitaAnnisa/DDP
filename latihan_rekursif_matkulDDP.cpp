#include <iostream>

using namespace std;

int DeretBiasa(int n){
	if(n == 0|| n == 1){
		return 1;
	} else {
		return n + DeretBiasa(n-1);
	}
}

int SelisihAneh(int x){
	if(x == 1){
		return 2;
	} else {
		return SelisihAneh(x-1) + (x + 1);
	}
}

double Pangkat2(int n){
	if(n==0) 
		return 1;
	else
		return 2 * Pangkat2(n-1);
}

int DeretPecahan(int n){
	if(n == 1){
		return 1/2; 
	} else 
		return (n / Pangkat2(n)) + DeretPecahan(n-1);
}

int main(){

	int n, menu;
	
	while (menu > 0 || menu < 5){
	cout << "MENU" << endl;
	cout << "1. Deret Biasa (1+2+3+...+n)" << endl;
	cout << "2. Deret Selisih Aneh (2, 5, 9, 14, 20, ...)" << endl;
	cout << "3. Deret Pecahan (n/2^n)" << endl;
	cout << "4. Keluar" << endl;
	
	cout << "Pilih: ";
	cin >> menu;
	
	switch (menu) {
		case 1:
		cout << "Masukkan Nilai: ";
		cin >> n;
		cout << "Deret Biasa: " << DeretBiasa(n) << endl << endl;
		break;
		
		case 2:
		cout << "Masukkan Nilai: ";
		cin >> n;
		cout << "Selisih Aneh: " << SelisihAneh(n) << endl << endl;
		break;
		
		case 3:
		cout << "Masukkan Nilai: ";
		cin >> n;
		cout << "Deret Pecahan: " << DeretPecahan(n) << endl << endl;
		break;
		
		case 4:
		return 0;
	}
}
}
