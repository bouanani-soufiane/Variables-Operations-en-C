#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float temperatureF , Celsius ;

    printf("veuilliez saisir la temperature en Fahrenheit : ");
    scanf("%d",temperatureF);
    Celsius  = (temperatureF - 32 ) / 1.8;
    printf("f = %.2f \n", temperatureF);
    printf("f = %.2f \n", Celsius);
    if(Celsius < 0  ){
        printf("Tres froid");
    }else if(Celsius => 0 && Celsius < 10){
        printf("froid");
    }else if(Celsius >=10 && Celsius <30){
        printf("chaud");
    }else if(Celsius => 30){
        printf("très chaud");
    }


    return 0 ;
}

