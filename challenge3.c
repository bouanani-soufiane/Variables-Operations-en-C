#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a,b;
    printf("A = ");
    scanf("%d",&a);
    printf("B = ");
    scanf("%d",&b);
    printf("A x B = %d\n", a*b);
    printf("A + B = %d\n", a+b);
    printf("A / B = %d\n", a/b);
    printf("A - B = %d\n", a-b);
    printf("A %% B = %d\n", a%b);
    return 0;
}
