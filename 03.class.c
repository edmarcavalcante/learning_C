#include <stdio.h>
//#include <stdlib.h> // Necessário para malloc e fre

int main() {
    int idade = 25;        // Uma variável comum
    int *ponteiro;         // Declaração de um ponteiro para um inteiro
    ponteiro = &idade;     // 'p' agora guarda o endereço de 'idade'

    printf("Valor de idade: %d\n", idade);   // 25
    printf("Endereco de idade: %ponteiro\n", &idade); // Algo como 0x7ffee...
    printf("Valor via ponteiro: %d\n", *ponteiro);  // 25 (o ponteiro "olha" dentro do quarto)

}
