#include <iostream>
using namespace std;

int main() {
    
    int a, b, c, d;
    
    cout << "Enter your numbers: ";
    cin >> a >> b >> c >> d;
    int max;    
    if (a > b) {
        if (a > c) {
            if (a > d) {
                max = a;
            } else {
                max = d;
            }
        } else {
            if (c > d) {
                max = c;
            } else {
                max = d;
            }
        }
    } else {
        if (b > c) {
            if (b > d) {
                max = b;
            } else {
                max = d;
            }
        } else {
            if (c > d) {
                max = c;
            } else {
                max = d;
            }
        }
    }
    cout << "The maximum number is: " << max << endl;
}