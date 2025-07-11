#include <iostream>
using namespace std;

int main()
 {
    float principal, rate, time, simpleInterest;
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the rate of interest: ";
    cin >> rate;
    cout << "Enter the time: ";
    cin >> time;

    simpleInterest = (principal * rate * time) / 100;
    cout << "The simple interest is: " << simpleInterest << endl;
}
