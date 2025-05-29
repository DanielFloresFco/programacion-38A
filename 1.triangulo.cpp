#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    float base, altura, hipotenusa, area, perimetro;

    // Entrada de datos
    printf("Ingrese la base del triangulo rectangulo: ");
    scanf("%f", &base);

    printf("Ingrese la altura del triangulo rectangulo: ");
    scanf("%f", &altura);

    // Validación básica
    if (base <= 0 || altura <= 0) {
        printf("\nError: La base y la altura deben ser mayores que cero.\n");
        getch();
        return 1;
    }

    // Cálculos
    hipotenusa = sqrt(base * base + altura * altura);
    area = (base * altura) / 2;
    perimetro = base + altura + hipotenusa;

    // Resultados
    printf("\n--- Resultados ---\n");
    printf("Hipotenusa: %.2f\n", hipotenusa);
    printf("Area: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);

    getch(); // Espera una tecla antes de salir (solo para Windows/compiladores que soporten conio.h)
    return 0;
}
