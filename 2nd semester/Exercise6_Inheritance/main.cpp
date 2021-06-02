#include <iostream>

using namespace std;

class Addition {
        public:
        int result;
        void add (int a, int b) {
            result = a + b;
        }
};
// analogicznie klasa Odejmowanie, Mnozenie, Dzielenie czyli:
class Substraction {
        public:
        int result;
        void substract (int a, int b) {
            result = a - b;
        }
};

class Multiplication {
        public:
        int result;
        void multiply (int a, int b) {
            result = a * b;
        }
};

class Division {
        public:
        float result;
        void divide (int a, int b) {
            result = a / b;
        }
};

class Operation : public Addition, public Substraction, public Multiplication, public Division {
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
    void doTheMaths() {
        Operation::Addition();
        Operation::Substraction();
        Operation::Multiplication();
        Operation::Division();
    }
    void print() {

        Operation x;

        cout << Addition().result << endl;
        cout << Substraction().result << endl;
        cout << Multiplication().result << endl;
        cout << Division().result << endl;
    }
};

int main() {
    Operation x1;
    x1.loadData();
    x1.doTheMaths();
    x1.print();

    return 0;
}
