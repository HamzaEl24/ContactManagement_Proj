#include <stdio.h>

typedef struct
{
          int Ref, Type, Qte;
          float Prix;
} Produit;

void saisirProduit(Produit *produit)
{
          printf("Reference : ");
          scanf("%d", &produit->Ref);

          printf("Type du produit :\n1: Cartes meres\n 2: Processeurs\n 3: Barettes memoire\n 4: Carte graphique \ndonner le type : ");
          scanf("%d", &produit->Type);

          printf("Quantite : ");
          scanf("%d", &produit->Qte);

          printf("Prix : ");
          scanf("%f", &produit->Prix);
}

void afficherProduit(Produit produit)
{
          printf("Reference : %d\n", produit.Ref);
          printf("Type du produit : ");
          switch (produit.Type)
          {
          case 1:
                    printf("Carte mere\n");
                    break;
          case 2:
                    printf("Processeur\n");
                    break;
          case 3:
                    printf("Barrettes memoire\n");
                    break;
          case 4:
                    printf("Carte graphique\n");
                    break;
          default:
                    printf("Type inconnu\n");
          }

          printf("Quantite : %d\n", produit.Qte);
          printf("Prix : %.2f DH\n", produit.Prix);
}

void saisirCommande(Produit *produit, int quantiteDemandee)
{
          if (produit->Qte >= quantiteDemandee)
          {
                    printf("_____  || Facture ||  _____> \n");
                    printf("Bienvenue dans notre boutique!\n");
                    afficherProduit(*produit);
                    printf("La quantite demandee est : %d\n", quantiteDemandee);
                    printf("Le prix total est : %.2f DH\n", quantiteDemandee * produit->Prix);
          }
          else
          {
                    printf("Malheureusement, la quantite disponible est insuffisante!\n");
          }
}

int main()
{
          Produit produits[4];

          printf("Veuillez saisir les informations des produits : \n");
          for (int i = 0; i < 4; i++)
          {
                    printf("_____|| Produit %d ||_____\n", i + 1);
                    saisirProduit(&produits[i]);
          }

          printf("\n\nLes informations saisies sont : \n");
          for (int i = 0; i < 4; i++)
          {
                    printf("______|| Produit %d ||______\n", i + 1);
                    afficherProduit(produits[i]);
          }

          int choix;
          printf("\n || Effectuer une commande  (1: Oui, 0: Non) : ");
          scanf("%d", &choix);

          if (choix == 1)
          {
                    int type, quantite;
                    printf("\nSaisir le numero de vote commande : \n");
                    printf("Type du produit :\n1: Cartes meres \n2: Processeurs \n3: Barettes memoire \n4: Carte graphique\n donner votre choix : ");
                    scanf("%d", &type);

                    do
                    {
                              printf("donner la Quantite : ");
                              scanf("%d", &quantite);
                    } while (quantite <= 0);

                    for (int i = 0; i < 4; i++)
                    {
                              if (produits[i].Type == type)
                              {
                                        saisirCommande(&produits[i], quantite);
                                        break;
                              }
                    }
          }

          return 0;
}
