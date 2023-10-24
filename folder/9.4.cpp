#include <iostream>
using namespace std;

class Fahrenheit; // Forward declaration

class Celsius {
private:
    double temperatureC;

public:
    Celsius(double tempC = 0) : temperatureC(tempC) {}

    void input() {
        cout << "Enter temperature in Celsius: ";
        cin >> temperatureC;
    }

    void display() {
        cout << "Temperature in Celsius: " << temperatureC << "°C" << endl;
    }

    // Conversion function from Celsius to Fahrenheit
    operator Fahrenheit();
};

class Fahrenheit {
private:
    double temperatureF;

public:
    Fahrenheit(double tempF = 32) : temperatureF(tempF) {} // Default value in Fahrenheit

    void input() {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperatureF;
    }

    void display() {
        cout << "Temperature in Fahrenheit: " << temperatureF << "°F" << endl;
    }

    // Conversion function from Fahrenheit to Celsius
    operator Celsius();
};

// Conversion function from Celsius to Fahrenheit
Celsius::operator Fahrenheit() {
    return Fahrenheit(temperatureC * 9.0 / 5.0 + 32.0);
}

// Conversion function from Fahrenheit to Celsius
Fahrenheit::operator Celsius() {
    return Celsius((temperatureF - 32.0) * 5.0 / 9.0);
}

int main() {
    Celsius celsiusTemp;
    Fahrenheit fahrenheitTemp;

    celsiusTemp.input(); // Read temperature in Celsius
    fahrenheitTemp = celsiusTemp; // Convert Celsius to Fahrenheit
    fahrenheitTemp.display(); // Display temperature in Fahrenheit

    fahrenheitTemp.input(); // Read temperature in Fahrenheit
    celsiusTemp = fahrenheitTemp; // Convert Fahrenheit to Celsius
    celsiusTemp.display(); // Display temperature in Celsius

    return 0;
}
