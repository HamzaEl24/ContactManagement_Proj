#include <stdio.h>
#include <stdlib.h>

int main()
{
          int nbr[20];
          int nombre,i, tot_entrees = 0, entrees_paires = 0;

          
          printf("Donner les 20 nomres \n");
          for (i = 0; i < 20; ++i){
               printf("Nombre %d : ", i + 1);
                scanf("%d", &nbr[i]);

                   
             }
             for(i=0 ; i < 20 ; i++){
                     if (nbr[i] % 2 == 0)
                         printf("Le carre de %d est %d\n", nbr[i], nbr[i] * nbr[i]);
                       
             }

          printf("\n");
          
          int tab_2[] = {};
          
          while (nombre != 100){
                    printf("Entrez un nombre ( entrer 100 pour arreter) : ");
                    scanf("%d", &nombre);

                   
                         
                          tab_2[tot_entrees] = nombre;
                          tot_entrees++;
                    
                       }
                       for(i=0; i<tot_entrees ; i++){
                       if (tab_2[i] % 2 == 0){
                              entrees_paires ++;
                              printf("Le carre de %d est %d\n", tab_2[i], tab_2[i] * tab_2[i]);
                       }
             }

          
          printf("ombre total d\'entrees : %d\n", tot_entrees);
          printf("Nombre d\'entrees paires : %d\n", entrees_paires);

          return 0;
}
