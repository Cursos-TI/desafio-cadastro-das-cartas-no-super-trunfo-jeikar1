/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

 int main() {
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    char estado1[50], estado2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

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
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

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
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    printf("\nDados da Carta 1\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Cidade: %s\n", cidade1);
    printf("Estado: %s\n", estado1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);

    printf("\nDados da Carta 2\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Cidade: %s\n", cidade2);
    printf("Estado: %s\n", estado2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;
}
