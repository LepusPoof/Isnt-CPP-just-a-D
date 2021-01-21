// TEMPERATURE CONVERTER

#include <iostream>

using namespace std;

int main()
{
    int num;
    double temp_k, temp_f, temp_c; //Celcius, Kelvin, Fahrenheit

    cout << "Which units do you want to convert: \n1. Celcius\n2. Kelvin\n3. Fahrenheit" << endl;
    cin >> num;



    switch(num) {
    case 1:
        cout << "[C] Temperature: ";
        cin >> temp_c;
        temp_f = temp_c * 1.8 + 32;
        temp_k = temp_c + 273.15;
        cout << "It's " << temp_f << " [F] and " << temp_k << " [K]."<< endl;
        break;
    case 2:
        cout << "[K] Temperature: ";
        cin >> temp_k;
        temp_c = temp_k - 273.15;
        temp_f = temp_c * 1.8 + 32;
        cout << "It's " << temp_c << " [C] and " << temp_f << " [F]."<< endl;
        break;
    case 3:
        cout << "[F] Temperature: ";
        cin >> temp_f;
        temp_c = (temp_f - 32)/1.8;
        temp_k = temp_c + 273.15;
        cout << "It's " << temp_c << " [C] and " << temp_k << " [K]."<< endl;
        break;
    case 4:
        cout << "Wrong number.";
        break;
    }

    return 0;
}
