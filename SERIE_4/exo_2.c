#include <stdio.h>
#include <stdlib.h>

struct etudiant
{
          char nom[15];
          char prenom[15];
          int CNE;
          float notes[4];
          float moyenne;
};

int main()
{
          struct etudiant T[5];
          int i, j;
          float max;
          int min;

          printf("Donner les informations des 5 étudiants :\n");

          for (i = 0; i < 5; i++)
          {
                    printf("Les infos de l'etudiant %d :\n", i + 1);
                    printf("Donner son nom : ");
                    scanf("%s", T[i].nom);

                    printf("Donner son prenom : ");
                    scanf("%s", T[i].prenom);

                    printf("Donner le CNE : ");
                    scanf("%d", &T[i].CNE);

                    printf("Donner ses notes :\n");
                    for (j = 0; j < 4; j++)
                    {
                              do
                              {
                                        printf("note %d : ", j + 1);
                                        scanf("%f", &T[i].notes[j]);

                                        if (T[i].notes[j] < 0 || T[i].notes[j] > 20)
                                        {
                                                  printf("La note doit etre entre 0 et 20 !! Reessayez.\n");
                                        }
                              } while (T[i].notes[j] < 0 || T[i].notes[j] > 20);
                    }

                    T[i].moyenne = (T[i].notes[0] + T[i].notes[1] + T[i].notes[2] + T[i].notes[3]) / 4;
          }
          float temp;
          float max_moyenne;
          int indice_max = 0;
          max_moyenne = T[0].moyenne;
          for (i = 0; i < 5; i++)
          {

                    if (T[i].moyenne > max_moyenne)
                    {

                              max_moyenne = T[i].moyenne;
                              indice_max = i;
                    }
          }

          printf("l\'etudiant qui a la plus grand moyenne est le suivante :\n");
          printf("  Nom   : %s\nPrenom : %s\n  CNE  : %d\nMoyenne: %.2f", T[indice_max].nom, T[indice_max].prenom, T[indice_max].CNE, T[indice_max].moyenne);

          for (i = 0; i < 4; i++)
          {
                    int max_index = i;
                    for (j = i + 1; j < 5; j++)
                    {
                              if (T[j].moyenne > T[max_index].moyenne)
                              {
                                        max_index = j;
                              }
                    }

                  
                    if (max_index != i)
                    {
                              temp = T[i].moyenne;
                              T[i].moyenne = T[max_index].moyenne;
                              T[max_index].moyenne = temp;
                    }
          }
                     for ( i=0; i< 5 ; i++){
                      printf("  Nom   : %s | Prenom : %s |  CNE  : %d | Moyenne: %.2f",T[i].nom,T[i].prenom,T[i].CNE,T[i].moyenne);
                      printf("____________________________________________________________________\n");
                  }

          return 0;
}
