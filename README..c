#include <stdio.h>

int main() {
    signed long int populacao1;
    int ponto_turisticos1;
    char nome_cidade1[20], nome_estado1[20], codigo1[10];
    float area1, PIB1;

    // Cadastro carta 1
    printf("----CADASTRO DE CARTA 1----\n");
    printf("Digite o estado: \n");
    scanf("%s", nome_estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade1);

    printf("Digite a população: \n");
    scanf("%ld", &populacao1);

    printf("Digite a área em km²:\n");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões):\n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &ponto_turisticos1);

    PIB1 = PIB1 * 1000000000; // Converter para reais
    float densidade1 = populacao1 / area1;
    float percapita1 = PIB1 / populacao1;

    printf("Carta 1 cadastrada:\n");
    printf("Estado: %s | Código: %s | Cidade: %s\n", nome_estado1, codigo1, nome_cidade1);
    printf("População: %ld | Área: %.2f km² | PIB: %.2f R$ | Pontos turísticos: %d\n", populacao1, area1, PIB1, ponto_turisticos1);
    printf("Densidade Populacional: %.2f hab/km² | PIB per capita: %.2f R$\n", densidade1, percapita1);

    // Cadastro carta 2
    signed long int populacao2;
    int ponto_turisticos2;
    char nome_cidade2[20], nome_estado2[20], codigo2[10];
    float area2, PIB2;

    printf("\n----CADASTRO DE CARTA 2----\n");
    printf("Digite o estado: \n");
    scanf("%s", nome_estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade2);

    printf("Digite a população: \n");
    scanf("%ld", &populacao2);

    printf("Digite a área em km²:\n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões):\n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &ponto_turisticos2);

    PIB2 = PIB2 * 1000000000; // Converter para reais
    float densidade2 = populacao2 / area2;
    float percapita2 = PIB2 / populacao2;

    printf("Carta 2 cadastrada:\n");
    printf("Estado: %s | Código: %s | Cidade: %s\n", nome_estado2, codigo2, nome_cidade2);
    printf("População: %ld | Área: %.2f km² | PIB: %.2f R$ | Pontos turísticos: %d\n", populacao2, area2, PIB2, ponto_turisticos2);
    printf("Densidade Populacional: %.2f hab/km² | PIB per capita: %.2f R$\n", densidade2, percapita2);

    // COMPARAÇÃO — usando POPULAÇÃO 
    printf("\n----COMPARAÇÃO DE CARTAS (Atributo: População)----\n");
    printf("Carta 1 - %s (%s): %ld habitantes\n", nome_cidade1, nome_estado1, populacao1);
    printf("Carta 2 - %s (%s): %ld habitantes\n", nome_cidade2, nome_estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
