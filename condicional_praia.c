#include <stdio.h>

int main() {
    float temp, valor;
    temp = 38.5; 
    valor = 100; 
    
    if(temp >= 38 && valor >= 1000){
        printf("vou para a praia\n");
    } else {
        printf("vou ficar em casa\n");
    }
    
    return 0;
}
