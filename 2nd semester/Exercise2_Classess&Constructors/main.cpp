#include <iostream>

using  namespace std;

class Rectangle {
private:
    float a;
    float b;

public:
    Rectangle(int temp1, int temp2){
        a = temp1;
        b = temp2;
    };

    Rectangle(){
        a = 0;
        b = 0;
    };

    float Area(){
        return (a*b);
    };
    float Perimeter(){
        return (2*a + 2*b);
    };

    float setA(float temp){
        a = temp;
        return temp;
    }

    float setB(float temp){
        b = temp;
        return b;
    }

};

int main() {
    Rectangle x1(4,5);

    x1.Area();
    cout << x1.Area() << endl;
    x1.Perimeter();
    cout << x1.Perimeter() << endl;

    float temp1, temp2;
    cout << "Give me the first length:";
    cin >> temp1;
    cout << "Give me the second length:";
    cin >> temp2;

    Rectangle x2(temp1,temp2);

    x2.Area();
    cout << x2.Area() << endl;
    x2.Perimeter();
    cout << x2.Perimeter() << endl;

    x2.setA(10.0);
    x2.setB(20.0);

    x2.Area();
    cout << x2.Area() << endl;
    x2.Perimeter();
    cout << x2.Perimeter() << endl;
}
