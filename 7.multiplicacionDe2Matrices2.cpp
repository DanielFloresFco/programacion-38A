#include <iostream>
using namespace std;

// Función para multiplicar matrices
void multiplicarMatrices(int A[][10], int B[][10], int resultado[][10], int filasA, int columnasA, int columnasB) {
    // Inicializar la matriz resultado con ceros
    for (int i = 0; i < filasA; i++) {
        for (int j = 0; j < columnasB; j++) {
            resultado[i][j] = 0;
        }
    }

    // Multiplicación
    for (int i = 0; i < filasA; i++) {
        for (int j = 0; j < columnasB; j++) {
            for (int k = 0; k < columnasA; k++) {
                resultado[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int filasA, columnasA, filasB, columnasB;
    int A[10][10], B[10][10], resultado[10][10];

    cout << "Ingrese filas y columnas de la primera matriz (A): ";
    cin >> filasA >> columnasA;

    cout << "Ingrese filas y columnas de la segunda matriz (B): ";
    cin >> filasB >> columnasB;

    // Validar si la multiplicación es posible
    if (columnasA != filasB) {
        cout << "Error: El número de columnas de A debe ser igual al número de filas de B." << endl;
        return 1;
    }

    // Leer la matriz A
    cout << "Ingrese los elementos de la matriz A:" << endl;
    for (int i = 0; i < filasA; i++) {
        for (int j = 0; j < columnasA; j++) {
            cin >> A[i][j];
        }
    }

    // Leer la matriz B
    cout << "Ingrese los elementos de la matriz B:" << endl;
    for (int i = 0; i < filasB; i++) {
        for (int j = 0; j < columnasB; j++) {
            cin >> B[i][j];
        }
    }

    // Multiplicar matrices
    multiplicarMatrices(A, B, resultado, filasA, columnasA, columnasB);

    // Mostrar resultado
    cout << "Resultado de la multiplicación:" << endl;
    for (int i = 0; i < filasA; i++) {
        for (int j = 0; j < columnasB; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
