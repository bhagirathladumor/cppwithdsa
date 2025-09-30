#include "customer_record.cpp"

int main()
{
    Customer c1[5]; // Array of Object

    cout << endl
         << "Enter Customer Records...." << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Details of Customer " << i + 1 << endl << endl;
        c1[i].setCustomerData();
    }

    for (int i = 0; i < 5; i++)
    {
        cout << endl << "Customer " << i + 1 << endl << endl;
        c1[i].getCustomerData();
    }
}