//HOW MUCH DOES IT COST TO BOIL WATER?

#include <iostream>

using namespace std;

int main()
{
    int m, T;
    double C, energy_price, q;

    T = 100; //temperature of a boiling water
    m = 250; //mass of a cup filled with water [ml]
    C = 4.186; //for water
    energy_price = 0.167; //zloty for 1kWh

    q = m*C*T; //q - the amount of energy

    cout << "The price of boiling 250ml of water is about " << q/3600000 * energy_price << " zloty."; // 1[kWh] =  [J]

    return 0;
}
