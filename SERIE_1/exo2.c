#include <stdio.h>
#include <stdlib.h>
int main()
{
  int age;
  int sexe;
  int m = 1;
  while (m == 1)
  {
    printf("\tEntrez votre l\'age :");
    scanf("%d", &age);
    printf("\tEntrez votre sexe :\n \t   1-Masculin \n \t   2-Feminin\n");
    printf("\tdonner votre choix: ");
    scanf(" %d", &sexe);
    if ((sexe == 1 && age >= 20) || (sexe == 2 && age >= 18 && age <= 35))
    {
      printf("\n");
      printf("\t=> vous etes impoussable\n ");
    }
    else
    {
      printf("\n");

      printf("\t=> vous etes pas impossable\n");
    }
    printf("\tcontinue ...\n \t '1': Oui \n \t '2': Non\n \t");
    printf("donner votre choix: ");
    scanf(" %d", &m);
    system("cls");
  }

  return 0;
}