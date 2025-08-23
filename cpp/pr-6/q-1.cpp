#include <iostream>
using namespace std;

int main()
{
    char str[50];

    cout << "Enter String : ";
    cin >> str;

    char *ptr = str;

    int n = 0;
    for (int i = 0; ptr[i] != '\0'; i++)
        n++;

    cout << n;

    return 0;
}