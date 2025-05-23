#include <stdio.h>

int main(){
    // informaçoes necessarias para as cartas do jogo.
    int carta1 = 1;
    int carta2 = 2;
    char estado1[50];
    char estado2[50];
    char codigo1;
    char codigo2;
    char cidade1[8];
    char cidade2[8]
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int pontoTuristico1;
    int pontoTuristico2;

    //pedindo as informaçoes ao jogador 1 para imprimir o resultado na tela.
    printf("Digite o Estado 1: \n");
    scanf("%s", &estado1);

    printf("Digite o Código 1: \n");
    scanf("%i", &codigo1);

    printf("Digite a Cidade 1: \n");
    scanf("%s", &cidade1);

    printf("Digite a População 1: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB 1: \n");
    scanf("%d", &pib1);

    printf("Quantidade de Ponto Turisticos 1: \n");
    scanf("%d", &pontoTuristico1);

    // imprimindo dados da carta do primeiro jogador na tela.
    printf("Carta: %i\n", carta1);
    printf("Estado: %s\n", estado1);
    printf("Código: %i\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %d\n", pib1);
    printf("Quantida de Ponto Turistico: %d\n", pontoTuristico1);

    // pedindo as informaçoes ao jogador 2 para imprimir na tela.
    printf("Digite o Estado 2: \n");
    scanf("%s", &estado2);

    printf("Digite o Código 2: \n");
    scanf("%i", &codigo2);

    printf("Digite a Cidade 2: \n");
    scanf("%s", &cidade2);

    printf("Digite a População 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB 2: \n");
    scanf("%d", &pib2);

    printf("Quantidade de Ponto Turisticos 2: \n");
    scanf("%d", &pontoTuristico2);

    // imprimindo dados da carta do jogador 2 na tela.
    printf("Carta2: %i\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Código: %i\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %d\n", pib2);
    printf("Quantida de Ponto Turistico: %d\n", pontoTuristico2);

    return 0;
} 

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    if (populacao1 > populacao2) {
        printf("Cidade 1 tem maior população.\n");
    } else {
        printf("Cidade 2 tem maior população.\n");
     }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
