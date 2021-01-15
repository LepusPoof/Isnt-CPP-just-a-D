#include <iostream>

using namespace std;

struct Osoba {
    char name[20];
    struct Osoba *next = NULL;
    struct Osoba *prev = NULL;

};

int main(int argc, const char * argv[]) {

    struct Osoba *first = NULL;
    struct Osoba *current = NULL;
    struct Osoba *temp = NULL;
    struct Osoba *temp2 = NULL;
    long  x;
    x = 10;

    //struct Osoba *last = NULL;

    //tworze pierwsza osobe
    first = new struct Osoba;
    strcpy(first->name,"1");
    current = first;


    //tworze druga osobe
    temp = new struct Osoba;
    strcpy(temp->name,"2");
    current->next = temp;
    current = temp;

    //tworze trzecia osobe
    temp = new struct Osoba;
    strcpy(temp->name,"3");
    current->next = temp;
     current = temp;

    //tworze czwarta osobe
    temp = new struct Osoba;
    strcpy(temp->name,"4");
    current->next = temp;
    current = temp;

    //wyswietlanie
    temp = first;
    while (temp!=NULL) {
        cout << temp->name << endl;
        temp = temp->next;
    }

    //tworze piata osobe
    temp = new struct Osoba;
    strcpy(temp->name,"5");
    current->next = temp;
    current = temp;

    //wyswietlanie
    temp = first;
    while (temp!=NULL) {
        cout << temp->name << endl;
        temp = temp->next;
    }

    //usuwa trzecia
    int u = 3;
    temp = first;
    for (int i=0; i<u-2; i++) {
        temp = temp->next;
    }
    temp2 = temp->next;
    temp->next = temp->next->next;
    delete temp2;

    //wyswietlanie
    temp = first;
    while (temp!=NULL) {
        cout << temp->name << endl;
        temp = temp->next;
    }

    return 0;
}
