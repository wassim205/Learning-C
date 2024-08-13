#include<stdio.h>

int main(){

    int a;
    int b;
    int sum;

    printf("Saisez votre premiere nombre: ");
    scanf("%d", &a);

    printf("Saisez votre deuxieme nombre: ");
    scanf("%d", &b);

    if (a == b){
        sum = (a + b) * 3;
        printf("la triple de la somme c\'est: %d", sum);
    }
    else{
        sum = a + b;
        printf("La somme c\'est: %d", sum);
    }

    return 0;
}
// DOOOOOOOOONE