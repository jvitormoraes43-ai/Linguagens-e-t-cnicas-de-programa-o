#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159
#include <math.h>

void exec1 (){
    int idade, ano, calculo;
	printf ("Insira sua idade: \n");
	scanf("%d", &idade);

	printf ("Insira o ano atual: \n");
	scanf("%d", &ano);

	calculo = ano - idade;

	printf ("O ano em que voce nasceu e: %d", calculo);
}
void exec2 (){
    float K, M;
	printf ("Insira sua velocidade em Km/h: ");
	scanf("%f", &K);

	M = K/36;
	
	printf ("Sua velocidade em metros por segundo (M/s) e: %f", M);
}
void exec3 (){
	float dola, real, cota;
	scanf("%f", &real);
	scanf("%f", &cota);
	printf ("%f reais são %f dolinhos", real, (real/cota));
}
void exec4 (){
	float tempC, tempF;
	scanf("%f", &tempC);
	tempF = tempC *(9.0/5.0) + 32.0;
	printf ("A temperatura maxima de hoje na tela da globo %f", tempF);
}
void exec5 (){
    float R, G;
	printf("Insira o angulo a ser Convertido: ");
	scanf("%f", &G);

	R = G * pi/180;

	printf("O resultado de radianos obtidos e: %f", R);
}
void exec6 (){
    int n, antecessor, sucessor;

	printf("Insira um valor e tera seu antecessor e succesor: \n");
	scanf("%d", &n);

	antecessor = n - 1;
	sucessor = n + 1;

	printf("Seu numero e: %d o antecessor = %d e sucessor = %d", n, antecessor, sucessor);
}
void exec7 (){
    float importancia, valor1, valor2, valor3;

	printf("***Parabens pelo premio de R$ 780.000,00***\n");

	importancia = 780000.00;
	valor1 = importancia * 0.46;
	valor2 = importancia * 0.32;
    valor3 = importancia * 0.22;

	printf("O primeiro ganhador ficou com a quantia de: %f\n", valor1);
    printf("O segundo ganhador ficou com a quantia de: %f\n", valor2);
    printf("O terceiro ganhador ficou com a quantia de: %f\n", valor3);
}
void exec8 (){
	int segundos, horas, minutos;
	scanf("%d", &segundos);
	horas = segundos/3600;
	minutos = (segundos - (horas*3600))/60;
	segundos = segundos -((horas*3600)+(minutos*60));
	printf ("Tempo %d:%d:%d", horas, minutos, segundos);
}
void exec9 (){
    double tempo, velocidade, distancia, litros;

    printf("Digite o tempo da viagem (horas): ");
    scanf("%lf", &tempo);

    printf("Digite a velocidade media: ");
    scanf("%lf", &velocidade);

    distancia = tempo * velocidade;
    litros = distancia / 12;

    printf("A distancia percorrida foi: %.3lf km\n", distancia);
    printf("A quantidade de litros necessaria foi: %.3lf litros\n", litros);
}
void exec10 (){
	int a, b, c, maior_temp, maior;
	printf("Insira os valores a serem comparados: ");
	scanf ("%d %d %d", &a, &b, &c);
	
	maior_temp = ((a+b)+abs(a-b))/2;
	maior = ((maior_temp+c)+abs(maior_temp-c))/2;
	printf("o maior entre |%d|%d|%d| = %d", a, b, c, maior);
}
int main(int argc, char *argv[]) {
	
	int resposta;
	printf("Usuario, qual exercicio que resolver: |1|2|3|4|5|6|7|8|9|10|\n");
	scanf("%d", &resposta);
	
	switch(resposta){
	case 1:
	exec1();
	break;
	
	case 2:
	exec2();
	break;
	
	case 3:
	exec3();
	break;

	case 4:
	exec4();
	break;
	
    case 5:
	exec5();
	break;

    case 6:
	exec6();
	break;

    case 7:
	exec7();
	break;

    case 8:
	exec8();
	break;

	case 9:
	exec9();
	break;

    case 10:
	exec10();
	break;
	
	return 0;
}
}