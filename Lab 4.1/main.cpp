//ARITHMETIC AVERAGE

#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    double sum = 0, num, avg;

    // 0 ends the program

    cout << "Input number: ";
    cin >> num;
    sum += num;
    i++;

    if(sum == 0 && i == 0){
        cout << "Calculations cannot be made!" << endl;
    } else {
        while(num != 0){
        cout << "Input number: ";
        cin >> num;
        sum += num;
        i++;
        }

        avg = sum / (i-1); //if i is left alone, then also 0 counts in avg (so for example 3+2+1+0 gives you avg = 1.5 instead of 2)
        cout << "The arithmetic average is " << avg << "." << endl;
    }

    return 0;
}
