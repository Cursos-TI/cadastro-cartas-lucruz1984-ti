#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char carta;
char estado;
char codigo[4];
char cidade [20];
int populacao;
float area;
float PIB;
int pontosturisticos;

  // Área para entrada de dados
printf("Carta 1: \n", carta);

printf("Digite o estado (uma letra de A a H): \n");
scanf("%c", &estado);

printf("Digite o código da carta (letra seguida de 2 números) \n");
scanf("%s", codigo);

printf("Digite o nome da cidade (sem espaços): \n");
scanf("%s", cidade);

printf("Digite a população da cidade: \n");
scanf("%d", &populacao);

printf("Digite a área da cidade (em km²): \n");
scanf("%f", &area);

printf("Digite o PIB da cidade (em bilhões de reais): \n");
scanf("%f", &PIB);

printf("Digite o número de pontos turísticos da cidade: \n");
scanf("%d", &pontosturisticos);

printf("Carta 2: \n", carta);
printf("Digite o estado (uma letra de A a H): \n");
scanf("%c", &estado);

printf("Digite o código da carta (letra seguida de 2 números): \n");
scanf("%s", codigo);

printf("Digite o nome da cidade (sem espaços): \n");
scanf("%s", cidade);

printf("Digite a população da cidade: \n");
scanf("%d", &populacao);

printf("Digite a área da cidade (em km²): \n");
scanf("%f", &area);

printf("Digite o PIB da cidade (em bilhões de reais): \n");
scanf("%f", &PIB);

printf("Digite o número de pontos turísticos da cidade: \n");
scanf("%d", &pontosturisticos);

  // Área para exibição dos dados da cidade
printf("Carta 1: \n", carta);
printf("Estado: %c\n", estado);
printf("Código: %s\n", codigo);
printf("Nome da Cidade: %s\n", cidade);
printf("População: %d\n", populacao);
printf("Área: %.2f km²\n", area);
printf("PIB: %.2f bilhões de reais\n", PIB);
print("Número de Pontos Turísticos: %d\n", pontosturisticos);

printf("\n");

printf("Carta 2: \n", carta);
printf("Estado: %c\n", estado);
printf("Código: %s\n", codigo);
printf("Nome da Cidade: %s\n", cidade);
printf("População: %d\n", populacao);
printf("Área: %.2f km²\n", area);
printf("PIB: %.2f bilhões de reais\n", PIB);
printf("Número de Pontos Turísticos: %d\n", pontosturisticos);

return 0;
} 
