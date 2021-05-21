#include <iostream>

using namespace std;


class Triangle {
public:
    int a, h;
    void readingVariables() {
        cout << "Give a:";
        cin >> a;
        cout << "Give h:";
        cin >> h;
    };

    int area() {
        float triangleArea = a * h / 2;
        return triangleArea;
    };

};

void triangleComparison(Triangle x,Triangle y) {

    if(x.area() > y.area()){
        cout << x.area();
    } else if(x.area() < y.area()){
        cout << y.area();
    } else {
        cout << "The areas are the same.";
    }
};


int main() {
    Triangle First;
    Triangle Second;

    First.readingVariables();
    First.area();
    cout << First.area() << endl;

    Second.readingVariables();
    Second.area();
    cout << Second.area() << endl;

    triangleComparison(First, Second);


}
