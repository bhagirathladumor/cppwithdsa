#include <iostream>
using namespace std;

int main() {
    
    int x, y;
    
    cout << "Enter two integers: ";
    cin >> x >> y;
    
    int result = (x + y) * (x + y);
    cout << "The result of (x + y)^2 is: " << result << endl;

}