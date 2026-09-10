#include<stdio.h>
#include<stdlib.h>

int mult(int digito , int valor){
	 return digito * valor;
}

int main (int argc, char *argv[]){

	int n1, n2, n3, n4, n5, n6, n7, n8, n9, v10, v11, soma, resto;
	

	scanf("%d %d %d . %d %d %d . %d %d %d - %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &v10, &v11);
	
	printf("Digite seu cpf: %d%d%d.%d%d%d.%d%d%d-%d%d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &v10, &v11);
	

	soma = mult(n1,10)+mult(n2,9)+mult(n3,8)+mult(n4,7)+mult(n5,6)+mult(n6,5)+mult(n7,4)+mult(n8,3)+mult(n9,2);

	soma *= 10;
	resto = soma%11;




	return 0;
}
