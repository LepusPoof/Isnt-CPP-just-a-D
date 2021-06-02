#include <iostream>

using namespace std;

class Fraction {
private:
    int denominator, counter; //[PL] denominator == mianownik, counter == licznik
public:
    Fraction() = default;
    Fraction(float x, float y){
        denominator = x;
        counter = y;
    };
    float result(){
        float res = static_cast<float>(counter)/static_cast<float>(denominator); //static_cast changes the int into the float
        return res;
    };

    /* this method has no sense here, since we want to get back the fractions, not boolean values. It would probably work if your class worked on bool's.
    i left it anyway to be able to come back and check what's up and how to do this

    Fraction operator !() {

        return Fraction(- this->denominator, - this->counter);
    };


    Fraction operator ==(const Fraction &x){
        if(( this->denominator == x.denominator ) &&( this->counter == x.counter ) ){
            return true;
        }
        else {
            return false;
        }
    };
     */

    Fraction operator +(const Fraction &x){
        Fraction retFr = Fraction(this->denominator + x.denominator, this->counter + x.counter); // check this if it works
       // return Fraction(this->denominator + x.denominator, this->counter + x.counter);
        return retFr;
    }

    Fraction operator -(const Fraction &x){
        Fraction retFr = Fraction(this->denominator - x.denominator, this->counter - x.counter);
        return retFr;
    };

    Fraction operator +=(const Fraction &x){ //another way to do this, check it
        this->denominator += x.denominator;
        this->counter += x.counter;
        return * this;
    };

    Fraction operator *(const float &x){
        Fraction retFr;
        retFr.denominator = this->denominator * x;
        retFr.counter = this->counter * x;
        return retFr;
    };

    // this operator checks
    Fraction & operator *=(const float &x){
        this->denominator *= x;
        this->counter *= x;
        return * this;
    };

    Fraction operator /(const float &x){
        Fraction retFr;
        retFr.denominator = this->denominator / x;
        retFr.counter = this->counter / x;
        return retFr;
    };

};

int main() {
    float denom1 = 1, count1 = 2, denom2 = 1, count2 = 2; //random values so if user skips next steps the program can still be checked (if it works)


    cout << endl << " --- THE FIRST FRACTION -- " << endl;
    cout << "The denominator:";
    cin >> denom1;
    cout << "Now give me the counter:";
    cin >> count1;
    Fraction x1(denom1, count1);
    cout << endl << "The first fraction is " <<  x1.result() << endl;

    cout << endl << " --- THE SECOND FRACTION -- " << endl;
    cout << "The denominator:";
    cin >> denom2;
    cout << "Now give me the counter:";
    cin >> count2;
    Fraction x2(denom2, count2);
    cout << endl << "The second fraction is " << x2.result() << endl;

    //Fraction x1(denom1, count1), x2(denom2, count2);

    cout << endl << " --- THE MATHS ---" << endl;

    Fraction sumFr = x1 + x2;
    cout << "sum of your fractions: " << sumFr.result() << endl;

    Fraction diffFr = x1 - x2;
    cout << "difference of your fractions: " << diffFr.result() << endl;

    Fraction multFr = x1 * 2;
    cout << "multiplication of your fractions: " << multFr.result() << endl;

    Fraction divFr = x1 / 3;
    cout << "division of your fractions: " << divFr.result() << endl;

    sumFr += x2;
    cout << "sum of your fractions (but with one added value): " << sumFr.result() << endl;

    return 0;
}
