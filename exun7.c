#include <stdio.h>

int main() {
    int numHomens;
    float altura, peso;
    char nome[3], sexo[3]

    for(int i = 0; i < 3; i++){
        printf("Digite seu nome: ");
        scanf("%c", &nome[i]);

        printf("Digite seu sexo (M,m/Ff): ");
        scanf("%c", &sexo[i]);

        printf("Digite sua altura: ");
        scanf("%f", &altura[i]);

        printf("Digite seu peso: ");
        scanf("%f", &peso[i]);

    }
    return 0;
}
