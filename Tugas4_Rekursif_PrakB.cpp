#include <iostream>
#include <iomanip>
#include <time.h>
#include <cstdlib>

using namespace std;

string monster[10] = {"Fluffernut", "Bloopie", "Snugglefang", "Wobblepaw", "Gigglenut", "Puffaroo", "Munchkinator", "Squishle", "Chomperoo", "Twinkletoes"};
string menu[4] = {"Berburu Monster", "Breeding", "Koleksi Monster", "Logout"};

int faktorial(int n) {
	if (n<=1) return 1;
	return n * faktorial(n-1);
}
int kombinasi(int n, int r) {
	return (faktorial(n)/(faktorial(r)*faktorial(n-r)));
}

void tampilkanMenu(string menu[], int ukuran){
	cout << "==== MENU ====" << endl;
	for (int i = 0; i < ukuran; i++){
		cout << i + 1 << ". " << menu[i] << endl;
	}
}

void berburu(){
	
	if (jumlahMonster < 2) {
        cout << "Kamu belum punya cukup monster untuk breeding ";

    }
}

void breeding(){
	
	if (monsterDimiliki < 2) {
        cout << "Kamu tidak memiliki cukup monster untuk breeding! " <<endl;
    }
}

void koleksi(){
	
	cout << "----- Koleksi Monster Kamu -----" << endl;
	if (koleksi == 0){
		cout << "kamu belum memiliki monster" << endl;
	} else {
		for(int i = 0; i < monsterDimiliki; i++){
			cout << i+1 << ". " << monsterDimiliki[i] << endl;
		}
	}
}

void login(){
	cout << "============================\n" <<endl;
    cout << "       Monster Lab IF        " <<endl;
    cout << "\n============================" <<endl;
    while(true) {
    cout << left << setw(10) << "\nUsername: ";
    string usn;
    getline(cin,usn);
    cout << left << setw(10) << "Password: ";
    string pw;
    getline(cin,pw);
    if (usn == "124250039" && pw == "golangfatah") {
        cout << "Login berhasil!\n\n";
        break;
    } else {
        cout << "Username atau password salah!\n\n";
    }
    }

}

int main(){
	login();
	tampilkanMenu(menu, 4);
	while (true) {
        cout << "\nInput Menu: "<<endl;
        cout << "> Pilih (1-4): ";
        int pilih;
        cin >> pilih;
        if (pilih <1 || pilih > 4) {
            cout << "Input tidak valid." << endl;
        }
        switch (pilih) {
            case 1 : {
                berburu();
                break;
            }
            case 2 : {
                breeding();
                break;
            }
            case 3 : {
                koleksi();
                break;
            }
            case 4 : {
                cout << "Log out Goodbye! " << endl;
                return 0;
            }
        }
    }
    

}
