#include "Temperature.cpp"

int main() {
    float celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    R obj;
    obj.setCelsius(celsius);
    obj.setFahr();
    obj.settemp3();

    return 0;
}
