#include <iostream>
using namespace std;

main() {
    int n, first;
    cout << "Enter YOUR Number : ";
    cin >> n;
    int temp = n;

    n = n % 10;
    int last = n;

    while(temp >= 9) {
        temp = temp / 10;
    }
    first = temp;
    n = first + last;
    cout << first << " + " << last << " = " << n;
}