
#include <stdio.h>
#include <stdlib.h>

int pos_number(float *tab, int taille, float n) {
    int position = -1;  

    for (int i = 0; i < taille; i++) {
        if (*(tab + i) == n) {
            position = i;
            break;  
        }
    }

    return position;
}

int main() {
    float *tab;
    int n, i;
    float number, num;

    printf("Donner la taille de la table : ");
    scanf("%d", &n);

    tab = (float *)malloc(n * sizeof(float));

    printf("Remplir le tableau : \n");

    for (i = 0; i < n; i++) {
        printf("T[%d] = ", i);
        scanf("%f", &num);
        tab[i] = num;
    }

    printf("Donner un nombre pour chercher sans position :  ");
    scanf("%f", &number);

    int s = pos_number(tab, n, number);
    if (s != -1) {
        printf("La position est : %d\n", s+1);
    } else {
        printf("Le nombre n'a pas été trouvé dans le tableau.\n");
    }

    free(tab);

    return 0;
}
