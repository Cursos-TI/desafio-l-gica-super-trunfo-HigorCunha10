#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {

    //primeira carta
    char estado1[30], estado2[30], codigocarta1[30], codigocarta2[30],nomedacidade1[30],nomedacidade2[30];
    int populacao1, populacao2, pontosturisticos1, pontosturisticos2;
    float areaemkm21, areaemkm22, pib1, pib2, densidade1, densidade2, percapta1, percapta2;
    unsigned int superpoder1 = populacao1 + areaemkm21 + pib1 + pontosturisticos1 + densidade1 + percapta1;
    unsigned int superpoder2 = populacao2 + areaemkm22 + pib2 + pontosturisticos2 + densidade2 + percapta2;


    //entrada da carta 1
    printf ("digite o estado 1:\n");
    scanf("%s", estado1);

    printf ("Digite o codigo da primeira carta:\n");
      scanf("%s", codigocarta1);

    printf("Digite o nome da cidade 1:\n");
        scanf("%s", nomedacidade1);
    
    printf("Digite a população 1:\n");
        scanf ("%d", &populacao1);
    
    printf("digite a area em km2:\n");
        scanf("%f", &areaemkm21);
    
    printf("Digite o PIB:\n");
        scanf("%f", &pib1);
    
    printf ("Digite quantidade de pontos turisticos:\n");
        scanf("%d", &pontosturisticos1);

    
    //entrada carta 2
    printf ("digite o estado 2:\n");
    scanf("%s", estado2);

    printf ("Digite o codigo da segunda carta:\n");
      scanf("%s", codigocarta2);

    printf("Digite o nome da cidade 2:\n");
        scanf("%s", nomedacidade2);
    
    printf("Digite a população 2:\n");
        scanf ("%d", &populacao2);
    
    printf("digite a area em km2:\n");
        scanf("%f", &areaemkm22);
    
    printf("Digite o PIB:\n");
        scanf("%f", &pib2);
    
    printf ("Digite quantidade de pontos turisticos:\n");
        scanf("%d", &pontosturisticos2);

    
    
    //calculo
    densidade1 = (float) populacao1/areaemkm21;
    densidade2 = (float) populacao2/areaemkm22;
    percapta1 = (float) pib1/populacao1;
    percapta2 = (float) pib2/populacao2;

    //pulando as linhas
    printf("\n\n\n\n\n");


    //demonstrando a carta numero 1 na tela

    printf ("CARTA 1:\n");
    printf ("Estado1: %s\n", estado1);
    printf("codigo da carta: %s\n", codigocarta1);
    printf ("nome da cidade: %s\n", nomedacidade1);
    printf ("quantidade da população: %d\n", populacao1);
    printf ("Area em km2: %f\n", areaemkm21);
    printf ("PIB:%f\n", pib1);
    printf ("pontos turisticos: %d\n", pontosturisticos1);
    printf ("densidade populacional:%f\n", densidade1);
    printf ("Pib percapta 1:%f\n", percapta1);
    printf ("super poder carta 1: %u\n", superpoder1 );

    
    //pulando as linhas
    printf("\n\n\n\n\n");


    //demonstrando segunda carta na tela

    printf ("CARTA 2:\n");
    printf ("Estado1: %s\n", estado2);
    printf("codigo da carta: %s\n", codigocarta2);
    printf ("nome da cidade: %s\n", nomedacidade2);
    printf ("quantidade da população: %d\n", populacao2);
    printf ("Area em km2: %f\n", areaemkm22);
    printf ("PIB:%f\n", pib2);
    printf ("pontos turisticos: %d\n", pontosturisticos2);
     printf ("densidade populacional:%f\n", densidade2);
    printf ("Pib percapta 1:%f\n", percapta2);
    printf ("super poder carta 2: %u\n:", superpoder2);

    printf ("\n\n\n\n\n");


    //comparação das cartas

    printf("***Comaparando atributo PIB***\n\n");

    if (pib1 > pib2){
        printf ("Carta 1 venceu!\n");

    }if (pib1 == pib2){
        printf ("Empate entre as cartas!");

    }else {
        printf ("Vitoria Carta 2!");
    }
   







   
    return 0;
}
