#include <iostream>

using namespace std;

float addMatrixes(float *temp1[3][3], float *temp2[3][3]) {
    float *sum[3][3];
    for(int i; i < 3; i++){
        for(int j; j < 3; j++){
            *sum[i][j] = *temp1[i][j] + *temp2[i][j];
        }
    }

    return *sum[3][3];
};

class Matrix {
private:
    static float array[3][3];
    int size;
public:
    Matrix(){
        for(int i; i < size; i++){
            for(int j; j < size; j++){
                array[i][j] = 0;
            }
        }
    };
    float loadData(){
        float temp;
        cout << "What is the value you want to put in your matrix? (feel free to use a float)";
        cin >> temp;

        return temp;
    };
    int iterateMatrix(){
        for(int i; i < size; i++){
            for(int j; j < size; j++){
                cout << "  " << array[j] << "  " << endl;

                return 0;
            }

        }
    };

    friend float addMatrixes();

};




int main() {

    Matrix *A;
    Matrix *B;

    A = new Matrix[3][3];
    B = new Matrix[3][3];

    *A.loadData();
    *A.iterateMatrix();

    B.loadData();
    B.iterateMatrix();

    Matrix C = new Matrix[3][3];
    C = addMatrixes();
    C.iterateMatrix();

    return 0;
}
