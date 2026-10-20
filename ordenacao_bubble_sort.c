#include <stdio.h>
#define N 10

int main() {
    int i, j, aux;
    int V[10] = {5, 7, 1, 8, 2, 9, 6, 0, 4, 3};
    
    for(i = 0; i < N - 1; i++) {
        for(j = 0; j < N - 1 - i; j++) {
            if(V[j] > V[j + 1]) {
                aux = V[j];
                V[j] = V[j + 1];
                V[j + 1] = aux;
            }
        }
    }
    
    for(i = 0; i < N; i++) {
        printf("%d ", V[i]);
    }
    printf("\n");
    
    return 0;
}
