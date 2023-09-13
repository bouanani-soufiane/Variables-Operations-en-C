#include <stdio.h>
#include <math.h>


int main() {
    int Xa, Xb, Ya, Yb, distance;
    printf("donner les cordonner de de A\n");
    printf("x = ");
    scanf("%d",&Xa);
    printf("y = ");
    scanf("%d",&Ya);
    printf("donner les cordonner de de B\n");
    printf("x = ");
    scanf("%d",&Xb);
    printf("y = ");
    scanf("%d",&Yb);
    distance = pow(pow((Xb - Xa),2) + pow((Yb - Ya),2) , 0.5);
    printf("la distance entre A et B est : %d ",distance );


    return 0;
}
