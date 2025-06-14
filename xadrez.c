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
    printf("Executando os movimentos do bispo\n\n");
    for (int posicao = 0; posicao <= movimento_bispo; posicao++)
    {
        char* movimento = posicao == 0 || posicao == 3 || posicao == 5 ? "Cima\n" : "Direita\n";
        printf("[%d] O bispo se moveu %s", posicao, movimento);
    }
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nExecutando os movimentos da torre\n\n");
    for (int posicao = 0; posicao <= movimento_torre; posicao++)
    {
        char* movimento = "Direita";
        printf("[%d] A torre se moveu %s\n", posicao, movimento);
    }
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nExecutando os movimentos da Rainha\n\n");
    for (int posicao; posicao <= movimento_rainha; posicao++)
    {
        char* movimento = posicao == 0 || posicao == 2 || posicao == 4 || posicao == 6 || posicao == 8 ? "Cima\n" : "Direita\n";
        printf("[%d] A rainha se moveu %s", posicao, movimento);
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
