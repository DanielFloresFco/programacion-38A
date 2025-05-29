#include <stdio.h>
#include <string.h>

class DeporteConBalon {
    char nombre[30];
    int numJugadores;
    char tipoBalon[20];
    char superficie[20];
    char paisOrigen[20];

public:
    void capturarDatos(const char* n, int num, const char* balon, const char* sup, const char* pais) {
        strcpy(nombre, n);
        numJugadores = num;
        strcpy(tipoBalon, balon);
        strcpy(superficie, sup);
        strcpy(paisOrigen, pais);
    }

    void mostrarDatos() {
        printf("Deporte: %s\n", nombre);
        printf("Jugadores: %d\n", numJugadores);
        printf("Balon: %s\n", tipoBalon);
        printf("Superficie: %s\n", superficie);    
    }
};

class DeporteConPie : public DeporteConBalon {
};

class DeporteConMano : public DeporteConBalon {
};

class DeporteConCabeza : public DeporteConBalon {
};

int main() {
    DeporteConPie futbol;
    futbol.capturarDatos("Futbol", 11, "Balon redondo", "Cesped", "Inglaterra");

    DeporteConMano voleibol;
    voleibol.capturarDatos("Voleibol", 6, "Balon ligero", "Cancha dura", "Estados Unidos");

    DeporteConCabeza headball;
    headball.capturarDatos("Headball", 2, "Balon de goma", "Arena", "Brasil");

    printf("=== Deporte con el Pie ===\n");
    futbol.mostrarDatos();

    printf("=== Deporte con la Mano ===\n");
    voleibol.mostrarDatos();

    printf("=== Deporte con la Cabeza ===\n");
    headball.mostrarDatos();

    return 0;
}
