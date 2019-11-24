#include <stdio.h>

int main (){

    FILE *arq;

    arq = fopen("pensaodadorinha.txt", "w");

    if(arq != NULL){
        fprintf(arq, "%s", "Hermes e matheus");
        fclose(arq);
    }
}
