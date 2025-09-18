
#include <stdio.h>

int main(){

    int opção, resultado;
    
    // Primeira carta

    char estado[30] = "Amazonas";
    char numero_da_carta[30];
    char cidade[50] = "Manaus";
    unsigned long int populacao = 4207714;
    float area = 1550000 ; // em km²
    double pib = 10; // em bilhões de R$
    int pontos_turisticos = 8; // Exemplo de número de pontos turísticos
    float densidade_populacional = 2.71;
    float pib_percapta = 2300;

    // Segunda carta

    char estado2[30] = "Pará";  
    char numero_da_carta2[30];
    char cidade2[50] = "Belém";
    unsigned long int populacao2 = 8777123;
    float area2 = 1240000 ; // em km²
    double pib2 = 8.5; // em bilhões de R$
    int pontos_turisticos2 = 10; // Exemplo de número de pontos turísticos
    float densidade_populacional2 = 6.8;
    float pib_percapta2 = 2100;

    printf("**** Super Trunfo - Estados do Norte do Brasil ****\n");
    printf("Pará x Amazonas\n");
    printf("iniciar jogo\n");

    printf("Escolha uma opção para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    scanf("%d", &opção);

    printf("Escolha um Estado:\n");
    printf("1 - Pará\n");
    printf("2 - Amazonas\n");
    scanf("%d", &resultado);

    //A logica do jogo, consiste em estrutura if else e switch case e Operaçoes ternárias.

    switch (opção)
    {
    case 1:
        printf("Você escolheu População.\n");
        resultado = (populacao < populacao2) ? 1 : 0;
        printf("A população do %s é: %lu\n", estado, populacao);
        printf("A população do %s é: %lu\n", estado2, populacao2);
        break;
    case 2:
        printf("Você escolheu Área.\n");
        resultado = (area > area2) ? 1 : 0;
        printf("A área do %s é: %.2f km²\n", estado, area);
        printf("A área do %s é: %.2f km²\n", estado2, area2);
        break;
    case 3:
        printf("Você escolheu PIB.\n");
        resultado = (pib > pib2) ? 1 : 0;
        printf("O PIB do %s é: %.2f bilhões de R$\n", estado, pib);
        printf("O PIB do %s é: %.2f bilhões de R$\n", estado2, pib2);
        break;
    case 4:
        printf("Você escolheu Pontos Turísticos.\n");
        resultado = (pontos_turisticos > pontos_turisticos2) ? 1 : 0;
        printf("O número de pontos turísticos do %s é: %d\n", estado, pontos_turisticos);
        printf("O número de pontos turísticos do %s é: %d\n", estado2, pontos_turisticos2);
        break;
    case 5:
        printf("Você escolheu Densidade Populacional.\n");
        resultado = (densidade_populacional < densidade_populacional2) ? 1 : 0;
        printf("A densidade populacional do %s é: %.2f hab/km²\n", estado, densidade_populacional);
        printf("A densidade populacional do %s é: %.2f hab/km²\n", estado2, densidade_populacional2);
        break;
    case 6:
        printf("Você escolheu PIB per capita.\n");
        resultado = (pib_percapta > pib_percapta2) ? 1 : 0;
        printf("O PIB per capita do %s é: %.2f R$\n", estado, pib_percapta);
        printf("O PIB per capita do %s é: %.2f R$\n", estado2, pib_percapta2);
        break;
    default:
        printf("Opção de jogo inválida!\n");
        
    }

    if (resultado == 1)
    {
        printf("Parabéns! Você acertou!\n");
    }
    else if (resultado == 0)
    {
        printf("Que pena! Você errou. Tente novamente.\n");
    }
    else
    {
        printf("Fim de jogo!\n");
    }
    return 0;
}
