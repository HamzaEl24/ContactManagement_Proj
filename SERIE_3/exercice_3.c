#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void compte_voyelles(char *chaine){
   int i ;
   for ( i=0 ; i < strlen(chaine) ; i++ ){
          printf("%s",chaine[i]);
   }

}
int main(){
          char *chaine_1;
          printf("donner la  chaine de caracteres :");
          gets(chaine_1);
          compte_voyelles(chaine_1);
}
