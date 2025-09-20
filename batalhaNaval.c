#include <stdio.h>
#define TAM_T 10
#define TAM_N 3
#define TAM_D 3
// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    int tabuleiro[TAM_T][TAM_T]; // Matriz do tabuleiro
    int navioH[TAM_N]; // Navio horizontal
    int navioV[TAM_N]; // Navio vertical
    int navioD1[TAM_D]; // Navio diagonal 1
    int navioD2[TAM_D]; // Navio diagonal 2

    // escolha das coordenadas iniciais
    int linhaH = 2, colunaH = 1;     //navio na horizontal começa em tabuleiro[2][1]
    int linhaV = 5, colunaV = 7;     //navio vertical começa em tabuleiro[5][7]
    int linhaD1 = 6, colunaD1 = 3;   // navio diagonal 1 começa em tabuleiro[6][3]
    int linhaD2 = 3, colunaD2 = 7;   // navio diagonal 2 começa em tabuleiro[3][7]

    //inicializando tabuleiro com água (0)
 
    for (int i=0; i<TAM_T; i++){
        for(int j=0; j<TAM_T; j++){
            tabuleiro[i][j] = 0;
        }
    }
    
    //preenchendo os vetores dos navios com valor 3

    for (int i=0; i<TAM_N; i++){
        navioH[i] = TAM_N;  //navio horizontal
        navioV[i] = TAM_N;  // navio vertical
        navioD1[i] = TAM_D; // navio diagonal 1
        navioD2[i] = TAM_D; // navio diagonal 2
    }

    //validando e posicionando o navio horizontal

    if (colunaH + TAM_N <= 10) {
        for (int i =0; i<TAM_N; i++){
            if(tabuleiro[linhaH][colunaH + i] == 0) {
                tabuleiro[linhaH][colunaH + i] = navioH[i];
            }
        }
    } else {
        printf("Erro: Navio horizontal fora dos limites!\n");
        return 1;
    }

    //Validando e posicionando navio vertical

    if (colunaV + TAM_N <= 10) {
        for (int i =0; i<TAM_N; i++){
            if(tabuleiro[linhaV + i][colunaV] == 0) {
                tabuleiro[linhaV + i][colunaV] = navioV[i];
            }
        }
    } else {
        printf("Erro: Navio vertical fora dos limites!\n");
        return 1;
    }

    // validando e posicionando o navio 1 na diagonal

    if (colunaD1 + TAM_D <= 10) {
        for (int i =0; i<TAM_N; i++){
            if(tabuleiro[linhaD1+i][colunaD1+i] == 0) {
                tabuleiro[linhaD1+i][colunaD1+i] = navioD1[i];
            }
        }
    } else {
        printf("Erro: Navio diagonal 1 fora dos limites!\n");
        return 1;
    }

    // validando e posicionando o navio 2 na diagonal

    if (colunaD2 + TAM_D <= 10) {
        for (int i =0; i<TAM_N; i++){
            if(tabuleiro[linhaD2-i][colunaD2+i] == 0) {
                tabuleiro[linhaD2-i][colunaD2+i] = navioD2[i];
            }
        }
    } else {
        printf("Erro: Navio diagonal 2 fora dos limites!\n");
        return 1;
    }

    // Exibindo o tabuleiro

    printf("Tabuleiro 10x10 (0 = agua, 3 = navio):\n\n");

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }


    

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
