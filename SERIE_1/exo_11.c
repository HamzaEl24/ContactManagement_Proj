#include <stdio.h>
#include <stdlib.h>
int main()
{
          int n = 0, m;
          printf("Donner le nombre n : ");
          scanf("%d", &n);
          printf("La valeur de l'entier est: %d\n", n);

          do
          {
                    printf("\n\t 1 - Ajouter 2\n\t 2 - Multiplier par 3\n\t 3 - Soustraire 5\n\t 4 - Quitter\n\tDonner l\'operation: ");
                    scanf("%d", &m);
                    switch (m)
                    {
                    case 1:
                              printf("La nouvelle valeur de %d est: %d\n", n, n + 2);
                              break;
                    case 2:
                              printf("La nouvelle valeur de %d est: %d\n", n, n * 3);
                              break;
                    case 3:
                              printf("La nouvelle valeur de %d est: %d\n", n, n - 5);
                              break;
                    default:
                              printf("Option non valide\n");
                    }
          } while (m != 4);
}
