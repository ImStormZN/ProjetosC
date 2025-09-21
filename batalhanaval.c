#include <stdio.h>
#include <stdlib.h>  // para abs()

// Função para imprimir o tabuleiro com números
void imprimirTabuleiro(int n, int tabuleiro[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Função para aplicar a matriz de habilidade no tabuleiro
void aplicarHabilidade(int n, int tabuleiro[n][n], int tam, int habilidade[tam][tam], int origemLinha, int origemColuna) {
    int offset = tam / 2; // deslocamento para centralizar

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            if (habilidade[i][j] == 1) {
                int linha = origemLinha + (i - offset);
                int coluna = origemColuna + (j - offset);

                // Garantir que está dentro dos limites
                if (linha >= 0 && linha < n && coluna >= 0 && coluna < n) {
                    if (tabuleiro[linha][coluna] == 0) {
                        tabuleiro[linha][coluna] = 5; // marcar habilidade
                    }
                }
            }
        }
    }
}

int main() {
    int n = 10;     // tamanho do tabuleiro
    int tam = 5;    // tamanho da matriz das habilidades
    int agua = 0;
    int navio = 3;
    int efeito = 5;

    int tabuleiro[10][10];

    // Inicializar o tabuleiro com água
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            tabuleiro[i][j] = agua;
        }
    }

    // Colocar alguns navios fixos
    tabuleiro[2][2] = navio;
    tabuleiro[2][3] = navio;
    tabuleiro[2][4] = navio;
    tabuleiro[5][5] = navio;

    // Matrizes de habilidades (5x5)
    int cone[5][5];
    int cruz[5][5];
    int octaedro[5][5];

    // Criar cone (triângulo apontando para baixo)
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            if (j >= (tam/2 - i) && j <= (tam/2 + i) && i <= tam/2) {
                cone[i][j] = 1;
            } else {
                cone[i][j] = 0;
            }
        }
    }

    // Criar cruz
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            if (i == tam/2 || j == tam/2) {
                cruz[i][j] = 1;
            } else {
                cruz[i][j] = 0;
            }
        }
    }

    // Criar octaedro (losango)
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            if (abs(i - tam/2) + abs(j - tam/2) <= tam/2) {
                octaedro[i][j] = 1;
            } else {
                octaedro[i][j] = 0;
            }
        }
    }

    // Aplicar habilidades no tabuleiro
    aplicarHabilidade(n, tabuleiro, tam, cone, 1, 1);      // cone na posição (1,1)
    aplicarHabilidade(n, tabuleiro, tam, cruz, 5, 5);      // cruz no centro
    aplicarHabilidade(n, tabuleiro, tam, octaedro, 7, 7);  // octaedro no canto inferior direito

    // Mostrar resultado
    printf("===== TABULEIRO COM HABILIDADES =====\n\n");
    imprimirTabuleiro(n, tabuleiro);

    return 0;
}
