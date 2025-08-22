#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Roque tentativa de cadastro.

int main() {

    char estado[30] = "Amazonas";
char numero_da_carta[30] = "A01";
char cidade[50] = "Manaus";
int populacao = 4207714;
float area = 1559159.0; // em km²
double pib = 114.0; // em bilhões de R$
int pontos_turisticos = 10; // Exemplo de número de pontos turísticos

char estado2[30] = "Pará";
char numero_da_carta2[30] = "P01";
char cidade2[50] = "Belém";
int populacao2 = 8617732;
float area2 = 1247695.0; // em km²
double pib2 = 82.0; // em bilhões de R$
int pontos_turisticos2 = 8; // Exemplo de número de pontos turísticos


    // Exibindo as informações
    
    printf("Estado: %s\n", estado);
    printf("Número da carta: %s\n", numero_da_carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.1f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n\n", pontos_turisticos);

    printf("estado2: %s\n", estado2);
    printf("Número da carta: %s\n", numero_da_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.1f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

    


    return 0;
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
