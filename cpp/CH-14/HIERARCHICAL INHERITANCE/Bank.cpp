#include <iostream>
using namespace std;

// Parent Class
class RBI
{
private:
    double rate;

protected:
    RBI()
    {
        this->rate = 9.5;
    }

    void BankRate(double amount, string bankname)
    {
        cout << "--------------------------------";
        double final_amount = (amount * rate) / 100;
        cout << endl
             << bankname << "\t" << final_amount << endl;
        cout << "--------------------------------" << endl;
             
    }
};

// Child Classes
class SBI : public RBI
{
private:
    double amount;

public:
    void setAmountSBI()
    {
        cout << endl
             << "--------------------------------" << endl;
        cout << "Enter SBI total amount\t\t: ";
        cin >> this->amount;
    }
    void getRate()
    {
        BankRate(this->amount, "SBI Rate of Interest is  :");
    }
};

class SGB : public RBI
{
private:
    double amount;

public:
    void setAmountBOB()
    {
        cout << "Enter SGB total amount\t\t: ";
        cin >> this->amount;
    }
    void getRate()
    {
        BankRate(this->amount, "SGB Rate of Interest is  :");
    }
};

class UNION : public RBI
{
private:
    double amount;

public:
    void setAmountUNION()
    {
        cout << "Enter UNION total amount\t: ";
        cin >> this->amount;
        cout << "--------------------------------" << endl;
    }
    void getRate()
    {
        BankRate(this->amount, "UNION Rate of Interest is :");
    }
};