#include<stdio.h>

int main (void){
	int altura, cont,cont1,cont2, x, y;
	
	printf("Altura?  ");
	scanf("%d", &altura);
	x=1;
	for (cont=0; cont<altura; cont++){
		y=altura-x;
		for (cont2=0; cont2<y; cont2++)
			printf(" ");
		for (cont1=0; cont1<x; cont1++){
			printf("#");
		}
		printf(" ");
		for (cont1=0; cont1<x; cont1++){
			printf("#");
		}
		x++;
		printf("\n");
	}
	
	return 0;
}