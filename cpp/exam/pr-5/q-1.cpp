#include <iostream>
#include "functions.cpp"
using namespace std;

int main()
{

    int ch, i;

    while (ch != 0)
    {
        cout << endl << endl
             << "Press 1 for + ";
        cout << endl
             << "Press 2 for - ";
        cout << endl
             << "Press 3 for * ";
        cout << endl
             << "Press 4 for / ";
        cout << endl
             << "Press 5 for % ";
        cout << endl
             << "Press 0 for EXIT ";
        cout << "Enter Choice : ";
        cin >> ch;

        operationChoice(ch);
        i++;
    }
}