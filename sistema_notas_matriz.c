#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 10
#define COL 4

int main() {
    int i;
    float notas[LIN][COL]; 
    float bonus, media_aprovacao;
    
    srand(time(NULL));
    
    scanf("%f", &bonus);
    scanf("%f", &media_aprovacao);
    
    printf("\nQuantos pontos bonus deseja adicionar aos alunos (AV1): %.1f", bonus);
    printf("\nInforme a media de aprovacao dos alunos: %.1f\n\n", media_aprovacao);
    printf("COD\tRA\tAV1\tAV2\tMedia\tStatus\n");
    
    for (i = 0; i < LIN; i++) {
        int ra = 250000 + rand() % 10000;
        notas[i][1] = rand() % 11; 
        notas[i][2] = rand() % 11; 
        
        notas[i][1] += bonus;
        if (notas[i][1] > 10) notas[i][1] = 10;
        
        notas[i][3] = (notas[i][1] + notas[i][2]) / 2.0;
        char status = (notas[i][3] >= media_aprovacao) ? 'A' : 'R';
        
        printf("%02d\t%d\t%.1f\t%.1f\t%.1f\t%c\n",
               i + 1, ra, notas[i][1], notas[i][2], notas[i][3], status);
    }
    
    return 0;
}
