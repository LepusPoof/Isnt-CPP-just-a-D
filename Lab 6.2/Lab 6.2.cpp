//DISCOUNT CHECKER
#include <iostream>

using namespace std;

int main()
{
    float arrStandard[10] = {4.95, 9.95, 14.95, 19.95, 24.95, 29.95, 34.95, 39.95, 44.95, 49.95}, arrDisc[10], arrNew[10];

    for (int i=0; i < 10; i++){
        arrDisc[i] = arrStandard[i]*0.6;
        arrNew[i] = arrStandard[i] - arrDisc[i];
        cout << "Old price of the " << i+1 << " thing is " << arrStandard[i] << ", and the new one is " << arrNew[i] << ". The price of discount is " << arrDisc[i] << "." << endl;
    }

    return 0;
}
