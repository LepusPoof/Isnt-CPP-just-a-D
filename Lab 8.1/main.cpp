#include <iostream>

using namespace std;

int main()
{
 int x;
 int *wsk;

 cout << x << endl;
 cout << &x << "\n";

 wsk = &x;

 cout << wsk << "\n";
 cout << &wsk << "\n";
}
