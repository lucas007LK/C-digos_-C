#include <stdio.h>

int main() {
    int n, calculo_100, calculo_50, calculo_20, calculo_10, calculo_5, calculo_2, calculo_1, resto;
    
    scanf("%d", &n);
    resto = n;
    
    calculo_100 = resto / 100;
    resto = resto % 100;
    calculo_50 = resto / 50;
    resto = resto % 50;
    calculo_20 = resto / 20;
    resto = resto % 20;
    calculo_10 = resto / 10;
    resto = resto % 10;
    calculo_5 = resto / 5;
    resto = resto % 5;
    calculo_2 = resto / 2;
    resto = resto % 2;
    calculo_1 = resto / 1;
    
    printf("%d\n", n);
    printf("%d nota(s) de R$ 100,00\n", calculo_100);
    printf("%d nota(s) de R$ 50,00\n", calculo_50);
    printf("%d nota(s) de R$ 20,00\n", calculo_20);
    printf("%d nota(s) de R$ 10,00\n", calculo_10);
    printf("%d nota(s) de R$ 5,00\n", calculo_5);
    printf("%d nota(s) de R$ 2,00\n", calculo_2);
    printf("%d nota(s) de R$ 1,00\n", calculo_1);
    
    return 0;
}
