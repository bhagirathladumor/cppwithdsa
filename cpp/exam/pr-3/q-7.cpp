#include <iostream>
using namespace std;

int main() {

    int i,j;
    for (i = 1; i <= 7; i++) {
        for (j = 1; j <= 5; j++) {
            if (i == 1 || i == 4|| j == 1 || (j == 5 && i == 2 ) || ( j == 5 && i == 3))
                cout << "*  ";
            else
                cout << "   ";
        }
        cout << endl;
    }
}
