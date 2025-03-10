#include <stdio.h>

void moverTorre(int casas)
{
    if (casas > 0)
    {
        printf("DIREITA\n");
        moverTorre(casas - 1);
    }
    
}

void moverBispo(int casas)
{
    if (casas > 0)
    {
        printf("CIMA\n");
        printf("DIREITA\n");
        moverBispo(casas - 1);
    }
    
}

void moverRainha(int casas)
{
    if (casas > 0)
    {
        printf("ESQUERDA\n");
        moverRainha(casas - 1);
    }
    
}

int main (){

int torre, bispo, rainha, cavalo, escolhaJogador;

     //CRIAÇÃO DE UM MENU PARA ESCOLHA DE PEÇAS A SER MOVIMENTADA

    printf("## JOGO DE XADREZ ##\n");
    printf("Escolha o NÚMERO da PEÇA que deseja MOVIMENTAR: \n");
    printf("1 TORRE\n");
    printf("2 BISPO\n");
    printf("3 RAINHA\n");
    printf("4 CAVALO\n");
    printf("Escolha:\n");
    scanf("%d", &escolhaJogador);

    switch (escolhaJogador)
    {
    case 1:  //MOVIMENTO DA TORRE - WHILE
    printf("VOCÊ ESCOLHEU A TORRE\n");   
    moverTorre(5);
    break;

    case 2:   //MOVIMENTO DO BISPO - DO WHILE
    printf("VOCÊ ESCOLHEU O BISPO\n"); 
    moverBispo(5);
    break;

    case 3:   //MOVIMENTO DA RAINHA - FOR
    printf("VOCÊ ESCOLHEU A RAINHA\n");
    moverRainha(8);
    break;

    case 4:   //MOVIMENTO DO CAVALO EM "L" - FOR (ANINHADO)
    printf("VOCÊ ESCOLHEU O CAVALO\n");
    for (int cavalo = 1; cavalo <= 2; cavalo++)
    {
        printf("BAIXO\n");
    }
        for (int cavalo = 1; cavalo <= 1; cavalo++)
        {
        printf("ESQUERDA\n");
        }
    
    break;    

    default:
    printf("Opção inválida!\n");
    break;
}


return 0;

}