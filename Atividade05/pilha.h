#include <stdio.h>
#include <stdlib.h>

/* Função que cria a pilha. */

Pilha pilha(int m) {                            // Recebe como parâmetro o número de elementos que o vetor pilha vai ter.

    Pilha P = malloc(sizeof(struct pilha));     // Alocando a quantidade de memória necessária para a criação da pilha em bytes.
    P->max = m;                                 // Atribuindo o parâmetro ao valor max da pilha.
    P->topo = -1;                               // Atribui o valor -1 ao campo topo da pilha, esse valor indica que a pilha está vazia.
    P->item = malloc(m*sizeof(Itemp));          // Alocando a quantidade de memória necessária para a criação do vetor da pilha.

    return P;
}

/* ------------------------------------------------- */

/* Função que verifica se a pilha está vazia. */

int empty(Pilha P) {                            // Recebe como parâmetro a pilha a ser analisada.

    if (P->topo == -1) {                        // Verifica se o topo vale -1, esse valor indica que a pilha está vazia.
        return 1;                               // Se o topo valer -1 retorna TRUE.
    } else {
        return 0;                               // Se o topo NÃO valer -1 retorna FALSE.
    }

}

/* ------------------------------------------------- */

/* Função que verifica se a pilha está cheia. */

int full(Pilha P) {                             // Recebe como parâmetro a pilha a ser analisada.

    if( P->topo == P->max-1 ) {                 // Verifica se o topo vale o seu valor máximo. (P->max-1) fornece o valor máximo do topo.
        return 1;                               // Se o topo valer estiver no máximo retorna TRUE.
    } else {
        return 0;                               // Se o topo NÃO estiver no máximo retorna FALSE.
    }

}

/* ------------------------------------------------- */

/* Função que adiciona um elemento no topo da pilha. */

void push(Itemp x, Pilha P) {                            // Recebe como parâmetro a pilha e o valor a ser adicionado na respectiva pilha.

    if (full(P)) {                                       // Verifica se a pilha está cheia com a função full() criada anteriormente.
        puts("Pilha cheia!");                            // Se a pilha estiver cheia retornará a mensagem "Pilha cheia!" e o programa será abortado.
        abort();                                         // Função abort() da biblioteca <stdlib.h>
    } else {                                             /* Se a função for falsa: */
        P->topo++;                                       // 1. O topo será incrementado em um.
        P->item[P->topo] = x;                            // 2. Acessando o registro da estrutura pilha que referência o ponteiro do vetor da pilha...
    }                                                    // ... na posição do vetor equivalente ao topo (item[P->topo]) e atribuindo o valor do parâmetro x.
}

/* ------------------------------------------------- */

/* Função que remove o último elemento da pilha. */

Itemp pop(Pilha P) {                            // Recebe como parâmetro a pilha a ter o último elemento removido.

    if (empty(P)) {                             // Verifica se a pilha está vazia com a função empty() criada anteriormente.
        puts("Pilha vazia!");                   // Se a pilha estiver vazia retornará a mensagem "Pilha vazia!" e o programa será abortado.
        abort();                                // Função abort() da biblioteca <stdlib.h>
    }   else {                                  /* Se a função for falsa: */
        Itemp x = P->item[P->topo];             // 1. Criando uma variável x e atributindo o seu valor o mesmo valor ao acessar o registro da estrutura pilha que referência..
        P->topo--;                              //  ... o ponteiro do vetor da pilha na posição do vetor equivalente ao topo ([P->topo]).
        return x;                               // 2. Decrementando o valor do topo. 3. Retornando o valor removido.
    }

}

/* ------------------------------------------------- */

/* Função que acessa o elemento do topo da pilha. */

Itemp getTop(Pilha P) {                         // Recebe como parâmetro a pilha a ter o último topo acessado.

    if (empty(P)) {                             // Verifica se a pilha está vazia com a função empty() criada anteriormente.
        puts ("Pilha vazia!");                    // Se a pilha estiver vazia retornará a mensagem "Pilha vazia!" e o programa será abortado.
        abort();                                // Função abort() da biblioteca <stdlib.h>
    }   else {                                  /* Se a função for falsa: */
        return P->item[P->topo];                // 1. Retorna o elemento do topo.
    }

}

/* ------------------------------------------------- */

/* Função que acessa o elemento do topo da pilha. */

void destroy(Pilha *P) {

    free((*P)->item);
    free(*P);
    *P = NULL;

}

/* ------------------------------------------------- */
