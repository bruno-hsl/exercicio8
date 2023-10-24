#include <stdio.h>

int main() {
    int n;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("digite um número não negativo.\n");
    } else {
        int primeiro = 0, segundo = 1, proximo;

        if (n == 0) {
            printf("O termo de Fibonacci de ordem 0 é: 0\n");
        } else if (n == 1) {
            printf("O termo de Fibonacci de ordem 1 é: 1\n");
        } else {
            for (int i = 2; i <= n; i++) {
                proximo = primeiro + segundo;
                primeiro = segundo;
                segundo = proximo;
            }

            printf("O termo de Fibonacci de ordem %d é: %d\n", n, segundo);
        }
    }

    return 0;
}
