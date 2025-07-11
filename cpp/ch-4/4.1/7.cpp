#include <iostream>
using namespace std;

int main() {
    
    int a, b, c;
    
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of y: ";
    cin >> b;
    cout << "Enter the value of z: ";
    cin >> c;

    int result = (a + b + c) * (a + b + c);
    
    cout << "The result of (a + y + z)^2 is: " << result << endl;
}