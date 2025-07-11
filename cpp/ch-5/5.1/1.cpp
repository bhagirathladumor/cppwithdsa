#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    int min;
    if (num1 < num2) {
        min = num1;
    } else {
        min = num2;
    }
    cout << "The minimum number is: " << min << endl;
}