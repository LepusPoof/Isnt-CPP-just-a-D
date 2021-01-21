//FACTORIAL WITH LONG INT
#include <iostream>

using namespace std;



long int factorial(int num){

    int fact = 1;
    for(int i = 1; i <= num; i++){
        fact *= i;
    }
    cout << "The factorial is " << fact << endl;
    return num;

    }


int main()
{
    int num;
    cout << "Pick a number - I will give you its factorial: ";
    cin >> num;
    factorial(num);


    return 0;
}
