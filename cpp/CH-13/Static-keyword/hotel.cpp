#include <iostream>
#include <string.h>
using namespace std;

class hotel
{
    int hotel_id;
    char name[20];
    char type[20];
    int rating;
    int staff_quantity;
    int room_quantity;

public:
    static char location[20];
    static int establish_year;

    void setHotelData()
    {
        cout << "Enter hotel ID: ";
        cin >> hotel_id;
        fflush(stdin);
        cout << "Enter hotel name: ";
        gets(this->name);
        cout << "Enter hotel type: ";
        gets(this->type);
        cout << "Enter hotel rating: ";
        cin >> rating;
        cout << "Enter staff quantity: ";
        cin >> staff_quantity;
        cout << "Enter room quantity: ";
        cin >> room_quantity;
    }
    void getHotelData()
    {
        cout << "Hotel ID\t\t:" << hotel_id << endl;
        cout << "Hotel Name\t\t: " << name << endl;
        cout << "Hotel Type\t\t: " << type << endl;
        cout << "Hotel Rating\t\t: " << rating << endl;
        cout << "Hotel Location\t\t: " << location << endl;
        cout << "Year of Establishment\t: " << establish_year << endl;
        cout << "Staff Quantity\t\t: " << staff_quantity << endl;
        cout << "Room Quantity\t\t: " << room_quantity << endl;
    }
};

char hotel::location[20] = "Downtown";
int hotel::establish_year = 1995;
