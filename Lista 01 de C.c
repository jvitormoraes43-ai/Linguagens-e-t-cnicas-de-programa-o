#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*lista 01 - Exercicio 02: Faça um programa que leia dois numeros inteiros e depois os imprima na ordem inversa em que eles foram lidos...*/
void exercicel1_1(){
    int primeiro, segundo, aux;
    
    printf("Digite o primeiro Valor: ");
	scanf("%d", &primeiro);
	printf("Digite o segundo Valor: ");
	scanf("%d", &segundo);
	
	aux = primeiro;
	primeiro = segundo;
	segundo = aux;

	printf("Seus resultados Foram: %d, %d", primeiro, segundo);
}
/*lista 01 - Exercicio 02: Faça um programa que leia um valor do tipo double e depois o imprima na forma de notaç...*/
void exercicel1_2(){
    double numero;
    int expoente = 0;

    printf("Digite um numero positivo: ");
    scanf("%lf", &numero);

    while (numero >= 10)
    {
        numero = numero / 10;
        expoente++;
    }

    while (numero < 1)
    {
        numero = numero * 10;
        expoente--;
    }

    printf("%.2lf x 10^%d\n", numero, expoente);
}
/*lista 01 - Exercicio 03: Implemente um programa que leia um número n [com n positivo & n <= 64] e mostre na tela...*/
void exercicel1_3(){
    int n, res;
	int bit_64, bit_32, bit_16, bit_8, bit_4, bit_2;
	
	printf("insira o valor a ser convertido: ");
	scanf("%d", &n);
	
	bit_64 = n%2;
	res = n/2;
	
	bit_32 = res%2;
	res = res/2;
	
	bit_16 = res%2;
	res = res/2;
	
	bit_8 = res%2;
	res = res/2;
	
	bit_4 = res%2;
	res = res/2;
	
	bit_2 = res%2;
	res = res/2;
	
	printf("O numero %d em bin = %d%d%d%d%d%d%d", n, res%2, bit_2, bit_4, bit_8, bit_16, bit_32, bit_64);
}
/*lista 01 - Exercicio 04: Faça um programa que leia, o salário fixo e o valor total em vendas...*/
void exercicel1_4(){
    double salario, vendas, salarioFinal;
    printf("Insira seu sálario e quantidade de vendas: \n");
    scanf("%lf", &salario);
    scanf("%lf", &vendas);

    salarioFinal = salario + (vendas * 0.15);

    printf("TOTAL = R$ %.2lf\n", salarioFinal);
}
/*lista 01 - Exercicio 05: Elabore um programa que peça ao usuário para digitar 4 valores. E mostre na tela a soma, a média e o produtório desses valores*/
void exercicel1_5(){
    double a, b, c, d;
    double soma, media, produto;

    printf("Digite 4 valores: ");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    soma = a + b + c + d;
    media = soma / 4;
    produto = a * b * c * d;

    printf("Soma: %.2lf\n", soma);
    printf("Media: %.2lf\n", media);
    printf("Produto: %.2lf\n", produto);
}
/*lista 01 - Exercicio 06: Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos meses e dias*/
void exercicel1_6(){
    int idade, anos, meses, dias;

    printf ("Insira uma quantidade de dias a serem convertidos: \n");
    scanf("%d", &idade);

    anos = idade / 365;
    idade = idade % 365;

    meses = idade / 30;
    dias = idade % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
}
/*lista 01 - Exercicio 07: Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu Raio (R)...*/
void exercicel1_7(){
    double R, volume;
    double pi = 3.14159;

    printf ("Insira o Raio da Esfera: \n");
    scanf("%lf", &R);

    volume = (4.0 / 3.0) * pi * R * R * R;

    printf("VOLUME = %.3lf\n", volume);
}
/*lista 01 - Exercicio 08: Leia Quatro valores do Usuário correspondentes às coordenadas em um plano cartesiano, pl(x1,y1)...*/
void exercicel1_8(){
    double x1, y1, x2, y2;
    double distancia;

    printf ("Insira quatros valores para calcular a distancia entre eles (distancia euclidiana): \n");
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("%.4lf\n", distancia);
}
int main(int argc, char *argv[]) {
	
	int exercicio;
	
	printf("Usuario, qual exercicio que resolver? |1|2|3|4|5|6|7|8|:\n");
	scanf("%d", &exercicio);
	
	switch(exercicio){
	case 1:
	exercicel1_1();
	break;
	
	case 2:
	exercicel1_2();
	break;
	
	case 3:
	exercicel1_3();
	break;
	
	case 4:
	exercicel1_4();
	break;
	
	case 5:
	exercicel1_5();
	break;
	
	case 6:
	exercicel1_6();
	break;
	
	case 7:
	exercicel1_7();
	break;
	
	case 8:
	exercicel1_8();
	break;
	}
	return 0;
}