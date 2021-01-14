#include <iostream>

using namespace std;

int num, a, b;
float x, y, h, r;

void kwadrat(int a){
    cout << "Podaj dlugosc boku a: ";
    cin >> a;
    cout << "Pole kwadratu: " << a*a << endl;
}
void prostokat(int a, int b){
    cout << "Podaj dlugosc boku a: ";
    cin >> a;
    cout << "Podaj dlugosc boku b: ";
    cin >> b;
    cout << "Pole prostokata: " << a*b << endl;
}
void trojkat(float x, float h){
    cout << "Podaj dlugosc boku a: ";
    cin >> x;
    cout << "Podaj dlugosc wysokosci h: ";
    cin >> h;
    cout << "Pole trojkata: " << x*h/2 << endl;
}
void kolo(float r){
    cout << "Podaj dlugosc promienia r: ";
    cin >> r;
    cout << "Pole kola: " << 3.14*r*r << endl;
}
void trapez(float x, float y, float h){
    cout << "Podaj dlugosc boku a: ";
    cin >> x;
    cout << "Podaj dlugosc boku b: ";
    cin >> y;
    cout << "Podaj dlugosc wysokosci h: ";
    cin >> h;
    cout << "Pole trapezu: " << (x+y)*h/2 << endl;
}

int main()
{
    cout << "Podaj, ktora figure chcesz obliczyc:\n1. kwadrat\n2. prostokat\n3. trojkat\n4. kolo\n5. trapez: ";
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
            trojkat(x, h);
            break;
        case 4:
            kolo(r);
            break;
        case 5:
            trapez(x, y, h);
            break;
        default:
            cout << "Zly numer.";
            break;
    }
    return 0;
}
