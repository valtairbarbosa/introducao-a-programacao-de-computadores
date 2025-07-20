#include <stdio.h>

int main(){

    //Dados da cidade1
    char estado1;
    char carta1[10];
    char cidade1[50];
    int quantidadePopulacao1;
    float areaQuilometrosQuadrado1;
    int numerosPontosTuristicos1;
    float numeroPib1;

    //Dados da cidade2
    char estado2;
    char carta2[10];
    char cidade2[50];
    int quantidadePopulacao2;
    float areaQuilometrosQuadrado2;
    int numerosPontosTuristicos2;
    float numeroPib2;

    printf("Desafio super trufo - país \n\n");
    
    printf("\n------------- Informe os dados da carta 01 ------------- \n");

    printf("Informe o nome do estado: ");
    scanf(" %c", &estado1);

    printf("Informe o nome da carta: ");
    scanf("%s", carta1);

    printf("Informe o nome da cidade: ");
    scanf("%s", cidade1);
    
    printf("Informe a quantidadede da população: ");
    scanf("%d", &quantidadePopulacao1);

    printf("Informe o tamanho da cidade (em km²): ");
    scanf("%f", &areaQuilometrosQuadrado1);

    printf("Informe o número de pontos turisticos: ");
    scanf("%d", &numerosPontosTuristicos1);

    printf("Informe o número do pib: ");
    scanf("%f", &numeroPib1);


    printf("\n------------- Informe os dados da carta 02 -------------\n");
    
    printf("Informe o nome do estado: ");
    scanf(" %c", &estado2);

    printf("Informe o nome da carta: ");
    scanf("%s", carta2);

    printf("Informe o nome da cidade: ");
    scanf("%s", cidade2);
    
    printf("Informe a quantidadede da população: ");
    scanf("%d", &quantidadePopulacao2);

    printf("Informe o tamanho da cidade (em km²): ");
    scanf("%f", &areaQuilometrosQuadrado2);

    printf("Informe o número de pontos turisticos: ");
    scanf("%d", &numerosPontosTuristicos2);

    printf("Informe o número do pib: ");
    scanf("%f", &numeroPib2);

    printf("\n\nCarta 01: \n");
    printf("Nome do estado: %c\n", estado1);
    printf("Nome da carta: %s\n", carta1);
    printf("nome da cidade: %s\n", cidade1);
    printf("Quantidade da população: %d\n", quantidadePopulacao1);
    printf("Área da cidade (em km²): %.2f\n",  areaQuilometrosQuadrado1);
    printf("Pontos turisticos: %d\n", numerosPontosTuristicos1);
    printf("Número do pib: %.2f\n\n", numeroPib1);

    printf("\n\nCarta 02: \n");
    printf("Nome do estado: %c\n", estado2);
    printf("Nome da carta: %s\n", carta2);
    printf("nome da cidade: %s\n", cidade2);
    printf("Quantidade da população: %d\n", quantidadePopulacao2);
    printf("Área da cidade (em km²): %.2f\n",  areaQuilometrosQuadrado2);
    printf("Pontos turisticos: %d\n", numerosPontosTuristicos2);
    printf("Número do pib: %.2f\n\n", numeroPib2);

    return 0;

}