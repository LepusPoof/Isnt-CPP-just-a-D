//TEMPERATURE CHECKER
#include <iostream>
#include <algorithm>


using namespace std;

int main()
{
    float arr[7] = {20, 22, 18, 13, 15, 20, 25}, arrSum = 0;
    int maxValue;
    int minValue;
    int i;

    for (i = 0; i < 7; i++) {
        arrSum += arr[i];

        if(i == 0){
            maxValue = arr[i];
            minValue = arr[i];
        } else {
            if(arr[i] >= maxValue){  //searches for the biggest value
                maxValue = arr[i];
            }
            if(arr[i] < minValue){
                minValue = arr[i];
            }
        }


    }


    cout << "Average temperature is " << arrSum/7 << "." << endl;
    cout << "The highest is " << maxValue << ", and the lowest is " << minValue << "." << endl;

    return 0;
}
