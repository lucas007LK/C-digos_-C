#include <stdio.h>

int main() {
    int i, n[10] = {};
    
    for(i = 0; i < 10; i++) {
        scanf("%d", &n[i]);
        printf("n[%d] = %d\n", i, n[i]);
    }
    
    return 0;
}
