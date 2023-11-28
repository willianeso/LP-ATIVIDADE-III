#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Exercício 2:
Crie um programa que faça o cadastro de 5 alunos em uma escola, armazenando seus dados como: nome, idade e  3 notas  para cada aluno.
Ao final, mostre todos os dados dos alunos como: nome, idade, as notas e a média. Após calcular a média, verifique para cada aluno se este estará
aprovado (média maior ou igual a 7,0), em recuperação (média menor que 7,0 e maior ou igual a 5,0) ou reprovado (média menor que 5,0) com base nestes critérios.*/

int main() {

    setlocale(LC_ALL, "");

    char nome[5][200];
    char idade[5];
    int i, j;
    int somaNota = 0;
    float notas[5][3];
    float media[5];

    for (i = 0; i < 5; i++) {
        printf("\n");

        printf("Cadastro do %dº aluno\n", i + 1);

        printf("Digite o nome do aluno: ");
        scanf("%s", &nome[i]);

        fflush(stdin);

        printf("Digite a idade de %s: ", nome[i]);
        scanf("%d", &idade[i]);

        for (j = 0; j < 3; j++) {
            printf("Digite a %dª nota de %s: ", j + 1, nome[i]);
            scanf("%f", &notas[i][j]);

            somaNota += notas[i][j];

        }

        media[i] = somaNota / (float)j;
        somaNota = 0;

    }

    system("cls");

    for (i = 0; i < 5; i++) {
        printf("Exibindo cadastro do %dº aluno\n", i + 1);

        printf("Nome do aluno: %s \n", nome[i]);

        printf("A idade de %s: %d \n", nome[i], idade[i]);


        for (j = 0; j < 3; j++) {
            printf("%d nota de %s: %.1f \n", j + 1, nome[i], notas[i][j]);

        }

        printf("Média de %s: %.1f \n", nome[i], media[i]);

        if (media[i] >= 7) {
            printf("Aprovado!\n\n");

        } else if (media[i] >= 5) {
            printf("Recuperação!\n\n");

        } else {
            printf("Reprovado!\n\n");

        }

    }

    return 0;
}
