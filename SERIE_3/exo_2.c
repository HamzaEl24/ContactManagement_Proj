#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
          char *mot , *debut , *fin;
          int n = 0 ;
          
          
          mot= (char*)malloc(30*sizeof(char));
          printf("donner le mot : ");
          gets(mot);
          debut = mot ;
          fin =  mot + strlen(mot) -1 ;
          while ( debut <= fin){
                
               if ( *debut != *fin){
                       n = 1 ;
               }
               debut ++ ;
               fin -- ;
          }
          if (n == 0){
                    printf("le mot est palindrom ");
          }
          else {
          printf("le mot n\'est pas palidrom");
          }
}