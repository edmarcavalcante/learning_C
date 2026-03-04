#include <stdio.h>
#include <stdlib.h> // Necessário para malloc e fre
// CRIANDO LISTA DINÂMICA

int main() {
    int n;
    printf("Quantos elementos você quer na sua lista?");
    scanf("%d", &n);

    int *lista_dinamica = (int *) malloc(n * sizeof(int));

    if (lista_dinamica == NULL) {
        printf("Erro: Memórias insuficiente!");
        return 1;
    }

    //Preenchendo a lista

    for(int i=0; i < n; i++) {
        lista_dinamica[i] = i * 10;
    }


    printf("O terceiro elemento da lista dinâmica é: %d\n", lista_dinamica[2]);

    //REGRA DE OURO: Sempre libere o que alocou!

    free(lista_dinamica);

    return 0;

}