#include <stdio.h>

int main(){
    int nuemro;
    printf("Inserisci un numero maggiore o uguale a 3:\n");
    scanf("%d",&nuemro);
    if (nuemro < 3)
    {
       printf("Errore! Reinserisci un numero:\n");
       scanf("%d",&nuemro); 
    }

    for (int i = 3; i < nuemro; i++)
    {
        printf("***");
        for (int j=1; j< nuemro; j++)
        {
            printf("* *\n");
        }


    }
    return 0;
}