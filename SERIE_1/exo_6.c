#include <stdio.h>
#include <stdlib.h>

int main()
{
          int n, t = 1;

          while (t == 1)
          {
                    printf("\tEntrez un nombre : ");
                    scanf("%d", &n);

                    if (n % 2 == 0)
                    {
                              printf("\tLes nbr pairs inferieurs a %d :\n", n);

                              for (int i = 2; i < n; i += 2)
                              {
                                      
                                                  printf("\t%d ", i);
                                       
                              }

                              printf("\n");
                    }
                    else
                    {
                              printf("\tLe %d n'est pas pair.\n", n);
                    }

                    printf("\n");
                    printf("\tcontinue ...\n \t '1': Oui \n \t '2': Non\n \t");
                    printf("\n");
                    printf("\tdonner votre choix: ");
                    scanf("%d", &t);
                    system("cls");
          }

          return 0;
}
