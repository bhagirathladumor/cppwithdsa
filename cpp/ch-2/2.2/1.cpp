#include <iostream>
#define PI 3.14
using namespace std;

int main(){

    float radius, area;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    area = PI * radius * radius;
    cout << "The area of the circle is: " << area << endl;
}


