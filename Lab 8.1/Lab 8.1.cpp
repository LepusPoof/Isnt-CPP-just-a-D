#include <iostream>

using namespace std;

int main()
{
 int x;
 int *ptr;

 cout << x << endl;
 cout << &x << "\n";

 *ptr = &x;

 cout << *ptr << "\n";
 cout << ptr << "\n";
}
