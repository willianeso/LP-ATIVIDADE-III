#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "");

    /*Crie um software que leia 5 números inteiros e, em seguida, mostre na tela:

  ? A quantidade de números ímpares;
  ? A quantidade de números negativos;
  ? O maior e o menor número;
  ? A média de números pares;
  ? A média de números inseridos.*/

    int i;
    int pares = 0;
    int impares = 0;
    int numeros[5];
    int negativos = 0;
    int maiorNumero = 0;
    int menorNumero = 99999;
    int somaPares = 0;
    int somaTotal = 0;
    float mediaPares;
    float mediaTotal;

    for (i = 0; i < 5; i++) {
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {
            pares++;
            somaPares += numeros[i];

        } else {
            impares++;

        }
        
        maiorNumero = numeros[i] > maiorNumero ? numeros[i] : maiorNumero;
        menorNumero = numeros[i] < menorNumero ? numeros[i] : menorNumero;

        negativos = numeros[i] < 0 ? negativos + 1 : negativos;

        somaTotal += numeros[i];

    }

    mediaTotal = somaTotal / (float)i;
    mediaPares = somaPares / (float)pares;

    system("cls");

    puts("");
    printf("A quantidade de números impares é: %d \n\n", impares);
    printf("A quantidade de números negativos é: %d \n\n", negativos);
    printf("O maior número é: %d \n", maiorNumero);
    printf("O menor número é: %d \n\n", menorNumero);
    printf("A média dos números pares é: %.1f \n", mediaPares);
    printf("A média geral é: %.1f \n", mediaTotal);

    return 0;
}