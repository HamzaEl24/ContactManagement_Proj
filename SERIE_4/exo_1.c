// #include <stdio.h>
// #include <stdlib.h>
// #include <conio.h>

// typedef struct nombre_complexe
// {
//           double real;
//           double imag;

// } Complex;

// double imag(Complex z)
// {
//           return z.imag;
// }
// double real(Complex z)
// {
//           return z.real;
// }

// Complex mul(Complex z1, Complex z2)
// {
//           Complex z_resul;

//           z_resul.real = (z1.real * z2.real) - (z1.imag * z2.imag);
//           z_resul.imag = (z1.real * z2.imag) + (z1.imag * z2.real);
//           return z_resul;
// }

// int main()
// {
//           Complex z1 , z2, z_mul;
          
//           printf("Donner la partie reel de Z1 : ");
//           scanf("%lf",&z1.real);
//           printf("Donner la partie imaginaire de  Z1 : ");
//           scanf("%lf",&z1.imag);
//           printf("Donner la partie reel de Z2 : ");
//           scanf("%lf",&z2.real);
//           printf("Donner la partie imaginaire Z2 : ");
//           scanf("%lf",&z2.imag);
//           printf("Les deux nombre sont :\n");
//           printf("Z1 = %.2lf + %.2lfi \n", z1.real, z1.imag);
//           printf("Z2 = %.2lf + %.2lfi \n", z2.real, z2.imag);
//           printf("La multiplication des deux nombres est : \n");
//           z_mul = mul(z1,z2);
//           printf("Z = %.2lf + %.2lfi \n", z_mul.real, z_mul.imag);

// }


//   on fait la meme chose pour le passage par adresse 
 #include <stdio.h>

typedef struct nombre_complexe
{
    double real;
    double imag;
} Complex;

double imag(const Complex *z)
{
    return z->imag;
}

double real(const Complex *z)
{
    return z->real;
}

void mul(const Complex *z1, const Complex *z2, Complex *result)
{
    result->real = (z1->real * z2->real) - (z1->imag * z2->imag);
    result->imag = (z1->real * z2->imag) + (z1->imag * z2->real);
}

int main()
{
    Complex z1, z2, z_mul;

    printf("Donner la partie reel de Z1 : ");
    scanf("%lf", &z1.real);
    printf("Donner la partie imaginaire de Z1 : ");
    scanf("%lf", &z1.imag);
    printf("Donner la partie reel de Z2 : ");
    scanf("%lf", &z2.real);
    printf("Donner la partie imaginaire Z2 : ");
    scanf("%lf", &z2.imag);

    printf("Les deux nombres sont :\n");
    printf("Z1 = %.2lf + %.2lfi \n", z1.real, z1.imag);
    printf("Z2 = %.2lf + %.2lfi \n", z2.real, z2.imag);

    printf("La multiplication des deux nombres est : \n");
    mul(&z1, &z2, &z_mul);

    printf("Z = %.2lf + %.2lfi \n", z_mul.real, z_mul.imag);

    return 0;
}
