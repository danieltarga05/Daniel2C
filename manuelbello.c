#include <stdio.h>

int main(){
    int input;
    int numeri[10]={0,0,0,0,0,0,0,0,0,0};
    int totale=0;
    int numeriInseriti;
    float media;
    printf("Inserisci una serie di numeri\n");
    for(int i=0; i<10; i++){
        numeriInseriti=i;
        totale+=input;
        scanf("%d", &input);
        numeri[i]=input;
        if(input==0){
            i=10;
        }
    }
    media=totale;
    media/=numeriInseriti;
    printf("Media: %f\n", media);
    printf("Stampa valori in modo inverso:\n");
    for(int i=9; i>=0; i--){
        if(numeri[i]!=0){
            printf("%d\n", numeri[i]);
        }
    }
    return 0;
}
