#include <stdio.h>

int main(){

    int escolhaCidade1, escolhaCidade2;

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
    int rCidadeVencedora;
    int rCartaVencedora;

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



    printf("\n\n--------------- jogo de Super trunfo Cidades -------------\n");
    printf("Escolha uma opção: \n");
    printf("1 - População \n");
    printf("2 - Área Km² \n");
    printf("3 - Pib \n");
    printf("Escolha: ");
    scanf("%d", &escolhaCidade1);
    
    printf("\n\n--------------- Exibindo resultado do jogo -------------\n");

    printf("Cidade 1: %s \n", cidade1);
    printf("Cidade 2: %s \n", cidade2);

    switch (escolhaCidade1){

        case 1:
            printf("Modalidade: Quantidade de população\n");
            printf("População da cidade 1: %d \n", quantidadePopulacao1);
            printf("População da cidade 2: %d \n", quantidadePopulacao2);

           if (quantidadePopulacao1 > quantidadePopulacao2) {
               rCidadeVencedora = 1; 
            }else if (quantidadePopulacao1 < quantidadePopulacao2){
                rCidadeVencedora = 2; 
            }else{
                rCidadeVencedora = 0;
            }
            break;
        case 2:
            printf("Modalidade: Área Km²\n");
            printf("Área Km² da cidade 1: %f \n", areaQuilometrosQuadrado1);
            printf("Área Km² da cidade 2: %f \n", areaQuilometrosQuadrado2);

           if (areaQuilometrosQuadrado1 > areaQuilometrosQuadrado2) {
               rCidadeVencedora = 1; 
            }else if (areaQuilometrosQuadrado1 < areaQuilometrosQuadrado2){
                rCidadeVencedora = 2; 
            }else{
                rCidadeVencedora = 0;
            }
            break;
        case 3:
            printf("Modalidade: Pib\n");
            printf("Pib da cidade 1: %f \n", numeroPib1);
            printf("Pib da cidade 2: %f \n", numeroPib2);

           if (numeroPib1 > numeroPib2) {
               rCidadeVencedora = 1; 
            }else if (numeroPib1 < numeroPib2){
                rCidadeVencedora = 2; 
            }else{
                rCidadeVencedora = 0;
            }
            break;
        
        default:
            printf("Opção inválida!\n");
    }
    if(rCidadeVencedora == 0){
        printf("Empate!");
    }else{
        printf("***Parabéns Cidade %d vencedora! ***", rCidadeVencedora);
    }

}
