#include<stdio.h>
#include<cs50.h>
// Cerecer Mendez Gael Alberto - 11 de noviembre
void verticalPrint(int numBlocks);
void horizontalPrint(int numBlocks);
int main (void)
{
    int num=get_int("Cuantos bloques quieres? ");
    horizontalPrint(num);
    verticalPrint(num);
}

void horizontalPrint(int numBlocks)
{
    string block ="|?|";
    for(int i=0; i<numBlocks;i++)
    {
        printf("%s",block);
    }
    printf("\n");
}
void verticalPrint(int numBlocks)
{
        string block ="|?|";
    for(int i=0; i<numBlocks;i++)
    {
        printf("%s\n",block);
    }
}
