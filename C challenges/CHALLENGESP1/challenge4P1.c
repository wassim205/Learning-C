#include <stdio.h>

int main(){

    int a;
    int b;
    int c;
    int d;
    int somme;
    int moyenne;

    printf("\necrivez le numero a: ");
    scanf("%d", &a);

    printf("\necrivez le numero b: ");
    scanf("%d", &b);

    printf("\necrivez le numero c: ");
    scanf("%d", &c);

    printf("\necrivez le numero d: ");
    scanf("%d", &d);

    somme = a + b + c + d;
    moyenne = somme / 4;

    printf("\nla somme des quatre est: %d", somme);
    printf("\nla moyenne c\"est: %d", moyenne);



    return 0;
}

//DOOOONE