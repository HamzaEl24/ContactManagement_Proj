#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
          int i = 0 ; char Noms[20] ;
          printf("Donner votre nome : ");
          gets(Noms);
          while( Noms[i] != '\0'){
                    i++;

          }
          printf (" Nombre des caracteres  de votre nome est : %d",i);
          return 0 ;
}