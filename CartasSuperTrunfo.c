#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char c1_estado;
    char c1_codigo[3];
    char c1_nome[50];
    int c1_populacao;
    float c1_area;
    float c1_pib;
    int c1_pontos_turisticos;

    char c2_estado;
    char c2_codigo[3];
    char c2_nome[50];
    int c2_populacao;
    float c2_area;
    float c2_pib;
    int c2_pontos_turisticos;

    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &c1_estado);
    printf("Codigo: ");
    scanf("%s", c1_codigo);
    printf("Nome: ");
    scanf(" %[^\n]", c1_nome);
    printf("Populacao: ");
    scanf("%d", &c1_populacao);
    printf("Area (km2): ");
    scanf("%f", &c1_area);
    printf("PIB (em bilhoes): ");
    scanf("%f", &c1_pib);
    printf("Pontos Turisticos: ");
    scanf("%d", &c1_pontos_turisticos);

    printf("\nDados das Carta 1:\n");
    printf("Estado: %c\n", c1_estado);
    printf("Codigo: %s\n", c1_codigo);
    printf("Nome: %s\n", c1_nome);
    printf("Populacao: %d\n", c1_populacao);
    printf("Area: %.2f km2\n", c1_area);
    printf("PIB: %.2f bilhoes\n", c1_pib);
    printf("Pontos Turisticos: %d\n", c1_pontos_turisticos);


    printf("\nCadastro da Carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &c2_estado);
    printf("Codigo: ");
    scanf("%s", c2_codigo);
    printf("Nome: ");
    scanf(" %[^\n]", c2_nome);
    printf("Populacao: ");
    scanf("%d", &c2_populacao);
    printf("Area (km2): ");
    scanf("%f", &c2_area);
    printf("PIB (em bilhoes): ");
    scanf("%f", &c2_pib);
    printf("Pontos Turisticos: ");
    scanf("%d", &c2_pontos_turisticos);
    
    printf("\nDados das Carta 2:\n");
    printf("Estado: %c\n", c2_estado);
    printf("Codigo: %s\n", c2_codigo);
    printf("Nome: %s\n", c2_nome);
    printf("Populacao: %d\n", c2_populacao);
    printf("Area: %.2f km2\n", c2_area);
    printf("PIB: %.2f bilhoes\n", c2_pib);
    printf("Pontos Turisticos: %d\n", c2_pontos_turisticos);

    return 0;
}
