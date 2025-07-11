#include <iostream>
using namespace std;
int main() {
    
    int a, b, c;
    
    cout << "Enter your numbers: ";
    cin >> a >> b >> c;
    int min = a < b 
        ? a < c ? a : c 
        : b < c ? b : c;
    cout << "The minimum number : " << min << endl;
}
