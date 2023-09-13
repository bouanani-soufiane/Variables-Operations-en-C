#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float temperatureF, Celsius;

    printf("Veuillez saisir la temperature en Fahrenheit : ");
    scanf("%f", &temperatureF);
    Celsius  = (temperatureF - 32) / 1.8;
    printf("Fahrenheit = %.2f \n", temperatureF);
    printf("Celsius = %.2f \n", Celsius);
    if (Celsius < 0) {
        printf("Tres froid");
    } else if (Celsius >= 0 && Celsius < 10) {
        printf("Froid");
    } else if (Celsius >= 10 && Celsius < 30) {
        printf("Chaud");
    } else if (Celsius >= 30) {
        printf("Tres chaud");
    }

    return 0;
}
