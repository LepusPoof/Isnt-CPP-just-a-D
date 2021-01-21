#include <iostream>

using namespace std;

int main()
{
    double pi = 3.0;
    int x;
    cout<<"Wprowadz wartosc przyblizenia liczby pi: " << endl;
    cin >> x;
    for(int i = 1; i <= x; i++){
            if(i%2 == 1){pi += ((double)4/(((i*3)-1)*(i*3)*((i*3)+1)));}
            else {pi -= ((double)4/(((i*3)-1)*(i*3)*((i*3)+1)));
    }
    }
    cout << pi;
    return 0;
}

