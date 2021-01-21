#include <iostream>

using namespace std;

int x = 1;
int y = 2;

void zamien(int* x, int *y) {
    int z;
    z = *y;
    *y = *x;
    *x = z;
}


int main()
{
    zamien(*x, *y);
}
