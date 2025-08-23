#include <iostream>
using namespace std;

void calculatorInput(int &a, int &b)
{
    cout << endl
         << "Enter First Value : ";
    cin >> a;
    cout << "Enter Second Value : ";
    cin >> b;
}

void sum(int a, int b)
{
    cout << endl
         << "Addition of " << a << " & " << b << " is : " << a + b;
}

void sub(int a, int b)
{
    cout << endl
         << "Subtraction of " << a << " & " << b << " is : " << a - b;
}

void mul(int a, int b)
{
    cout << endl
         << "Multiplication of " << a << " & " << b << " is : " << a * b;
}

void divi(int a, int b)
{
    cout << endl
         << "Division of " << a << " & " << b << " is : " << a / b;
}

void modulo(int a, int b)
{
    cout << endl
         << "Modulus of " << a << " & " << b << " is : " << a % b;
}

void operationChoice(int ch)
{
    int a, b;
    switch (ch)
    {
    case 1:
        calculatorInput(a, b);

        sum(a, b);

        break;

    case 2:
        calculatorInput(a, b);

        sub(a, b);

        break;

    case 3:
        calculatorInput(a, b);

        mul(a, b);

        break;

    case 4:
        calculatorInput(a, b);

        divi(a, b);

        break;

    case 5:
        calculatorInput(a, b);

        modulo(a, b);

        break;

    case 0:
        cout << endl
             << "Program Exited Successfully....!" << endl;

        break;

    default:
        cout << endl
             << "Invalid Choice" << endl;
    }
}