#include <stdio.h>

int main() {
    int i, n, pos, maior_valor;
    maior_valor = 0;
    
    for(i = 1; i <= 100; i++){
        scanf("%d", &n);
        if(n > maior_valor){
            maior_valor = n;
            pos = i;
        }
    }
    printf("%d\n", maior_valor);
    printf("%d\n", pos);
         
    return 0;
}
