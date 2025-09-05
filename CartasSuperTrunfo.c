#include <stdio.h>

int main(){


    //desafio editado até o nível aventureiro
    
    // Primeira carta

    char estado[30] = "Amazonas";
    char numero_da_carta[30];
    char cidade[50] = "Manaus";
    int populacao;
    float area; // em km²
    double pib; // em bilhões de R$
    int pontos_turisticos; // Exemplo de número de pontos turísticos
    float densidade_populacional;
    float pib_percapta;

    printf("Estado: %s\n", estado);
    printf("Digite o número da carta: %s\n", numero_da_carta);
    scanf("%s", numero_da_carta);  
    printf("Cidade: %s\n", cidade);
    printf("Digite a população: %d\n", populacao);
    scanf("%d", &populacao);
    printf("Digite a área: %.1f km²\n", area);
    scanf("%f", &area);
    printf("Digite o PIB: R$ %.2f bilhões\n", pib);
    scanf("%lf", &pib);
    printf("Digite o número de pontos turísticos: %d\n", pontos_turisticos);
    scanf("%d", &pontos_turisticos);

    // Cálculo da densidade populacional e PIB per capita
    densidade_populacional = populacao / area;
    pib_percapta = (pib * 1e9) / populacao; // Convertendo PIB para reais
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional);
    printf("PIB per capita: R$ %.2f\n", pib_percapta);

    // Segunda carta

    char estado2[30] = "Pará";  
    char numero_da_carta2[30];
    char cidade2[50] = "Belém";
    int populacao2;
    float area2; // em km²
    double pib2; // em bilhões de R$
    int pontos_turisticos2; // Exemplo de número de pontos turísticos
    float densidade_populacional2;
    float pib_percapta2;

    printf("Estado: %s\n", estado2);
    printf("Digite o número da carta: %s\n", numero_da_carta2);
    scanf("%s", numero_da_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("Digite a população: %d\n", populacao2);
    scanf("%d", &populacao2);
    printf("Digite a área: %.1f km²\n", area2);
    scanf("%f", &area2);
    printf("Digite o PIB: R$ %.2f bilhões\n", pib2);
    scanf("%lf", &pib2);
    printf("Digite o número de pontos turísticos: %d\n", pontos_turisticos2);
    scanf("%d", &pontos_turisticos2);

    densidade_populacional2 = (float)populacao2 / area2;
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional2);
    pib_percapta2 = (pib2 * 1e9) / populacao2; // Convertendo PIB para reais
    printf("PIB per capita: R$ %.2f\n", pib_percapta2);

    return 0;
}
