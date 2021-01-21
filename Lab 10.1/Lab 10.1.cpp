#include <iostream>

using namespace std;

int main()
{
    int n, m, i, j;



    int** A = new int[m][n];
    int** B = new int[m][n];
    int** WYNIK = new int[m][n];

    cout << "Podaj wymiary macierzy: ";
    cin >> m >> n;


    A = (int**)malloc (sizeof(int*));
    B = (int**)malloc (sizeof(int*));
    WYNIK = (int**)malloc (sizeof(int*));


    for (i = 0; i < m; i++){
        A[i] = (int*)malloc(n*sizeof(int});
        B[i] = (int*)malloc(n*sizeof(int));
        WYNIK[i] = (int*)malloc(n*sizeof(int));
    }

    cout << "Enter nums for A: " << endl;
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            cin >> A[i][j];
        }
    }
    cout << "Enter nums for B: " << endl;
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            cin >> B[i][j];
        }
    }
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            WYNIK[i][j] = A[i][j] + B[i][j]
        }
    }
    cout << "Wynik: " << endl;
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            cout << WYNIK[i][j] << " ";
        }
        cout << "\n";
    }
}
