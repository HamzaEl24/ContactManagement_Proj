#include <stdio.h>
#include <stdlib.h>

int main()
{
          int l;
          int i, j;
          printf("donner la nombre de lignes :");
          scanf("%d", &l);

          for (i = 1; i <= l; i++)
          {
                    for (j = 1; j <= l - i; j++)
                    {
                              printf("  ");
                    }
                    for (j = 1; j <= (2 * i - 1); j++)
                    {
                              if( j==l || j==1  || j == (2*i -1))
                                        printf("* ");
                              else

                                        printf(" ");
                    }
                    printf("\n");
          }
          return 0;
}