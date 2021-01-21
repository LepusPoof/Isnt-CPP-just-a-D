//GUESSING THE LETTER
#include <iostream>

using namespace std;

int main()
{
    int i;
    char letter, userLetter;

    letter = 'f';

    cout << "Try to guess the letter: ";
    cin >> userLetter;

    for (i = 1 ; userLetter != letter; i++) {
        if (userLetter < letter) {
        cout << "Your letter is closer to A than mine. Guess again: ";
        cin >> userLetter;
        }  else if (userLetter > letter) {
        cout << "Your letter is closer to Z than mine. Guess again: ";
        cin >> userLetter;
        }

    }
    cout << "Congrats, the letter is " << letter << "! You got it after " << i << " tries!" << endl;
}


