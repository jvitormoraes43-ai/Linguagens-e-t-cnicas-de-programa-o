#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159

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

    printf("Digite 4 valores e tera a soma, media e o produtorio: ");
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
/*lista 02 - Exercicio 01: Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.*/
void exec1 (){
    int idade, ano, calculo;
	printf ("Insira sua idade: \n");
	scanf("%d", &idade);

	printf ("Insira o ano atual: \n");
	scanf("%d", &ano);

	calculo = ano - idade;

	printf ("O ano em que voce nasceu e: %d", calculo);
}
/*lista 02 - Exercicio 02: Leia uma velocidade em km/h (quilometros por hora) e apresente convertida em m/s (metros por segundo). a formula de conver...*/
void exec2 (){
    float K, M;
	printf ("Insira sua velocidade em Km/h: ");
	scanf("%f", &K);

	M = K/36;
	
	printf ("Sua velocidade em metros por segundo (M/s) e: %f", M);
}
/*lista 02 - Exercicio 03: Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima...*/
void exec3 (){
	float dola, real, cota;
    printf ("insira um valor para ser convertido em dolinhos: ");
	scanf("%f", &real);
	scanf("%f", &cota);
	printf ("%f reais são %f dolinhos", real, (real/cota));
}
/*lista 02 - Exercicio 04: Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus...*/
void exec4 (){
	float tempC, tempF;
	scanf("%f", &tempC);
	tempF = tempC *(9.0/5.0) + 32.0;
	printf ("A temperatura maxima de hoje na tela da globo %f", tempF);
}
/*lista 02 - Exercicio 05: Leia um ângulo em graus e apresente-o convertido em radianos. A formula...*/
void exec5 (){
    float R, G;
	printf("Insira o angulo a ser Convertido: ");
	scanf("%f", &G);

	R = G * pi/180;

	printf("O resultado de radianos obtidos e: %f", R);
}
/*lista 02 - Exercicio 06: Faça um programa que leia um numero inteiro e retorne seu antecessor e seu sucessor.*/
void exec6 (){
    int n, antecessor, sucessor;

	printf("Insira um valor e tera seu antecessor e succesor: \n");
	scanf("%d", &n);

	antecessor = n - 1;
	sucessor = n + 1;

	printf("Seu numero e: %d o antecessor = %d e sucessor = %d", n, antecessor, sucessor);
}
/*lista 02 - Exercicio 07: A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso, sendo q...*/
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
/*lista 02 - Exercicio 08: (URI 1019) Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento...*/
void exec8 (){
	int segundos, horas, minutos;
    printf ("Insira uma quantidade de segundos para serem convertidos: ");
	scanf("%d", &segundos);
	horas = segundos/3600;
	minutos = (segundos - (horas*3600))/60;
	segundos = segundos -((horas*3600)+(minutos*60));
	printf ("Tempo %d:%d:%d", horas, minutos, segundos);
}
/*lista 02 - Exercicio 09: (URI 1017) Joaozinho quer calcular e mostrar a quantidade de litros de combustível...*/
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
/*lista 02 - Exercicio 10: (1013) Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido...*/
void exec10 (){
	int a, b, c, maior_temp, maior;
	printf("Insira os valores a serem comparados: ");
	scanf ("%d %d %d", &a, &b, &c);
	
	maior_temp = ((a+b)+abs(a-b))/2;
	maior = ((maior_temp+c)+abs(maior_temp-c))/2;
	printf("o maior entre |%d|%d|%d| = %d", a, b, c, maior);
}
int main(int argc, char *argv[]) {
	
	int lista, exercicio, continuar;
	
    do{

	printf("Usuario, qual lista de exercicios voce quer resolver? |1|2|: ");
	scanf("%d", &lista);

    switch(lista){
    case 1:
    do{
            printf("\n===== LISTA 1 =====\n");
            printf("1 - Exercicio 1\n");
            printf("2 - Exercicio 2\n");
            printf("3 - Exercicio 3\n");
            printf("4 - Exercicio 4\n");
            printf("5 - Exercicio 5\n");
            printf("6 - Exercicio 6\n");
            printf("7 - Exercicio 7\n");
            printf("8 - Exercicio 8\n");
            printf("Escolha o exercicio: ");
            scanf("%d", &exercicio);

    switch (exercicio){
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

    default:
    printf("Exercicio invalido!\n");
    }    
    printf("\nDeseja resolver outro exercicio ou mudar de lista?\n");
    printf("1 - Resolver outro exercicio\n");
    printf("2 - Mudar de Lista\n");
    printf("Escolha: ");
    scanf("%d", &continuar);

    } while (continuar == 1);

    break;

    case 2:
    do
    {
            printf("\n===== LISTA 2 =====\n");
            printf("1 - Exercicio 1\n");
            printf("2 - Exercicio 2\n");
            printf("3 - Exercicio 3\n");
            printf("4 - Exercicio 4\n");
            printf("5 - Exercicio 5\n");
            printf("6 - Exercicio 6\n");
            printf("7 - Exercicio 7\n");
            printf("8 - Exercicio 8\n");
            printf("9 - Exercicio 9\n");
            printf("10 - Exercicio 10\n");
            printf("Escolha o exercicio: ");
            scanf("%d", &exercicio);

    switch (exercicio){
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

    default:
    printf("\nExercicio invalido!\n");
    }
    printf("\nDeseja resolver outro exercicio?\n");
    printf("1 - Resolver outro exercicio\n");
    printf("2 - Mudar de Lista\n");
    printf("Escolha: ");
    scanf("%d", &continuar);

    } while (continuar == 1);

    break;

    case 0:
    printf("\nPrograma encerrado!\n");
    break;

    default:
    printf("\nOpcao invalida!\n");
    } 
    
    } while (lista !=0);

    return 0;
}