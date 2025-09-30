#include <iostream>
using namespace std;

int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    cout << endl
         << "Recursion Example: Factorial Calculation" << endl;
    cout << "........................................" << endl;

    int number = 0;
    cout << endl
            << "Enter a number to calculate its factorial: ";
    cin >> number;
    cout << "Calculating factorial of " << number << "..." << endl;

    int result = fact(number);
    cout << result << endl;
    return 0;
}