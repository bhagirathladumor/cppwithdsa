#include "hotel.cpp"

int main()
{
     hotel h1, h2;
     cout << endl
          << "=============================" << endl;
     cout << "Enter details of hotel 1  " << endl;
     cout << "-----------------------------" << endl;
     h1.setHotelData();
     cout << endl
          << "Enter details of hotel 2  " << endl;
     cout << "-----------------------------" << endl;
     h2.setHotelData();

     cout << endl
          << "Details of hotel 1  " << endl;
     cout << "---------------------" << endl;
     h1.getHotelData();
     cout << endl
          << "Details of hotel 2  " << endl;
     cout << "---------------------" << endl;
     h2.getHotelData();
}