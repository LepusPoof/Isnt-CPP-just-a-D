//CALCULATING AREAS
#include <iostream>

using namespace std;

int num, a, b;
float x, y, h, r;

void square(int a){
    cout << "Length of side a: ";
    cin >> a;
    cout << "Area of the square: " << a*a << endl;
}
void rectangle(int a, int b){
    cout << "Length of side a: ";
    cin >> a;
    cout << "Length of side b: ";
    cin >> b;
    cout << "Area of the rectangle: " << a*b << endl;
}
void triangle(float x, float h){
    cout << "Length of side a: ";
    cin >> x;
    cout << "Height h: ";
    cin >> h;
    cout << "Area of the triangle: " << x*h/2 << endl;
}
void circle(float r){
    cout << "Radius r: ";
    cin >> r;
    cout << "Area of the circle: " << 3.14*r*r << endl;
}
void trapeze(float x, float y, float h){
    cout << "Length of side a: ";
    cin >> x;
    cout << "Length of side b: ";
    cin >> y;
    cout << "Height h: ";
    cin >> h;
    cout << "Area of the trapeze: " << (x+y)*h/2 << endl;
}

int main()
{
    cout << "Which geometric figure do you want to calculate?\n1. square\n2. rectangle\n3. triangle\n4. circle\n5. trapeze: ";
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
            triangle(x, h);
            break;
        case 4:
            circle(r);
            break;
        case 5:
            trapeze(x, y, h);
            break;
        default:
            cout << "Wrong number.";
            break;
    }
    return 0;
}
