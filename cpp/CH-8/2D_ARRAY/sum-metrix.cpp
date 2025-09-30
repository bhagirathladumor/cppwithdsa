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

    int a[rows][cols], b[rows][cols], sum[rows][cols];
    cout << endl
         << "Array input:" << endl;

    cout << endl
         << "Array input for first matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter elements [ " << i << " ][ " << j << " ]: ";
            cin >> a[i][j];
        }
        cout << endl;
    }
    cout << endl
         << "Array input for second matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter elements [ " << i << " ][ " << j << " ]: ";
            cin >> b[i][j];
        }
        cout << endl;
    }
    cout << endl
         << "Array output:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}