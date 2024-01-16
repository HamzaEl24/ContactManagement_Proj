#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, i;
   int m = 0, t = 1;

   while (t == 1)
   {
      printf("\t donner le n (positive):");
      scanf("%d", &n);

      if (n == 1)
      {
         m = 1;
      }
      else
      {
         m = 1;
         for (i = 2; i < n; i++)
         {
            if (n % i == 0)
            {
               m = 0;
               break;
            }
         }
      }

      if (m == 1)
      {
         printf(" \tle n est premier !\n");
      }
      else
      {
         printf(" \tle n n'est pas premier\n");
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
