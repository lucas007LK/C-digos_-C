#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, j;
    int M[3][3];
    
    srand(time(NULL));
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            M[i][j] = rand() % 10;
        }
    }
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("M[%d][%d] = %d\t", i, j, M[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\n");
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("|%d|", M[i][j]);
        }
        printf("\n");
    }
         
    return 0;
}
