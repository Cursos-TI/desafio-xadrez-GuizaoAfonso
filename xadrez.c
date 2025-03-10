#include <stdio.h>
int main (){

int torre = 1, bispo = 1, rainha, cavalo, escolhaJogador;

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
    while (torre <= 5)
    {
    printf("DIREITA\n", torre);  
    torre++;
    }
    break;

    case 2:   //MOVIMENTO DO BISPO - DO WHILE
    printf("VOCÊ ESCOLHEU O BISPO\n"); 
    do
    {
    printf("CIMA\n", bispo);
    printf("DIREITA\n", bispo);
    bispo++;
    } while (bispo <= 5);
    break;

    case 3:   //MOVIMENTO DA RAINHA - FOR
    printf("VOCÊ ESCOLHEU A RAINHA\n");
    for (int rainha = 0; rainha < 8; rainha++)
    {
        printf("ESQUERDA\n");
    }
    break;

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

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



    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

 
