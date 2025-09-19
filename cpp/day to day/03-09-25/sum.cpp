#include <iostream>
using namespace std;

class ram
{
protected:
    int X, Y, Z;
};
class sita : public ram
{
public:
    void setsumdata()
    {
        cout << endl;

        cout << "Enter value of x : ";
        cin >> X;
        cout << "Enter value of y : ";
        cin >> Y;
        cout << "Enter value of z: ";
        cin >> Z;
    }
    void getsumdata()
    {
        cout << endl;
        cout << "Cube of x : " << (X * X * X) << endl;
        cout << "Cube of y : " << (Y * Y * Y) << endl;
        cout << "Cube of z : " << (Z * Z * Z) << endl
             << endl << endl;
        cout << "Sum of cube x , y and z is: " << (X * X * X) + (Y * Y * Y) + (Z * Z * Z) << endl
             << endl;
    }
};