#include <iostream>
#include <stdio.h>
#include <fstream>



using namespace std;

int main()
{
    ofstream file;
    string file_name = "liczby.txt";
    file.open(file_name);


    if (!file.good()){
        cout << "The file doesn't exist";
        return -1;
    }

    int min;
    int max;

    cout << "Mininum number: ";
    cin >> min;
    cout << "Maximum number: ";
    cin >> max;


    if(min > max){
        cout << "Wrong numbers - minimum must be smaller than maximum.\n";
    } else {
        while(min <= max){
            file << min << endl;
            min++;
            }
    }
    file.close();
    return 0;
}
