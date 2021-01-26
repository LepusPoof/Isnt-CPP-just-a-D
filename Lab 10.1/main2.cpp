#include <iostream>

using namespace std;

int main()
{
    int n, m, i, j;

    cout << "Number of verses: ";
    cin >> m;
    cout << "Number of columns: ";
    cin >> n;


    int** A = new int*[m];
    for(i = 0; i < m; i++){
        A[i] = new int[n];
    }

    int** B = new int*[m];
    for(i = 0; i < m; i++){
        B[i] = new int[n];
    };

    int** WYNIK = new int*[m];
    for(i = 0; i < m; i++){
        WYNIK[i] = new int[n];
    }

    for (i = 0; i < m; i++){
        A[i] = (int*)malloc(n*sizeof(int));
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
            WYNIK[i][j] = A[i][j] + B[i][j];
        }
    }
    cout << "The result: " << endl;
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            cout << WYNIK[i][j] << " ";
        }
        cout << "\n";
    }

    delete [] A;
    delete [] B;
    delete [] WYNIK;
}
