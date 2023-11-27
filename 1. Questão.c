#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Crie um algoritmo que leia o nome, a idade, o peso e a altura de 5 pessoas, armazenando em vetores.

- Mostre as informações solicitadas de cada pessoa e informe:
O nome e a altura da pessoa mais alta e a mais baixa.
O nome e o peso da pessoa com maior peso e menor peso;
O nome a idade da pessoa com mais idade e com menos idade.*/

int main()
{
    setlocale(LC_ALL, "");

    int i = 0;
    char nome[5][300];
    int idade[5];
    float peso[5];
    float altura[5];
    float maisAlta = 0;
    float maisBaixa = 999999;
    float maisPesada = 0;
    float maisLeve = 9999999;
    int maisNova = 9999999;
    int maisVelha = 0;
    int pessoaAlta = 0;
    int pessoaBaixa = 0;
    int pessoaPesada = 0;
    int pessoaLeve = 0;
    int pessoaVelha = 0;
    int pessoaNova = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome da %dª pessoa: ", i+1);
        gets(nome[i]);

        printf("Digite a idade da %dª pessoa: ", i+1);
        scanf("%d", &idade[i]);

        printf("Digite o peso da %dª pessoa: ", i+1);
        scanf("%f", &peso[i]);

        printf("Digite a altura da %dª pessoa: ", i+1);
        scanf("%f", &altura[i]);

        fflush(stdin);

        if (idade[i] > maisVelha)
        {
            maisVelha = idade[i];
            pessoaVelha = i;
        }

        if (idade[i] < maisNova)
        {
            maisNova = idade[i];
            pessoaNova = i;
        }

        if (peso[i] > maisPesada)
        {
            maisPesada = peso[i];
            pessoaPesada = i;
        }

        if (peso[i] < maisLeve)
        {
            maisLeve = peso[i];
            pessoaLeve = i;
        }

        if (altura[i] > maisAlta)
        {
            maisAlta = altura[i];
            pessoaAlta = i;
        }

        if (altura[i] < maisBaixa)
        {
            maisBaixa = altura[i];
            pessoaBaixa = i;
        }
    }

    system("cls");

    printf("Pessoa mais nova: %s - Idade: %d \n", nome[pessoaNova], maisNova);
    printf("Pessoa mais velha: %s - Idade: %d \n", nome[pessoaVelha], maisVelha);
    printf("Pessoa mais pesada: %s - Peso: %.3f \n", nome[pessoaPesada], maisPesada);
    printf("Pessoa mais leve: %s - Peso: %.3f \n", nome[pessoaLeve], maisLeve);
    printf("Pessoa mais alta: %s - Altura: %.2f \n", nome[pessoaAlta], maisAlta);
    printf("Pessoa mais baixa: %s - Altura: %.2f \n", nome[pessoaBaixa], maisBaixa);

    return 0;
}
