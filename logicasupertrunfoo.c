#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {

    //primeira carta
    char estado1[30], estado2[30], codigocarta1[30], codigocarta2[30],nomedacidade1[30],nomedacidade2[30];
    int populacao1, populacao2, pontosturisticos1, pontosturisticos2, opcao, resultado1, resultado2, atributo1, atributo2;
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


    //escolhendo primeiro atributo

    printf ("Vamos iniciar os jogos!\n");
    printf ("Escolha o primeiro atributo a ser comparado:\n\n");
    printf ("1 - População\n");
    printf ("2 - Area em km2\n");
    printf ("3 - PIB\n");
    printf ("4 - Pontos turisticos\n");
    printf ("5 - Densidade demografica\n");
    printf ("6 - Pib percapta\n");
    printf ("7 - superpoder\n");
    scanf ("%d", &atributo1);

    switch (atributo1){
        case 1:
        printf ("Voce escolheu POPULACAO\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;

        case 2:
        printf ("Voce escolheu AREA EM KM\n");
        resultado1 = areaemkm21 > areaemkm22 ? 1 : 0;
        break;

        case 3:
        printf ("Voce escolheu PIB\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;

        case 4:
        printf ("Voce escolheu PONTOS TURISTICOS\n");
        resultado1 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
        break;
    

        case 5:
        printf ("Voce escolheu densidade demografica\n\n");
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        break;


        case 6: 
        printf ("Voce escolheu PIB percapta\n");
        resultado1 = percapta1 > percapta2 ? 1 : 0;
        break;
    

        case 7:
        printf ("Voce escolheu SUPERPODER\n");
        resultado1 = superpoder1 > superpoder2 ? 1 : 0;
        break;
 
        default:
        printf ("Opção invalida!\n");


    



    }
    

   //escolhendo segundo atributo

    printf ("Escolha o segundo atributo a ser comparado:\n\n");
    printf ("1 - População\n");
    printf ("2 - Area em km2\n");
    printf ("3 - PIB\n");
    printf ("4 - Pontos turisticos\n");
    printf ("5 - Densidade demografica\n");
    printf ("6 - Pib percapta\n");
    printf ("7 - superpoder\n");
    scanf ("%d", &atributo2);

    if (atributo2 == atributo1){
        printf ("Voce escolheu o mesmo atributo\n");
    }else {
        switch (atributo2){
        case 1:
        printf ("Voce escolheu POPULACAO\n");
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        break;

        case 2:
        printf ("Voce escolheu AREA EM KM\n");
        resultado2 = areaemkm21 > areaemkm22 ? 1 : 0;
        break;

        case 3:
        printf ("Voce escolheu PIB\n");
        resultado2 = pib1 > pib2 ? 1 : 0;
        break;

        case 4:
        printf ("Voce escolheu PONTOS TURISTICOS\n");
        resultado2 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
        break;
    

        case 5:
        printf ("Voce escolheu densidade demografica\n\n");
        resultado2 = densidade1 < densidade2 ? 1 : 0;
        break;


        case 6: 
        printf ("Voce escolheu PIB percapta\n");
        resultado2 = percapta1 > percapta2 ? 1 : 0;
        break;
    

        case 7:
        printf ("Voce escolheu SUPERPODER\n");
        resultado2 = superpoder1 > superpoder2 ? 1 : 0;
        break;
 
        default:
        printf ("Opção invalida!\n");

        }


        }
        
// demonstrando os resultados
        if (resultado1 == 1 && resultado2 == 1){
            printf ("Voce venceu!\n");
        }else if (resultado1 != resultado2){
                printf ("Empate!\n");

            }else {
                printf ("Você perdeu!\n");
             }
return 0;
             
} 

        

    



    







   
