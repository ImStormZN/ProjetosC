#include <stdio.h>

int main () {

    int tabuleiro[10][10];
    int e,d;

    int agua = 0;

    // Setar tabuleiro com agua 0

    for(e = 0;e < 10; e++) {
        for(d = 0;d < 10; d++) {
            tabuleiro[e][d] = agua;
        }
    }

    // Navios

    int nH[4] = {3, 3 , 3, 3};
    int nV[4] = {3, 3, 3, 3};

    int nDo[4] = {3,3,3,3};
    int nDt[4] = {3,3,3,3};

    // Coordenadas dos Navios

    int linhaH = 4;
    int colunaH = 6;

    int linhaV = 7;
    int colunaV = 8;

    int linhaDo = 5;
    int colunaDo = 5;

    int linhaDt = 6;
    int colunaDt = 7;

    // Posicionar Navios

    // Horizontal

    for (e = 0; e < 4; e++) {
        tabuleiro[linhaH][colunaH + e] = nH[e];
    }
    
    // Vertical

    for (e = 0; e < 4; e++) {
        tabuleiro[linhaV + e][colunaV] = nV[e];
    }

    // Diagonal 

    for (e = 0; e < 4; e++) {
        tabuleiro[linhaDo + e][colunaDo + e] = nDo[e];
    }

    for (e = 0; e < 4; e++) {
        tabuleiro[linhaDt + e][colunaDt - e] = nDt[e];
    }

    // Exibir o tabuleiro

    printf("===================- Batalha Naval -===================\n\n");

    for(e = 0; e < 10; e++) {
        for(d = 0; d < 10; d++) {
            printf("%d ", tabuleiro[e][d]);
        }
        printf("\n");
    }





}
