#include <iostream>
using namespace std;

bool are_you_hungry(){
    char answer;
    double time;

    cout << "Have you eaten a big meal? y/n\n";
    cin >> answer;
    cout << "How long is it since you've eaten it?\n";
    cin >> time;

    if(answer == 'y' && time < 3.0){
        cout << "You have just eaten!";
        return false;
    } else if(answer == 'n' && time < 3.0){
        cout << "Okay, you can go and get some snack.";
        return true;
    } else if(answer == 'y' && time >= 3.0){
        cout << "OKAY THEN!";
        return true;
    } else {
        cout << "Wow, you should really go and eat something.";
        return true;
    }
}
