#include <stdio.h>

int main() {
    // Variáveis para a Carta 1
    char estado1[50], cidade1[50];
    int codigo1, populacao1, pontosTuristicos1;
    float area1, pib1;

    // Variáveis para a Carta 2
    char estado2[50], cidade2[50];
    int codigo2, populacao2, pontosTuristicos2;
    float area2, pib2;

    // Inputs da Carta 1
    printf("Digite o Estado 1: \n");
    scanf("%s", estado1);
    printf("Digite o Código 1: \n");
    scanf("%d", &codigo1);
    printf("Digite a Cidade 1: \n");
    scanf("%s", cidade1);
    printf("Digite a População 1: \n");
    scanf("%d", &populacao1);
    printf("Digite a Área 1: \n");
    scanf("%f", &area1);
    printf("Digite o PIB 1: \n");
    scanf("%f", &pib1);
    printf("Quantidade de Pontos Turísticos 1: \n");
    scanf("%d", &pontosTuristicos1);

    // Inputs da Carta 2
    printf("\nDigite o Estado 2: \n");
    scanf("%s", estado2);
    printf("Digite o Código 2: \n");
    scanf("%d", &codigo2);
    printf("Digite a Cidade 2: \n");
    scanf("%s", cidade2);
    printf("Digite a População 2: \n");
    scanf("%d", &populacao2);
    printf("Digite a Área 2: \n");
    scanf("%f", &area2);
    printf("Digite o PIB 2: \n");
    scanf("%f", &pib2);
    printf("Quantidade de Pontos Turísticos 2: \n");
    scanf("%d", &pontosTuristicos2);

    // Comparações
    printf("\n--- Comparação ---\n");

    if (populacao1 > populacao2)
        printf("Cidade com maior população: %s\n", cidade1);
    else if (populacao2 > populacao1)
        printf("Cidade com maior população: %s\n", cidade2);
    else
        printf("Populações são iguais!\n");

    if (area1 > area2)
        printf("Cidade com maior área: %s\n", cidade1);
    else if (area2 > area1)
        printf("Cidade com maior área: %s\n", cidade2);
    else
        printf("Áreas são iguais!\n");

    if (pib1 > pib2)
        printf("Cidade com maior PIB: %s\n", cidade1);
    else if (pib2 > pib1)
        printf("Cidade com maior PIB: %s\n", cidade2);
    else
        printf("PIBs são iguais!\n");

    if (pontosTuristicos1 > pontosTuristicos2)
        printf("Cidade com mais pontos turísticos: %s\n", cidade1);
    else if (pontosTuristicos2 > pontosTuristicos1)
        printf("Cidade com mais pontos turísticos: %s\n", cidade2);
    else
        printf("Número de pontos turísticos é igual!\n");

    // Densidade populacional e PIB per capita
    double densidade1 = populacao1 / area1;
    double densidade2 = populacao2 / area2;
    double perCapita1 = pib1 / populacao1;
    double perCapita2 = pib2 / populacao2;

    printf("\nDensidade Populacional 1: %.2f\n", densidade1);
    printf("Densidade Populacional 2: %.2f\n", densidade2);

    printf("PIB Per Capita 1: %.2f\n", perCapita1);
    printf("PIB Per Capita 2: %.2f\n", perCapita2);

    return 0;
}