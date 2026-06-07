#include <stdio.h>

 int main() {
 //Desafio Supertrunfo
 //Cadastro de cartas Super Trunfo desencolvendo a logica Nível Basico!!
 //Declaração de variáveis!!
    char pais1[50], pais2[50];
    char estado1, estado2;
    char carta1[50], carta2[50];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int ponto_turistico1, ponto_turistico2;
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;
    float superpoder1, superpoder2;
    float densidadeinversa1, densidadeinversa2;
 // Entrada de dados para a primeira carta!! 
   
    printf("\n==== Super Trunfo Nível Mestre!! ====\n");
    printf("Didigite o nome do pais escolhido para a carta 1:\n ");
    scanf(" %[^\n]", pais1);
    printf("Digite a primeira letra de (A) a (H) do estado escolhido para a carta 1:\n ");
    scanf(" %c", &estado1); 

    printf("Digite o Codigo da carta 1 com a primeira letra do estado - exemplo A02, B01 etc...:\n "); 
    scanf(" %[^\n]", carta1);

    printf("Digite o nome de uma cidade que pertença ao estado escolhido para a carta 1:\n ");
    scanf(" %[^\n]", nome1);

    printf("Insira a popúlação da cidade escolhida em um número inteiro:\n ");
    scanf("%d", &populacao1);

    printf("Insira a área em km² da cidade escolhida:\n ");
    scanf("%f", &area1);

    printf("Adicione o PIB da cidade escolhida:\n ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos que a cidade escolhida possui:\n ");
    scanf("%d", &ponto_turistico1);

 //Calculo da densidade populacional e PIB per capito para carta 1!!
    densidadepopulacional1 = (float) populacao1 / area1;
    pibpercapita1 = (float) pib1 / populacao1;

 //caculo da densidade inversa da carta1!!
    densidadeinversa1 = area1 / (float) populacao1;
    

 //calculo do super poder da carta1!!
    superpoder1 = (float) populacao1 + area1 + pib1 + (float) ponto_turistico1 + pibpercapita1 + densidadeinversa1; 

 // Entrada de dados para a segunda carta!!

    printf("Digite o nome do pais escolhido para a carta 2:\n ");
    scanf(" %[^\n]", pais2);

    printf("Digite a primeira letra de (A) a (H) do estado escolhido para carta 2:\n ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta 2 com a primeira letra do estado - exemplo P02, R01 etc...:\n ");
    scanf(" %[^\n]", carta2);

    printf("Digite o nome de uma cidade que pertença ao estado escolhido para a carta 2:\n ");
    scanf(" %[^\n]", nome2);

    printf("Insira a popúlação da cidade escolhida em um número inteiro:\n ");
    scanf("%d", &populacao2);

    printf("Insira a área em km² da cidade escolhida:\n ");
    scanf("%f", &area2);

    printf("Adicione o PIB da cidade escolhida:\n ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos que a cidade escolhida possui:\n ");
    scanf("%d", &ponto_turistico2);

 //Calculo da densidade papolacional e PIB per capita da carta 2!!
    densidadepopulacional2 = (float) populacao2 / area2;
    pibpercapita2 = (float) pib2 / populacao2;
   
 //calculo de densidade inversa da carta 2!!
    densidadeinversa2 = area2 / (float) populacao2;
  
 //calculo do super poder da carta 2!!
    superpoder2 = (float) populacao2 + area2 + pib2 + (float) ponto_turistico2 + pibpercapita2 + densidadeinversa2;    

 //Exibição dos dados da carta 1!!


    printf("\n==Dados da carta 1==\n");
    printf("Carta 1: %s\n", pais1);
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", carta1);
    printf("Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.4f\n", pib1);
    printf("Pontos turísticos: %d\n", ponto_turistico1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per capita: %.2f\n", pibpercapita1);
    printf("Super poder: %.2f\n", superpoder1);
  //Exibição dos dados da carta 2!!
    printf("\n==Dados da carta 2==\n");
    printf("Carta 2: %s\n", pais2);
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", carta2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.4f\n", pib2);
    printf("Pontos turísticos: %d\n", ponto_turistico2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per capita: %.2f\n", pibpercapita2);
    printf("Super poder: %.2f\n", superpoder2);

  //Comparação entre as cartas para determinar a vencedora!!
  //Atributo escolhido para comparação foi o PIB
    printf("\n===Comparação===\n");
    printf("Carta 1 - PIB: %.4f\n", pib1);
    printf("Carta 2 - PIB: %.4f\n", pib2);
  //Ultilizando if-else para comparação
    if (pib1 > pib2){
        printf("Carta 1: Venceu");
    } else{
        printf("Carta 2: Venceu");
    }
    
  /*O que foi feito!! foi escolhido para a comparação o atributo PIB e ultilizado a estrutura if-else
  para a comparação*/
  //Fim do programa Super Trunfo desencolvendo a logica Nível Basico!!!!
  //Obrigado pelo aprendizado e pela oportunidade de estar aprendendo cada vez mais!
  //Deus abençoe a todos!! Lucas 1-37 Porque para Deus nada é impossível. 

   return 0;
 }      