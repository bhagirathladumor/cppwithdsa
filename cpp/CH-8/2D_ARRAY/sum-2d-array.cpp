#include <iostream>
using namespace std;

main()
{
    int rows, cols;
    cout << endl
         << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int a[rows][cols];

    cout << endl
         << "Array input:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter elements [ " << i << " ][ " << j << " ]: ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    int sum = 0;

    cout << endl
         << "Array output:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << a[i][j] << " ";
            sum += a[i][j];
        }
        cout << endl;
    }
    cout << endl << "Sum of all elements: " << sum << endl;
    cout << endl;
}