#include <iostream>
using namespace std;

int main() {
    int x, y;
    
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;

    int result = (x + y) * (x + y) * (x + y);

    cout << "The result of (x + y)^3 is: " << result << endl;
}