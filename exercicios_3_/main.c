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
     scanf("%d", &altura);
    printf("Digite o genero : \n");
    scanf("%d", &genero);
    printf("%d , %d , %d", idade, altura, genero );
}
