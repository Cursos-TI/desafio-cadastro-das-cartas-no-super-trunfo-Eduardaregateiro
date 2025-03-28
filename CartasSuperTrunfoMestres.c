#include <stdio.h>


int main() {

    // Definição das variáveis: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Acrescentando a densidade populacional e PIB per capita no nivel aventureiro.
    // Acrescentando o super poder no nivel mestre
    int Populacao_Carta01, Populacao_Carta02, Numeros_Turisticos01, Numeros_Turisticos02;
    char Estado01[2], Estado02[2], CodigodaCarta01[10], CodigodaCarta02[10], Nome_da_cidade01[15], Nome_da_cidade02[15];
    float Area_km01, Area_km02, PIB01, PIB02, Densidade_Populacional01, Densidade_Populacional02, PIB_per_Capita01, PIB_per_Capita02, SuperPoder01, SuperPoder02;
    

    printf("____________________________________________________________\n\n");
    printf("            Desafio Super Trunfo - Países  \n");
    printf("____________________________________________________________\n");

    printf("\n");
    
    // Cadastro das Cartas:
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf(" Cadastro das informações das cartas \n\n");        

    // cadastrando os Dados da carta 01
    printf("   * Carta 01\n\n");        

    printf("- Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf("%1s", &Estado01);

    printf("- Digite a letra do estado seguida de um número de 01 a 04: ");
    scanf("%09s", CodigodaCarta01);
    
    printf("- Digite o nome da cidade: ");
    scanf("%s", &Nome_da_cidade01);

    printf("- Digite o número de habitantes da Cidade: ");
    scanf("%d", &Populacao_Carta01);

    printf("- Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &Area_km01);

    printf("- Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &PIB01);

    printf("- Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &Numeros_Turisticos01);

    // Densidade populacional e PIB per Capita da carta 01
    Densidade_Populacional01 = (float)Populacao_Carta01 / Area_km01;
    PIB_per_Capita01 = (PIB01 / (float)Populacao_Carta01)*1000000000;

    //Superpoder da carta 01 
    SuperPoder01 = Populacao_Carta01 + Area_km01 + PIB01 + Numeros_Turisticos01 + (1 / Densidade_Populacional01) + PIB_per_Capita01;

    printf("\n");

    // cadastrando os Dados da carta 02
    printf("   * Carta 02\n\n");            

    printf("- Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf("%1s", &Estado02);

    printf("- Digite a letra do estado seguida de um número de 01 a 04: ");
    scanf("%09s", CodigodaCarta02);
    
    printf("- Digite o nome da cidade: ");
    scanf("%s", &Nome_da_cidade02);

    printf("- Digite o número de habitantes da Cidade: ");
    scanf("%d", &Populacao_Carta02);

    printf("- Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &Area_km02);

    printf("- Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &PIB02);

    printf("- Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &Numeros_Turisticos02);

    
    // Densidade populacional e PIB per capita da carta 02
    Densidade_Populacional02 = (float)Populacao_Carta02 / Area_km02;
    PIB_per_Capita02 = (PIB02 / (float)Populacao_Carta02) *1000000000;

    //Superpoder da carta 02 
    SuperPoder02 = Populacao_Carta02 + Area_km02 + PIB02 + Numeros_Turisticos02 
    + (1 / Densidade_Populacional02) + PIB_per_Capita02;

    printf("____________________________________________________________\n\n");


    printf("\n");
   
    // Exibição dos Dados das Cartas:
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("------------------------------------\n");
    printf("            CARTA 01\n");
    printf("------------------------------------\n");

    printf("Estado: %s\n", Estado01);
    printf("Código: %s\n", CodigodaCarta01);
    printf("Nome da Cidade: %s\n", Nome_da_cidade01);
    printf("População: %d\n", Populacao_Carta01);
    printf("Área: %.2f km²\n", Area_km01);
    printf("PIB: %.2f bilhões de reais\n", PIB01);
    printf("Número de Pontos Turísticos: %d\n", Numeros_Turisticos01);

    //exibindo a densidade populacional e o PIB per capita da carta 01
    printf("Densidade Populacional: %.2f Hab/km² \n", Densidade_Populacional01); 
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita01);
   
    // Super Poder da carta 01
    printf("Super Poder: %.2f\n", SuperPoder01);

    printf("\n");

    printf("------------------------------------\n");
    printf("            CARTA 02\n");
    printf("------------------------------------\n");
    printf("Estado: %s\n", Estado02);
    printf("Código: %s\n", CodigodaCarta02);
    printf("Nome da Cidade: %s\n", Nome_da_cidade02);
    printf("População: %d\n", Populacao_Carta02);
    printf("Área: %.2f km²\n", Area_km02);
    printf("PIB: %.2f bilhões de reais\n", PIB02);
    printf("Número de Pontos Turísticos: %d\n", Numeros_Turisticos02);

    //exibindo a densidade populacional e o PIB per carpita da carta 02
    printf("Densidade Populacional: %.2f Hab/km² \n", Densidade_Populacional02); 
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita02);

    // Super Poder da carta 02
    printf("Super Poder: %.2f\n", SuperPoder02);
    
    printf("\n");

    printf("____________________________________________________________\n\n");


    printf("------------------------------------\n");
    printf("      Comparação de Cartas: \n");
    printf("------------------------------------\n");

    printf("\n");

   //Exibindo os Resultados das Comparações

   printf("População: Carta 01 venceu (%d)\n", Populacao_Carta01 > Populacao_Carta02);
   printf("Área: Carta 01 venceu (%d)\n", Area_km01 > Area_km02);
   printf("PIB: Carta 01 venceu (%d)\n", PIB01 > PIB02);
   printf("Pontos Turísticos: Carta 01 venceu (%d)\n", Numeros_Turisticos01 > Numeros_Turisticos02);
   printf("Densidade Populacional: Carta 02 venceu (%d)\n", Densidade_Populacional01 < Densidade_Populacional02);
   printf("PIB per Capita: Carta 01 venceu (%d)\n", PIB_per_Capita01 > PIB_per_Capita02);
   printf("Super Poder: Carta 01 venceu (%d)\n", SuperPoder01 > SuperPoder02);

   printf("\n");

   printf("____________________________________________________________\n\n");

   printf("\n");

    return 0;
}