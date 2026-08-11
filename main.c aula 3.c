#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159

int main(int argc, char *argv[]) {
	//AREA DO CIRCULO

	//AREA  DO TRAPÉZIO DESCENDENTE, BRIILL
		
	float a, B, b, h;
	
	printf("Insira o valor de B: \n");
	scanf("%f", &B);
	
		printf("Insira o valor de b: \n");
	scanf("%f", &b);
	
		printf("Insira o valor de h: \n");
	scanf("%f", &h);
	
		a = h*B + h*b / 2;
	
	printf("A Area do negocio = %f" ,a);
		
	return 0;
}
