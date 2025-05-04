#include <stdio.h>

int main(){

    printf("Movimento da Torre:\n");

    // Comando para mover a Torre 5 casas para a direita usando for.

    for (int i = 0; i < 5; i++)
    {
        printf("Direita\n");    // Imprime a direção do movimento da Torre.
    }
    
    printf("\nMovimento do Bispo:\n");
    
    // Comando para mover o Bispo 5 casas na diagonal para cima e à direita usando while.
    
    int j = 0;

    while (j < 5)
    {
        printf("Cima Direita\n");  // Imprime a direção do movimento do Bispo.
        j++;
    }

    printf("\nMovimento da Rainha:\n");

    // Comando para mover a Rainha 8 casas para a esquerda usando do-while.

    int k = 0;

    do
    {
        printf("Esquerda\n");   // Imprime a direção do movimento da Rainha.
        k++;
    } while (k < 8);

    printf("\nMovimento do Cavalo:\n");

    int movimentoCompleto = 1;  // Flag para controlar o movimento em 'L'

    //  Comando para mover o cavalo duas vezes para cima e uma vez para a direita usando while e for.

    while (movimentoCompleto--)
    {
        for (int l = 0; l < 2; l++)
        {
            printf("Cima\n");  // Imprime "Cima" duas vezes.
        }

        printf("Direita\n");  //Imprime "Direita" uma vez.
         
    }
    

    return 0;

}
