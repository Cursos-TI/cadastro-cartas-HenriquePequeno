#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int populacao1, populacao2, turistico1, turistico2;
  float area_km1, area_km2, pib1, pib2;
  char estado1, estado2;
  char cod_carta1[5], cod_carta2[5], nome_cidade1[30], nome_cidade2[30];

  // Área para entrada de dados

    printf("Dados da primeira carta\n");  
    printf("Informe o nome do Estado\n");
    printf("(O estado deve ser uma letra entra 'A' a 'H'): ");
    scanf("%c", &estado1);

    printf("Informe o código da Carta\n");
    printf("(O código deve ser um número entra '01' a '04'): ");
    scanf("%s", cod_carta1);

    printf("Informe o nome da cidade: ");
    scanf("%s", nome_cidade1);

    printf("Informe o número da população: ");
    scanf("%d", &populacao1);

    printf("Informe a área em Km²: ");
    scanf("%f", &area_km1);

    printf("Informe o PIB: ");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d\n", &turistico1);


    printf("Dados da segunda carta\n");
    printf("Informe o nome do Estado\n");
    printf("(O estado deve ser uma letra entra 'A' a 'H'): ");
    scanf("%c", &estado2);

    printf("Informe o código da Carta\n");
    printf("(O código deve ser um número entra '01' a '04'): ");
    scanf("%s", cod_carta2);

    printf("Informe o nome da cidade: ");
    scanf("%s", nome_cidade2);

    printf("Informe o número da população: ");
    scanf("%d", &populacao2);

    printf("Informe a área em Km²: ");
    scanf("%f", &area_km2);

    printf("Informe o PIB: ");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &turistico2);

  // Área para exibição dos dados da cidade

    printf("\n\nCarta 1:\n");
    printf("Estado: %c\n", estado1);

    printf("Código da Carta: %c%s\n",estado1, cod_carta1);

    printf("Nome da cidade: %s\n", nome_cidade1);

    printf("População: %d\n", populacao1);

    printf("Área: %f Km²\n", area_km1);

    printf("PIB: %f\n", pib1);

    printf("Número de pontos turísticos: %d\n", turistico1);


    printf("\n\nCarta 2:\n");
    printf("Estado: %c\n", estado2);

    printf("Código da Carta: %c%s\n",estado2, cod_carta2);

    printf("Nome da cidade: %s\n", nome_cidade2);

    printf("População: %d\n", populacao2);

    printf("Área: %f Km²\n", area_km2);

    printf("PIB: %f\n", pib2);

    printf("Número de pontos turísticos: %d\n", turistico2);

return 0;
}