#include<stdio.h>
#include<stdlib.h>
void pair_impair(int n){
          
   if (n % 2 == 0){
          printf("le nombre est paire ..");
   }
   else {
          printf("le nombre est impaire ..");
    }
}
  
int main (){
          int n ;
          printf("Donner un nombre qlq : ");
          scanf("%d",&n); 
          pair_impair( n);
          return 0;
}