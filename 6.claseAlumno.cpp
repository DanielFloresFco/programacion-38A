#include <stdio.h>
#include <conio.h>
#include <string.h>

#define MAX_ALUMNOS 100
#define MAX_MATERIAS 20

struct Materia {
    char nombre[30];
    float cal1, cal2, cal3;
    float promedio;
    char observacion[12];
};

struct Alumno {
    char nombre[50];
    Materia materias[MAX_MATERIAS];
    int totalMaterias;
    float promedioFinal;
};

int main() {
    Alumno alumnos[MAX_ALUMNOS];
    int totalAlumnos = 0;
    float promedioGeneral = 0.0;
    char continuarAlumnos, continuarMaterias;

    do {
        printf("\nNombre del alumno: ");
        gets(alumnos[totalAlumnos].nombre);

        alumnos[totalAlumnos].totalMaterias = 0;
        float sumaPromediosMaterias = 0.0;

        do {
            Materia* m = &alumnos[totalAlumnos].materias[alumnos[totalAlumnos].totalMaterias];

            printf("Nombre de la materia: ");
            gets(m->nombre);

            printf("Calificacion 1: ");
            scanf("%f", &m->cal1);
            printf("Calificacion 2: ");
            scanf("%f", &m->cal2);
            printf("Calificacion 3: ");
            scanf("%f", &m->cal3);
            fflush(stdin);

            m->promedio = (m->cal1 + m->cal2 + m->cal3) / 3.0;

            if (m->promedio >= 6.0)
                strcpy(m->observacion, "APROBADO");
            else
                strcpy(m->observacion, "REPROBADO");

            sumaPromediosMaterias += m->promedio;
            alumnos[totalAlumnos].totalMaterias++;

            printf("Agregar otra materia? (s/n): ");
            continuarMaterias = getche();
            printf("\n");

        } while (continuarMaterias == 's' || continuarMaterias == 'S');

        alumnos[totalAlumnos].promedioFinal = sumaPromediosMaterias / alumnos[totalAlumnos].totalMaterias;
        promedioGeneral += alumnos[totalAlumnos].promedioFinal;
        totalAlumnos++;

        printf("Agregar otro alumno? (s/n): ");
        continuarAlumnos = getche();
        printf("\n");

    } while (continuarAlumnos == 's' || continuarAlumnos == 'S');

    // Impresión del reporte
    printf("\n\nREPORTE DE MATERIAS CURSADAS\n");
    printf("NOMBRE\t\tMATERIA\t\tCALIF. FINAL\tOBSERVACION\n");

    for (int i = 0; i < totalAlumnos; i++) {
        printf("%s\n", alumnos[i].nombre);
        for (int j = 0; j < alumnos[i].totalMaterias; j++) {
            Materia m = alumnos[i].materias[j];
            printf("\t\t%s\t\t%.2f\t\t%s\n", m.nombre, m.promedio, m.observacion);
        }
        printf("TOTAL ALUMNO %d MATERIAS\tPROMEDIO: %.2f\n\n",
               alumnos[i].totalMaterias, alumnos[i].promedioFinal);
    }

    printf("TOTAL GENERAL %d ALUMNOS\tPROMEDIO GENERAL: %.2f\n",
           totalAlumnos, promedioGeneral / totalAlumnos);

    getch();
    return 0;
}
