#include <iostream>
using namespace std;

main() {
    int n, count = 0;

    cout << "Enter YOUR Number : ";
    cin >> n;

    while(n != 0){
        count++;
        n = n / 10;
    }
    cout << "The Length is : " << count;
}