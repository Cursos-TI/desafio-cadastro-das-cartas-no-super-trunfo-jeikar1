#include <stdio.h>

int main() {
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    char estado1[50], estado2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;

    printf("Desafio Criando as Cartas do Super Trunfo!\n");

    printf("Cadastro da Carta 1:\n");
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite o nome do estado: ");
    scanf(" %[^\n]", estado1);
    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = ((pib1*1000000000) / populacao1); 

    printf("\nCadastro da Carta 2:\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigo2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite o nome do estado: ");
    scanf(" %[^\n]", estado2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = ((pib2*1000000000) / populacao2);

    printf("\nDados da Carta 1\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Cidade: %s\n", cidade1);
    printf("Estado: %s\n", estado1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita1);

    printf("\nDados da Carta 2\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Cidade: %s\n", cidade2);
    printf("Estado: %s\n", estado2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita2);

    return 0;
}
