#include<stdio.h>
#include<stdlib.h>
int main(){
          float note,moy,max,min;
          int i, posmax, posmin, Nnote;
          printf("donner le nombre des notes : ");
          scanf("%d",&Nnote);
          float Tab[Nnote];
              for(i=0;i<Nnote ;i++){
                    printf("Donner Tab[%d] : ",i);
                    scanf("%d",Tab[i]);
                    if ( Tab[i]<0 || Tab[i]>20)
                       do{
                          printf("Erreur , redoner Tab[%d] = ",i);
                          scanf("%f",&Tab[i]);
                          i++ ;
                       }while ( (Tab[i]<20)  );
            
          for ( i=0 ; i < Nnote ; i++){
                    printf("%.2f\t",Tab[i]);
          }
              }
           
          return 0;
}
