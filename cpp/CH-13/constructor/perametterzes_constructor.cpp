#include <iostream>
#include <string.h>
using namespace std;

class city
{
private:
    string name;
    int pincode;

public:
    // peramerrerzes constructor
    city(string name, int pincode)
    {
        cout << endl;
        this->name = name;
        this->pincode = pincode;

        getCitydetails();
    }
    void getCitydetails()
    {
        
        cout << "------------------------------" << endl;
        cout << "city details" << endl;
        cout << "city name\t: " << name << endl;
        cout << "pincode\t\t: " << pincode;
             
            
    }
};