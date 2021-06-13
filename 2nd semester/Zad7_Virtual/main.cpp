#include <iostream>

class Quadrangle{
private:
    int a,b,c,d;
public:
    void writeOut(){
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << c << std::endl;
        std::cout << d << std::endl;
    }

    virtual int Area(int a, int b,int c, int d){
        return a*b;
    }
    Quadrangle(){
        std::cout << "Give me the first value:" << std::endl;
        std::cin >> a;
        std::cout << "Give me the second value:" << std::endl;
        std::cin >> b;
        std::cout << "Give me the third value:" << std::endl;
        std::cin >> c;
        std::cout << "Give me the fourth, and the last, value:" << std::endl;
        std::cin >> d;
    };
};

class Rectangle{
public:
    Rectangle(int temp1, int temp2){
        int a = temp1;
        int c = temp1;
        int b = temp2;
        int d = temp2;
    }
    void Dimensions(int w1, int w2){
        int a = w1;
        int c = w1;
        int b = w2;
        int d = w2;
    }
    int Area(int a, int b){
        return a*b;
    }

};

class Square{
public:
    Square(int temp1) {
        int a = temp1;
    }
    void Dimensions(int w){
        int a = w;
        int b = w;
        int c = w;
        int d = w;
    }
    int Area(int a){
        return a*a;
    }
};

int main(){
    Quadrangle * qptr;
    Square x1(3);
    x1 = qptr;

    qptr->Area();

    Rectangle * x2 = new Rectangle();
    x2 = &qptr;
    qptr->Area();

    return 0;
}