#include <stdio.h>
#include <stdlib.h>

int main()
{
          // a _
          printf(" _____ pour la 1 ere partie ____\n");
          int n = 6, i, j;
          for (i = n; i >= 1; i--)
          {
               for(j=i;j>=1;j--){      
                    printf("%d",j);
               }
               printf("\n");
          }
          // b _
          printf(" _____ pour la 2 eme partie ____\n");
          for(i = 10 ; i>= 1 ; i--){
                    for( j=1 ; j <=i ; j++ ){
                         printf("%d",10-i);
                    }
                    printf("\n");
          }
}