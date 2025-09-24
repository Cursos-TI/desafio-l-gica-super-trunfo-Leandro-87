#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char state[5], city[30], stateB[5], cityB[30];
  int population, points, populationB, pointsB;
  double area, pib, areaB, pibB, densityPop, densityPopB, pibPerCapita, pibPerCapitaB;
  float super, superB;

  // Área para entrada de dados
  printf("*** Olá, vamos começar a preencher as cartas do Super Trunfo! ***\n");
  printf("Preencha os campos da sua cidade.\n\n");

  //CADASTRO DA CARTA 1

  printf("CARTA 1\n");
  
  printf("Estado(sigla): ");
  scanf("%s", state);

  printf("Cidade: ");
  scanf("%s", city);

  printf("População: ");
  scanf("%d", &population);

  printf("Área (km2): ");
  scanf("%lf", &area);

  printf("PIB: ");
  scanf("%lf", &pib);

  printf("Quantidades de pontos turisticos: ");
  scanf("%d", &points);
  
  //CADASTRO DA CARTA 2

  printf("\nCARTA 2\n");

  printf("Estado: ");
  scanf("%s", stateB);

  printf("Cidade: ");
  scanf("%s", cityB);

  printf("População: ");
  scanf("%d", &populationB);

  printf("Área (km2): ");
  scanf("%lf", &areaB);

  printf("PIB: ");
  scanf("%lf", &pibB);

  printf("Quantidades de pontos turisticos: ");
  scanf("%d", &pointsB);

  // CALCULOS PARA DENSIDADE POPULACIONAL, RENDA PER CAPITA E SUPER PODER

  densityPop = population / area;
  densityPopB = populationB / areaB;
  pibPerCapita = pib / population;
  pibPerCapitaB = pibB / populationB;
  super = (population + area + pib + points + (1 / densityPop)) / 1000000; // ACHEI INTERESSANTE FAZER UM NUMERO NAO TAO EXPRESSIVO
  superB = (populationB + areaB + pibB + pointsB + (1 / densityPopB)) / 1000000; // ACHEI INTERESSANTE FAZER UM NUMERO NAO TAO EXPRESSIVO

  // Área para exibição dos dados da cidade

  // EXIBI CARTA 1
  printf("\n\nCARTA 1\n");
  printf("Estado: %s\n", state);
  printf("Código: A01\n");
  printf("Cidade: %s\n", city);
  printf("População: %d\n", population);
  printf("Área: %.2f\n", area);
  printf("PIB: %.2f\n", pib);
  printf("Pontos Turisticos: %d\n", points);
  printf("Densidade Populacional: %.2f\n", densityPop);
  printf("PIB Per Capita: %.2f\n", pibPerCapita);
  printf("SUPER: %d\n", (int)super);
  
  // EXIBI CARTA 2
  printf("\n\nCARTA 2\n");
  printf("Estado: %s\n", stateB);
  printf("Código: B01\n");
  printf("Cidade: %s\n", cityB);
  printf("População: %d\n", populationB);
  printf("Área: %.2f\n", areaB);
  printf("PIB: %.2f\n", pibB);
  printf("Pontos Turisticos: %d\n", pointsB);
  printf("Densidade Populacional: %.2f\n", densityPopB);
  printf("PIB Per Capita: %.2f\n", pibPerCapitaB);
  printf("SUPER: %d\n\n", (int)superB);

  // RESULTADO DAS COMPARACOES

    printf("POPULAÇAO: ");
    if(population > populationB){
        printf("CARTA 1 VENCE\n");
    } else{
        printf("CARTA 2 VENCE\n");
    };

    printf("ÁREA: ");
    if(area > areaB){
        printf("CARTA 1 VENCE\n");
    } else{
        printf("CARTA 2 VENCE\n");
    };

    printf("PIB: ");
    if(pib > pibB){
        printf("CARTA 1 VENCE\n");
    } else{
        printf("CARTA 2 VENCE\n");
    };

    printf("PONTOS TURISTICOS: ");
    if(points > pointsB){
        printf("CARTA 1 VENCE\n");
    } else{
        printf("CARTA 2 VENCE\n");
    };

    printf("DENSIDADE DEMOGRAFICA: ");
    if(densityPop < densityPopB){
        printf("CARTA 1 VENCE\n");
    } else{
        printf("CARTA 2 VENCE\n");
    };

    printf("PIB PER CAPITA: ");
    if(pibPerCapita > pibPerCapitaB){
        printf("CARTA 1 VENCE\n");
    } else{
        printf("CARTA 2 VENCE\n");
    };

    printf("SUPER: ");
    if(super > superB){
        printf("CARTA 1 VENCE\n");
    } else{
        printf("CARTA 2 VENCE\n");
    };
  
return 0;
} 