#include <iostream>

using namespace std;


void zamien(int* x, int *y) {
    int z;
    z = *y;
    *y = *x;
    *x = z;

    cout << *x << " " << *y << endl;
}


int main()
{
    int x = 1;
    int y = 2;

    int* ptr1 = &x;
    int* ptr2 = &y;


    zamien(ptr1, ptr2);

}
