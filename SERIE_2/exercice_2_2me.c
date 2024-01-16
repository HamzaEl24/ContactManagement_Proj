#include<stdio.h>
#include<stdlib.h>
#define n 100 
int main(){
   int Tab[n] , i ;
    for ( i=0 ; i < n ; i++ ){
          Tab[i] = i ;
    }
    for ( i = 0 ;  i < 100 ; i++ ){
          
          printf("%d ,",Tab[i]);

          if((i+1)%10 == 0)
          
          printf("\n");
    }
    
    return 0 ;
}