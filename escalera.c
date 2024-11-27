#include <cs50.h>
#include <stdio.h>
// Cerecer Mendez Gael Alberto - 14 de noviembre
int main(void)
{
    // Solicitar al usuario la altura de la pirámide
    int height;
    do
    {
        height = get_int("Height max eight: ");
    }
    while (height < 1 || height > 8);

    // Construir la pirámide
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n"); //Se utiliza para dar un salto de linea y evitar que se vea amontonado
    }
}
