#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    int tabuleiro[10][10]; // Matriz do tabuleiro
    int navioH[3]; // Navio horizontal
    int navioV[3]; // Navio vertical

    // escolha das coordenadas iniciais
    int linhaH = 2, colunaH = 1;     //navio na horizontal começa em tabuleiro[2][1]
    int linhaV = 5, colunaV = 7;     //navio vertical começa em tabuleiro[5][7]

    //inicializando tabuleiro com água (0)

    for (int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    //preenchendo os vetores dos navios com valor 3

    for (int i=0; i<3; i++){
        navioH[i] = 3;  //navio horizontal
        navioV[i] = 3;  // navio vertical
    }

    //validando e posicionando o navio horizontal

    if (colunaH + 3 <= 10) {
        for (int i =0; i<3; i++){
            if(tabuleiro[linhaH][colunaH + i] == 0) {
                tabuleiro[linhaH][colunaH + i] = navioH[i];
            }
        }
    } else {
        printf("Erro: Navio horizontal fora dos limites!\n");
        return 1;
    }

    //Validando e posicionando navio vertical

    if (colunaV + 3 <= 10) {
        for (int i =0; i<3; i++){
            if(tabuleiro[linhaV + i][colunaV] == 0) {
                tabuleiro[linhaV + i][colunaV] = navioV[i];
            }
        }
    } else {
        printf("Erro: Navio vertical fora dos limites!\n");
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


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

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
