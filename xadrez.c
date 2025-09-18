#include <stdio.h>

void movimentoTorre(int n) {
    if(n > 0) {
        printf("Direita\n");
        movimentoTorre(n - 1);
    }
}

void movimentoBispo(int n) {
    if(n > 0) {
        printf("Cima\n");
        printf("Direita\n");
        movimentoBispo(n - 1);
    }
}

void movimentoRainha(int n) {
    if(n > 0) {
        printf("Esquerda\n");
        movimentoRainha(n - 1);
    }
}

void movimentoCavalo(int n, int t) {
    if(n > 0) {
        printf("Baixo\n");
        movimentoCavalo(n - 1,t);
    }

    if(n == 0) {
        if(t > 0) {
            printf("Esquerda\n");
            movimentoCavalo(n,t - 1);
        }
        
    }
}


int main () {


    // Movimento Torre
    printf("======== Movimento Torre ============\n\n");
    movimentoTorre(5);

    printf("\n");

    // Movimento Bispo

    printf("======== Movimento Bispo ============\n\n");
    movimentoBispo(5);

    printf("\n");

    // Movimento Rainha

    printf("======== Movimento Rainha ============\n\n");
    movimentoRainha(8);

    printf("\n");

    // Movimento Cavalo

    printf("======== Movimento Cavalo ============\n\n");
    movimentoCavalo(2,1);

    return 0;

}
