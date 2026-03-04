#include <stdio.h>
#include <string.h>

// 1. Definindo o "Molde"
struct Usuario {
    int id;
    char nome[50];
    float saldo;
};

int main() {
    // 2. Criando uma variável do tipo 'struct Usuario'
    struct Usuario user1;

    // 3. Acessando os campos com o operador PONTO (.)
    user1.id = 101;
    strcpy(user1.nome, "Guilherme"); // Para strings, usamos strcpy
    user1.saldo = 450.75;

    printf("Usuario: %s (ID: %d) tem R$ %.2f\n", user1.nome, user1.id, user1.saldo);

    printf("\n*****************************************\n");



    return 0;
}


// Quando usamos ponteiros com structs, o operador . (ponto) muda para -> (seta). É a sintaxe mais elegante do C

//struct Usuario *ptr = &user1;

// Estas duas linhas fazem exatamente a mesma coisa:
//printf("Nome: %s\n", (*ptr).nome); // Jeito difícil
//printf("Nome: %s\n", ptr->nome);   // Jeito PROFISSIONAL (Operador Seta)