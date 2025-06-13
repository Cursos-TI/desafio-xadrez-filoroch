#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int movimento_torre = 5; 
    const int movimento_bispo = 5; 
    const int movimento_rainha = 8;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Executando os movimentos do bispo\n");
    for (int posicao = 0; posicao <= movimento_bispo; posicao++)
    {
        posicao == 0 || posicao == 3 || posicao == 5 ? printf("Cima\n") : printf("Direita\n");
        printf("O bispo se moveu %d\n", posicao + 1);
    }
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Executando os movimentos da torre\n");
    for (int posicao = 0; posicao <= movimento_torre; posicao++)
    {
        printf("Direita");
        printf("A torre se moveu %d\n", posicao + 1);
    }
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Executando os movimentos da Rainha");
    for (int posicao; posicao <= movimento_rainha; posicao++)
    {
        posicao == 0 || posicao == 3 || posicao == 5 || posicao == 7 ? printf("Cima\n") : printf("Direita\n");
        printf("A rainha se moveu %d\n", posicao + 1);
    }
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
