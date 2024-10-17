#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    double fahrenheit = (celsius * 9/5) + 32.0;
    return fahrenheit;
}

double fahrenheitToCelsius(double fahrenheit) {
    double celsius = (fahrenheit - 32.0) * 5/9;
    return celsius;
}

double usdToEur(double usd) {
    double eur = usd * 0.85;
    return eur;
}

double eurToUsd(double eur) {
    double usd = eur / 0.85;
    return usd;
}

int main()
{
    string firstUnit;
    string secondUnit;

    cout << "What is the first unit you want to convert? ";
    cin >> firstUnit;
    cout << "What is the second unit you want to convert? ";
    cin >> secondUnit;

    if (firstUnit == "celsius" && secondUnit == "fahrenheit") {
        double celsius;
        cout << "Enter the temperature in Celsius: ";
        cin >> celsius;
        cout << "The temperature in Fahrenheit is: " << celsiusToFahrenheit(celsius) << endl;
    } else if (firstUnit == "fahrenheit" && secondUnit == "celsius") {
        double fahrenheit;
        cout << "Enter the temperature in Fahrenheit: ";
        cin >> fahrenheit;
        cout << "The temperature in Celsius is: " << fahrenheitToCelsius(fahrenheit) << endl;
    } else if (firstUnit == "usd" && secondUnit == "eur") {
        double usd;
        cout << "Enter the amount in USD: ";
        cin >> usd;
        cout << "The amount in EUR is: " << usdToEur(usd) << endl;
    } else if (firstUnit == "eur" && secondUnit == "usd") {
        double eur;
        cout << "Enter the amount in EUR: ";
        cin >> eur;
        cout << "The amount in USD is: " << eurToUsd(eur) << endl;
    } else {
        cout << "Invalid units." << endl;
    }

    return 0;
}