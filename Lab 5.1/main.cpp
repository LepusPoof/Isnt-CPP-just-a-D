//N FACTORIAL

#include <iostream>

using namespace std;

int main()
{
    int n, i, fact = 1;

    cout << "Any positive integer: ";
    cin >> n;

    for (i = 1; i <= n; ++i) {
        fact *= i;
    }
    cout << n << " factorial is " << fact;
    return 0;
}
