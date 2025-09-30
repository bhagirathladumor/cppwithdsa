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

    cout << endl
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

    int u_row, u_col;

    cout << endl
         << "Enter Row : ";
    cin >> u_row;

    // row sum 
    cout << "Elements of Row : ";
    int r_sum = 0, c_sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == u_row)
            {
                r_sum += a[i][j];
                cout << a[i][j] << " , " ;
            }
        }
    }

    cout << endl << "Sum of Row : " << r_sum << endl;

    cout << endl
         << "Enter Column : ";
    cin >> u_col;

    // colum sum 
    cout << "Elements of Column : ";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (j == u_col)
            {
                c_sum += a[i][j];
                cout << a[i][j] << " , " ;
            }
        }
    }
    cout << endl << "Sum of Column : " << c_sum << endl << endl;
}