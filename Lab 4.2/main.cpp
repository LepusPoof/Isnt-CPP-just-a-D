//RECTANGLE

#include <iostream>

using namespace std;

int main()
{
    int col, ver, i, j;
    char sign[1];

    cout << "Number of columns: ";
    cin >> col;
    cout << "Number of verses: ";
    cin >> ver;
    cout << "Sign you want to the rectangle be made of: ";
    cin >> sign;

    for(i = 0; i <= ver+1; i++){
        for(j = 0; j < col; j++){
            cout << sign;
        }
        cout << "\n";
    }
}
