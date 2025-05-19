#include <stdio.h>


int main() {
    char codigo1[4];
    char codigo2[4];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int pontosTuristicos1;
    int pontosTuristicos2;

    printf("Desafio Criando as Cartas do Super Trunfo!\n");


    printf("Cadastro da Carta 1:\n");
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", &codigo1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

   
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o código da cidade: ");
    scanf("%s", &codigo2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    
    printf("\n Dados da Carta 1 \n");
    printf("Código: %s\n",codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    return 0;
}
