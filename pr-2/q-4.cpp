#include <iostream>
using namespace std;

main() {
    char a, z;
    cout << "Enter First Character : ";
    cin >> a;

    cout << "Enter Second Character : ";
    cin >> z;

    char i = a;
    do{
        cout << i << " ";
        i++;
    }while(i <= z);
}