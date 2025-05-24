#include <stdio.h>

int main(){
    // informaçoes necessarias para as cartas do jogo.
    int carta1= 1;
    int carta2 = 2;
    char estado[50];
    char codigo;
    char cidade[8];
    int populacao;
    float area;
    float pib;
    int pontoTuristico;
    double densidadePopulacional, pibPercapita;

    //pedindo as informaçoes ao jogador 1 para imprimir o resultado na tela.
    printf("Digite o Estado 1: \n");
    scanf("%s", &estado);

    printf("Digite o Código 1: \n");
    scanf("%i", &codigo);

    printf("Digite a Cidade 1: \n");
    scanf("%s", &cidade);

    printf("Digite a População 1: \n");
    scanf("%d", &populacao);

    printf("Digite a Área 1: \n");
    scanf("%f", &area);

    printf("Digite o PIB 1: \n");
    scanf("%d", &pib);

    printf("Quantidade de Ponto Turisticos 1: \n");
    scanf("%d", &pontoTuristico);

    // imprimindo dados da carta do primeiro jogador na tela.
    printf("Carta1: %i\n", carta1);
    printf("Estado: %s\n", estado);
    printf("Código: %i\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %d\n", pib);
    printf("Quantida de Ponto Turistico: %d\n", pontoTuristico);

    // pedindo as informaçoes ao jogador 2 para imprimir na tela.
    printf("Digite o Estado 2: \n");
    scanf("%s", &estado);

    printf("Digite o Código 2: \n");
    scanf("%i", &codigo);

    printf("Digite a Cidade 2: \n");
    scanf("%s", &cidade);

    printf("Digite a População 2: \n");
    scanf("%d", &populacao);

    printf("Digite a Área 2: \n");
    scanf("%f", &area);

    printf("Digite o PIB 2: \n");
    scanf("%d", &pib);

    printf("Quantidade de Ponto Turisticos 2: \n");
    scanf("%d", &pontoTuristico);

    // imprimindo dados da carta do jogador 2 na tela.
    printf("Carta2: %i\n", carta);
    printf("Estado: %s\n", estado);
    printf("Código: %i\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %d\n", pib);
    printf("Quantida de Ponto Turistico: %d\n", pontoTuristico);

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

    densidadePopulacional = populacao / area;
    pibPercapita = pib / polulacao;

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
