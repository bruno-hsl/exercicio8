#include <stdio.h>

int main() {
    int mes, ano;

    do {
        printf("Digite o mês (1 a 12): ");
        scanf("%d", &mes);

        if (mes < 1 || mes > 12) {
            printf("Mês inválido. Digite um número entre 1 e 12.\n");
        }
    } while (mes < 1 || mes > 12);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    int diasNoMes = 0;

    switch (mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            diasNoMes = 31;
            break;

        case 4: 
        case 6: 
        case 9:
        case 11:
            diasNoMes = 30;
            break;

        case 2:
            if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
                diasNoMes = 29;
            } else {
                diasNoMes = 28;
            }
            break;

        default:
            printf("Mês inválido.\n");
    }

    if (diasNoMes > 0) {
        printf("O mês %d/%d tem %d dias.\n", mes, ano, diasNoMes);
    }

    char resposta;
    printf("VOCÊ DESEJA OUTRAS ENTRADAS (S/?)? ");
    scanf(" %c", &resposta);

    if (resposta != 'S' && resposta != 's') {
        break;
    }
    printf("\n");
     while (1);

    return 0;
}
