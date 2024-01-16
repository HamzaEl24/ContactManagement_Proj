#include <stdio.h>
#include <string.h>

int main()
{
    char T[50], R[50] = "";
    int i = 0, j = 0, m = 0;

    printf("Donner l\'entree  : ");
    gets(T);
     printf("Le codage est le suivante : ");
    while (i < strlen(T)){
        m = 0;

        while (j < strlen(T) && T[i] == T[j]){
            m++;
            j++;
        }

        printf("%d%c", m, T[i]);
        i = j;
    }

    return 0;
}
