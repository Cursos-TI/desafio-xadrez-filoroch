
#include <stdio.h>

void movimentarTorre(int casas, int direcao) {
    if (casas == 0) return;
    if (direcao == 0) {
        printf("Cima\n");
        movimentarTorre(casas - 1, 0);
    } else {
        printf("Direita\n");
        movimentarTorre(casas - 1, 1);
    }
}

void movimentarRainha(int casas, int modo) {
    if (casas == 0) return;
    if (modo == 0) {
        printf("Cima\n");
        movimentarRainha(casas - 1, 0);
    } else if (modo == 1) {
        printf("Direita\n");
        movimentarRainha(casas - 1, 1);
    } else {
        printf("Diagonal (Cima Direita)\n");
        movimentarRainha(casas - 1, 2);
    }
}

void movimentarBispoRec(int casas) {
    if (casas == 0) return;
    printf("Diagonal (Cima Direita)\n");
    movimentarBispoRec(casas - 1);
}

void movimentarBispoLoop(int casas) {
    for (int v = 1; v <= casas; v++) {
        for (int h = 1; h <= casas; h++) {
            if (v == h) printf("Diagonal (Cima Direita)\n");
        }
    }
}

void movimentarCavalo(int casas) {
    int dx[] = {2, 1, -1, -2, -2, -1, 1, 2};
    int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < casas; j++) {
            if ((dx[i] != 0 && dy[i] != 0) && (dx[i] * dx[i] + dy[i] * dy[i] == 5)) {
                if (dx[i] == 2 && dy[i] == 1) printf("Direita\nCima\n");
                else if (dx[i] == 1 && dy[i] == 2) printf("Cima\nDireita\n");
                else if (dx[i] == -1 && dy[i] == 2) printf("Cima\nEsquerda\n");
                else if (dx[i] == -2 && dy[i] == 1) printf("Esquerda\nCima\n");
                else if (dx[i] == -2 && dy[i] == -1) printf("Esquerda\nBaixo\n");
                else if (dx[i] == -1 && dy[i] == -2) printf("Baixo\nEsquerda\n");
                else if (dx[i] == 1 && dy[i] == -2) printf("Baixo\nDireita\n");
                else if (dx[i] == 2 && dy[i] == -1) printf("Direita\nBaixo\n");
            }
        }
    }
}

int main() {
    const int casas_torre = 5;
    const int casas_bispo = 4;
    const int casas_rainha = 3;
    const int casas_cavalo = 2;

    printf("Executando os movimentos da Torre\n");
    movimentarTorre(casas_torre, 0);
    movimentarTorre(casas_torre, 1);
    printf("\n");

    printf("Executando os movimentos do Bispo (recursivo)\n");
    movimentarBispoRec(casas_bispo);
    printf("\nExecutando os movimentos do Bispo (loops aninhados)\n");
    movimentarBispoLoop(casas_bispo);
    printf("\n");

    printf("Executando os movimentos da Rainha\n");
    movimentarRainha(casas_rainha, 0);
    movimentarRainha(casas_rainha, 1);
    movimentarRainha(casas_rainha, 2);
    printf("\n");

    printf("Executando os movimentos do Cavalo\n");
    movimentarCavalo(casas_cavalo);
    printf("\n");

    return 0;
}
