/*
Pratica 2
Dupla:
    -Francisco Figueiredo Vasconcelos
    -Joao Jose Cardoso Ribeiro
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void preencherArquivoBin(FILE *f){

    int i = 0;
    int j;
    int x;

    srand(time(NULL));

    long num = rand() * 20;
    printf("%d", num);

    if(num < 0){
        num *= -1;
    }

    int vet[num];

    int num2;

    while(i < num){

        num2 = rand() % 1000;

        for(j = 0; i < num && j < num2; i++, j++){

                if(j == 0){
                    x = rand();
                }

                vet[i] = x;
        }
    }

    fwrite(vet, sizeof(int), num, f);

}

int main (){

    FILE* arq;

    arq = fopen("dados.bin", "wb");

    preencherArquivoBin(arq);

    fclose(arq);
}
