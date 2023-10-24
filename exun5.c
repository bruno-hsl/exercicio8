#include <stdio.h>
#include <string.h>

int main() {
    int numEntrevistados = 0;
    char nome[300][30];
    char sexo[300];
    int idade[300];
    int voto[300];
    int Sam = 0, Alex = 0, Dzsenifer = 0, Amandine = 0, Marta = 0;
    int finalizar;

    printf("Jogadoras: 1 = [Sam Kerr], 2 = [Alex Morgan], 3 = [Dzsenifer Marozsan], 4 = [Amandine Henry], 5 = [Marta Vieira]\n");

    do {
        numEntrevistados++;

        printf("\nNome do entrevistado[%d]: ", numEntrevistados);
        scanf(" %s", nome[numEntrevistados]);

        printf("Sexo do entrevistado (M/F)[%d]: ", numEntrevistados);
        scanf(" %c", &sexo[numEntrevistados]);

        printf("Idade do entrevistado[%d]: ", numEntrevistados);
        scanf(" %d", &idade[numEntrevistados]);

        printf("Voto do entrevistado[%d]: ", numEntrevistados);
        scanf(" %d", &voto[numEntrevistados]);

        switch (voto[numEntrevistados]) {
            case 1:
                Sam++;
                break;
            case 2:
                Alex++;
                break;
            case 3:
                Dzsenifer++;
                break;
            case 4:
                Amandine++;
                break;
            case 5:
                Marta++;
                break;
            default:
                printf("Opção inválida\n");
        }

        if (numEntrevistados >= 2 && numEntrevistados <= 300) {
            printf("Digite 0 para finalizar: ");
            scanf("%d", &finalizar);

            if (finalizar == 0) {
                break;
            }
        }
    } while (1);

    int maisVotos = Sam;
    char resultadoMaisVotos[30]; 

    if (Alex > maisVotos) {
        maisVotos = Alex;
        strcpy(resultadoMaisVotos, "Alex Morgan");
    }
    if (Dzsenifer > maisVotos) {
        maisVotos = Dzsenifer;
        strcpy(resultadoMaisVotos, "Dzsenifer Marozsan");
    }
    if (Amandine > maisVotos) {
        maisVotos = Amandine;
        strcpy(resultadoMaisVotos, "Amandine Henry");
    }
    if (Marta > maisVotos) {
        maisVotos = Marta;
        strcpy(resultadoMaisVotos, "Marta Vieira");
    }
    

    printf("Entrevista finalizada. Número total de entrevistados: %d\n", numEntrevistados);

    printf("Votos:\n");
    printf("Sam Kerr: %d\n", Sam);
    printf("Alex Morgan: %d\n", Alex);
    printf("Dzsenifer Marozsan: %d\n", Dzsenifer);
    printf("Amandine Henry: %d\n", Amandine);
    printf("Marta Vieira: %d\n", Marta);
    printf("Jogadora com mais votos: %s com %d votos\n", resultadoMaisVotos, maisVotos);

     printf("Jogadoras com votos empatados:\n");
    if (Sam == maisVotos && Sam > 0) {
        printf("Sam Kerr\n");
    }
    if (Alex == maisVotos && Alex > 0) {
        printf("Alex Morgan\n");
    }
    if (Dzsenifer == maisVotos && Dzsenifer > 0) {
        printf("Dzsenifer Marozsan\n");
    }
    if (Amandine == maisVotos && Amandine > 0) {
        printf("Amandine Henry\n");
    }
    if (Marta == maisVotos && Marta > 0) {
        printf("Marta Vieira\n");
    }

    printf("\nPessoas entrevistadas por sexo:\n");
    for (int i = 0; i < numEntrevistados; i++) {
        printf("Nome: %s, Idade: %d, Sexo: %c\n", nome[i], idade[i], sexo[i]);
    }

    printf("\nMulheres entrevistadas:\n");
    for (int i = 0; i < numEntrevistados; i++) {
        if (sexo[i] == 'F' || sexo[i] == 'f') {
            printf("Nome: %s, Idade: %d\n", nome[i], idade[i]);
        }
    }

    printf("\nHomens entrevistados:\n");
    for (int i = 0; i < numEntrevistados; i++) {
        if (sexo[i] == 'M' || sexo[i] == 'm') {
            printf("Nome: %s, Idade: %d\n", nome[i], idade[i]);
        }
    }

    printf("\nPessoas maiores de idade:\n");
    for (int i = 0; i < numEntrevistados; i++) {
        if (idade[i] >= 18) {
            printf("Nome: %s, Idade: %d\n", nome[i], idade[i]);
        }
    }

    printf("\nPessoas menores de idade:\n");
    for (int i = 0; i < numEntrevistados; i++) {
        if (idade[i] < 18) {
            printf("Nome: %s, Idade: %d\n", nome[i], idade[i]);
        }
    }


    return 0;
}
