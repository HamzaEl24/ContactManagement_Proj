#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
          char *nom, *debut;
          char temp;
          char *fin;
          
          nom = (char *)malloc(30 * sizeof(char));
          printf("Donner le nom: ");
          gets(nom);
          
          debut = nom;
          fin = nom + strlen(nom) - 1;
          while (debut <= fin)
          {
                    temp = *debut;
                    *debut = *fin;
                    *fin = temp;
                    debut++;
                    fin--;
          }
          printf("le nom inversee : %s", nom);
}
