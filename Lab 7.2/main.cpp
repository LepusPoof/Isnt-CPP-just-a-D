#include <iostream>
#include <Math.h>

using namespace std;

int num, a, b;
float x, y, h, r;

int kwadrat();
int prostokat();
float trojkatRownoboczny();
float kolo();

int kwadrat(int a){
    cout << "Podaj dlugosc boku a: ";
    cin >> a;
    cout << "Obwod kwadratu: " << 4*a << endl;
}
int prostokat(int a, int b){
    cout << "Podaj dlugosc boku a: ";
    cin >> a;
    cout << "Podaj dlugosc boku b: ";
    cin >> b;
    cout << "Obwod prostokata: " << 2*a+2*b << endl;
}
float trojkatRownoboczny(float x, float h){
    cout << "Podaj dlugosc boku a: ";
    cin >> x;
    cout << "Podaj dlugosc wysokosci h: ";
    cin >> h;
    cout << "Obwod trojkata: " << x+h+sqrt(x*x+h*h) << endl;
}
float kolo(float r){
    cout << "Podaj dlugosc promienia r: ";
    cin >> r;
    cout << "Obwod kola: " << 2*M_PI*r << endl;
}

int main()
{
    cout << "Podaj, ktorej figury obwod chcesz obliczyc:\n1. kwadrat,\n2. prostokat,\n3. trojkat rownoboczny,\n4. kolo: ";
    cin >> num;
    cout << "\n";
    switch(num) {
        case 1:
            kwadrat(a);
            break;
        case 2:
            prostokat(a, b);
            break;
        case 3:
            trojkatRownoboczny(x, h);
            break;
        case 4:
            kolo(r);
            break;
        default:
            cout << "Zly numer.";
            break;
    }
    return 0;
}
