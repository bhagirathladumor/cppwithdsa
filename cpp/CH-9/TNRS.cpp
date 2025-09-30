#include <iostream>
using namespace std;

int addition()
{

    int a, b;
    cout << endl
         << "entrer A  value: ";
    cin >> a;
    cout << "entrer B  value: ";
    cin >> b;
    return a + b;
}

int main()
{
    cout << endl << "Teke nothing return something." << endl;
    cout << endl
         << "........................................" << endl;

         
    int ans = addition();
    cout << endl<< "The sum is :-> " << ans << endl;
    return 0;

    // or

    // cout << endl
    //      << "The sum is :-> " << addition() << endl;
    // return 0;
}