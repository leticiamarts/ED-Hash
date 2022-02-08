#include <stdio.h>

int divisao(int chave, int TABLE_SIZE){
    return chave % TABLE_SIZE;
}

int multiplicacao(int chave, int TABLE_SIZE){
    int y;
    double frac, x, constanteFracionaria = 0.724;
    x = chave * constanteFracionaria;
    y = chave * constanteFracionaria;
    frac = x - y;
    return TABLE_SIZE * frac;
}

int dobra(int *chave, int TABLE_SIZE){
    int i, valor;
    int vetorA[4], vetorB[2];

    vetorA[0] = chave[4] + chave[3];
    vetorA[1] = chave[5] + chave[2];
    vetorA[2] = chave[6] + chave[1];
    vetorA[3] = chave[7] + chave[0];

    for(i = 0; i < 4; i++){
        if(vetorA[i] >= 10){
            vetorA[i] = vetorA[i] - 10;
        }
    }

    vetorB[0] = vetorA[2] + vetorA[1];
    vetorB[1] = vetorA[3] + vetorA[0];
    
    for(i = 0; i < 2; i++){
        if(vetorB[i] >= 10){
            vetorB[i] = vetorB[i] - 10;
        }
    }

    valor = 10* vetorB[0] + vetorB[1];
    return valor;
}

int main(){
    int chave = 123456, TABLE_SIZE = 1024, chave2[8];

    chave2[0] = 9;
    chave2[1] = 5;
    chave2[2] = 1;
    chave2[3] = 6;
    chave2[4] = 8;
    chave2[5] = 4;
    chave2[6] = 3;
    chave2[7] = 5;

    printf("\nResultado Divisão: %d\n", divisao(chave, TABLE_SIZE));
    printf("\nResultado Multiplicação: %d\n", multiplicacao(chave, TABLE_SIZE));
    printf("\nResultado Dobra: %d\n", dobra(chave2, TABLE_SIZE));
    return 0;
}