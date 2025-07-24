#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Cadastro Carta 1
    char codigo1 [4];
    char cidade1 [50];
    int populacao1;
    float area1;
    float PIB1;
    int turisticos1;
    // Cadastro Carta 2
    char codigo2 [4];
    char cidade2 [50];
    int populacao2;
    float area2;
    float PIB2;
    int turisticos2;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
   
    //Cadastro Carta 1
    printf("Digite o codigo da carta:\n ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade:\n ");
    scanf("%s", cidade1);
     printf("Digite a população da cidade:\n ");
    scanf("%d", &populacao1);
     printf("Digite a área da cidade:\n ");
    scanf("%f", &area1);
     printf("Digite o PIB da cidade :\n ");
    scanf("%f", &PIB1);
     printf("Digite quantos pontos turisticos tem na cidade:\n ");
    scanf("%d", &turisticos1);


    //Cadastro Carta 2
    printf("Digite o codigo da carta:\n ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade:\n ");
    scanf("%s", cidade2);
    printf("Digite a populacao da cidade:\n ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade:\n ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade :\n ");
    scanf("%f", &PIB2);
    printf("Digite quantos pontos turisticos tem na cidade:\n ");
    scanf("%d", &turisticos2);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    //Exibindo Carta 1
    printf("\nCarta %s: \n", codigo1);
    printf("- Cidade: %s \n", cidade1);
    printf("- População: %d \n", populacao1);
    printf("- Área: %2f km² \n", area1);
    printf("- PIB: %2f \n", PIB1);
    printf("- Pontos Turísticos: %d \n", turisticos1);

    //Exibindo Carta 2
    printf("\nCarta %s: \n", codigo2);
    printf("- Cidade: %s \n", cidade2);
    printf("- População: %d \n", populacao2);
    printf("- Área: %2f km² \n", area2);
    printf("- PIB: %2f \n", PIB2);
    printf("- Pontos Turísticos: %d \n", turisticos2);



    
    return 0;
}
