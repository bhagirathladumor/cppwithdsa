#include <iostream>
using namespace std;

int main() {

    int r, c;

    cout << "Enter Row Size : ";
    cin >> r;
    cout << "Enter Column Size : ";
    cin >> c;

    int a[r][c];

    cout << endl << "Array Elements Input" << endl << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter a[" << i << "][" << j << "] : ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    cout << endl << "Without Transpose of Matrix" << endl << endl;
    for(int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl << "Transposed Matrix" << endl << endl;
    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < r; i++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}