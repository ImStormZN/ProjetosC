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

    int nH[3] = {3, 3 , 3};
    int nV[3] = {3, 3, 3};

    // Coordenadas dos Navios

    int linhaH = 4;
    int colunaH = 6;

    int linhaV = 7;
    int colunaV = 8;

    // Posicionar Navios

    // Horizontal

    for (e = 0; e < 3; e++) {
        tabuleiro[linhaH][colunaH + e] = nH[e];
    }
    
    // Vertical

    for (e = 0; e < 3; e++) {
        tabuleiro[linhaV + e][colunaV] = nV[e];
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
