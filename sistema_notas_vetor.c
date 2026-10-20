#include <stdio.h>
#define MAX 10

int main() {
    int i;
    int RA[MAX] = {255808, 257874, 251459, 252885, 256702,
                   259987, 250720, 253525, 254477, 258960};
    float AV1[MAX] = {3, 3, 6, 7, 5, 4, 5, 7, 6, 9};
    float AV2[MAX] = {3, 1, 3, 5, 4, 4, 1, 4, 3, 2};
    float media[MAX];
    char status[MAX];
    float bonus, media_aprovacao;
    
    printf("Quantos pontos bonus deseja adicionar aos alunos (AV1): ");
    scanf("%f", &bonus);
    printf("Informe a media de aprovacao dos alunos: ");
    scanf("%f", &media_aprovacao);
    
    for(i = 0; i < MAX; i++) {
        AV1[i] += bonus; 
        if (AV1[i] > 10) AV1[i] = 10; 
        
        media[i] = (AV1[i] + AV2[i]) / 2;
        if(media[i] >= media_aprovacao)
            status[i] = 'A';
        else
            status[i] = 'R';
    }
    
    printf("\nCOD  RA      AV1  AV2  Media  Status\n");
    for(i = 0; i < MAX; i++) {
        printf("%02d   %d  %.1f  %.1f  %.1f    %c\n",
               i+1, RA[i], AV1[i], AV2[i], media[i], status[i]);
    }
    
    return 0;
}
