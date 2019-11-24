#include <stdio.h>

void imprimir_arq(FILE* arq){

    char str[300];
    int i;

    while(fscanf(arq,"%i \n", &i) != EOF){

        fgets(str, 300, arq);

        printf("%s", str);

    }

    printf("\n");

}

void vigenere(FILE* entrada, FILE* saida){

    char str1[100], str2[300], str3[300];

    printf("Palavra-chave: ");

    fflush(stdin);

    fgets(str1, 100, stdin);

    int tam1, tam2, i = 0, j = 0, fim;

    while(str1[i] != '\0'){
        i++;
    }

    tam1 = i - 1;

    j = 0;

    do{

        fgets(str2, 300, entrada);
        i = 0;

        while(str2[i] != '\0'){
            for(j = 0; j < tam1 && str2[i] != '\0'; j++, i++){
                str3[i] = (str1[j] + str2[i]) % 127;
            }
        }

        str3[i] = str2[i];

        fputs(str3, saida);
        fputs("\n", saida);

    }while(fscanf(entrada,"%i \n", &fim) != EOF);

}


int main (){

    FILE* arq, *crip;

    arq = fopen("teste.txt", "r");
    crip = fopen("codificado.txt", "w");

    if(arq == NULL){
        printf("Nao e possível abrir o arquivo\n\n");
        return 0;
    }

    if(crip == NULL){
        printf("Nao e possivel abrir o arquivo\n\n");
        return 0;
    }

    imprimir_arq(arq);

    fclose(arq);
    fopen("teste.txt", "r");

    vigenere(arq, crip);

    fclose(arq);
    fclose(crip);

    printf("A mensagem foi encriptada\n");

    fclose(crip);

    return 0;

}
