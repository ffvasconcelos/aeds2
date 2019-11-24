/*
Pratica 2
Dupla:
    -Francisco Figueiredo Vasconcelos
    -Joao Jose Cardoso Ribeiro
*/

#include <stdio.h>

void run_length(FILE* read, FILE* write){



}

int main(){

    FILE *arq1, *arq2;

    fopen("dados.bin", "rb");

    if(arq1 == NULL){
        printf("O arquivo dados.bin nao existe");
        return 0;
    }

    fopen("dados_compac.bin", "wb");

    run_lenght(arq1, arq2);

}
