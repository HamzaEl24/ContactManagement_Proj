#include <stdio.h>
#include <stdlib.h>


struct Contact
{
    char nom[30];
    char prenom[30];
    char telephone[15];
};

int main()
{
    struct Contact repertoire[50];
    int nombreContacts = 0;
    int continuer;
    int n;

    printf("Donner nombre des  enregistrements : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Contact %d :\n", i + 1);

        printf("Nom : ");
        scanf("%s", repertoire[i].nom);

        printf("Prenom : ");
        scanf("%s", repertoire[i].prenom);

        printf("Telephone : ");
        scanf("%s", repertoire[i].telephone);

 
     
    }

    printf("\nRepertoire :\n");
    for (int i = 0; i < n; i++)
    {
        printf("Contact %d :\n", i + 1);
        printf("Nom : %s\n", repertoire[i].nom);
        printf("Prenom : %s\n", repertoire[i].prenom);
        printf("Telephone : %s\n", repertoire[i].telephone);
        printf("--------------------\n");
    }

    return 0;
}
