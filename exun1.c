#include <stdio.h>
#include <ctype.h>

int main() {
    int idade, totalOtimo = 0, totalBom = 0, totalRegular = 0, totalRuim = 0, totalPessimo = 0;
    int idadeRuimTotal = 0;
    int maiorIdadeOtimo = 0, maiorIdadeRuim = 0;
    char nota;
    float diferencaPercentual, mediaIdadeRuim;

    for (int i = 0; i < 100; i++) {
        printf("\nIdade do espectador %d: ", i + 1);
        scanf("%d", &idade);

        printf("Nota para o filme (A=Ótimo, B=Bom, C=Regular, D=Ruim, E=Péssimo): ");
        scanf(" %c", &nota);
        nota = toupper(nota); 

        switch (nota) {
            case 'A':
                totalOtimo++;
                if (idade > maiorIdadeOtimo) {
                    maiorIdadeOtimo = idade;
                }
                break;
            case 'B':
                totalBom++;
                break;
            case 'C':
                totalRegular++;
                break;
            case 'D':
                totalRuim++;
                idadeRuimTotal += idade;
                if (idade > maiorIdadeRuim) {
                    maiorIdadeRuim = idade;
                }
                break;
            case 'E':
                totalPessimo++;
                if (idade > maiorIdadeRuim) {
                    maiorIdadeRuim = idade;
                }
                break;
        }
    }

    if (totalBom > 0) {
        diferencaPercentual = (float)(totalBom - totalRegular) / totalBom * 100.0;
    }

    if (totalRuim > 0) {
        mediaIdadeRuim = (float)idadeRuimTotal / totalRuim;
    }

    printf("Quantidade de respostas Ótimo: %d\n", totalOtimo);
    printf("Diferença percentual entre respostas Bom e Regular: %.2f%%\n", diferencaPercentual);
    printf("Média de idade das pessoas que responderam Ruim: %.2f\n", mediaIdadeRuim);
    printf("Percentagem de respostas Péssimo: %.2f%%\n", (float)totalPessimo);
    printf("Maior idade que utilizou a opção Péssimo: %d\n", maiorIdadeRuim);
    printf("Diferença de idade entre a maior idade que respondeu Ótimo e a maior idade que respondeu Ruim: %d\n", maiorIdadeOtimo - maiorIdadeRuim);

    return 0;
}
