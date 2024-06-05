#include <stdio.h>
#include <stdlib.h>

void criar_vetor(float **vetor, int tamanho) {
    *vetor = (float*)calloc(tamanho, sizeof(float));
    if (*vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }
}

void ler_vetor(float *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = i * 1.0; // Preenchendo com valores simples para demonstração
    }
}

void imprimir_vetor(float *vetor, int tamanho) {
    printf("Vetor preenchido:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");
}

int main(void) {
    int tamanho = 5;
    float *vetor;
    
    // Chamando a função para criar o vetor
    criar_vetor(&vetor, tamanho);
    
    ler_vetor(vetor, tamanho);
    
    imprimir_vetor(vetor, tamanho);
    
    free(vetor);
    
    return 0;
}
