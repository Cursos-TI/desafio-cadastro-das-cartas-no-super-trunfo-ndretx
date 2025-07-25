#include <stdio.h>

int main() {
    // Cadastro Carta 1
    char codigo1[4];
    char estado1[50];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float densidade1;
    float PIB1;
    float PIBpercapita1;
    int turisticos1;
    
    // Cadastro Carta 2
    char codigo2[4];
    char cidade2[50];
    char estado2[50];
    unsigned long int populacao2;
    float area2;
    float densidade2;
    float PIB2;
    float PIBpercapita2;
    int turisticos2;

    // Cadastro Carta 1
    printf("Digite o codigo da carta (3 letras): ");
    scanf("%3s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", cidade1);  // Espaço antes do % para consumir o \n anterior
    
    printf("Digite o nome do Estado: ");
    scanf(" %49[^\n]", estado1);
    
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1);
    
    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &PIB1);
    
    printf("Digite quantos pontos turisticos tem na cidade: ");
    scanf("%d", &turisticos1);

    // Cadastro Carta 2
    printf("\nDigite o codigo da carta (3 letras): ");
    scanf("%3s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", cidade2);
    
    printf("Digite o nome do Estado: ");
    scanf(" %49[^\n]", estado2);
    
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);
    
    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &PIB2);
    
    printf("Digite quantos pontos turisticos tem na cidade: ");
    scanf("%d", &turisticos2);

    // Cálculos para Carta 1
    densidade1 = (area1 > 0.0f) ? (float)populacao1 / area1 : 0.0f;
    PIBpercapita1 = (populacao1 > 0) ? (PIB1 * 1000000000.0f) / populacao1 : 0.0f;

    // Cálculos para Carta 2
    densidade2 = (area2 > 0.0f) ? (float)populacao2 / area2 : 0.0f;
    PIBpercapita2 = (populacao2 > 0) ? (PIB2 * 1000000000.0f) / populacao2 : 0.0f;

    // Exibição Carta 1
    printf("\n=== Carta %s ===\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Estado: %s\n", estado1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("Densidade: %.2f hab/km²\n", densidade1);
    printf("PIB: R$ %.2f bilhões\n", PIB1);
    printf("PIB per capita: R$ %.2f\n", PIBpercapita1);
    printf("Pontos Turísticos: %d\n", turisticos1);

    // Exibição Carta 2
    printf("\n=== Carta %s ===\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Estado: %s\n", estado2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("Densidade: %.2f hab/km²\n", densidade2);    
    printf("PIB: R$ %.2f bilhões\n", PIB2);
    printf("PIB per capita: R$ %.2f\n", PIBpercapita2);
    printf("Pontos Turísticos: %d\n", turisticos2);

    return 0;
}