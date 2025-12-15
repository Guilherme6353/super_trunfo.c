#include <stdio.h>

int main(){
    int populacao1, populacao2, carta1,carta2, num_pont_turisticos1,num_pont_turisticos2;
    float area1, area2, pib1, pib2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50], estado1[50], estado2[50];

    printf("Informe o nome da 1ª Cidade: ");
    scanf(" %99[^\n]", &cidade1); // Lê até a quebra de linha, com espaço para consumir resíduos do buffer.

    printf("informe a população: ");
    scanf("%d", &populacao1);

    printf("Informe o número da Carta: ");
    scanf("%d", &carta1);

    printf("Informe o código da Cidade: ");
    scanf(" %s", &codigo1);

    printf("Informe a número de pontos turísticos: ");
    scanf(" %d", &num_pont_turisticos1);

    printf("Informe a área: ");
    scanf("%f", &area1);

    printf("Informe o PIB: ");
    scanf("%f", &pib1);

    printf("Informe o Estado: ");
    scanf(" %99[^\n]", &estado1);

     printf("Informe o nome da 2ª Cidade: ");
    scanf(" %99[^\n]", &cidade2); // Lê até a quebra de linha, com espaço para consumir resíduos do buffer.

    printf("informe a população: ");
    scanf("%d", &populacao2);

    printf("Informe o número da Carta: ");
    scanf("%d", &carta2);

    printf("Informe o código da Cidade: ");
    scanf(" %s", &codigo2);

    printf("Informe a número de pontos turísticos: ");
    scanf(" %d", &num_pont_turisticos2);

    printf("Informe a área: ");
    scanf("%f", &area2);

    printf("Informe o PIB: ");
    scanf("%f", &pib2);

    printf("Informe o Estado: ");
    scanf(" %99[^\n]", &estado2);

    printf("\n--- Dados das Cidades ---\n");

    printf("Carta: %d\n", carta1);
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f  Bilhões de Reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", num_pont_turisticos1);

    printf("______________________________________________________\n");

    printf("Carta: %d\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f  Bilhões de Reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", num_pont_turisticos2);
    
    return 0;
}