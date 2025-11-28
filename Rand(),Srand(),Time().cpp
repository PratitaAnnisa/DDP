#include <iostream>
#include <ctime>
using namespace std;

void angkaAcak();
void hurufacak();

int main(){
	angkaAcak();
	hurufacak();
}

void angkaAcak(){
	int random;
	srand(time(0));
	for(int a=1; a<=5; a++){
		random = rand()%5;
		cout << "acak " << a << " = " << random << endl;
	}
}

void hurufacak(){
	int random;
	string alphabet;
	srand(time(0));
	
	for(int a=0; a<5; a++){
		random = rand()%26;
		alphabet = 'a' + random;
		
		cout << " [" << alphabet << "] ";
	}
}
