#include <iostream>
#include <string>

using namespace std;

enum Estado { S1, S2, S3, S4, ERROR = -1 };

Estado transicion(Estado estado_actual, char simbolo) {
    switch (estado_actual) {
        case S1:
            if (simbolo == 'a') return S2;
            break;
        case S2:
            if (simbolo == 'a') return S2;
            if (simbolo == 'b') return S3;
            if (simbolo == 'c') return S4;
            break;
        case S3:
            if (simbolo == 'a') return S3;
            if (simbolo == 'b') return S4;
            break;
    
            break;
    }
    return ERROR;
}


string nombreEstado(Estado estado) {
    switch (estado) {
        case S1: return "S1";
        case S2: return "S2";
        case S3: return "S3";
        case S4: return "S4";
        default: return "ERROR";
    }
}

bool esFinal(Estado estado) {
    return estado == S4;
}

int main() {
    string cadena;
    Estado estado_actual = S1;

    cout << "Introduce una cadena (solo a, b, c, d): ";
    cin >> cadena;

    for (int i = 0; i < cadena.length(); i++) {
        estado_actual = transicion(estado_actual, cadena[i]);

        if (estado_actual == ERROR) {
            cout << "Error: transicion no valida con simbolo '" << cadena[i] << "'." << endl;
            break;
        }
    }

    cout << "La cadena termino en el estado: " << nombreEstado(estado_actual) << endl;

    if (estado_actual != ERROR && esFinal(estado_actual)) {
        cout << "Resultado: Cadena ACEPTADA." << endl;
    } else {
        cout << "Resultado: Cadena RECHAZADA." << endl;
    }

    return 0;
}
