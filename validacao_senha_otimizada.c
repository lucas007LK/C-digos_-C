#include <stdio.h>

int main() {
    int i, n;
    n = 0;
    
    printf("Escolha um valor: \n");
    
    while(scanf("%d", &n) && n != 123) {
        printf("valor incorreto (%d)\n", n);
    }
    
    printf("valor %d encontrado.\n", n);
         
    return 0;
}
