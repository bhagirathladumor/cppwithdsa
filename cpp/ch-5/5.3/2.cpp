#include <iostream>
using namespace std;

int main() {
    int languageChoice, rechargeChoice;

    cout << "Welcome to Telecom Call Service " << endl;
    cout << "----------------------" << endl;

    cout << "Please select your language:" << endl;
    cout << "1. Gujarati" << endl;
    cout << "2. Hindi" << endl;
    cout << "3. English" << endl;
    cout << "Enter your choice : ";
    cin >> languageChoice;

    switch (languageChoice) {
        case 1:
            cout << "Language selected: Gujarati" << endl;
            cout << "Please choose a recharge type:" << endl;
            cout << "  1. Unlimited 5G" << endl;
            cout << "  2. Top-up Recharge" << endl;
            cout << "  3. International Plan" << endl;
            cout << "Enter your choice: ";
            cin >> rechargeChoice;

            switch (rechargeChoice) {
                case 1:
                case 2:
                case 3:
                    cout << " Recharge completed successfully!" << endl;
                    break;
                default:
                    cout << " Invalid recharge option. Please select between 1 and 3." << endl;
            }
            break;
        case 2:
            cout << "Language selected: Hindi" << endl;
            cout << "Please choose a recharge type:" << endl;
            cout << "  1. Unlimited 5G" << endl;
            cout << "  2. Top-up Recharge" << endl;
            cout << "  3. International Plan" << endl;
            cout << "Enter your choice: ";
            cin >> rechargeChoice;

            switch (rechargeChoice) {
                case 1:
                case 2:
                case 3:
                    cout << " Recharge completed successfully!" << endl;
                    break;
                default:
                    cout << " Invalid recharge option. Please select between 1 and 3." << endl;
            }
            break;

        case 3:
            cout << "Language selected: English" << endl;
            cout << "Please choose a recharge type:" << endl;
            cout << " 1. Unlimited 5G" << endl;
            cout << " 2. Top-up Recharge" << endl;
            cout << " 3. International Plan" << endl;
            cout << "Enter your choice : ";
            cin >> rechargeChoice;

            switch (rechargeChoice) {
                case 1:
                case 2:
                case 3:
                    cout << " Recharge completed successfully!" << endl;
                    break;
                default:
                    cout << " Invalid recharge option. Please select between 1 and 3." << endl;
            }
            break;
        default:
            cout << "Invalid language selection. Please select between 1 and 3." << endl;
    }
    cout << "Thank you for using Telecom Call Service. Have a great day!" << endl;
}
