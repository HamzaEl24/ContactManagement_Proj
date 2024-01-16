#include <stdio.h>
#include <string.h>

int nb_occurrence(char T[], int n, char car, int *prem_occ, int *der_occ)
{
          int nb_occ = 0;
          for (int i = 0; i < n; i++)
          {
                    if (T[i] == car)
                    {
                              if (nb_occ == 0)
                              {
                                        *prem_occ = i;
                              }
                              *der_occ = i;
                              nb_occ++;
                    }
          }
          return nb_occ;
}

int pos_car(char T[], int n, char car, int *prem_occ, int *der_occ)
{
          int nb_occ = nb_occurrence(T, n, car, prem_occ, der_occ);
          return nb_occ;
}

int main()
{
          char T[100];
          printf("Entrez la chaine de caractere : ");
          fgets(T, sizeof(T), stdin);

          if (strlen(T) > 0 && T[strlen(T) - 1] == '\n')
          {
                    T[strlen(T) - 1] = '\0';
          }
          int n = strlen(T);
          char c;
          printf("Entrez le caractere : ");
          scanf(" %c", &c);
          int prem_occ, der_occ;
          int nb_occ = nb_occurrence(T, n, c, &prem_occ, &der_occ);
          printf("Le caractere '%c' apparait %d fois dans la chaine.\n", c, nb_occ);
          if (nb_occ > 0)
          {
                    printf("Premiere occurrence dans l'indice %d.\n", prem_occ + 1);
                    printf("Derniere occurrence dans l'indice %d.\n", der_occ + 1);
          }
          return 0;
}
