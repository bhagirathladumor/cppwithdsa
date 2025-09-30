#include <iostream>
using namespace std;

main() { 
    int i,j,s;
    for( i = 6; i >= 1; i--) {
        for(s = 1; s < i; s++) {
            cout << "  ";
        }
        for(j = i; j <= 6; j++) {
            cout << "* ";
        }
        for(j = 5; j >= i; j--) {
            cout << "* ";
        }
        cout << endl;
    }

    for(i = 2; i <= 6; i++) {
        for(s = 1; s < i; s++) {
            cout << "  ";
        }
        for(j = i; j <= 6; j++) {
            cout << "* ";
        }
        for (j = 5; j >= i; j--) {
            cout << "* ";
        }
        cout << endl;
    }
}