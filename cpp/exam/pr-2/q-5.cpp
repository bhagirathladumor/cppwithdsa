#include <iostream>
using namespace std;

main()
{
    char i = 'A';
    do{
        cout << i << " ";
        i += 4;
    }while(i <= 'Z');
}