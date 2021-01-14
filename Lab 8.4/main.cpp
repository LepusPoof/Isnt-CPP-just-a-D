#include <iostream>

using namespace std;

bool sprawdzam(float* a, float* b, float* c){

    if (*a < (*b+*c) || *b < (*a+*c) || *c < (*a+*b)) {
        return "These numbers can make a triangle";
    }
}

int main()
{
    float* x;
    float* y;
    float* z;

    cout << "Give me the 3 numbers - I will check if they can make a triangle." << "\n";
    cout << "First number: " << "\n";
    cin >> *x;
    cout << "Second number: " << "\n";
    cin >> *y;
    cout << "Third number: " << "\n";
    cin >> *z;

    sprawdzam(x, y, z);
}
