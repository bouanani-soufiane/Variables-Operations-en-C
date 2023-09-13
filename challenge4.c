#include <stdio.h>

int main() {
    double a, b, c, d;
    double somme, moyenne;

    printf("A =  ");
    scanf("%lf", &a);

    printf("B =  ");
    scanf("%lf", &b);

    printf("C =  ");
    scanf("%lf", &c);

    printf("D =  ");
    scanf("%lf", &d);

    somme = a + b + c + d;
    moyenne = somme / 4.0; 

    printf("Somme des nombres : %.2lf\n", somme);
    printf("Moyenne des nombres : %.2lf\n", moyenne);

    return 0;
}
