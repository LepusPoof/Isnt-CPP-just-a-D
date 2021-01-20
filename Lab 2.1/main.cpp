//BMI CALCULATOR

#include <iostream>

using namespace std;

int main()
{
    double BMI, weight, height;

    cout << "What is your height in meters?" << endl;
    cin >> height;
    cout << "What is your weight in kilos?" << endl;
    cin >> weight;

    BMI = weight/(height*height);

    cout << "Your BMI is: " << BMI;

    return 0;
}
