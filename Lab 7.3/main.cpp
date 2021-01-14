#include <iostream>

using namespace std;

int i, num;

long int silnia();

silnia(int num){
    if (num>=1){
        return num*silnia(num-1);
} else {
    return 1;
}
   // num = (num-1) * num;
   // cout << "Silnia Twojej liczby to " << num;
}

int main()
{
    cout << "Podaj numer: ";
    cin >> num;
    silnia(num);


    return 0;
}
