#include <iostream>
#include <string.h>
using namespace std;

class city
{
private:
    char name[20];
    int pincode;

public:
    // default constructor
    city()
    {
        cout << endl;
        cout << "------------------------------" << endl;
        cout << "default constructor called" << endl;

        cout << "------------------------------" << endl;
        cout << "welcome to my city" << endl;
        cout << "enter city name: ";
        cin >> name;
        cout << "enter pincode: ";
        cin >> pincode;

        getCitydetails();
    }
    void getCitydetails()
    {
        cout << endl;
        cout << "------------------------------" << endl;
        cout << "city details" << endl;
        cout << "city name\t: " << name << endl;
        cout << "pincode\t\t: " << pincode << endl
             << endl;
    }
};