#include <iostream>
using namespace std;

void sum(int a, int b, int c);

void sum(int a, int b, int c)
{
    cout << a << " + " << b << " + " << c << " = " << endl;
    cout << "the sum is... -> " << a + b + c << endl;
}

int main()
{
    int a, b, c;
    cout << endl
         << "Enter A B and C value: ";
    cin >> a >> b >> c;
    sum(a, b, c);
    
    return 0;
}