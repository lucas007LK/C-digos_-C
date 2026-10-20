#include <stdio.h>

int main() {
    int i;
    
    // For
    for(i = 1; i <= 3; i++){
        printf("for = %d\n", i);
    }
       
    // While
    printf("*********\n");
    i = 1;
    while(i <= 3){
        printf("while = %d\n", i);
        i++;
    }
    
    // Do While
    printf("*********\n");
    i = 1;
    do {
        printf("do while = %d\n", i);
        i++;
    } while(i <= 3);
    
    return 0;
}
