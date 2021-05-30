#include <iostream>

using namespace std;

Class Addition {
        public:
        int result;
        void add (int a, int b) {
            result = a + b;
        }
};
// analogicznie klasa Odejmowanie, Mnozenie, Dzielenie czyli:
Class Substraction {
        public:
        int result;
        void substract (int a, int b) {
            result = a - b;
        }
};

Class Multiplication {
        public:
        int result;
        void multiply (int a, int b) {
            result = a * b;
        }
};

Class Division {
        public:
        int result;
        void divide (int a, int b) {
            result = a / b;
        }
};

//Stwórz następującą klasę:
Class Dzialanie : public Dodawanie, public Odejmowanie, public Dzielenie, public Mnozenie

class Operation {
public:
    Operation(){
        a = 0;
        b = 0;
    }
private:
    int a, b;
public:
    void loadData() {
        cout << "Give me the first value:" << endl;
        cin >> a;
        cout << "Give me the second value: " << endl;
        cin >> b;
    }
    void obliczDzialania() {
        //wywołuje metody dodaj, odejmij …
        //argumentami do metod dodaj, odejmij, pomnoz oraz podziel powinny być zmienne a i b
        Operation.substract();
    }
    void print() {
        //wypisuje wartości zmiennych wynik odziedziczonych z wszystkich
        czterech
        klas
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
