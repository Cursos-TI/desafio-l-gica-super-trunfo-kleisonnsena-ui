#include <stdio.h>


 int main() {
 //Desafio Supertrunfo
 //Cadastro de cartas Super Trunfo desenvolvendo a logica Nível aventureiro!!
 //Declaração de variáveis!!
    char pais1[50], pais2[50];
    char estado1, estado2;
    char carta1[50], carta2[50];
    char nome1[50], nome2[50];
    int selecao;
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int ponto_turistico1, ponto_turistico2;
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;
    float superpoder1, superpoder2;
    float densidadeinversa1, densidadeinversa2;
 // Entrada de dados para a primeira carta!! 
   
    printf("\n==== Super Trunfo desenvolvendo a lógica Nível Aventureiro!! ====\n");
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
    printf("\nSuper poder: %.2f\n", superpoder2);

  //Comparação entre as cartas para determinar a vencedora!!
  //Menu de Seleção de atributo de comparação
    printf("\n====Menu de Seleção====\n");
    printf("\n=======De======\n");
    printf("\n====Atributo====\n");
    printf("Escolha um atributo para determinar a carta vencedora\n");
    printf("Escolha de 1 a 5\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade demográfica\n");
    scanf("%d", &selecao);
    printf("\n--------------------------------------------\n");
    printf("Você escolheu: %d como atributo\n", selecao);
    printf("\n--------------------------------------------\n");
    //Comparação
    switch (selecao){
      case 1:
       if (populacao1 == populacao2){
         printf("País: %s Carta 1 VS País: %s Carta 2 \n", pais1, pais2);
         printf("Você escolheu: %d como atributo para comparação\n", selecao);
         printf("Atributo carta 1 população: %d VS Atributo carta 2 população: %d\n", populacao1, populacao2);
         printf("Houve um empate!\n");
       } else if (populacao1 > populacao2){
         printf("País: %s Carta 1 VS País: %s Carta 2 \n", pais1, pais2);
         printf("Você escolheu %d como atributo para comparação\n", selecao);
         printf("Atributo carta 1 população: %d VS Atributo carta 2 população: %d\n", populacao1, populacao2);
         printf("Carta 1 Venceu!\n");
       } else{
         printf("País: %s Carta 1 VS País: %s Carta 2 \n", pais1, pais2);
         printf("Você escolheu %d como atributo para comparação\n", selecao);
         printf("Atributo carta 1 população: %d VS Atributo carta 2 população: %d\n", populacao1, populacao2);
         printf("Carta 2 Venceu!\n");
       }  break;

      case 2:
       if (area1 == area2){
         printf("País: %s Carta 1 VS País: %s Carta 2 \n", pais1, pais2);
         printf("Você escolheu %d como atributo para comparação\n", selecao);
         printf("Atributo carta 1 área: %.2f km2 VS Atributo carta 2 área: %.2f km2\n ", area1, area2);
         printf("Houve um empate!\n");
       } else if(area1 > area2){
         printf("País: %s Carta 1 VS País: %s Carta 2 \n", pais1, pais2);
         printf("Você escolheu %d como atributo para comparação\n", selecao);
         printf("Atributo carta 1 área: %.2f km2 VS Atributo carta 2 área: %.2f km2\n", area1, area2 );
         printf("Carta 1 Venceu!\n");
       } else{
         printf("País: %s Carta 1 VS País: %s Carta 2 \n", pais1, pais2);
         printf("Você escolheu %d como atributo para comparação\n", selecao);
         printf("Atributo carta 1 área: %.2f km2 VS Atributo carta 2 área: %.2f km2\n", area1, area2);
         printf("Carta 2 Venceu!\n");
       } break;

      case 3:
       if (pib1 == pib2){
         printf("País: %s Carta 1 VS País: %s Carta 2 \n", pais1, pais2);
         printf("Você escolheu %d como atributo para comparação\n", selecao);
         printf("Atributo carta 1 PIB: %.4f VS Atributo carta 2 PIB: %.4f \n", pib1, pib2);
       } else if (pib1 > pib2){
         printf("País: %s Carta 1 VS País: %s Carta 2 \n", pais1, pais2);
         printf("Você escolheu %d como atributo para comparação\n", selecao);
         printf("Atributo carta 1 PIB: %.4f VS Atributo carta 2 PIB: %.4f \n", pib1, pib2);
         printf("Carta 1 Venceu!\n");  
       } else {
         printf("País: %s Carta 1 VS País: %s Carta 2 \n", pais1, pais2);
         printf("Você escolheu %d como atributo para comparação\n", selecao);
         printf("Atributo carta 1 PIB: %.4f VS Atributo carta 2 PIB: %.4f \n", pib1, pib2);
         printf("Carta 2 Venceu!\n");
       } break;
    
      case 4:
       if(ponto_turistico1 == ponto_turistico2){
         printf("País: %s Carta 1 VS País: %s Carta 2 \n", pais1, pais2);
         printf("Você escolheu %d como atributo para comparação\n", selecao);
         printf("Atributo carta 1 ponto turístico: %d VS Atributo carta 2 ponto turístico: %d\n", ponto_turistico1, ponto_turistico2);
         printf("Houve um empate!\n");
       } else if (ponto_turistico1 > ponto_turistico2){
         printf("País: %s Carta 1 VS País: %s Carta 2 \n", pais1, pais2);
         printf("Você escolheu %d como atributo para comparação\n", selecao);
         printf("Atributo carta 1 ponto turístico: %d VS Atributo carta 2 ponto turístico: %d\n", ponto_turistico1, ponto_turistico2);
         printf("Carta 1 venceu!\n");
       } else {
         printf("País: %s Carta 1 VS País: %s Carta 2 \n", pais1, pais2);
         printf("Você escolheu %d como atributo para comparação\n", selecao);
         printf("Atributo carta 1 ponto turístico: %d VS Atributo carta 2 ponto turístico: %d\n", ponto_turistico1, ponto_turistico2);
         printf("Carta 2 Venceu\n");
       } break;

      case 5:
       if (densidadepopulacional1 == densidadepopulacional2){
         printf("País: %s Carta 1 VS País: %s Carta 2 \n", pais1, pais2);
         printf("Você escolheu %d como atributo para comparação\n", selecao);
         printf("Atributo carta 1 densidade populacional: %.2fhab/km² VS Atributo carta 2 densidade populacional: %.2fhab/km²", densidadepopulacional1, densidadepopulacional2);
         printf("Houve um empate!\n");
       } else if (densidadepopulacional1 < densidadepopulacional2){
         printf("País: %s Carta 1 VS País: %s Carta 2 \n", pais1, pais2);
         printf("Você escolheu %d como atributo para comparação\n", selecao);
         printf("Atributo carta 1 densidade populacional: %.2fhab/km² VS Atributo carta 2 densidade populacional: %.2fhab/km²", densidadepopulacional1, densidadepopulacional2);
         printf("Cart 1 Venceu!\n");
       } else{
         printf("País: %s Carta 1 VS País: %s Carta 2 \n", pais1, pais2);
         printf("Você escolheu %d como atributo para comparação\n", selecao);
         printf("Atributo carta 1 densidade populacional: %.2fhab/km² VS Atributo carta 2 densidade populacional: %.2fhab/km²", densidadepopulacional1, densidadepopulacional2);
         printf("Carta 2 Venceu!\n");
       } break;
         default:
         printf("Opção inválida!\n");
         break;
       }
    
        printf("========FIM DO JOGO========");
    
  /*O que foi feito!! foi Aplicado um menu de seleção para a escolha do atributo a determina a carta vencedora, foi usado o switch e o if aninhado
  para a comparação*/
  //Fim do programa Super Trunfo desencolvendo a logica Nível INTERMEDIARIO!!!!
  //Obrigado pelo aprendizado e pela oportunidade de estar aprendendo cada vez mais!
  //Deus abençoe a todos!! Lucas 1-37 Porque para Deus nada é impossível. 
return 0;
      }
  
   