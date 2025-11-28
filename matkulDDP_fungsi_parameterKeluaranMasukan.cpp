#include<iostream>
using namespace std;

void LuasSegtiga(float a, float t, float &luas){ 
	luas = (a * t) / 2;
}

//menggunakan parameter masukan & keluaran
int main(){
	float a, t, luas;
	cout << "Masukkan alas: ";
	cin >> a;
	cout << "Masukkan tinggi: ";
	cin >> t;
	LuasSegtiga(a, t, luas);
	
	cout << "Luas Segitiga: " <<  luas;
	
}

