#include<iostream>
using namespace std;

//ubah nilai pakai & (pass y refernce)
void UbahNilai(int &x){
	x = x + 10;
	cout << "Nilai dalam fungsi: " << x << endl;
}

//menggunakan parameter masukan & keluaran
int main(){
	int a = 5;
	cout << "sebelum Fungsi dipanggil: " << a << endl;
	
	UbahNilai(a);
	cout << "Setelah fungsi dipanggil: " << a << endl;
}

//jika paramater tanpa & (disebut dengan pass by value) yaitu nilai tidak diubah walau sudah lewat fungsi
//jika parameter menggunakan & (disebut [ass by reffernce] yaitu nilai akhir akan berubah mengikuti fungsi)
