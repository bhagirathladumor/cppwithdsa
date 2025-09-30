#include <iostream>
#include <cstring>
using namespace std;

// Take char array, return int (1 for valid, 0 for invalid)

int TheVaLIdEmaIl(char email[])
{
    int AgtPos = -1, DotPos = -1, leNGth = strlen(email);
    for (int i = 0; i < leNGth; i++)
    {
        if (email[i] == '@')
            AgtPos = i;
        if (email[i] == '.' && AgtPos != -1)
        {
            DotPos = i;
            break;
        }
    }
    if (AgtPos > 0 && DotPos > AgtPos + 1 && DotPos < leNGth - 1)
        return 1;
    else
        return 0;
}

int main()
{
    cout << endl
         << "Email Validation Program" << endl;
    cout
        << "--------------------------------" << endl;

    char email[100];
    cout << "Enter your email: ";
    cin >> email;

    if (TheVaLIdEmaIl(email))
        cout << "Valid email address....." << endl;
    else
        cout << "Invalid email address...." << endl;

    return 0;
}