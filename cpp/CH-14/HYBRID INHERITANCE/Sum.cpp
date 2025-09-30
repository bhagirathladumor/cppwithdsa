#include <iostream>
using namespace std;

// Base Class sum1
class sum1
{
protected:
    int a;

public:
    sum1(int x)
    {
        a = x;
    }
};

// Base Class sum2
class sum2
{
protected:
    int b;

public:
    sum2(int y)
    {
        b = y;
    }
};

// Derived Class C (inherits from sum1 and sum2) - Multiple Inheritance
class sum3 : public sum1, public sum2
{
protected:
    int c;

public:
    sum3(int x, int y, int z) : sum1(x), sum2(y)
    {
        c = z;
    }
};

// Derived Class D (inherits from C) - Hybrid Inheritance
class sum4 : public sum3
{
    int d;

public:
    sum4(int x, int y, int z, int w) : sum3(x, y, z)
    {
        d = w;
    }

    void displaySum()
    {
        int sum = a + b + c + d;
        cout << " sum of...." << a << " + " << b << " + " << c << " + " << d << " = " << sum << endl;
        cout << "-----------------------------------" << endl;
    }
};