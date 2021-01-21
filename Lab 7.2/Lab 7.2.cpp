//GEOMETRIC FIGURES - PERIMETERS

#include <iostream>
#include <Math.h>

using namespace std;

int num, a, b;
float x, y, h, r;

int square();
int rectangle();
float EquilTriangle();
float circle();

int square(int a){
    cout << "Length of side a: ";
    cin >> a;
    cout << "Perimeter of the square: " << 4*a << endl;
}
int rectangle(int a, int b){
    cout << "Length of side a: ";
    cin >> a;
    cout << "Length of side b: ";
    cin >> b;
    cout << "Perimeter of the rectangle: " << 2*a+2*b << endl;
}
float EquilTriangle(float x, float h){
    cout << "Length of side a: ";
    cin >> x;
    cout << "Height h: ";
    cin >> h;
    cout << "Perimeter of the equilateral triangle: " << x+h+sqrt(x*x+h*h) << endl;
}
float circle(float r){
    cout << "Radius r: ";
    cin >> r;
    cout << "Circumference of the circle: " << 2*M_PI*r << endl;
}

int main()
{
    cout << "Perimeter of which geometric figure do you want to calculate?\n1. square,\n2. rectangle,\n3. equilateral triangle,\n4. circle: ";
    cin >> num;
    cout << "\n";
    switch(num) {
        case 1:
            square(a);
            break;
        case 2:
            rectangle(a, b);
            break;
        case 3:
            EquilTriangle(x, h);
            break;
        case 4:
            circle(r);
            break;
        default:
            cout << "Wrong number.";
            break;
    }
    return 0;
}
