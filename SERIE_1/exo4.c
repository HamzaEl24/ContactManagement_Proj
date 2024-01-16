#include <stdio.h>
#include <stdlib.h>
int main()
{
  int m = 1;
  float prix_ini;
  float prix_fin;
  float remise;
  while (m == 1)
  {
    printf("\tsaiser le prix de produite :");
    scanf("%f", &prix_ini);
    if (prix_ini <= 100)
    {
      remise = prix_ini * 0.3;
      prix_fin = prix_ini - remise;
    }
    if (prix_ini > 100 && prix_ini <= 200)
    {
      remise = prix_ini * 0.4;
      prix_fin = prix_ini - remise;
    }
    if (prix_ini > 200)
    {
      remise = prix_ini * 0.5;
      prix_fin = prix_ini - remise;
    }
    printf("\t____________________\n");
    printf(" \tPrix Initial :  %.2f \n \tRemise       :  %.2f \n \tPrix Final   :  %.2f \n", prix_ini, remise, prix_fin);
    printf("\t_____________________\n");
    printf("\n");
    printf("\tcontinue ...\n \t '1': Oui \n \t '2': Non\n \t");
    printf("\n");
    printf("\tdonner votre choix: ");
    scanf(" %d", &m);
    system("cls");
  }
  return 0;
}