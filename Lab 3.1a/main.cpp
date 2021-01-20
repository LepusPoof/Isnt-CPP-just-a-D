//HOW MUCH DOES IT COST TO BOIL WATER? + ADDITIONAL

#include <iostream>

using namespace std;

int main()
{
    int m, T, num; //m - mass, T - boiling temperature, num - number of substance
    double C, energy_price, q;


    m = 250; //mass of a cup filled with water [ml]

    cout << "Which sustance do you want to boil?\n1. Aluminium\n2. Copper\n3. Gold\n4. Silver" << endl;
    cin >> num;

    switch(num){
    case 1:
        C = 900;
        T = 2450;
        break;
    case 2:
        C = 387;
        T = 1187;
        break;
    case 3:
        C = 129;
        T = 2660;
        break;
    case 4:
        C = 234;
        T = 2193;
        break;
    default:
        cout << "Wrong number!";
        break;
    }

    energy_price = 0.167; //zloty for 1kWh

    q = m*C*T; //q - the amount of energy

    if(num >= 1 && num <= 4){
            cout << "The price of boiling 250ml of chosen substance is about " << q/3600000 * energy_price << " zloty."; // 1[kWh] =  [J]
    }
    return 0;
}
