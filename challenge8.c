#include <stdio.h>

int main() {
    int nbr, x1, x2, x3, n1, n2;


    printf("saisir le nombre : ");
    scanf("%d", &nbr);
    n1 = nbr / 8;
    x1 = nbr %8 ;
    n2 = n1 / 8;
    x2 = n1 % 8;
    x3 = n2 % 8;
    printf("%d %d %d", x3,x2,x1);

    return 0;
}
