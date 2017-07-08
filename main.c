#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char word[30] = "Teste teste";
    int i, wordcryp[strlen(word)], result;
    for(i = 0; i < strlen(word); i++){
        wordcryp[i] = (int)word[i];
    }

    char aux[30];
    for(i = 0; i < strlen(word); i++){
        result = wordcryp[i];
        while(result >= 2){
            strcat(aux, (result % 2) ? "1": "0");
            result = result / 2;
        }
        for(i = strlen(aux)-1; i > 0; i--){
            printf("%c", aux[i]);
        }printf(" ");
        strcpy(aux, "");
    }
    return 0;
}
