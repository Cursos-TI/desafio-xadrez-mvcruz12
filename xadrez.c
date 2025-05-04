#include <stdio.h>

// Declaração das funções para que o código as reconheça.

void moverTorre(int casas);
void moverRainha(int casas1);
void moverBispo(int casas2);
void moverBispo1(int casas3);

// Uso de funções recursivas para simular a movimentação da Torre 5 casas para a direita, Rainha 9 casas para a esquerda e Bispo 5 casas na diagonal para cima e à direita.

void moverTorre(int casas)
{
    if(casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverRainha(int casas1)
{
    if(casas1 > 0)
    {
        printf("Esquerda\n");
        moverRainha(casas1 - 1);
    }
}

void moverBispo(int casas2)
{
    if(casas2 > 0)
    {
        printf("Cima\n");
        moverBispo1(casas2 - 1);
    }
}

void moverBispo1(int casas3)
{
    if(casas3 > 0)
    {
        printf("Direita\n");
        moverBispo(casas3 - 1);
    }
}


int main(){

    printf("Movimento da Torre:\n");    

    moverTorre(5);                            // Função recursiva da Torre.
    
    printf("\nMovimento do Bispo:\n");
    
    moverBispo(10);                           // Função recursiva do Bispo.

    printf("\nMovimento da Rainha:\n");    

    moverRainha(9);                           // Função recursiva da Rainha. 

    printf("\nMovimento do Cavalo:\n");

    // Loop com múltiplas variáveis e condições para simular o movimento do Cavalo em "L". 

      for (int i = 0, movimentoCompleto = 0; i < 2 && movimentoCompleto < 2; i++, movimentoCompleto++)
      {
            printf("Cima\n");
      }
   
    printf("Direita\n");
    

    return 0;

}
