#include <iostream>
using namespace std;

class P {
protected:
    float temp1;  
public:
    void setCelsius(float temp) {
        this->temp1 = temp;
    }
};

class Q : public P {
protected:
    float Fahrenheit;
public:
    void setFahr() {
        Fahrenheit = (temp1 * 9.0 / 5.0) + 32.0;
        cout << "Temperature in Fahrenheit \t: " << Fahrenheit << " °F" << endl;
    }
    float getFahrenheit() {
        return Fahrenheit;
    }
};

class R : public Q {
private:
    float temp3;
public:
    void settemp3() {
        
        temp3 = (getFahrenheit() - 32.0) * 5.0 / 9.0 + 273.15;
        cout << "Temperature in temp3 \t: " << temp3 << " K" << endl;
    }
};