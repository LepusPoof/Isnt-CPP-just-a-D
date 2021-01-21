#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    char file_name[] = "test.txt";
    ofstream file;
    ifstream file_read(file_name);
    string items;


    file.open("test.txt", ios::app | ios::trunc);

    while(getline(file_read, items)){
        cout << items << endl;
    }
    //file_read >> items;

    //int remove(const char *file_name);

    file << "POCZATEK " << items << " KONIEC";

    cout << "POCZATEK " << items << " KONIEC";

    file.close();

    return 0;
}
