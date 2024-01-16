#include <stdio.h>
#include <stdlib.h>

typedef struct
{
          float largeur, longueur, epaisseur;
          int type;
} Panneau;

void saisirPanneau(Panneau *panneau)
{
          printf("Largeur   (mm): ");
          scanf("%f", &panneau->largeur);

          printf("Longueur  (mm): ");
          scanf("%f", &panneau->longueur);

          printf("Epaisseur (mm): ");
          scanf("%f", &panneau->epaisseur);

          do
          {
                    printf("Type du bois (0: Pin, 1: Chene, 2: Hetre) : ");
                    scanf("%d", &panneau->type);
          } while (panneau->type < 0 || panneau->type > 2);
}

void afficherPanneau(Panneau panneau)
{
          printf("Largeur : %.2f mm\n", panneau.largeur);
          printf("Longueur : %.2f mm\n", panneau.longueur);
          printf("Epaisseur : %.2f mm\n", panneau.epaisseur);

          switch (panneau.type)
          {
          case 0:
                    printf("Type du bois : Pin\n");
                    break;
          case 1:
                    printf("Type du bois : Chene\n");
                    break;
          case 2:
                    printf("Type du bois : Hetre\n");
                    break;
          default:
                    printf("Type du bois inconnu\n");
          }

          printf("\n");
}

float calculerVolume(Panneau panneau)
{
          return panneau.largeur * panneau.longueur * panneau.epaisseur / 1000000.0;
}

int main()
{
          int n;

          printf("Donner le nombre des panneaux : ");
          scanf("%d", &n);

          Panneau panneaux[n];

          for (int i = 0; i < n; i++)
          {
                    printf("\n   || Panneau %d ||\n", i + 1);
                    saisirPanneau(&panneaux[i]);
          }

          printf("\n\nLes infos des panneaux sont : \n");

          for (int i = 0; i < n; i++)
          {
                    printf("\n    || Panneau %d ||\n", i + 1);
                    afficherPanneau(panneaux[i]);
          }

          int choix;
          do
          {
                    printf("   ____Calcule de volume____\n");
                    printf("Donner le numero de panneau : ");
                    scanf("%d", &choix);
          } while (choix <= 0 || choix > n);

          printf("Le Volume de panneau %d est : %.2f m carree\n", choix, calculerVolume(panneaux[choix - 1]));

          return 0;
}
