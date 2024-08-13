#include <stdio.h>
#include <math.h>
int main(){

    int a;
    int b;

    printf("\nEntrer le numero a: ");
    scanf("%d", &a);
    
    printf("\nEntrer le numero b: ");
    scanf("%d", &b);

    float sum = a + b;
    float minus = a - b;
    float mul = a * b;
    float div = (b != 0) ? (a / b) : 0;
    int mod = a % b;

    printf("\nLa somme de %d + %d est: %.2f ", a, b, sum);
    printf("\nLa soustraction de %d - %d est: %.2f", a, b, minus);
    printf("\nLa multiplication de %d * %d est: %.2f", a, b, mul);
    printf("\nLa division de %d / %d est: %.2f", a, b, div);
    printf("\nLa reste de division est: %.2f", a, b, mod);

    return 0;
}
// DOOOOOOONE