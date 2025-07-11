#include <iostream>
using namespace std;

int main() {
    
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    string result;
    
    if (number > 0) {
        result = "positive";
    } else if (number < 0) {
        result = "negative";
    } else {
        result = "neutral";
    }
    cout << "The number is " << result << "." << endl;
}