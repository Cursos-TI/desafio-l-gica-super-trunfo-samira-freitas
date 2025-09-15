#include <stdio.h>

int main (){

    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    int opcao;

    // Cadastro da carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (sigla): ");
    scanf(" %s", estado1);
    printf("Codigo da carta: ");
    scanf(" %s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Populacao: ");
    scanf(" %d", &populacao1);
    printf("Area (km²): ");
    scanf(" %f", &area1);
    printf("PIB (bilhoes): ");
    scanf(" %f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf(" %d", &pontos1);

    // Cadastro da carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (sigla): ");
    scanf(" %s", estado2);
    printf("Codigo da carta: ");
    scanf(" %s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Populacao: ");
    scanf(" %d", &populacao2);
    printf("Area (km²): ");
    scanf(" %f", &area2);
    printf("PIB (bilhoes): ");
    scanf(" %f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf(" %d", &pontos2);

    // Menu de comparação
    printf("\n=== Atributos Disponiveis ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Escolha o atributo para comparar: ");
    scanf(" %d", &opcao);

    printf("\n=== Resultado da Comparacao ===\n");
    if (opcao == 1) {
        if (populacao1 > populacao2)
            printf("Vencedor: %s (Populacao maior)\n", cidade1);
        else if (populacao2 > populacao1)
            printf("Vencedor: %s (Populacao maior)\n", cidade2);
        else
            printf("Empate! Populacao igual.\n");
    } else if (opcao == 2) {
        if (area1 > area2)
            printf("Vencedor: %s (Area maior)\n", cidade1);
        else if (area2 > area1)
            printf("Vencedor: %s (Area maior)\n", cidade2);
        else
            printf("Empate! Area igual.\n");
    } else if (opcao == 3) {
        if (pib1 > pib2)
            printf("Vencedor: %s (PIB maior)\n", cidade1);
        else if (pib2 > pib1)
            printf("Vencedor: %s (PIB maior)\n", cidade2);
        else
            printf("Empate! PIB igual.\n");
    } else if (opcao == 4) {
        if (pontos1 > pontos2)
            printf("Vencedor: %s (Mais pontos turisticos)\n", cidade1);
        else if (pontos2 > pontos1)
            printf("Vencedor: %s (Mais pontos turisticos)\n", cidade2);
        else
            printf("Empate! Mesma quantidade de pontos turisticos.\n");
    } else if (opcao == 5) {
        float dens1 = populacao1 / area1;
        float dens2 = populacao2 / area2;
        if (dens1 < dens2)
            printf("Vencedor: %s (Menor densidade populacional)\n", cidade1);
        else if (dens2 < dens1)
            printf("Vencedor: %s (Menor densidade populacional)\n", cidade2);
        else
            printf("Empate! Mesma densidade populacional.\n");
    } else {
        printf("Opcao invalida!\n");
    }

    return 0;
}