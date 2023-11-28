#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "");

    /*Crie um software que leia 5 n�meros inteiros e, em seguida, mostre na tela:

  ? A quantidade de n�meros �mpares;
  ? A quantidade de n�meros negativos;
  ? O maior e o menor n�mero;
  ? A m�dia de n�meros pares;
  ? A m�dia de n�meros inseridos.*/

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
        printf("Digite o %d� n�mero: ", i + 1);
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
    printf("A quantidade de n�meros impares �: %d \n\n", impares);
    printf("A quantidade de n�meros negativos �: %d \n\n", negativos);
    printf("O maior n�mero �: %d \n", maiorNumero);
    printf("O menor n�mero �: %d \n\n", menorNumero);
    printf("A m�dia dos n�meros pares �: %.1f \n", mediaPares);
    printf("A m�dia geral �: %.1f \n", mediaTotal);

    return 0;
}