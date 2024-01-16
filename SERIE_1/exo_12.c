#include <stdio.h>
int main()
{
          int i = 1, k, n;
          printf("Saisir la taille: ");
          scanf("%d", &n);
          while (i <= n)
          {
                    for (k = 1; k <= n; k++)
                    {
                              if ((i == 1 || i == n) || (k == 1 || k == n))
                                        printf("* ");
                              else if (k == i || k == n - i + 1)
                                        printf("+ ");
                              else if (i == (n / 2) + 1)
                                        printf("| ");
                              else if (k == (n / 2) + 1)
                                        printf("- ");
                              else
                                        printf("  ");
                    }
                    printf("\n");
                    i++;
          }
}
