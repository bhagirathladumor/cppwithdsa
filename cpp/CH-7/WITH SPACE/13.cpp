#include <iostream>
using namespace std;
int main() // Pattern 13 {
    for (int i = 1; i <= 5; i++) {
        for (int s = 1; s <= 5 - i; s++) cout << "  ";
        for (int j = 1; j <= i; j++) cout << j << " ";
        cout << endl;
    }
    
}
