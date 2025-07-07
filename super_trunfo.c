#include <stdio.h>

// Programa para cadastrar duas cartas de Super Trunfo com dados sobre cidades brasileiras.
// Cada carta possui estado, código, nome da cidade, população, área, PIB e número de pontos turísticos.

int main() {
    // Declaração das variáveis da Carta 1
    char estado1;                         // Estado representado por uma letra de 'A' a 'H'
    char codigo1[4];                      // Código da carta (ex: A01, B02)
    char nomeCidade1[50];                // Nome da cidade
    int populacao1;                       // População da cidade
    float area1;                          // Área da cidade em km²
    float pib1;                           // PIB da cidade
    int pontosTuristicos1;               // Número de pontos turísticos

    // Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Leitura dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado1); // Espaço antes de %c para ignorar newline
    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Lê uma string com espaços
    printf("Informe a População da Cidade: ");
    scanf("%d", &populacao1);
    printf("Informe a Área da Cidade (em km2): ");
    scanf("%f", &area1);
    printf("Informe o PIB da Cidade (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Informe o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Informe a População da Cidade: ");
    scanf("%d", &populacao2);
    printf("Informe a Área da Cidade (em km2): ");
    scanf("%f", &area2);
    printf("Informe o PIB da Cidade (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}