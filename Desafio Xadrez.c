#include <stdio.h>

int main(){

    printf("Desafio Xadrez!\n");

    // Mover a torre 5 casas à direita
for (int i = 0; i < 5; i++) {
        printf("Torre Direita\n"); // Imprime a direção do movimento
}

    // Mover a Bispo 5 casas na diagonal para cima e à direita
int i = 1;
while (i <= 5)
{
    printf("Bispo Cima,direita %d\n", i); // Imprime a direção do movimento
    i++;
}
    // Mover a Rainha 8 casas à esquerda
for (int i = 0; i < 8; i++) {
        printf("Rainha Esquerda\n"); // Imprime a direção do movimento
}

    return 0;
   

}
