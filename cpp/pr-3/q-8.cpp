#include <iostream>
using namespace std;

int main() {

    int i,j;
    for (i = 1; i <= 8; i++) {
        for (j = 1; j <= 5; j++) {
            if (i == 1 || j == 1 || i== 8 ||(j == 5 && i ==7) ||(j == 5 && i ==6) ||(j == 4 && i ==6))
                cout << "*  ";
            else
                cout << "   ";
        }
        cout << endl;
    }
}
