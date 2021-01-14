#include <iostream>

using namespace std;

int main()
{
    int i;
    char letter, userLetter;

    letter = 'f';

    cout << "Sprobuj zgadnac litere: ";
    cin >> userLetter;

    for (i=1; userLetter != letter; i++) {
        if (userLetter < letter) {
        cout << "Twoja litera jest blizej litery A niz moja. Podaj kolejna litere: ";
        cin >> userLetter;
        }  else if (userLetter > letter) {
        cout << "Twoja litera jest blizej litery Z niz moja. Podaj kolejna litere: ";
        cin >> userLetter;
        }

    }
    cout << "Gratulacje, litera to " << letter << "! Trafiles po " << i << " probach!";
}


