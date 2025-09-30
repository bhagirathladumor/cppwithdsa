#include <iostream>
using namespace std;

void loop(int start, int end)
{
    if (start <= end)
    {
        cout << start << endl;
        start++;
        loop(start, end);
    }
}

int main()
{
    cout << endl
         << "Recursion Example: Loop from 1 to 10" << endl;
    cout << "........................................" << endl;

    int start = 0, end = 0;
    cout << endl
         << "Enter start value: ";
    cin >> start;
    cout << "Enter end value: ";
    cin >> end;
    cout << endl << "Looping from " << start << " to " << end << ":" << endl;

    loop(start, end);
    return 0;
}