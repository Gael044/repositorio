#include <stdio.h>
#include <string.h>
// Cerecer Mendez Gael Alberto - 25 de septiembre
int main() {
    // Definir dos cadenas de texto
    char str1[] = "Hola, ";
    char str2[] = "Mundo!";

    // Usar strcat para concatenar las dos cadenas
    char mensaje[100];  // Asegurarse de que haya espacio suficiente
    strcpy(mensaje, str1);  // Copiar la primera cadena al mensaje
    strcat(mensaje, str2);  // Concatenar la segunda cadena al mensaje

    // Imprimir el mensaje concatenado
    printf("%s\n", mensaje);

    return 0;
}
