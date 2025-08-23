#include <iostream>
#include "functions.cpp"
using namespace std;

int main()
{
    int size;

    cout << "Enter size of row & column: ";
    cin >> size;

    int a[size][size];
    cout << endl << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "Enter a[" << i << "][" << j << "] : ";
            cin >> a[i][j];
        }
        cout << endl;
    }
    
    cube_of_array(&a[0][0], size);
    
    return 0;
}