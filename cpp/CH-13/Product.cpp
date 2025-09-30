#include <iostream>
#include <string.h>
using namespace std;

class Product
{
private:
    int product_id;
    char product_name[20];
    char product_brand[20];
    float product_price;

public:
    // setter
    void setProductData()
    {
        cout << " Enter your Product ID : ";
        cin >> product_id;
        fflush(stdin);
        cout << " Enter your Product Name : ";
        gets(product_name);
        fflush(stdin);
        cout << " Enter your Product Brand : ";
        gets(product_brand);
        cout << " Enter your Product Price : ";
        cin >> product_price;

        cout << endl
             << endl;
    }

    // Getter
    void getProductData()
    {
        cout << endl;
        cout << " Product ID\t: " << product_id << endl;
        cout << " Product Name\t: " << product_name << endl;
        cout << " Product Model\t: " << product_brand << endl;
        cout << " Product Price\t: " << product_price << endl;
    }
};

