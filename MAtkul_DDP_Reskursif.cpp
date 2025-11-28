#include <iostream>

using namespace std;

int faktorial(int n){
	if(n == 0|| n == 1){
		return 1;
	} else {
		return n * faktorial(n-1);
	}
}

int fibonacci(int n){
	if(n == 1|| n == 2){
		return 1;
	} else {
		return fibonacci(n-1) + fibonacci(n-2);
	}
} 

int main(){
		int n;
		cout << "Masukkan Bilangan: ";
		cin >> n;
		cout << "Faktorail: " <<  n << "! = " << faktorial(n) << endl;
		cout << "Fibonacci ke-" << n << "= " << fibonacci(n);
}
