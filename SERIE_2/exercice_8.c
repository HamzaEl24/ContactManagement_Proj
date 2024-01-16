#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
          int m , j ; 
          char t ;
          int v = 0;

char tab[] = " Cycle d\'ingenieur : Genie Informatique" ;
puts(tab);
printf("     ********************************\n");
   m = strlen(tab);
   printf("Nombre des caracteres de la chaine est : %d\n",m);

//     for ( i=0 ; i < m ; i++){
//           if ( tab[i] == "m" )
     j = 0 ;
    while ( tab[j] !='m' ){
       j++ ; 
      } 
   printf("     ********************************\n");
printf ("le caractere 'm' est dans la position : %d\n",j);
printf ("saisir une lettre quelconque : ");
scanf("%c",&t);

  for ( j = 0 ; j < m ; j++){
    if ( tab[j] == t){
       v = 1 ;
       printf(" la position de la carac '%c' est : %d",t,j);
    }
  } 
  if (v==0)
    printf("le caractere n\'existe pas ...");

    return 0;
}