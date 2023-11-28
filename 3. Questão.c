#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*Exercício 3:
Implemente um programa que permita cadastrar contatos telefônicos em uma agenda, utilizando vetores para armazenar os nomes e números de telefone.
Permita que o usuário digite o código 1 para adicionar um número e 2 para mostrar os números cadastrados e encerrar o software.*/

int main()
{

    setlocale(LC_ALL, "");

    char nomes[99][500];
    char numeros[99][500];
    int opcao = 0;
    int i = 0;
    int j = 0;

    do
    {
        puts("");

        printf("Para cadastrar contato digite '1' \n");
        printf("Para encerrar e mostrar os contatos cadastrados digite '2' \n");
        printf("Digite sua opção: ");
        scanf("%d", &opcao);

        puts("");

        if (opcao == 1)
        {

            printf("Digite o nome do %dº contato:  ", i + 1);
            scanf("%s", &nomes[i]);
            
            fflush(stdin);

            printf("Digite o número do %dº contato: ", i + 1);
            scanf("%s", &numeros[i]);

            fflush(stdin);

            i += 1;
        }

    } while (opcao == 1);

    system("cls");

    for (j = 0; j <= i; j++)
    {
        printf("%dº cadastro \n", j + 1);
        printf("Nome: %s\n", nomes[j]);
        printf("Número: %s\n", numeros[j]);

        puts("");

    }

    return 0;
}