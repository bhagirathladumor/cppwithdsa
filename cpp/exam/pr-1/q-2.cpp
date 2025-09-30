#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter yor number: ";
    cin >> number;

    if (number % 2 == 0 && number % 5 == 0) {
        cout << "The number is even and The number is divisible by 5." << endl;
    } else {
        cout << "The number is odd." << endl;
    }
}
