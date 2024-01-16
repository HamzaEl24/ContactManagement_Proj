#include<stdio.h>
#include<stdlib.h>
float prix_TTC(float prixHT, float tva){
          return (prixHT+tva);
}
int main(){
          float prix, tva;
          printf("Donner le prix : ");
          scanf("%f",&prix);
          printf("Donner le TVA : ");
          scanf("%f",&tva);
          printf("le prix totale est : %.2f",prix_TTC(prix,tva));
        return 0;
}