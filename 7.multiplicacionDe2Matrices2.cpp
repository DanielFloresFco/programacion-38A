#include <iostream>
using namespace std;

int main() {
    int n;

   
    cout << "Ingrese la dimension de las matrices cuadradas (n x n): ";
    cin >> n;

   
    int A[n][n], B[n][n], C[n][n];

    
    cout << "\nIngrese los elementos de la matriz A:\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }

    
    cout << "\nIngrese los elementos de la matriz B:\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }

    
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            C[i][j] = 0;  
            for (int k = 0; k < n; ++k)
                C[i][j] += A[i][k] * B[k][j];
        }

    
    cout << "\nResultado de la multiplicacion (Matriz C = A x B):\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            cout << C[i][j] << "\t";
        cout << endl;
    }

    return 0;
}
