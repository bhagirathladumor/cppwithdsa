#include <iostream>
using namespace std;

void output_of_array(int *a, int size)
{
    cout << endl << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << *(a + i * size + j) << "\t";
        }
        cout << endl;
    }
}

void cube_of_array(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int &val = *(a + i * size + j);
            val = val * val * val;
        }
    }

    output_of_array(a, size);
}