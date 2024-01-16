#include <stdio.h>
#include <stdlib.h>
#define tab_4 printf("\t\t\t\t")
int main()
{
   float a, b;
   char t;
   int c = 1;
   while (c == 1)
   {
      tab_4;
      printf("donner le 1 ere nombre : ");
      scanf("%f", &a);
      tab_4;
      printf("donner le 2 eme nombre : ");
      scanf("%f", &b);

      // printf(" \t\t\t\t'+' : addi \n\t\t\t\t '-' : soust\n \t\t\t\t'*' : multi \n \t\t\t\t'/' : divi\n \t\t\t\tchoisir l\'un de ses operations : ");
      tab_4;
      printf(" ________________________\n ");
      tab_4;
      printf("| + | - L\'addition       |\n");
      tab_4;
      printf(" ________________________ \n");
      tab_4;
      printf("| - | - La sustraction    |\n");
      tab_4;
      printf(" ________________________ \n");
      tab_4;
      printf("| * | - La multiplication |\n");
      tab_4;
      printf(" ________________________ \n");
      tab_4;
      printf("| / | - La devision       |\n");
      tab_4;
      printf(" ________________________ \n");

      printf("\n");
      tab_4;
      printf(" Choisir un operations : ");
      fflush(stdin);
      scanf("%s", &t);

      switch (t)
      {
      case '+':
         tab_4;
         printf(" ________________________ \n");
         tab_4;
         printf("| %.2f  +  %.2f  = %.2f   |\n", a, b, a + b);
         tab_4;
         printf(" ________________________ \n");
         break;

      case '-':
         tab_4;
         printf(" ________________________ \n");
         tab_4;
         printf("| %.2f  -  %.2f  = %.2f   |\n", a, b, a - b);
         tab_4;
         printf(" ________________________ \n");
         break;
      case '*':
         tab_4;
         printf(" ________________________ \n");
         tab_4;
         printf("| %.2f  *  %.2f  = %.2f   |\n", a, b, a * b);
         tab_4;
         printf(" ________________________ \n");
         break;
      case '/':
         if (b == 0)
         {
            tab_4;
            printf("=> error");
         }
         else
         {
            tab_4;
            printf(" ________________________ \n");
            tab_4;
            printf("| %.2f  /  %.2f  = %.2f   |\n", a, b, a / b);
            tab_4;
            printf(" ________________________ \n");
            break;
         default:
            tab_4;
            printf("=> erreur");
            break;
         }
      }

      tab_4;
      printf("\n\t\t\t\t continue ... ?\n\t\t\t\t   '1' : Oui\n\t\t\t\t   '2' : Non \n");
      tab_4;
      printf("Donner votre choix : ");
      scanf("%d", &c);

      system("cls");
   };
   return 0;
}