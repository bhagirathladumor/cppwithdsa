#include <iostream>
using namespace std;

class Bank_system
{
protected:

    double accountNumber;
    string accountHolderName;
    long long int balance;
    double amount;

public:
    // setter
    void setBankAccount()
    {
        cout << "Enter Account Number := ";
        cin >> this->accountNumber;
        cout << "Enter Account Holder Name := ";
        cin.ignore();
        getline(cin , this->accountHolderName);
        cout << "Enter Your Bank Balance := ";
        cin >> this->balance;
    }

    long long int accountBalance()
    {
        return balance;
    }

    void deposit()
    {
        cout << "Enter Deposite Amount := ";
        cin >> this->amount;
        this->balance += amount;
    }

    void setAccountBalance()
    {
        cout << "Enter Withdraw Amount := ";
        cin >> this->amount;
    }

    void getAccountBalance()
    {
        if (amount > balance)
        {
            cout << endl
                 << endl
                 << "insufficient balance";
        }
        else
            this->balance -= amount;
    }

    void getBalance()
    {
        cout << "Balance := " << this->balance;
    }

    void getAccountInfo()
    {
        cout << "Account Number := " << accountNumber << endl;
        cout << "Account Holder Name := " << accountHolderName << endl;
        cout << "Balance := " << balance << endl;
    }
};

class SavingsAccount : public Bank_system
{
    private:
    float interestRate;

public:
    void calculateInterest()
    {
        interestRate = 9.8 / 100;
        float interest = balance * interestRate;
        cout << endl
             << "Interest := " << interest << endl;
        balance += interest;
        cout << "Balance after Interest := " << balance << endl
             << endl;
    }
};

class CheckingAccount : public Bank_system
{
    private:
    int overdraftLimit;

public:
    void checkOverdraft()
    {
        overdraftLimit = balance;
        setAccountBalance();
        if (amount > overdraftLimit)
        {
            cout << "You limit of Monthly is over ";
        }
        else
        {
            getAccountBalance();
        }
    }
};

class FixedDepositAccount : public Bank_system
{
    private:
    int term;

public:
    float Interest;

    void calculateInterest()
    {
        term = 12;
        accountBalance();
        Interest = balance * 0.07 * (12 / term);
        cout << endl
             << endl
             << " Deposit Interest := " << Interest;
    }
};