#include <stdio.h>

int main() {
    int i, j, aux, n = 10;
    int V[10] = {5, 7, 1, 8, 2, 9, 6, 0, 4, 3};
    
    for (i = 1; i < n; i++) {
        j = i;
        while (j > 0 && V[j] < V[j - 1]) {
            aux = V[j];
            V[j] = V[j - 1];
            V[j - 1] = aux;
            j--;
        }
    }
    
    for(i = 0; i < n; i++) {
        printf("%d ", V[i]);
    }
    printf("\n");
    
    return 0;
}
