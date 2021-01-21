// PI APPROXIMATION

#include <iostream>

using namespace std;

int main()
{
    double pi = 3.0;
    double num = 2.0;
    int i;
    int approx;

    cout << "Pi approximation: ";
    cin >> approx;

    for(i = 1; i <= approx; i++){
        if(i % 2 == 1){
            pi +=(4/((num*i)*(num*i+1)*(num*i+2)));
        } else {
            pi -=(4/((num*i)*(num*i+1)*(num*i+2)));
        }
    }

    cout << pi;


    return 0;
}
