#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int nombre_occurrence(char *ph, char *mot){
          int resultat = 0;
          char *p = ph;
          while ((p = strstr(p, mot)) != NULL)
          {
                    
                    resultat++;
                    p += strlen(mot);
          }
          return resultat;
}
int main(){
          char *phrase, *mot;
          int num_occ;
          phrase = (char *)malloc(250 * sizeof(char));
          mot = (char *)malloc(15 * sizeof(char));
          printf("Donner une phrase: ");
          gets(phrase);
          printf("Donner un mot: ");
          gets(mot);
          num_occ = nombre_occurrence(phrase, mot);
                    printf("\nLe nombre d'occurence de '%s': %d",mot,num_occ);
}
