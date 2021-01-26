#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Podaj dlugosc tablicy: ";

    cin >> x;
    int tab[x];

    int* ptr = &x;
    int* y = (int*)malloc(*ptr);

    int suma = 0;

    for(int i = 0; i < *ptr; i++){
        cout << "Dodaj element do okreslonej tablicy: ";
        cin >> tab[i];
        suma += tab[i];
    }

    for (int j = 0; j < *ptr; j++){
        cout << tab[j] << " ";
    }

    cout << "\n";

    cout << "Suma tablicy to " << suma << "\n";

    delete [] tab;

    return 0;
}
