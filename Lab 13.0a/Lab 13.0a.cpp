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


    if(remove(file_name) != 0){
        perror("Error deleting file.");
    } else {
        puts("File successfully deleted!");
    }

    return 0;
}
