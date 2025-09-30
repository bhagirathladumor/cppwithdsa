#include <iostream>
#include <string.h>
using namespace std;

class city
{
private:
    string name;
    int pincode;

public:
    // copy constructor
    city(string name, int pincode)
    {
        cout << endl;
        this->name = name;
        this->pincode = pincode;
    }
    city(city & obj)
    {
        this->name = obj.name;
        this->pincode = obj.pincode;
    }
    void getCitydetails()
    {

        cout << endl
             << "------------------------------" << endl;
        cout << "city details" << endl;
        cout << "city name\t: " << name << endl;
        cout << "pincode\t\t: " << pincode;
        cout << endl
             << "------------------------------" << endl;
    }
};