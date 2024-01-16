#include<stdio.h>
#include<stdlib.h>
int main(){
    int nb,m=1 ;
    float prix ;
    
      while (m == 1)
      {
        
      
    printf("\tdonner nombre des feuilles :");
    scanf("%d",&nb);
      if (nb <= 10){
         printf ("\tle prix totale est : %d DH\n",nb);
         printf("\n");
      }
      else {
        if(nb<= 30){
          prix = 10 + 0.6 * (nb-10) ;
          printf ("\tle prix totale est : %.2f DH\n",prix);
          printf("\n");
        }
        else{
            prix = 10 + 0.6*20 + 0.4*(nb-30);
            printf ("\tle prix totale est : %.2f DH\n",prix);
            printf("\n");
        }  
    
      }
          printf("\tcontinue ...\n \t '1': Oui \n \t '2': Non\n \t");
    printf("donner votre choix: ");
    scanf(" %d", &m);
    system("cls");
      }
    
    return 0;
}