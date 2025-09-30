#include <iostream>
using namespace std;

int multi()
{

    int a, b;
    cout << endl
         << "entrer A  value: ";
    cin >> a;
    cout << "entrer B  value: ";
    cin >> b;
    return a * b;
}

int main()
{
    cout << endl << "Teke something return something." << endl;
    cout << endl
         << "........................................" << endl;

         
    int ans = multi();
    cout << endl<< "The multi is :-> " << ans << endl;
    return 0;

    // or

    // cout << endl
    //      << "The multi is :-> " << multi() << endl;
    // return 0;
}