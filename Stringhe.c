#include<stdio.h>  
#include <string.h>    
int main(){    
    //primo metodo
char name[50];    
printf("Enter your name: ");    
gets(name); //reads string from user    
printf("Your name is: ");    
puts(name);  //displays string    
    //secondo metodo
char stringa[20]={'c', 'i', 'a', 'o', '\0'};    
printf("contenuto stringa: %d",strlen(stringa));
    //terzo metodo
 char ch[5]={'t', 'p', 's', 'i', 't', '\0'};    
   char stringa2[12];    
   strcpy(stringa2,ch);  
   printf("Value of second string is: %s",stringa2);    
    //quarto metodo
  char string1[8]={'t', 'p', 's', 'i', 't', '\0'};    
   char string2[10]={'m', '\0'};    
   strcat(string1,string2);    
   printf("Value of first string is: %s",string1);   
   //quinto metodo
     char stringa3[20],stringa4[20];    
  printf("metti la prima stringa");    
  gets(stringa3);    
  printf("metti la seconda stringa: ");    
  gets(stringa4);    
  if(strcmp(stringa3,stringa4)==0)    
      printf("le stringhe sono uguali");    
  else    
      printf("le stringhe sono diverse");     
    //sesto metodo
      char string3[20];    
  printf("Enter string: ");    
  gets(string3);
  printf("la stringa è: %s",string3);    
  printf("\n la stringa inversa è: %s",strrev(string3));
  //settimo metodo
    char string4[10];    
  printf("inserisci la stringa: ");    
  gets(string4); 
  printf("la stringa è: %s",string4);    
  printf("\n stringa in maiuscolo: %s",strupr(string4));   
  //ottavo metodo
    char stringa5[]="ciao sto studiando tpsit";    
  char *substringa;    
  substringa=strstr(stringa5,"tpsit");    
  printf("\n Substringa è: %s",substringa);         

return 0;    
}