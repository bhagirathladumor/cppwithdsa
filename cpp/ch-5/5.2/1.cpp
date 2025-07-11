#include <iostream>
using namespace std;

int main() {
    
    int a, b, c;
    
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    
    int min;
    
    if (a < b) {
        if (a < c) {
            min = a;
        } else {
            min = c;
        }
    } else {
        if (b < c) {
            min = b;
        } else {
            min = c;
        }
    }
    
    cout << "The minimum number is: " << min << endl;

}