#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, B, C, MAIOR, MAIOR_ABC;
    
    scanf("%d%d%d", &A, &B, &C);
    
    MAIOR = (A + B + abs(A - B)) / 2;
    MAIOR_ABC = (MAIOR + C + abs(MAIOR - C)) / 2;
    
    printf("%d eh o maior\n", MAIOR_ABC);
    
    return 0;
}
