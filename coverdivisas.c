#include <stdio.h>

int main (int argc, char *argv[]) {
    float euros;
    printf("Introduce el valor que quieres convertir \n");
    scanf("%f", &euros);
    printf("%.2f en euros equivale a %.2f pesetas", euros, euros*166.386);
    return 0;
}