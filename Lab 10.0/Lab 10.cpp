#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Podaj dlugosc tablicy: ";

    cin >> x;
    int tab[x];

    int* x;
    int y = (int*)malloc(x);

    int suma = 0;

    for(int i = 0; i < *x; i++){
        cout << "Dodaj element do okreslonej tablicy.";
        cin >> tab[i];
        suma += tab[i];
    }

    for (int j = 0; j < *x; j++){
        cout << tab[j];
    }

    cout << "Suma tablicy to " << suma << "\n";

    return 0;
}
