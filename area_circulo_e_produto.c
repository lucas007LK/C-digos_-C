#include <stdio.h>

int main() {
    double Raio, PI, Area;
    scanf("%lf", &Raio);
    PI = 3.14159;
    Area = PI * (Raio * Raio);
    printf("A = %.4lf\n", Area);
             
    int a, b, PROD;
    scanf("%d%d", &a, &b);
    PROD = a * b;
    printf("PROD = %d\n", PROD);
         
    return 0;
}
