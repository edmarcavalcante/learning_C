#include <stdio.h>
#include <string.h>

typedef struct {   // typedef + Veiculo -> é uma alias para o tipo struct
    char placa[9];   // Ex: ABC-1234 ou BRA2E19
    char modelo[20];
    int horaEntrada; // Simplificando para hora cheia (ex: 14)
    int ocupado;     // 0 para livre, 1 para ocupado
} Veiculo;


int main() {
    // Criamos um array de 3 structs do tipo Veiculo
    Veiculo patio[3];

    // Inicializando as vagas como vazias
    for(int i = 0; i < 3; i++) {
        patio[i].ocupado = 0;
    }

    // --- Simulação de Entrada de Veículo ---
    printf("--- Sistema de Estacionamento Professional ---\n");
    
    int vagaDesejada = 0; 
    printf("Escolha uma vaga (0 a 2): ");
    scanf("%d", &vagaDesejada);

    if (vagaDesejada >= 0 && vagaDesejada < 3) {
        printf("Digite a placa do carro: ");
        scanf("%s", patio[vagaDesejada].placa);
        
        printf("Digite o modelo: ");
        scanf("%s", patio[vagaDesejada].modelo);
        
        printf("Hora de entrada (0-23): ");
        scanf("%d", &patio[vagaDesejada].horaEntrada);
        
        patio[vagaDesejada].ocupado = 1;
        
        printf("\nVeiculo cadastrado com sucesso na vaga %d!\n", vagaDesejada);
    }

    // --- Exibindo o Status do Pátio ---
    printf("\n--- Status Atual do Patio ---\n");
    for(int i = 0; i < 3; i++) {
        if(patio[i].ocupado) {
            printf("Vaga %d: [%s] - %s (Entrou as %dh)\n", 
                   i, patio[i].placa, patio[i].modelo, patio[i].horaEntrada);
        } else {
            printf("Vaga %d: LIVRE\n", i);
        }
    }

    return 0;
}