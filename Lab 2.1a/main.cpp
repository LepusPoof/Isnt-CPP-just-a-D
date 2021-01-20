// BMI CALCULATOR WITH ADDITIONAL UNITS

#include <iostream>

using namespace std;

int main()
{
    double weight, lbs, height, BMI;
    int feets, inches;

    cout << "What is your weight in feets?" << endl;
    cin >> feets;
    cout << "And how many inches?" << endl;
    cin >> inches;
    cout << "What is your weight in lbs?" << endl;
    cin >> lbs;

    weight = lbs * 0.453;
    height = feets * 0.3048 + (inches/12) * 0.3048;

    BMI = weight/(height*height);

    cout << "Your BMI is: " << BMI;
    return 0;
}
