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
    printf("Digite o número da carta:", &numero_da_carta);
    scanf("%s", &numero_da_carta);
    printf("Cidade: %s\n", cidade);
    printf("Digite a população:\n", &populacao);
    scanf("%d", &populacao);
    printf("Digite a área: km²\n", &area);
    scanf("%f", &area);
    printf("Digite o PIB: R$ bilhões\n", &pib);
    scanf("%lf", &pib);
    printf("Digite o número de pontos turísticos: ", pontos_turisticos);
    scanf("%d", &pontos_turisticos);

     printf("estado2: %s\n", estado2);
    printf("Digite o numero da carta:", &numero_da_carta2);
    scanf("%s", &numero_da_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("Digite a população:", &populacao2);
    scanf("%d", &populacao2);
    printf("Digite a área em Km²:", &area2);
    scanf("%f", &area2);
    printf("Digite o PIB em bilhões:", &pib);
    scanf("%lf", &pib2);
    printf("Digite o número de pontos turísticos:", &pontos_turisticos2);
    scanf("%d", &pontos_turisticos2);

    

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
