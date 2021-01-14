#include <iostream>

using namespace std;

int main()
{
    int n, i, silnia = 1;

    cout << "Podaj wybrana dodatnia liczbe: ";
    cin >> n;

    for (i = 1; i <= n; ++i) {
        silnia *= i;
    }
    cout << "Silnia z " << n << " rowna jest " << silnia;
    return 0;
}
