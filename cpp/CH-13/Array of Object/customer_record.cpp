#include <iostream>
#include <string.h>
using namespace std;

class Customer
{
private:
    int cust_id;
    char cust_name[50];
    int cust_age;
    char cust_city[20];
    char cust_mobile_number[20];
    int cust_simcard_validity;  // in years
    char cust_telecom_brand_name[50]; // jio, Airtel,Vi etc..

public:
    // Setter
    void setCustomerData()
    {
        cout << "Enter Customer ID : ";
        cin >> this->cust_id;
        fflush(stdin);
        cout << "Enter Customer Name : ";
        gets(cust_name);
        fflush(stdin);
        cout << "Enter Customer Age : ";
        cin >> this->cust_age;
        fflush(stdin);
        cout << "Enter Customer City : ";
        gets(cust_city);
        fflush(stdin);
        cout << "Enter Customer Mobile No. : ";
        gets(cust_mobile_number);
        fflush(stdin);
        cout << "Enter Customer Sim Card Validity (in Years) : ";
        cin >> this->cust_simcard_validity;
        fflush(stdin);
        cout << "Enter Customer Telecom Brand name : ";
        gets(cust_telecom_brand_name);
        fflush(stdin);

        cout << endl
             << "---------------------------------" << endl;
    }

    // Getter
    void getCustomerData()
    {
        cout << "Customer ID\t\t: " << this-> cust_id << endl;
        cout << "Customer Name\t\t: " << this-> cust_name << endl;
        cout << "Customer Age\t\t: " << this-> cust_age << endl;
        cout << "Customer City\t\t: " << this-> cust_city << endl;
        cout << "Customer Mobile Number\t: " << this-> cust_mobile_number << endl;
        cout << "Customer Sim Card validilty\t: " << this-> cust_simcard_validity << endl;
        cout << "Customer Telecom Brand Name\t: " << this-> cust_telecom_brand_name << endl;
    }
};