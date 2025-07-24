#include <stdio.h>

int main() {
    // Declaração variáveis Carta 1
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    double area;
    double PIB;
    int pontos_turisticos;

    // Declaração variáveis Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float PIB2;
    int pontos_turisticos2;

    // Cadastro da Carta 1
    printf("Cadastro da carta 1\n");
    printf("Digite o Estado (letra de A a H): \n");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta (ex:A01): \n");
    scanf(" %s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", nomeCidade);

    printf("Digite a Populacao da cidade: \n");
    scanf(" %d", &populacao);

    printf("Digite a Area da cidade (em km): ");
    scanf(" %lf", &area);

    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf(" %lf", &PIB);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf(" %d", &pontos_turisticos);

    printf("\n");

    // Cadastro da Carta 2
    printf("Cadastro da carta 2\n");
    printf("Digite o Estado (letra de A a H):  ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex:A01):  ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade:  ");
    scanf(" %s", nomeCidade2);

    printf("Digite a Populacao da cidade:  ");
    scanf(" %d", &populacao2);

    printf("Digite a Area da cidade (em km): ");
    scanf(" %lf \n", &area2);

    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf(" %f \n", &PIB2);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf(" %d \n", &pontos_turisticos2);

    printf("\n");

    // Exibição dos dados da Carta 1
    printf("Carta 1\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Área da cidade: %.2lf km\n", area);
    printf("PIB: %.2lf bilhoes de reais\n", PIB);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);

    printf("\n");

    // Exibição dos dados da Carta 2
    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area da cidade: %.2lf km \n", area2);
    printf("PIB: %.2lf bilhoes de reais\n", PIB2);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos2);

    return 0;
}
