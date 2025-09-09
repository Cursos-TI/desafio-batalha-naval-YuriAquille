#include <stdio.h>

#define TAM 10   // tamanho do tabuleiro 10x10

int main() {
    int tabuleiro[TAM][TAM] = {0};  // inicializa o tabuleiro com 0

    //Manual dos navios

    //Navio vertical 3 posições

    int navioverticalX = 2; //coluna fixa 
    int navioverticalY = 4; // linha inicial
    int tamanhovertical = 3;

    //navio horizontal 4 posições

    int navioHorizontalX = 6; // linha fixa
    int navioHorizontalY = 1; // coluna 
    int tamanhohorizontal = 4;

    printf("--- BATALHA NAVAL - NIVEL NOVATO ---") ;
    