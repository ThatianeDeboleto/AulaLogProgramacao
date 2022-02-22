/*
1- Faça um programa que leia dois inteiros e mostre na tela o
resultado das operações tradicionais (+, -, * e /)
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
int n1;
int n2;
printf("Digite o primeiro numero: ");
scanf("%d", &n1);
printf("Digite o segundo numero: ");
scanf("%d", &n2);
printf("O resultado de %d + %d = %d", n1, n2, n1 + n2);
printf("\n O resultado de %d - %d = %d", n1, n2, n1 - n2);
printf("\n O resultado de %d * %d = %d", n1, n2, n1 * n2);
printf("\n O resultado de %d / %d = %d", n1, n2, n1 / n2);
}

/*
2- Faça um programa que peça para o usuário digitar uma data e
imprima no formato dd/mm/aaa*/

#include <stdio.h>
#include <stdlib.h>

main()
{
    int dia;
    int mes;
    int ano;
    printf("Digite o dia : ");
     scanf("%d", &dia);
    printf("Digite o mes : ");
     scanf("%d", &mes);
    printf("Digite o ano : ");
    scanf("%d", &ano);
    printf("%d / %d / %d", dia,mes,ano);


}

/*
3- Indique quais das seguintes declarações estão corretas.
a. y int;
b. int;
c. interger x;
d. inta, b;
e. float f, g, c;
f. char ch1=ch2=’A’;
g. char ch1 = ‘A’, ch2 = ‘A’;
Resposta:
As declarações corretas são as letras: E, G
*/


/*4 - Uma variável inteira , quando é declarada , é sempre iniciada com…
a. 0 (zero)
b. 1 (um)
c. Um valor aleatório
d. Um valor negativo
Resposta:
Letra C, um valor aleatório.
*/

/*5- Indique os nomes corretos de
variáveis:
a. Valor
b. &xvar
c. dez%
d. a + b
e. _Saldo
f. main
g. a10
h. 10a
i. PRECO
j. saldo_da_conta
k. saldoDaConta
l. for
m. For
Resposta:
As declaraçoes J, K
*/


/*
6- Faça um programa que leia 4 números e imprima a soma deles
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
int n1;
int n2;
int n3;
int n4;

printf("Digite o primeiro numero: ");
scanf("%d", &n1);
printf("Digite o segundo numero: ");
scanf("%d", &n2);
printf("Digite o segundo numero: ");
scanf("%d", &n3);
printf("Digite o segundo numero: ");
scanf("%d", &n4);
printf("O resultado de %d + %d + %d + %d = %d", n1, n2, n3, n4, n1 + n2 + n3 + n4 );
}


/*
7- Faça um programa que leia 4 números e imprima a média deles.
*/
#include <stdio.h>

main()
{
    float n1;
    float n2;
    float n3;
    float n4;
    float soma;
    float media;
    printf("Digite o valor de n1: ");
    scanf("%f", &n1);
    printf("Digite o valor de n2: ");
    scanf("%f", &n2);
    printf("Digite o valor de n3: ");
    scanf("%f", &n3);
    printf("Digite o valor de n4: ");
    scanf("%f", &n4);
    soma = n1 + n2 + n3 + n4;
    media = soma / 4;
    printf("A media eh: %f", media);
}

/*
8- Faça um programa que cria variáveis, entre com os dados e
imprima o resultado, para armazenar: idade, altura e gênero
*/

#include <stdio.h>

main()
{
    int idade;    // define o campo Idade
    float altura; // define o campo Altura
    int genero; // define genero masculino e feminino
   printf("Digite a idade : \n");
     scanf("%d", &idade);
    printf("Digite a altura : \n");
     scanf("%f", &altura);
    printf("Digite o genero : \n");
    scanf(" %c", &genero);
    printf("%d , %f, %c ",  idade, altura, genero );
}




/*
9- Faça um programa que cria variáveis, entre com os dados e
imprima o resultado, para armazenar: idade, altura e gênero
*/
#include <stdio.h>

main()
{
    int ano_atual, ano_nascimento, idade_atual, idade_2022;

   printf("Digite o ano de nascimento: ");
   //Recebe o ano de nascimento
   scanf("%d" ,&ano_nascimento);
   printf("Digite o ano atual: ");
   //Recebe o ano atual
   scanf("%d"   ,&ano_atual);
   //Calcula a idade atual e em 2022
   idade_atual = ano_atual - ano_nascimento;
   idade_2022 = 2022 - ano_nascimento;
   //Mostra a idade atual e em 2022
   printf("\n A idade atual : %d", idade_atual);
   printf("\n A idade em 2022 : %d", idade_2022);
}

/*
10- Programa conversor de temperaturas
 */

#include <stdio.h>
double celsiusParaFahrenheit (double c);
double fahrenheitParaCelsius (double f);

int main (void)
{
   double far, cel;

   printf ("Temperatura em graus Fahrenheit: ");
   scanf ("%lf", &far);
   cel = fahrenheitParaCelsius (far);
   printf ("igual a %.1f graus Celsius\n", cel);

   printf ("\nTemperatura em graus Celsius: ");
   scanf ("%lf", &cel);
   far = celsiusParaFahrenheit (cel);
   printf ("igual a %.1f graus Fahrenheit\n", far);

   return 0;
}

double celsiusParaFahrenheit (double c)
{
   return 9.0 * c / 5.0 + 32.0;
}

double fahrenheitParaCelsius (double f)
{
   return 5.0 * (f - 32.0) / 9.0;
}


