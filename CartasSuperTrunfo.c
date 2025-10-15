#include <stdio.h>

int main(){
    //Variaveis da carta 1
    char estado1[5];
    char codigo1[5];
    char nomeCidade1[50];
    int população1;
    float area1;
    float pib1;
    int pontoTurisitico1;
    float densidade1;
    float pibPerCapita1;

    //variaveis da carta 2
    char estado2[5];
    char codigo2[5];
    char nomeCidade2[50];
    int população2;
    float area2;
    float pib2;
    int pontoTurisitico2;
    float densidade2;
    float pibPerCapita2;
    
    //Cadastro de Cartas = 1
    
    printf("Cadastro da Carta 1 :\n");
    printf("informe o Estado (Letra de A a H):\n");
    scanf("%s", &estado1);

    printf("Informe o Código da Carta (ex: A01):\n");
    scanf("%s", &codigo1);

    printf("Informe o Nome da Cidade:\n");
    scanf("%s", &nomeCidade1);

    printf("Informe a População:\n");
    scanf("%d", &população1);

    printf("Informe a Áerea (em KM²)\n");
    scanf("%f", &area1);

    printf("Informe o PIB (em Bilhões de Reais):\n");
    scanf("%f", &pib1);

    printf("Informe o Número de Pontos Turísticos:\n");
    scanf("%d", &pontoTurisitico1);

    //calculos para carta 1
    densidade1 = população1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / população1;


    //Cadastro de Cartas  = 2

    printf("Cadastro da Carta 2 :\n");
    printf("informe o Estado (Letra de A a H):\n");
    scanf("%s", &estado2);

    printf("Informe o Código da Carta (ex: B02):\n");
    scanf("%s", &codigo2);

    printf("Informe o Nome da Cidade:\n");
    scanf("%s", &nomeCidade2);

    printf("Informe a População:\n");
    scanf("%d", &população2);

    printf("Informe a Áerea (em KM²)\n");
    scanf("%f", &area2);

    printf("Informe o PIB (em Bilhões de Reais):\n");
    scanf("%f", &pib2);

    printf("Informe o Número de Pontos Turísticos:\n");
    scanf("%d", &pontoTurisitico2);

        //calculos para carta 2
    densidade2 = população2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / população2;
    

    // Exibição dos resultados

    printf("Carta 1:\n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", nomeCidade1);
    printf("População: %d \n", população1);
    printf("Aréa: %2.f KM² \n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontoTurisitico1);
    printf("Densidade Populacional: %.2f HAB/KM² \n", densidade1);
    printf("PIB per Capita: %2.f Reais \n", pibPerCapita1);

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", população2);
    printf("Aréa: %2.f KM²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontoTurisitico2);
    printf("Densidade Populacional: %.2f HAB/KM²\n", densidade2);
    printf("PIB per Capita: %2.f Reais\n", pibPerCapita2);


    return 0;
}