#include <stdio.h>

int main () {
    int tabuleiro[10][10];
    int e, d;

    // Constantes
    int agua = 0;
    int navio = 3;

    // 1. Setar tabuleiro com água (0)
    for(e = 0; e < 10; e++) {
        for(d = 0; d < 10; d++) {
            tabuleiro[e][d] = agua;
        }
    }

    // 2. Coordenadas iniciais dos navios
    int linhaH = 4, colunaH = 6;   // horizontal
    int linhaV = 7, colunaV = 8;   // vertical
    int linhaDo = 5, colunaDo = 5; // diagonal principal
    int linhaDt = 6, colunaDt = 7; // diagonal secundária

    // 3. Posicionar Navio Horizontal (4 casas)
    if (colunaH + 3 < 10) {
        int pode = 1;
        for (e = 0; e < 4; e++) {
            if (tabuleiro[linhaH][colunaH + e] != agua) {
                pode = 0; break;
            }
        }
        if (pode) {
            for (e = 0; e < 4; e++) {
                tabuleiro[linhaH][colunaH + e] = navio;
            }
        }
    }

    // 4. Posicionar Navio Vertical (4 casas)
    if (linhaV + 3 < 10) {
        int pode = 1;
        for (e = 0; e < 4; e++) {
            if (tabuleiro[linhaV + e][colunaV] != agua) {
                pode = 0; break;
            }
        }
        if (pode) {
            for (e = 0; e < 4; e++) {
                tabuleiro[linhaV + e][colunaV] = navio;
            }
        }
    }

    // 5. Posicionar Navio Diagonal Principal (↘)
    if (linhaDo + 3 < 10 && colunaDo + 3 < 10) {
        int pode = 1;
        for (e = 0; e < 4; e++) {
            if (tabuleiro[linhaDo + e][colunaDo + e] != agua) {
                pode = 0; break;
            }
        }
        if (pode) {
            for (e = 0; e < 4; e++) {
                tabuleiro[linhaDo + e][colunaDo + e] = navio;
            }
        }
    }

    // 6. Posicionar Navio Diagonal Secundária (↙)
    if (linhaDt + 3 < 10 && colunaDt - 3 >= 0) {
        int pode = 1;
        for (e = 0; e < 4; e++) {
            if (tabuleiro[linhaDt + e][colunaDt - e] != agua) {
                pode = 0; break;
            }
        }
        if (pode) {
            for (e = 0; e < 4; e++) {
                tabuleiro[linhaDt + e][colunaDt - e] = navio;
            }
        }
    }

    // 7. Exibir o tabuleiro
    printf("===================- Batalha Naval -===================\n\n");
    for(e = 0; e < 10; e++) {
        for(d = 0; d < 10; d++) {
            printf("%d ", tabuleiro[e][d]);
        }
        printf("\n");
    }

    return 0;
}
