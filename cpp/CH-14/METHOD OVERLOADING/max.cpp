#include <iostream>
using namespace std;

class Max

{
protected:
    double value;

public:
    void setMaxNumber()
    {
        cout << endl;
        cout << "Enter your any digit number : ";
        cin >> this->value;
    }

    void getMaxNumber()
    {

        cout << "This is Max number =" << this->value;
    }

    Max operator>(Max obj)
    {
        Max a;

        if (this->value > obj.value)

            a.value = this->value;

        else

            a, value = obj.value;

        return a;
    }
};