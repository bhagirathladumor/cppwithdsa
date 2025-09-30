#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    cout << "Password Strength Checker" << endl;
    cout << endl
         << "--------------------------------" << endl;

    char password[20];
    cout << endl
         << "Enter your password: ";
    cin >> password;
    int length = strlen(password);

    int upper = 0;
    int lower = 0;
    int digit = 0;
    int special = 0;

    if (length >= 8)
    {
        for (int i = 0; i < length; i++)
        {
            if (password[i] >= 65 && password[i] <= 90)
            {
                upper++;
            }
            else if (password[i] >= 97 && password[i] <= 122)
            {
                lower++;
            }
            else if (password[i] >= 48 && password[i] <= 57)
            {
                digit++;
            }
            else
            {
                special++;
            }
        }
        cout << endl
             << "--------------------------------" << endl;

        cout << endl
             << "Password analysis:" << endl;
        cout << "Total characters: " << length << endl;
        cout << "Total uppercase letters: " << upper << endl;
        cout << "Total lowercase letters: " << lower << endl;
        cout << "Total digits: " << digit << endl;
        cout << "Total special characters: " << special << endl;

        cout << endl
             << "--------------------------------" << endl;

        if (upper > 0 && lower > 0 && digit > 0 && special > 0)
        {
            cout << "Password is strong." << endl;
        }
        else
        {
            cout << "Password is not strong." << endl;
        }
    }
    else
    {
        cout << "Password is not strong." << endl;
    }
    cout << endl
         << endl;
    return 0;
}