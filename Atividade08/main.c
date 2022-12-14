#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "pilha.h"

int main() {
    char e[32];
    char *posfix;
    int y;
    int x;
    int n;
    Pilha *p = pilha(32);

    printf("Infixa: ");
    fgets(e,31,stdin);
    posfix = posfixa(e);
    printf("Posfixa: %s\n", posfix);

    for (int i = 0; posfix[i]; i++){
        if (isalpha(posfix[i])){
            push(posfix[i],p);
        } else {
            y = pop(p);
            x = pop(p);
            switch(posfix[i]){
                case '~':
                    push(y+x,p);
                    break;
                case '&':
                    push(y-x,p);
                    break;
                case '|':
                    push(y*x,p);
                    break;
            }
        }
    }

    printf("Resultado: %s",desempilha(p));

    return 0;
    
}
