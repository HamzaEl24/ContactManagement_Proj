#include<stdlib.h>
#include<stdio.h>
#define n 100 

int main(){
   int Tab[n] , i , j ;
    for ( i=0 ; i < n ; i++ ){
          Tab[i] = i ;
    }
    for ( i = 0 ;  i < 100 ; i = i+10 ){
          for( j = i ; j < i+10 ; j++){
          printf("%d ,",Tab[j]);
          }
          
          printf("\n");
    }
    
    return 0 ;
}