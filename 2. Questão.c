#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Exerc�cio 2:
Crie um programa que fa�a o cadastro de 5 alunos em uma escola, armazenando seus dados como: nome, idade e  3 notas  para cada aluno.
Ao final, mostre todos os dados dos alunos como: nome, idade, as notas e a m�dia. Ap�s calcular a m�dia, verifique para cada aluno se este estar�
aprovado (m�dia maior ou igual a 7,0), em recupera��o (m�dia menor que 7,0 e maior ou igual a 5,0) ou reprovado (m�dia menor que 5,0) com base nestes crit�rios.*/

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

        printf("Cadastro do %d� aluno\n", i + 1);

        printf("Digite o nome do aluno: ");
        scanf("%s", &nome[i]);

        fflush(stdin);

        printf("Digite a idade de %s: ", nome[i]);
        scanf("%d", &idade[i]);

        for (j = 0; j < 3; j++) {
            printf("Digite a %d� nota de %s: ", j + 1, nome[i]);
            scanf("%f", &notas[i][j]);

            somaNota += notas[i][j];

        }

        media[i] = somaNota / (float)j;
        somaNota = 0;

    }

    system("cls");

    for (i = 0; i < 5; i++) {
        printf("Exibindo cadastro do %d� aluno\n", i + 1);

        printf("Nome do aluno: %s \n", nome[i]);

        printf("A idade de %s: %d \n", nome[i], idade[i]);


        for (j = 0; j < 3; j++) {
            printf("%d nota de %s: %.1f \n", j + 1, nome[i], notas[i][j]);

        }

        printf("M�dia de %s: %.1f \n", nome[i], media[i]);

        if (media[i] >= 7) {
            printf("Aprovado!\n\n");

        } else if (media[i] >= 5) {
            printf("Recupera��o!\n\n");

        } else {
            printf("Reprovado!\n\n");

        }

    }

    return 0;
}
