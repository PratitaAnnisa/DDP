#include<iostream>
using namespace std;

void LuasPersegi(int s){ //menerima variabel sisi dengan nama baru (s)
	int luas = s * s;
	cout << "Luas Persegi dengan sisi " << s << " adalah " << luas << endl;
}

//menggunakan parameter masukan
int main(){
	int sisi;
	cout << "Masukkan Sisi: ";
	cin >> sisi;
	LuasPersegi(sisi); //mengirim nilai variabel sisi ke fungsi luasPersegi
}
