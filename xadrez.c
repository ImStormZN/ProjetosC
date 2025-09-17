#include <stdio.h>

int main () {

    // Movimento Torre
    printf("======== Movimento Torre ============\n\n");

    for (int i = 1; i <= 5; i++) {
        
        printf("Direita\n");

    }

    printf("\n");

    // Movimento Bispo

    printf("======== Movimento Bispo ============\n\n");

    int c = 0;
    while (c < 5) {
        printf("Cima\n");
        printf("Direita\n");
        c++;
    }

    printf("\n");

    // Movimento Rainha

    printf("======== Movimento Rainha ============\n\n");
    
    int rC = 0;
    do {
        printf("Esquerda\n");
        rC++;
    } while (rC < 8);

    printf("\n");

    // Movimento Cavalo

    printf("======== Movimento Cavalo ============\n\n");

    for(int i = 1; i <= 2; i++) {

        printf("Baixo\n");

        if(i == 2) {
            int c = 0;
            while(c < 1) {
                printf("Esquerda\n");
                c++;
            }
        }
        
    }


}
