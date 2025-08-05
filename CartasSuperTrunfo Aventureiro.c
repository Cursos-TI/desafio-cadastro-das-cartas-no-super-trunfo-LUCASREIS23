#include <stdio.h>

int main() {
    char estado, codigo[4], nomeCidade[50];
    int populacao, pontos_turisticos;
    float area, PIB;

    char estado2, codigo2[4], nomeCidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, PIB2;

    float densidade1, pib_per_capita1;
    float densidade2, pib_per_capita2;

    // Carta 1
    printf("Cadastro da carta 1\n");
    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade);
    getchar(); // limpa o buffer

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a area da cidade (em km2): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &pontos_turisticos);

    // Carta 2
    printf("\nCadastro da carta 2\n");
    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    getchar(); // limpa o buffer

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos
    densidade1 = populacao / area;
    pib_per_capita1 = (PIB * 1e9) / populacao;

    densidade2 = populacao2 / area2;
    pib_per_capita2 = (PIB2 * 1e9) / populacao2;

    // Exibição
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f bilhoes de reais\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", PIB2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita2);

    return 0;
}
