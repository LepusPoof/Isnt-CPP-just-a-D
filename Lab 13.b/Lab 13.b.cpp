#include <iostream>
#include <cstdio>

FILE *fp;

using namespace std;

int main()
{

    char file_name[100];
    const char* c = "POCZATEK ";
    const char* d = " KONIEC";

    cout << "The file name: ";
    cin >> file_name;

    fp = fopen(file_name, "a+");

    if(fp){
        //c = "POCZATEK";

        fgets(file_name, 100, fp);

        rewind(fp);
        fputs(c, fp);
        //feof(fp);
        fputs(d, fp);

    } else {
        perror("File opening failed");
    }
    //fclose(fp);

    return 0;
}
