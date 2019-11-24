#include <stdio.h>
#include <stdlib.h>

int main (){

    FILE *arq;

    arq = fopen("frases.txt", "w");

    int flag = 1;
    char str[100];

    if(arq != NULL){

            do{
                printf("\nDigite a frase: ");
                fflush(stdin);
                fgets(str, 100, stdin);

                fprintf(arq, "%s", str);

                printf("Deseja escrever nova frase?\n");
                printf("1 - Sim\n0 - Nao\n\n-");
                scanf("%d", &flag);

                system("cls");

            } while (flag == 1);


            fclose(arq);
    }

    return 0;

}
