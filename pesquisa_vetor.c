#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n[100] = {}, i, procurar = 0, indice = -1;
    
    srand(time(NULL));
    
    for(i = 0; i < 100; i++) {
        n[i] = rand() % 1000;
        printf("n[%d]=%3d\n", i, n[i]);
    }
    
    scanf("%d", &procurar);
    printf("Qual numero deseja pesquisar: ");
    printf("%d\n", procurar);
    
    for(i = 0; i < 100; i++) {
        if(n[i] == procurar) {
            indice = i;
            break;
        }
    }
    
    if(indice >= 0)
        printf("O numero esta no indice: %d\n", indice);
    else
        printf("Numero nao encontrado!");
         
    return 0;
}
