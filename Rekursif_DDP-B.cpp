#include <iostream>
#include <iomanip>
using namespace std;

//void listMonster();

int main() {
	int pilihMenu, indexMonster, indexKandang, maxIndxKandang;
	
	string monster[10]={"Fluffernut", "Bloopie",
						"Snuggglefang", "Wobblepaw",
						"Giglegut", "Puffaro",
						"Munckinator", "Squishle",
						"Chomperoo", "Twinkletoes"};
	
	string kandang[4];
	indexKandang = 0;
	maxIndxKandang = 4;
	
	string username, password, nim, pass;
	nim = "124250014";
	pass = "pratita";
	
	cout << setfill('=') << setw(20) << "=" << endl;
	cout << "Monster Lab IF"  << endl;
	cout << setfill('=') << setw(20) << "=" << endl;
	
	cout << "Username\t: ";
	cin >> username;
	cout << "Password\t: ";
	cin >> password;
	
	if (username == nim && password == pass ){
		cout << "--- MENU ---" << endl;
		cout << "1. Berburu Monster" << endl;
		cout << "2. Breeding Mosnter" << endl;
		cout << "3. List Monster" << endl;
		cout << "4. Keluar" << endl;
		
		cout << "Input Menu" << endl;
		cout << "> Pilih (1-4): ";
		cin >> pilihMenu;
		do{
		switch(pilihMenu){
			case 1:
				srand(time(0));
				indexMonster = rand()%10;
				cout << "*** Kamu Berhasil Menangkap Monster: " << monster[indexMonster] << " ***" << endl;
				cout << "Monster ditambahkan ke koleksi!" << endl;
				indexKandang +=1;
				kandang[indexKandang] = monster[indexMonster];
				break;
			case 3:
				cout << "--- Koleksi Monster Kamu ---" << endl;
				
				
				
				
		}
		cout << "Input Menu" << endl;
		cout << "> Pilih (1-4): ";
		cin >> pilihMenu;
	}while(pilihMenu >0 && pilihMenu <5);
		
		
	} else {
		cout << "Login gagal!";
	}

}

/*void listMonster(){
	int indexMonster;
	srand(time(0));
	string monster[10]={"Fluffernut", "Bloopie",
						"Snuggglefang", "Wobblepaw",
						"Giglegut", "Puffaro",
						"Munckinator", "Squishle",
						"Chomperoo", "Twinkletoes"};
	indexMonster = rand()%10;
	cout << "*** Kamu Berhasil Menangkap Monster: " << monster[indexMonster] << " ***" << endl;
	cout << "Monster ditambahkan ke koleksi!" << endl;
} */
