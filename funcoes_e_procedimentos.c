#include <stdio.h>

int a = 0; 

int somar(int x, int y) {
    int soma = x + y;
    return soma;
}

void exibir(int para_de_falar) {
    int b;
    a = 1;
    b = para_de_falar;
    printf("segundo\n");
    printf("a = %d (procedimento)\n", a);
    printf("b = %d (procedimento)\n", b);
}

int main() {
    int c;
    exibir(4);
    c = somar(1, 4);
    printf("Somar = %d\n", c);
    
    return 0;
}
