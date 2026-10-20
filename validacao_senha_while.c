#include <stdio.h>

int main() {
    int i, n;
    n = 0;
    
    printf("Escolha um valor: \n");
    scanf("%d", &n);
    
    while(n != 123) {
        printf("valor incorreto (%d)\n", n);
        scanf("%d", &n);
    }
      
    printf("valor %d encontrado.\n", n);
    
    return 0;
}
