#include <iostream>
using namespace std;

int main(){
	
	int nim, pw, login;
	string UN, user;
	
	login = 3;
	UN = "tita";
	
	cout << "Masukkan 3 digit terakhir NIM: " ;
	cin >> nim;
	cout << endl;
	
	while (login > 0) {
		cout << "Username: " ;
		cin >> user;
		cout << "password: ";
		cin >> pw;
		
		if (pw != nim && user != UN){
			cout << "Password dan Username Salah!";
			cout << endl;
			login--;
		}
		else if (pw == nim && user != UN){
			cout << "Username Salah!";
			cout << endl;
			login--;
		}
		else if (pw != nim && user == UN){
			cout << "Password Salah!";
			cout << endl;
			login--;
		}
		else {
			if (pw == nim && user == UN){
				cout << "Login Berhasil" ;
				cout << endl;
			}
			
		}
	}
	if (login==0) {
		cout << "Kesempatan Habis. Program Keluar";
	}
}
