#include <iostream>
using namespace std;

class x
{
protected:
    int a, b, c;
};

class y : public x
{
public:
    void setsumdata()
    {
        cout << endl;
        cout << "==============================" << endl;
        cout << "Enter Three Numbers to Find Sum of Cube" << endl;
        cout << "==============================" << endl;
        cout << "Enter value of A : ";
        cin >> a;
        cout << "Enter value of B : ";
        cin >> b;
        cout << "Enter value of C : ";
        cin >> c;
        cout << "==============================" << endl;
    }
    void getsumdata()
    {
        cout << endl;
        cout << "==============================" << endl;
        cout << "Sum of Cube of A , B and C" << endl;
        cout << "==============================" << endl;
        cout << "Cube of Multi (A*A*A) : " << (a * a * a) << endl;
        cout << "Cube of Multi (B*B*B) : " << (b * b * b) << endl;
        cout << "Cube of Multi (C*C*C) : " << (c * c * c) << endl;
        cout << "==============================" << endl;
        cout << "Sum of cube A , B and C is: " << (a * a * a) + (b * b * b) + (c * c * c) << endl;
        cout << "==============================" << endl
             << endl;
    }
};