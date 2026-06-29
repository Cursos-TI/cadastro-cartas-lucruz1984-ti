#include<stdio.h>

int main(){
    char carta1;
    char estado1;
    char codigo1[4];
    char cidade1[20];
    int populacao1;
    float area1;
    float PIB1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float PIBpercapita1;

    printf("Carta 1: \n", carta1);

    printf("Digite o estado (uma letra de A a H): \n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (letra seguida de 2 números): \n");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade (sem espaços): \n");
    scanf(" %s", cidade1);

    printf("Digite a populacao da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhoes de reais): \n");   
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf("%d", &pontosturisticos1);

    densidadepopulacional1 = (float)populacao1 / area1;
    PIBpercapita1 = PIB1 * 1000000000 / populacao1;

    printf("\n");

    printf("Carta 1: \n", carta1);
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);   
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);  
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", PIB1);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f reais/hab\n", PIBpercapita1);

    char carta2;
    char estado2;
    char codigo2[4];
    char cidade2[20];
    int populacao2;
    float area2;
    float PIB2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float PIBpercapita2;

    printf("\n");

    printf("Carta 2: \n", carta2);

    printf("Digite o estado (uma letra de A a H): \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (letra seguida de 2 números): \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade (sem espaços): \n");
    scanf("%s", &cidade2);

    printf("Digite a populacao da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhoes de reais): \n");   
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontosturisticos2);

    densidadepopulacional2 = (float)populacao2 / area2;
    PIBpercapita2 = PIB2 * 1000000000 / populacao2;

    printf("\n");
    
    printf("Carta 2: \n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);   
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);  
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", PIB2);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais/hab\n", PIBpercapita2);
    
    return 0;
}

