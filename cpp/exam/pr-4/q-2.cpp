#include <iostream>
using namespace std;

int main()
{
    int r, c;

    cout << "Enter Row Size : ";
    cin >> r;
    cout << "Enter Column Size : ";
    cin >> c;

    int a[r][c];

    cout << endl << endl
         << "Array Elements Input" << endl
         << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter a[" << i << "][" << j << "] : ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    cout << endl << endl
         << "Array Elements Output" << endl
         << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    int largest = a[0][0];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (largest < a[i][j])
            {
                largest = a[i][j];
            }
        }
    }
    cout << endl
         << "Largest Element in Array is : " << largest << endl
         << endl;
    return 0;
}