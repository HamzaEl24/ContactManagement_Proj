#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
          float t[3][4];
          float n;
          int i, j;
          printf("Remplir le tableau a deux dimentions : \n");
          for (i = 0; i < 3; i++)
          {
                    for (j = 0; j < 4; j++)
                    {
                              printf("t[%d][%d] = ", i, j);
                              scanf("%f", &n);
                              t[i][j] = n ;
                    }
          }
           

          
          //      la somme des elementes de tableau
          float somme = 0;
          for (i = 0; i < 3; i++)
          {
                    for (j = 0; j < 4; j++)
                    {
                              somme = somme + t[i][j];
                    }
          }
          printf(" La somme des elementes du tableau (methode_ a ) : %.2f\n", somme);

          //  la somme utilisantes le pointeures 
                    float som = 0;
          for (i = 0; i < 3; i++)
          {
                    for (j = 0; j < 4; j++)
                    {
                       som = som + *( *(t + i) + j) ;
                    }
          }
          printf(" La somme des elementes du tableau (methode _ b): %.2f", som);
}
