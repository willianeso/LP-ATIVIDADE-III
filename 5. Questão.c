#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "");

    /*Exerc�cio 5:
    Desenvolva um programa que registre as vendas de uma loja, armazenando os valores em um vetor e
    apresentando o total de vendas ao final. Considere que cada venda precisa do nome de um produto,
    seu pre�o e sua quantidade. Crie um menu onde o usu�rio possa digitar o n�mero 1 para adicionar uma venda e o
    n�mero 2 para sair do menu e exibir o total das vendas realizadas.*/

    char nomeProduto[999][500];
    float valor[999];
    int quantidade[999];
    float totalVendas = 0;
    int opcao =0;
    int i = 0;

    do
    {

        puts("");
        printf("==== Seja bem-vindo ao menu ==== \n");
        printf("Digite 1 para adicionar uma venda \n");
        printf("Digite 2 para sair do menu e exibir o total das vendas \n");
        printf("Digite op��o desejada: ");
        scanf("%d", &opcao);

        system("cls");

        if (opcao == 1)
        {
            printf("Nome do produto que foi vendido: ");
            scanf("%s", &nomeProduto[i]);

            printf("Pre�o do produto que foi vendido: R$ ");
            scanf("%f", &valor[i]);

            printf("Quantidade do produto que foi vendido: ");
            scanf("%d", &quantidade[i]);

            totalVendas += valor[i] * quantidade[i];
            quantidade[i]++;
            
            
    
        }

        system("cls");

    } while (opcao == 1);

    printf("Total das vendas: R$ %.2f \n", totalVendas);
    printf("Quantidade de vendas: %d", quantidade[i]);
   

    return 0;
}