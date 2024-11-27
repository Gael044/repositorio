#include <stdio.h>
// Cerecer Mendez Gael Alberto - 11 de noviembre
// Función que obtiene el rango de números desde el usuario
void MODULES() {
    int start, end, i;

    // Solicitar al usuario el rango
    printf("Introduce el número de inicio del rango: ");
    scanf("%d", &start);

    printf("Introduce el número final del rango: ");
    scanf("%d", &end);

    // Comprobar si el rango es válido
    if (end >= start) {
        // Imprimir "MEOW" tantas veces como el número final indique
        for (i = start; i <= end; i++) {
            printf("MEOW\n");
        }
    } else {
        printf("El número final debe ser mayor o igual al número de inicio.\n");
    }
}

int main() {
    MODULES();  // Llamar a la función para obtener el rango y mostrar "MEOW"
    return 0;
}
