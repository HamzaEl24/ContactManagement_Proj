#include<stdio.h>
#include<stdlib.h>
#define n 10
int main(){
          float tSource[n], tDestination[n];
          int i ;
          printf("Remplir la tableau Source :\n");
            for(i =0 ; i < n ; i ++){
              printf("tSource[%d] : ",i);
              scanf("%f",&tSource[i]);
          }
      // copier les elents positifs du tsource dans tDestination
             int j = 0 ;
         for ( i = 0 ; i < n ; i++){
             if (tSource[i] >= 0 ){
               tDestination[j] = tSource[i];
                j++ ;
             }
         }
          for ( i = j ; i < n ; i++){
                 tDestination[i] = 0;   
          }
           
            printf("les elementes du tableau tSource sont :\n");
          for (i = 0 ; i < n ; i++){
                    printf("%.2f\t",tSource[i]);
          }
          printf("\n");
          printf("les elementes du tableau tDestination sont :\n");
          for (i = 0 ; i < n ; i++){
                    printf("%.2f\t",tDestination[i]);
          }
          

return 0 ;

}