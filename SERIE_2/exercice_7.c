#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
       char Mot[20]; int i ;  
       printf("Donner un mot : ");
       gets(Mot);

       for( i=strlen(Mot)-1 ; i >= 0 ; i--){
          printf("%c",Mot[i]);
       } 
          
          return 0 ;
}