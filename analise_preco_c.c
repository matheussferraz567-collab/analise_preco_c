#include <stdio.h>

int main(void) {
    char nomeProduto1[100], nomeProduto2[100], nomeProduto3[100];
    const char *situacao1, *situacao2, *situacao3;
    double precoAnterior1, precoAtual1, variacao1;
    double precoAnterior2, precoAtual2, variacao2;
    double precoAnterior3, precoAtual3, variacao3;

    /* Primeiro produto */
    printf("Digite o nome do primeiro produto: ");
    scanf(" %99[^\n]", nomeProduto1);

    do {
        printf("Digite o preco do mes anterior: R$ ");
        scanf("%lf", &precoAnterior1);
        if (precoAnterior1 <= 0) {
            printf("O preco anterior deve ser maior que zero.\n");
        }
    } while (precoAnterior1 <= 0);

    printf("Digite o preco do mes atual: R$ ");
    scanf("%lf", &precoAtual1);

    variacao1 = ((precoAtual1 - precoAnterior1) / precoAnterior1) * 100;

    if (variacao1 > 0) {
        situacao1 = "AUMENTO";
    } else if (variacao1 < 0) {
        situacao1 = "QUEDA";
    } else {
        situacao1 = "ESTAVEL";
    }

    /* Segundo produto */
    printf("\nDigite o nome do segundo produto: ");
    scanf(" %99[^\n]", nomeProduto2);

    do {
        printf("Digite o preco do mes anterior: R$ ");
        scanf("%lf", &precoAnterior2);
        if (precoAnterior2 <= 0) {
            printf("O preco anterior deve ser maior que zero.\n");
        }
    } while (precoAnterior2 <= 0);

    printf("Digite o preco do mes atual: R$ ");
    scanf("%lf", &precoAtual2);

    variacao2 = ((precoAtual2 - precoAnterior2) / precoAnterior2) * 100;

    if (variacao2 > 0) {
        situacao2 = "AUMENTO";
    } else if (variacao2 < 0) {
        situacao2 = "QUEDA";
    } else {
        situacao2 = "ESTAVEL";
    }

    /* Terceiro produto */
    printf("\nDigite o nome do terceiro produto: ");
    scanf(" %99[^\n]", nomeProduto3);

    do {
        printf("Digite o preco do mes anterior: R$ ");
        scanf("%lf", &precoAnterior3);
        if (precoAnterior3 <= 0) {
            printf("O preco anterior deve ser maior que zero.\n");
        }
    } while (precoAnterior3 <= 0);

    printf("Digite o preco do mes atual: R$ ");
    scanf("%lf", &precoAtual3);

    variacao3 = ((precoAtual3 - precoAnterior3) / precoAnterior3) * 100;

    if (variacao3 > 0) {
        situacao3 = "AUMENTO";
    } else if (variacao3 < 0) {
        situacao3 = "QUEDA";
    } else {
        situacao3 = "ESTAVEL";
    }

    /* Exibicao dos resultados */
    printf("\n===== RESULTADO DA ANALISE DE PRECOS =====\n");

    printf("\nProduto: %s\n", nomeProduto1);
    printf("Preco anterior: R$ %.2f\n", precoAnterior1);
    printf("Preco atual: R$ %.2f\n", precoAtual1);
    printf("Variacao: %.2f%%\n", variacao1);
    printf("Situacao: %s\n", situacao1);

    printf("\nProduto: %s\n", nomeProduto2);
    printf("Preco anterior: R$ %.2f\n", precoAnterior2);
    printf("Preco atual: R$ %.2f\n", precoAtual2);
    printf("Variacao: %.2f%%\n", variacao2);
    printf("Situacao: %s\n", situacao2);

    printf("\nProduto: %s\n", nomeProduto3);
    printf("Preco anterior: R$ %.2f\n", precoAnterior3);
    printf("Preco atual: R$ %.2f\n", precoAtual3);
    printf("Variacao: %.2f%%\n", variacao3);
    printf("Situacao: %s\n", situacao3);

    return 0;
}