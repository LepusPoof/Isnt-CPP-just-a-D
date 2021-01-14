#include <iostream>
#include <algorithm>


using namespace std;

int main()
{
    float arr[7] = {20, 22, 18, 13, 15, 20, 25}, arrSum = 0, maxValue, minValue;
    int i;

    for (i=1; i <= 7; i++) {
        arrSum = arr[i] + arrSum;
        maxValue = arr[0];
        minValue = arr[0];

        if(arr[i] > arr[i-1]){
            arr[i] = maxValue;
        } else if(arr[i-1] > arr[1]){
            arr[i] = maxValue;
        } else {
            arr[i-1] = maxValue;
        }

        if(arr[i] < arr[i-1]){
            arr[i] = minValue;
        } else if(arr[i-1] < arr[i]){
            arr[i-1] = minValue;
        } else {
            arr[i] = minValue;
        }
    }


    cout << "Srednia temperatura to " << arrSum/7 << "." << endl;
    cout << "Najwyzsza wartosc to " << maxValue << ", a najni¿sza to " << minValue << "." << endl;

    return 0;
}
