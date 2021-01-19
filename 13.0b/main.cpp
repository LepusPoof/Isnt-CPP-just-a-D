#include <iostream>
#include <stdio.h>
#include <fstream>



using namespace std;

int main()
{
    fstream file;
    char file_name[100];


    cout << "Name of the file: ";
    cin >> file_name;

    file.open(file_name);

    if (!file.good()){
        cout << "The file doesn't exist";
        return false;
    }

    file.rewind();

    char *fputs(char *"POCZATEK", FILE* stream);


    file.close();
    return 0;
}
