#include <stdio.h>

int main() {
    int i, j, aux, min, n = 10;
    int V[10] = {5, 7, 1, 8, 2, 9, 6, 0, 4, 3};
    
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (V[j] < V[min]) {
                min = j;
            }
        }
        if (V[i] != V[min]) {
            aux = V[i];
            V[i] = V[min];
            V[min] = aux;
        }
    }
    
    for(i = 0; i < n; i++) {
        printf("%d ", V[i]);
    }
    printf("\n");
       
    return 0;
}
