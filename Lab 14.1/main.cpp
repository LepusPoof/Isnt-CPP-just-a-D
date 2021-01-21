//QUADRATIC EQ

#include <iostream>
#include <cmath>

using namespace std;



int main()
{
    //int a, b, c;
    int* tab;
    tab = new int [3];
    int* tab2;
    tab2 = new int [4];

    double a, b, c;

    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    tab[0] = a;
    tab[1] = b;
    tab[2] = c;

    double x1;
    double x2;
    double delta;


    cout << a << tab[0] << b << tab[1] << c << tab[2] << endl;

    delta = b*b - 4*a*c;

    if(a == 0 && b != 0){
        x1 = (double)c/b;
        cout << "Rownanie liniowe, brak delty.\nx = " << x1;
    } else if (a == 0 && b == 0 && c != 0){
        cout << "Rownanie sprzeczne, brak rozwiazan.";
    } else if (a == 0 && b == 0 && c == 0){
        cout << "Rownanie tozsamosciowe, brak pierwiastka i delty.";
    } else {
        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            cout << "X sa liczbami rzeczywistymi i sa rozne." << endl;
            cout << "x1 = " << x1 << endl;

            cout << "x2 = " << x2 << endl;
        } else if (delta == 0) {
            cout << "X sa w liczbami rzeczywistymi i sa takie same." << endl;
            x1 = -b/(2*a);
            cout << "x1 = x2 = " << x1 << endl;
        } else {
            double realPart = -(b)/(2*(a));
            double imaginaryPart = sqrt(-delta)/(2*(a));
            cout << "X sa liczbami zespolonymi i sa rozne."  << endl;
            cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
            cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
        }

    }

    delete [] tab;
    delete [] tab2;


    return 0;
}
