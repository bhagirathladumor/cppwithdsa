#include <iostream>
using namespace std;

main()
{
    int n, sum = 1, a = 1;

    cout << "Enter Any Number : ";
    cin >> n;
    
    while( a <= n)
     {
        cout << sum << " ";
        sum += a;
        a++;
    }  
}