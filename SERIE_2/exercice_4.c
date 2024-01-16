#include<stdio.h>
#include<stdlib.h>
#define N 10  
int main(){
          int Tab[N], i ,temp,min;
          int j ;
    printf("Donner les elementes du tableau :\n");
     for(i = 0 ; i<N ; i++){
          printf("Tab[%d] = ",i);
          scanf("%d",&Tab[i]);
     }
     
     for ( i=0 ; i<N-1 ; i++){
           
          for(j=i+1 ; j < N ; j++){
               if ( Tab[i] > Tab[j]){
                temp = Tab[j] ; 
                Tab[j] = Tab[i];
                 Tab[i] = temp ;
               }
          }
                  
     }

     for(i = 0 ; i<N ; i++){
          printf("%d\t",Tab[i]);
     }
       printf("\n");

     printf("le min est  : %d\n",Tab[0]);
     printf("le max est  : %d",Tab[9]);

   return 0;
}

          
          
