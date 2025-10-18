#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  int  populacao1 = 0, 
       populacao2 = 0, 
       pturisticos1 = 0, 
       pturisticos2 = 0,
       resultado_comparacao = 0;

  float area1 = 0, 
        area2 = 0, 
        pib1 = 0, 
        pib2 = 0,
        densidade1 = 0,
        densidade2 = 0,
        pibpercapta1 = 0,
        pibpercapta2 = 0,
        superpoder1 = 0,
        superpoder2 = 0;

  char estado1, 
       estado2, 
       codigo1[4], 
       codigo2[4], 
       cidade1[50], 
       cidade2[50];


          // ÁREA PARA ENTRADA DE DADOS

  printf("* Digite os dados da Carta 1: \n");
  printf("Estado: ");
  scanf("%c", &estado1);                                         //Armazena o valor digitado na variável "estado1" da Carta 1
  printf("Código: ");
  scanf("%s", codigo1);                                          //Armazena o valor digitado na variável "codigo1" da Carta 1
  printf("Nome da Cidade: ");
  scanf("%s", cidade1);                                          //Armazena o valor digitado na variável "cidade1" da Carta 1
  printf("População: ");                                         
  scanf("%d", &populacao1);                                      //Armazena o valor digitado na variável "populacao1" da Carta 1
  printf("Área: ");
  scanf("%f", &area1);                                           //Armazena o valor digitado na variável "area1" da Carta 1
  printf("PIB: ");
  scanf("%f", &pib1);                                            //Armazena o valor digitado na variável "pib1" da Carta 1
  printf("Números de Pontos Turísticos: ");
  scanf("%d", &pturisticos1);                                    //Armazena o valor digitado na variável "pturisticos1" da Carta 1

  printf("\n");                                                  //Espaço para formatação da apresentação dos dados

  printf("* Digite os dados da Carta 2: \n");
  printf("Estado: ");
  scanf(" %c", &estado2);                                        //Armazena o valor digitado na variável "estado2" da Carta 2
  printf("Código: ");
  scanf("%s", codigo2);                                          //Armazena o valor digitado na variável "codigo2" da Carta 2
  printf("Nome da Cidade: ");
  scanf("%s", cidade2);                                          //Armazena o valor digitado na variável "cidade2" da Carta 2
  printf("População: ");                                         
  scanf("%d", &populacao2);                                      //Armazena o valor digitado na variável "populacao2" da Carta 2
  printf("Área: ");
  scanf("%f", &area2);                                           //Armazena o valor digitado na variável "area2" da Carta 2
  printf("PIB: ");
  scanf("%f", &pib2);                                            //Armazena o valor digitado na variável "pib2" da Carta 2
  printf("Números de Pontos Turísticos: ");
  scanf("%d", &pturisticos2);                                    //Armazena o valor digitado na variável "pturisticos2" da Carta 2
  

          // ÁREA PARA OS CÁLCULOS DOS DADOS DAS CIDADES

  densidade1 = (float)populacao1 / area1;                        //Cálculo da densidade populacional da Carta 1
  pibpercapta1 = pib1 / (float)populacao1;                       //Cálculo do Pib per Capta da Carta 1
  superpoder1 = (float)populacao1 + area1 + pib1 +               //Cálculo do Super Poder da Carta 1
                (float)pturisticos1 - densidade1 +
                pibpercapta1;

  densidade2 = (float)populacao2 / area2;                        //Cálculo da densidade populacional da Carta 2
  pibpercapta2 = pib2 / (float)populacao2;                       //Cálculo do Pib per Capta da Carta 2
  superpoder2 = (float)populacao2 + area2 + pib2 +               //Cálculo do Super Poder da Carta 2
                (float)pturisticos2 - densidade2 +
                pibpercapta2;                                   


          // ÁREA PARA A EXIBIÇÃO DE DADOS DAS CIDADES
  
  printf("\n");                                                  //Espaço para formatação da apresentação dos dados

  printf("   * Carta 1\n");                                      
  printf("Estado: %c\n", estado1);                               //Mostra o valor do item "Estado" da Carta 1
  printf("Código: %s\n", codigo1);                               //Mostra o valor do item "Código" da Carta 1
  printf("Nome da Cidade: %s\n", cidade1);                       //Mostra o valor do item "Cidade" da Carta 1
  printf("População: %d\n", populacao1);                         //Mostra o valor do item "População" da Carta 1
  printf("Área: %.2f\n", area1);                                 //Mostra o valor do item "Área" da Carta 1
  printf("Pib: %.2f\n", pib1);                                   //Mostra o valor do item "PIB" da Carta 1
  printf("Números de Pontos Turísicos: %d\n", pturisticos1);     //Mostra o valor do item "Nº de Pontos Turísticos" da Carta 1
  printf("Densidade Populacional: %.2f\n", densidade1);          //Mostra o valor do item "Densidade Populacional" da Carta 1
  printf("Pib per Capta: %.2f\n", pibpercapta1);                 //Mostra o valot do item "Pib per Capta" da Carta 1
  printf("Super Poder: %.2f\n", superpoder1);                    //Mostra o valot do item "Super Poder" da Carta 1
  
  printf("\n");                                                  //Espaço para formatação da apresentação dos dados
  printf("\n");                                                  //Espaço para formatação da apresentação dos dados

  printf("   * Carta 2\n");                                      
  printf("Estado: %c\n", estado2);                               //Mostra o valor do item "Estado" da Carta 2
  printf("Código: %s\n", codigo2);                               //Mostra o valor do item "Código" da Carta 2
  printf("Nome da Cidade: %s\n", cidade2);                       //Mostra o valor do item "Cidade" da Carta 2
  printf("População: %d\n", populacao2);                         //Mostra o valor do item "População" da Carta 2
  printf("Área: %.2f\n", area2);                                 //Mostra o valor do item "Área" da Carta 2
  printf("Pib: %.2f\n", pib2);                                   //Mostra o valor do item "PIB" da Carta 2
  printf("Números de Pontos Turísicos: %d\n", pturisticos2);     //Mostra o valor do item "Nº de Pontos Turísticos" da Carta 2
  printf("Densidade Populacional: %.2f\n", densidade2);          //Mostra o valor do item "Densidade Populacional" da Carta 2
  printf("Pib per Capta: %.2f\n", pibpercapta2);                 //Mostra o valot do item "Pib per Capta" da Carta 2
  printf("Super Poder: %.2f\n", superpoder2);                    //Mostra o valot do item "Super Poder" da Carta 2

  printf("\n");
  printf("\n");


        // ÁREA PARA A COMPARAÇÃO E PRINT DOS DADOS ENTRE AS CIDADES

  printf("RESULTADO DA COMPARAÇÃO (RESULTADO = 0, CARTA 1 VENCE, RESULTADO = 1, CARTA 2 VENCE)\n");
  printf("\n");
  resultado_comparacao = populacao1 <= populacao2;                                //Compara os valores de item População
  printf("Carta Ganhadora (População): %d\n", resultado_comparacao);              //Mostra o vencedor da comparação do item População
  resultado_comparacao = area1 <= area2;                                          //Compara os valores de item Área
  printf("Carta Ganhadora (Àrea): %d\n", resultado_comparacao);                   //Mostra o vencedor da comparação do item Área
  resultado_comparacao = pib1 <= pib2;                                            //Compara os valores de item Pib
  printf("Carta Ganhadora (PIB): %d\n", resultado_comparacao);                    //Mostra o vencedor da comparação do item Pib
  resultado_comparacao = pturisticos1 <= pturisticos2;                            //Compara os valores de item Pontos Turísticos
  printf("Carta Ganhadora (Pontos Turísticos): %d\n", resultado_comparacao);      //Mostra o vencedor da comparação do item Pontos Turísticos
  resultado_comparacao = densidade1 >= densidade1;                                //Compara os valores de item Densidade
  printf("Carta Ganhadora (Densidade Populacional): %d\n", resultado_comparacao); //Mostra o vencedor da comparação do item Densidade
  resultado_comparacao = pibpercapta1 <= pibpercapta2;                            //Compara os valores de item Pib PerCapta
  printf("Carta Ganhadora (Pib PerCapta): %d\n", resultado_comparacao);           //Mostra o vencedor da comparação do item Pib PerCapta
  resultado_comparacao = superpoder1 <= superpoder2;                              //Compara os valores de item Super Poder
  printf("Carta Ganhadora (Super Poder): %d\n", resultado_comparacao);            //Mostra o vencedor da comparação do item Super Poder

return 0;
} 
