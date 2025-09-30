#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i < 5; i++) {
        for (int s = 0; s < i * 3; s++) cout << " ";
        for (int j = 1; j <= 5 - i; j++) cout << j << " ";
        cout << endl;
    }
    
}
