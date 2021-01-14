#include <iostream>

using namespace std;

int main()
{
    float arrStandard[10] = {4.95, 9.95, 14.95, 19.95, 24.95, 29.95, 34.95, 39.95, 44.95, 49.95}, arrRabat[10], arrNew[10];

    for (int i=0; i < 10; i++){
        arrRabat[i] = arrStandard[i]*0.6;
        arrNew[i] = arrStandard[i] - arrRabat[i];
        cout << "Stara cena artykulu nr " << i+1 << " to " << arrStandard[i] << ", a nowa cena artykulu to " << arrNew[i] << ". Cena rabatu to " << arrRabat[i] << "." << endl;
    }

    return 0;
}
