#include <stdio.h>

// Función para verificar si un número es par
int esPar(int numero) {
    return numero % 2 == 0;
}

// Función para verificar si un número es impar
int esImpar(int numero) {
    return numero % 2 != 0;
}

// Función para imprimir números y calcular la suma de un tipo específico
void imprimirNumerosYSuma(int inicio, int fin, int (*criterio)(int)) {
    int suma = 0;
    printf("Números:\n");
    for (int i = inicio; i <= fin; i++) {
        if (criterio(i)) {
            printf("%d ", i);
            suma += i;
        }
    }
    printf("\nSuma: %d\n", suma);
}

// Función principal para manejar las opciones y delegar tareas
void manejarOpciones(int inicio, int fin) {
    int opcion;
    do {
        printf("\nOpciones:\n");
        printf("1. Mostrar números pares y su suma.\n");
        printf("2. Mostrar números impares y su suma.\n");
        printf("3. Mostrar pares e impares con sus sumas.\n");
        printf("Elige una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("\nNúmeros pares y su suma:\n");
                imprimirNumerosYSuma(inicio, fin, esPar);
                break;
            case 2:
                printf("\nNúmeros impares y su suma:\n");
                imprimirNumerosYSuma(inicio, fin, esImpar);
                break;
            case 3:
                printf("\nNúmeros pares y su suma:\n");
                imprimirNumerosYSuma(inicio, fin, esPar);
                printf("\nNúmeros impares y su suma:\n");
                imprimirNumerosYSuma(inicio, fin, esImpar);
                break;
            default:
                printf("Opción no válida. Inténtalo de nuevo.\n");
        }
    } while (opcion < 1 || opcion > 3);
}

int main() {
    int inicio, fin;
    char repetir;

    do {
        // Validar el rango
        do {
            printf("Ingresa el valor inicial del rango: ");
            scanf("%d", &inicio);
            printf("Ingresa el valor final del rango: ");
            scanf("%d", &fin);

            if (inicio > fin) {
                printf("El valor inicial debe ser menor o igual al valor final. Inténtalo de nuevo.\n");
            }
        } while (inicio > fin);

        // Manejar las opciones
        manejarOpciones(inicio, fin);

        // Preguntar si desea repetir
        printf("\n¿Deseas realizar otra operación? (s/n): ");
        scanf(" %c", &repetir);

    } while (repetir == 's' || repetir == 'S');

    printf("Programa finalizado.\n");
    return 0;
}
