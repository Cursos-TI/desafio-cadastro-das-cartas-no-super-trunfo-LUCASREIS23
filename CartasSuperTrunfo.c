#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Lucas Reis

int main() {
    char estado, codigo[4], nomeCidade[50];
    int populacao, pontos_turisticos;
    float area, PIB;

    char estado2, codigo2[4], nomeCidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, PIB2;

    // Carta 1
    printf("Cadastro da carta 1\n");
    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade);
    getchar(); // <-- remove o '\n' que ficou no buffer

    printf("Digite a populacao da cidade: ");
    scanf(" %d", &populacao);

    printf("Digite a area da cidade (em km2): ");
    scanf(" %f", &area);

    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf(" %f", &PIB);

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf(" %d", &pontos_turisticos);

    // Carta 2
    printf("\nCadastro da carta 2\n");
    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    getchar(); // <-- novamente limpa o buffer

    printf("Digite a populacao da cidade: ");
    scanf(" %d", &populacao2);

    printf("Digite a area da cidade (em km2): ");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf(" %f", &PIB2);

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf(" %d", &pontos_turisticos2);

    // Exibicao
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f bilhoes de reais\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", PIB2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);

    return 0;
