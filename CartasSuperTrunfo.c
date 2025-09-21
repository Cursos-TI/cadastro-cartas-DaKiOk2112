#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1 = "a", 
       estado2 = "a", 
       codigo1[3]= "a", 
       codigo2[3] = "a", 
       cidade1[50] = "a", 
       cidade2[50] = "a";

  int  populacao1 = 0, 
       populacao2 = 0, 
       pturisticos1 = 0, 
       pturisticos2 = 0;

  float area1 = 0, 
        area2 = 0, 
        pib1 = 0, 
        pib2 = 0;

  // Área para entrada de dados

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
  scanf(" %c", &estado2);                                        //Armazena o valor digitado na variável "codigo2" da Carta 2
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
  
  // Área para exibição dos dados da cidade
  
  printf("\n");                                                  //Espaço para formatação da apresentação dos dados
  printf("   * Carta 1\n");                                      
  printf("Estado: %c\n", estado1);                               //Mostra o valor do do item "Estado" da Carta 1
  printf("Código: %s\n", codigo1);                               //Mostra o valor do do item "Código" da Carta 1
  printf("Nome da Cidade: %s\n", cidade1);                       //Mostra o valor do do item "Cidade" da Carta 1
  printf("População: %d\n", populacao1);                         //Mostra o valor do do item "População" da Carta 1
  printf("Área: %.2f\n", area1);                                 //Mostra o valor do do item "Área" da Carta 1
  printf("Pib: %.2f\n", pib1);                                   //Mostra o valor do do item "PIB" da Carta 1
  printf("Números de Pontos Turísicos: %d", pturisticos1);       //Mostra o valor do do item "Nº de Pontos Turísticos" da Carta 1
  printf("\n");                                                  //Espaço para formatação da apresentação dos dados

  printf("\n");                                                  //Espaço para formatação da apresentação dos dados
  printf("   * Carta 2\n");                                      
  printf("Estado: %c\n", estado2);                               //Mostra o valor do do item "Estado" da Carta 2
  printf("Código: %s\n", codigo2);                               //Mostra o valor do do item "Código" da Carta 2
  printf("Nome da Cidade: %s\n", cidade2);                       //Mostra o valor do do item "Cidade" da Carta 2
  printf("População: %d\n", populacao2);                         //Mostra o valor do do item "População" da Carta 2
  printf("Área: %.2f\n", area2);                                 //Mostra o valor do do item "Área" da Carta 2
  printf("Pib: %.2f\n", pib2);                                   //Mostra o valor do do item "PIB" da Carta 2
  printf("Números de Pontos Turísicos: %d", pturisticos2);       //Mostra o valor do do item "Nº de Pontos Turísticos" da Carta 2
  printf("\n");     

return 0;
} 
