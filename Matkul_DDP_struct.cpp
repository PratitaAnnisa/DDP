#include <iostream>
#include <iomanip>
using namespace std;

struct KHS {
	string namaMKA;
	int sks;
	string nilaiHuruf;
	float harkat;
	float harkatxSKS;
};

int main(){
	int n;
	cout << "Masukan jumlah mata kuliah : ";
	cin >> n;
	cin.ignore(); //biar kalo enter ga berhenti
	system("cls");
	
	KHS data[n];
	float totalSKS = 0, totalharkatxSKS = 0;
	
	cout << "===== Masukkan Data KHS =====" << endl;
	for (int i = 0; i < n; i ++){
		cout << "Masukkan mata kuliah ke-" << i+1 << endl;
		cout << "Masukkan nama MK\t: ";
		getline(cin, data[i].namaMKA);
		cout << "SKS\t\t\t: ";
		cin >> data[i].sks;
		cout << "Masukkan Nilai Huruf\t: ";
		cin >> data[i].nilaiHuruf;
		cin.ignore();
		cout << endl;
		
		//konversi nilai huruf ke angka
		if (data[i].nilaiHuruf == "A"){
			data[i].harkat = 4.0;
		} else if(data[i].nilaiHuruf == "B+"){
			data[i].harkat = 3.5;
		} else if(data[i].nilaiHuruf == "B"){
			data[i].harkat = 3.0;
		} else if(data[i].nilaiHuruf == "C+"){
			data[i].harkat = 2.5;
		} else if(data[i].nilaiHuruf == "C"){
			data[i].harkat = 2.0;
		} else if(data[i].nilaiHuruf == "D"){
			data[i].harkat = 1.0;
		} else if(data[i].nilaiHuruf == "E"){
			data[i].harkat = 0.0;
		} else data[i].harkat = 0.0;
	
		data[i].harkatxSKS = data[i].harkat * data[i].sks;
		
		totalSKS += data[i].sks;  //totalSKS = totalSKS + data[i].sks;
		totalharkatxSKS += data[i].harkatxSKS;
	}
	
	float IPS = totalharkatxSKS / totalSKS;
	
	//output tabel
	cout << "\n------------------------------------------------------------------------------" << endl;
	cout << setw(5) << "No."
		 << setw(25) << "Nama MKA"
		 << setw(10) << "SKS"
		 << setw(10) << "Nilai"
		 << setw(10) << "Harkat"
		 << setw(15) << "Harkat x SKS" ;
	cout << "\n------------------------------------------------------------------------------" << endl;
	
	for(int i = 0; i < n; i++){
		cout << setw(5) << i+1
			 << setw(25) << data[i].namaMKA
			 << setw(10) << data[i].sks
			 << setw(10) << data[i].nilaiHuruf
			 << setw(10) << data[i].harkat
			 << setw(15) << data[i].harkatxSKS;
		 }
			 
		cout << "\n------------------------------------------------------------------------------" << endl;
	cout << setw(5) << "Jumlah"
		 << setw(25) << " "
		 << setw(10) << "totalSKS"
		 << setw(10) << " "
		 << setw(10) << " "
		 << setw(15) << "totalharkatxSKS" 
		 << endl;
		 
		cout << "Total IPS : " << IPS << endl;
		 
	
}
