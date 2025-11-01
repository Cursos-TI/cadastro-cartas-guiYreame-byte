#include <stdio.h>

// Estrutura para armazenar os dados de uma carta do Super Trunfo
typedef struct {
    char estado;              // Letra de A a H
    char codigo[4];           // Código da carta (ex: A01)
    char nome_cidade[50];     // Nome da cidade
    int populacao;            // Número de habitantes
    float area;               // Área em km²
    float pib;                // PIB em bilhões de reais
    int pontos_turisticos;    // Número de pontos turísticos
} Carta;

int main() {
    Carta carta1, carta2; // Declaração das duas cartas

    // Boas-vindas ao usuário
    printf("=== Programa Super Trunfo ===\n");
    printf("Você irá cadastrar os dados de duas cartas.\n");

    // Leitura dos dados da Carta 1
    printf("\n=== Inserção dos dados da Carta 1 ===\n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &carta1.estado);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta1.nome_cidade);
    printf("Digite a população (número inteiro): ");
    scanf("%d", &carta1.populacao);
    printf("Digite a área em km² (ex: 1521.11): ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB em bilhões de reais (ex: 699.28): ");
    scanf("%f", &carta1.pib);
    printf("Digite o número de pontos turísticos (inteiro): ");
    scanf("%d", &carta1.pontos_turisticos);

    // Leitura dos dados da Carta 2
    printf("\n=== Inserção dos dados da Carta 2 ===\n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &carta2.estado);
    printf("Digite o código da carta (ex: B01): ");
    scanf("%s", carta2.codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta2.nome_cidade);
    printf("Digite a população (número inteiro): ");
    scanf("%d", &carta2.populacao);
    printf("Digite a área em km² (ex: 1200.25): ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB em bilhões de reais (ex: 300.50): ");
    scanf("%f", &carta2.pib);
    printf("Digite o número de pontos turísticos (inteiro): ");
    scanf("%d", &carta2.pontos_turisticos);

    // Exibição dos dados da Carta 1
    printf("\n=== Dados Cadastrados ===\n");
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontos_turisticos);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontos_turisticos);

    return 0;
}