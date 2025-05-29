#include <stdio.h>
#include <math.h>

int main() {
    float cantidad, interes_anual, interes_mensual, monto_final, ganancia_total;
    int anios, meses;

    // Entrada de datos
    printf("Ingrese la cantidad a invertir: ");
    scanf("%f", &cantidad);

    printf("Ingrese el interes anual (en %%): ");
    scanf("%f", &interes_anual);

    printf("Ingrese la cantidad de anios a invertir: ");
    scanf("%d", &anios);

    // Validación básica
    if (cantidad <= 0 || interes_anual < 0 || anios <= 0) {
        printf("Error: Verifique que los valores ingresados sean positivos.\n");
        return 1;
    }

    // Cálculos
    interes_mensual = interes_anual / 12 / 100;
    meses = anios * 12;

    monto_final = cantidad * pow(1 + interes_mensual, meses);
    ganancia_total = monto_final - cantidad;

    // Resultados
    printf("\n--- Resultados ---\n");
    printf("Interes mensual: %.2f%%\n", interes_mensual * 100);
    printf("Ganancia total en %d anios: $%.2f\n", anios, ganancia_total);
    printf("Monto total acumulado: $%.2f\n", monto_final);

    return 0;
}


//carlos daniel flores francisco  grupo 38a isc5 "programa 2"
