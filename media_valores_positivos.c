#include <stdio.h>

int main() {
    float valor, soma = 0;
    int positivos = 0;
    
    for(int i = 0; i < 6; i++) {
        scanf("%f", &valor);
        if(valor > 0) {
            soma += valor;
            positivos++;
        }
    }
    
    if (positivos > 0) {
        float media = soma / positivos;
        printf("%d valores positivos\n", positivos);
        printf("%.1f\n", media);
    } else {
        printf("Nenhum valor positivo informado.\n");
    }
    
    return 0;
}
