#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){
	int x;
	printf("entrez un nombre entier de trois chiffres \n");
	scanf("%d",&x);
	int y = x % 10;
	int z = x/10;
	int a = z % 10;
	int b = z / 10;
	printf("%d%d%d",y,a,b);
}