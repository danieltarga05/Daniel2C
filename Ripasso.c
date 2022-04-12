#include <stdio.h>
#include <string.h>

void main(){
    char nome[20];
    fgets(nome, 20, stdin);
    printf("Stringa: %s\n", nome);
}