#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100

int main() {
    float alunos[N] = {}, media, soma = 0;
    int i;
    srand(time(NULL));
    
    for(i = 0; i < N; i++) {
        alunos[i] = rand() % 11;
        soma += alunos[i];
    }
    
    for(i = 0; i < N; i++) {
        printf("alunos[%d] = %.1f\n", i, alunos[i]);
    }
    
    media = soma / N;
    printf("media dos alunos = %.2f\n", media);
    
    return 0;
}
