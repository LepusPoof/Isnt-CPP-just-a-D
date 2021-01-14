#include <iostream>

using namespace std;

int main()
{
    int num;
    char *tab[10] = {"Aldona", "Berenika", "Celia", "Dobromira", "Ewelina", "Felicja", "Genowefa", "Halina", "Iwona", "Janina"};
    tab[10] = new char;



    cout << "Give me the number (1-10) - I will give you the name: ";
    cin >> num;
    if (num > 0 && num < 11) {
        cout << *(tab+num-1);
    } else {
        cout << "You gave me the wrong number!";
    }


}
