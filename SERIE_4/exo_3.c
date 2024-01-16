#include<stdio.h>
#include<stdlib.h>

struct date {
          int jour;
          char mois[10];
          int annee ;

};
struct employe {
          char nom[15];
          char prenom[15];
          struct date date_naissance ;
          struct date date_embauche;

};

int main(){
          struct employe employe[4];
          int i ;
           printf("Donner les informations des 5 employes :\n");

          for (i = 0; i < 4; i++)
          {
                    printf("Les infos de l\'emplye %d :\n", i + 1);
                    printf("Donner son nom : ");
                    scanf("%s", employe[i].nom);

                    printf("Donner son prenom : ");
                    scanf("%s", employe[i].prenom);

                    printf("Donner la date de naissance : \n");
                    printf("Donner le jour : ");
                    scanf("%d", &employe[i].date_naissance.jour);
                    printf("Donner le le mois : ");
                    scanf("%s", &employe[i].date_naissance.mois);
                    printf("Donner l\'annee : ");
                    scanf("%d", &employe[i].date_naissance.annee);


                    printf("Donner la date d\'embauche : \n");
                    printf("Donner le jour : ");
                    scanf("%d", &employe[i].date_embauche.jour);
                    printf("Donner le le mois : ");
                    scanf("%s", &employe[i].date_embauche.mois);
                    printf("Donner l\'annee : ");
                    scanf("%d", &employe[i].date_embauche.annee);
          }

           printf("Les informations des 4 employes sont :\n");
           for(i = 0 ; i<4 ; i++){
                  printf(" __ Emplye %d __ \n", i+1);
                  printf("Nom    : %s\n", employe[i].nom);
                  printf("Prenom : %s\n", employe[i].prenom);
                  printf("Date de naissance : %d %s %d\n",employe[i].date_naissance.jour,employe[i].date_naissance.mois,employe[i].date_naissance.annee);
                  printf("Date d\'embauche : %d %s %d\n",employe[i].date_embauche.jour,employe[i].date_embauche.mois,employe[i].date_embauche.annee);

           }
          return 0 ;
}
