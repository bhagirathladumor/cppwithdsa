#include <iostream>
using namespace std;

int main() {

    int a, b, temp;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping: a = " << a << ", b = " << b << endl;
}