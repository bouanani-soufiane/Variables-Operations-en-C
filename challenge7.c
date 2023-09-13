#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int N , rest , result;
    printf("saisir le nombre : ");
    sccanf("%d", &N);
    while(N != 0 ){
        rest = N % 10;
        result = (result * 10) + rest;
        N = N / 10 ;
    }
    printf("Number before inverse it %d", N);
    printf("Number before inverse it %d", result);
}

