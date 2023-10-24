#include <stdio.h>

int main() {
    int moradores = 50;
    int elevadorA = 0, elevadorB = 0, elevadorC = 0;
    int matutino = 0, vespertino = 0, noturno = 0;
    char elevadorMaisFrequentado, periodoMaisUsado;
    
    for (int i = 0; i < moradores; i++) {
        char elevador, periodo;
        printf("\nInforme o elevador mais utilizado (A, B ou C): ");
        scanf(" %c", &elevador);
        printf("Informe o período mais utilizado (M, V ou N): ");
        scanf(" %c", &periodo);

        switch (elevador) {
            case 'A':
                elevadorA++;
                break;
            case 'B':
                elevadorB++;
                break;
            case 'C':
                elevadorC++;
                break;
        }

        switch (periodo) {
            case 'M':
                matutino++;
                break;
            case 'V':
                vespertino++;
                break;
            case 'N':
                noturno++;
                break;
        }
    }

    if (elevadorA >= elevadorB && elevadorA >= elevadorC) {
        elevadorMaisFrequentado = 'A';
    } else if (elevadorB >= elevadorA && elevadorB >= elevadorC) {
        elevadorMaisFrequentado = 'B';
    } else {
        elevadorMaisFrequentado = 'C';
    }

    if (matutino >= vespertino && matutino >= noturno) {
        periodoMaisUsado = 'M';
    } else if (vespertino >= matutino && vespertino >= noturno) {
        periodoMaisUsado = 'V';
    } else {
        periodoMaisUsado = 'N';
    }

    int total = matutino + vespertino + noturno;
    float percentualDiferenca = ((float)(matutino - noturno) / total) * 100;

    int totalElevadores = elevadorA + elevadorB + elevadorC;
    float percentagemElevadorMedio = ((float)elevadorB / totalElevadores) * 100;

    printf("Qual o período mais usado de todos e a que elevador pertence: %c (%c)\n", periodoMaisUsado, elevadorMaisFrequentado);
    printf("Qual é o elevador mais frequentado e em que período se concentra o maior fluxo: Elevador %c (%c)\n", elevadorMaisFrequentado, periodoMaisUsado);
    printf("Qual a diferença percentual entre o mais usado dos horários e o menos usado: %.2f%%\n", percentualDiferenca);
    printf("Qual a percentagem sobre o total de serviços prestados do elevador de média utilização: %.2f%%\n", percentagemElevadorMedio);

    return 0;
}
