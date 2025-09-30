#include <iostream>
#include "Bank_system.cpp"
using namespace std;

int main()
{
    int choice;
    do
    {

        SavingsAccount sa;
        CheckingAccount ca;
        FixedDepositAccount fa;

        cout << "1. Create Account" << endl;
        cout << "2. Get Balance" << endl;
        cout << "3. Deposit" << endl;
        cout << "4. Withdraw" << endl;
        cout << "5. Set Interest Rate" << endl;
        cout << "6. Get Account Info" << endl;
        cout << "7. Check Overdraft" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            sa.setBankAccount();
            cout << "Account Created Successfully\n";
            break;
        case 2:
            sa.getBalance();
            cout << endl;
            break;
        case 3:
            sa.deposit();
            cout << endl;
            break;
        case 4:
            sa.setAccountBalance();
            sa.getAccountBalance();
            cout << endl;
            break;

        case 5:
            sa.calculateInterest();
            cout << endl;
            break;
        case 6:
            sa.getAccountInfo();
            cout << endl;
            break;

        case 7:
            ca.checkOverdraft();
            cout << endl;
            break;
        case 0:
            cout << "Program Exited Successfully...!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);
}

// rajdeep 