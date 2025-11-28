#include <iostream>
using namespace std;

int main() {
	
	cout << "========================== DO-WHILE ================================"<< endl;
	
    int x = 1;

    // Bagian atas
    do {
        int y = 1;
        do {
            cout << y * 10 << " ";
            y++;
        } while (y <= x);
        cout << endl;
        x++;
    } while (x <= 5);

    // Bagian bawah
    x = 4;
    do {
        int y = 1;
        do {
            cout << y * 10 << " ";
            y++;
        } while (y <= x);
        cout << endl;
        x--;
    } while (x >= 1);
    
	cout << endl;
	cout << "========================== WHILE ================================" << endl;
	
	 // Bagian atas
    while (x <= 5) {
        int y = 1;
        while (y <= x) {
            cout << y * 10 << " ";
            y++;
        }
        cout << endl;
        x++;
    }

    // Bagian bawah
    x = 4;
    while (x >= 1) {
        int y = 1;
        while (y <= x) {
            cout << y * 10 << " ";
            y++;
        }
        cout << endl;
        x--;
    }
	
    return 0;
}

