#include <iostream>
#include <iomanip>

using namespace std;

struct date {
    unsigned int day;
    unsigned int month;
    unsigned int year;
};

unsigned int read_scope(unsigned int min,
                        unsigned int max,
                        string what,
                        string error) {
    bool ok = false;
    unsigned int result = 0;
    do {
        cout << "Add " << what << ": ";
        cin >> result;
        if ( (result > min - 1) && (result < max + 1) ) {
            ok = true;
        }
        else {
            cout << error << endl;
            ok = false;
        }
    } while (ok == false);

    return result;
}

void showDate (date today) {
    int format;

    cout << "In which format would you want me to show the date?\n" << "1. European\n" << "2. American\n" << "3. Chinese\n" << endl;
    cin >> format;

    switch (format) {
        case 1:
            cout << setfill('0') << setw(2) << today.day << "/" << setfill('0') << setw(2) << today.month << "/" << setfill('0') << setw(4) << today.year << endl;
            break;
        case 2:
            cout << setfill('0') << setw(2) <<  today.month << "/" << setfill('0') << setw(2) << today.month << "/" << setfill('0') << setw(4) << today.year << endl;
            break;
        case 3:
            cout << setfill('0') << setw(4) << today.year << "/" << setfill('0') << setw(2)<< today.month << "/" <<setfill('0') << setw(2) << today.day << endl;
            break;
        default:
            cout << "You chose wrong option." << endl;
    }
}

int main() {
    date d;

    d.day = read_scope(1, 31, "day", "The day value is incorrect.");
    d.month = read_scope(1, 12, "month", "The month value is incorrect.");
    d.year = read_scope(1, 9999, "year", "The year value is incorrect.");

    cout << endl;

    showDate(d);

    cout << "The size of structure 'date' is: " << sizeof(d) << " B" << endl;
    cout << endl;
    return 0;
}
