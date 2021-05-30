#include <iostream>

using namespace std;

int i, j;

class Matrix {
private:
    static float array[3][3];
    int arraySize;
public:
    Matrix(){
        for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                array[i][j] = 0;
            }
        }
    };
    float loadData(){
        float temp;
        for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){

            }
        }
        cout << "What is the value you want to put in your matrix? (feel free to use a float)";
        cin >> temp;

        return temp;
    };
    int iterateMatrix(){
        for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                cout << "  " << array[j] << "  " << endl;

                return 0;
            }

        }
    };

    friend float addMatrixes();

};

float addMatrixes(Matrix temp1[3][3], Matrix temp2[3][3]) {
    Matrix sum[3][3];
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            sum[i][j] = temp1[i][j] + temp2[i][j];
            // *sum[i][j] = *temp1[i][j] + *temp2[i][j];
        }
    }

    return *sum[3][3];
};



int main() {

    Matrix *A;
    Matrix *B;

    A = new Matrix;
    B = new Matrix;

    A -> loadData();
    A-> iterateMatrix();

    B -> loadData();
    B -> iterateMatrix();

    Matrix *C;
    C = new Matrix;

    C = addMatrixes(A, B);
    C -> iterateMatrix();

    return 0;
}
