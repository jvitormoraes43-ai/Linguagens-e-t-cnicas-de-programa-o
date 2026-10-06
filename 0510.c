#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	
	int comp_maior (int a, int b){
		if(a>b)return a;
		else return b;
	}
int main(int argc, char *argv) {

	float valor[10];
	int i;
	printf("Leia os numeros");
	//PARA (INICAL, CONDIÇÃO, INCREMENTO)
	
	for(i = 0; i < 10; i++) {
		scanf("%f", &valor[i]);
	}
	for(i = 9; i > 9; i--){
		scanf("%f", &valor[i]);
	}

	return 0;
}
