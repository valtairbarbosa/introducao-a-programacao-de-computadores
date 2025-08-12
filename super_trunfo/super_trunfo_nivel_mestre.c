#include <stdio.h>

int main(){

    //Dados da carta1
    char estado1[100];
    char carta1[50];
    char cidade1[50];
    int quantidadePopulacao1;
    float areaQuilometrosQuadrado1;
    unsigned int numerosPontosTuristicos1;
    float numeroPib1;
    float densidadePopulacionalHabKm1;
    float numeroPibPerCapita1;
    float superPoder1;

    //Dados da carta2
    char estado2[100];
    char carta2[50];
    char cidade2[50];
    unsigned int quantidadePopulacao2;
    float areaQuilometrosQuadrado2;
    int numerosPontosTuristicos2;
    float numeroPib2;
    float densidadePopulacionalHabKm2;
    float numeroPibPerCapita2;
    float superPoder2;

    //Resultado
    int rQuantidadePopulacao;
    int rAreaQuilometrosQuadrado;
    int rNumerosPontosTuristicos;
    int rNumeroPib;
    int rDensidadePopulacionalHabKm;
    int rNumeroPibPerCapita;
    int rSuperPoder;

    printf("Desafio super trufo - país \n\n");
    
    printf("\n---------------- Informe os dados da carta 01 ----------------\n");

    printf("Informe o nome do estado: ");
    scanf("%s", estado1);

    printf("Informe o nome da carta: ");
    scanf("%s", carta1);

    printf("Informe o nome da cidade: ");
    scanf("%s", cidade1);
    
    printf("Informe a quantidadede da população: ");
    scanf("%u", &quantidadePopulacao1);

    printf("Informe o tamanho da cidade (em km²): ");
    scanf("%f", &areaQuilometrosQuadrado1);

    printf("Informe o número de pontos turisticos: ");
    scanf("%d", &numerosPontosTuristicos1);

    printf("Informe o número do pib: ");
    scanf("%f", &numeroPib1);

    //calculos carta 1:
    densidadePopulacionalHabKm1 =  quantidadePopulacao1 / areaQuilometrosQuadrado1;
    numeroPibPerCapita1 = numeroPib1 / quantidadePopulacao1;
    superPoder1 = (float) quantidadePopulacao1 + areaQuilometrosQuadrado1 + numeroPib1 + (float) numerosPontosTuristicos1 + numeroPibPerCapita1 + (1.0 / densidadePopulacionalHabKm1);


    printf("\n---------------- Informe os dados da carta 02 ----------------\n");
    
    printf("Informe o nome do estado: ");
    scanf("%s", estado2);

    printf("Informe o nome da carta: ");
    scanf("%s", carta2);

    printf("Informe o nome da cidade: ");
    scanf("%s", cidade2);
    
    printf("Informe a quantidadede da população: ");
    scanf("%u", &quantidadePopulacao2);

    printf("Informe o tamanho da cidade (em km²): ");
    scanf("%f", &areaQuilometrosQuadrado2);

    printf("Informe o número de pontos turisticos: ");
    scanf("%d", &numerosPontosTuristicos2);

    printf("Informe o número do pib: ");
    scanf("%f", &numeroPib2);

    //calculos carta 2:

    densidadePopulacionalHabKm2 =  quantidadePopulacao2 / areaQuilometrosQuadrado2;
    numeroPibPerCapita2 = numeroPib2 / quantidadePopulacao2;
    superPoder2 = (float) quantidadePopulacao2 + areaQuilometrosQuadrado2 + numeroPib2 + (float) numerosPontosTuristicos2 + numeroPibPerCapita2 + (1.0 /densidadePopulacionalHabKm2);  
   

    printf("\n\n------------- Exibindo dados das cartas criadas -------------\n");
    printf("\n\nCarta 01: \n");
    printf("Nome do estado: %s\n", estado1);
    printf("Nome da carta: %s\n", carta1);
    printf("nome da cidade: %s\n", cidade1);
    printf("Quantidade da população: %u\n", quantidadePopulacao1);
    printf("Área da cidade (em km²): %.2f\n",  areaQuilometrosQuadrado1);
    printf("Pontos turisticos: %d\n", numerosPontosTuristicos1);
    printf("Número do pib: %.2f\n", numeroPib1);
    printf("Densidade populacional: %.2f\n", densidadePopulacionalHabKm1);
    printf("PIB da populacao: %.2f\n", numeroPibPerCapita1);
    printf("Super poder: %.2f\n", superPoder1);
    

    printf("\n\nCarta 02: \n");
    printf("Nome do estado: %s\n", estado2);
    printf("Nome da carta: %s\n", carta2);
    printf("nome da cidade: %s\n", cidade2);
    printf("Quantidade da população: %u\n", quantidadePopulacao2);
    printf("Área da cidade (em km²): %.2f\n", areaQuilometrosQuadrado2);
    printf("Pontos turisticos: %d\n", numerosPontosTuristicos2);
    printf("Número do pib: %.2f\n", numeroPib2);
    printf("Densidade populacional: %.2f\n", densidadePopulacionalHabKm2);
    printf("PIB da populacao: %.2f\n", numeroPibPerCapita2);
    printf("Super poder: %.2f\n", superPoder2);

    //comparação entre as cartas:
    rQuantidadePopulacao = quantidadePopulacao1 > quantidadePopulacao2;
    rAreaQuilometrosQuadrado = areaQuilometrosQuadrado1 > areaQuilometrosQuadrado2;
    rNumerosPontosTuristicos = numerosPontosTuristicos1 > numerosPontosTuristicos2;
    rNumeroPib = numeroPib1 > numeroPib2;
    rDensidadePopulacionalHabKm = densidadePopulacionalHabKm1 < densidadePopulacionalHabKm2;
    rNumeroPibPerCapita = numeroPibPerCapita1 > numeroPibPerCapita2;
    rSuperPoder = superPoder1 > superPoder2;
    
    printf("\n\n--------------- Exibindo comparação das cartas ----------------\n");
    
    printf("Carta com maior quantidade de população: %d\n", rQuantidadePopulacao);
    printf("Carta com maior tamanho da cidade (em km²): %d\n", rAreaQuilometrosQuadrado);
    printf("Carta com maior número de pontos turisticos: %d\n", rNumerosPontosTuristicos);
    printf("Carta com maior número do pib: %d\n", rNumeroPib);
    printf("Carta com menor DensidadePopulacionalHabKm: %d\n", rDensidadePopulacionalHabKm);
    printf("Carta com maior PIB da populacao: %d\n", rNumeroPibPerCapita);
    printf("Carta com maior Super poder: %d\n", rSuperPoder);


    printf("\n\n----------------------------- Fim -----------------------------\n");

    return 0;
}