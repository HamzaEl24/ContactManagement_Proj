
#include <stdio.h>
#include <stdlib.h>

int main()
{
          int i = 0, j, n, size = 300;
          int tab_3[10] = {};

          printf("Donner les éléments de la suite\n");
          printf("Taper 999 si tu arrives a la fin de la suite\n");

          while (1)
          {
                    printf("valeur %d de la suite : ", i);
                    fflush(stdout);
                    scanf("%d", &n);

                    if (n == 999)
                    {
                              break;
                    }

                    tab_3[i] = n;
                    i++;
          }

          printf("Le nombre total de valeurs de la suite est : %d\n", i);

          int sum = 0;
          int min = tab_3[0];

          for (j = 0; j < i; j++){
                    sum += tab_3[j];
              }
          for (j = 0; j < i; j++){
                    if (tab_3[j] < min){
                        min = tab_3[j];
                    }
               }

          printf("La somme des valeurs lues est : %d\n", sum);
          printf("Le minimum est : %d\n", min);

          int sum_pos = 0;
          int min_pos = tab_3[0];

          for (j = 0; j < i; j++){
                    if (tab_3[j] > 0){
                              sum_pos += tab_3[j];

                              if (tab_3[j] < min_pos){
                                        min_pos = tab_3[j];
                              }
                    }
          }

          printf("La somme des valeurs strictement positives est : %d\n", sum_pos);
          printf("Le minimum des valeurs strictement positives est : %d\n", min_pos);

          return 0;
}