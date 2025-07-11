#include <iostream>
#define PI 3.14
using namespace std;

int main() {
    float radius, perimeter;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    perimeter = 2 * PI * radius;
    cout << "The perimeter of the circle is: " << perimeter << endl;
}
