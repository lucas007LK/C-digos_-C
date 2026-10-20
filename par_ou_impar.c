#include <stdio.h>

int main() {
    int i;
    for(i = 1; i <= 100; i++) {
        if(i % 2 == 0) {
            printf("%d   PAR\n", i);
        } else {
            printf("%d   IMPAR\n", i);
        }
    }
    
    return 0;
}
