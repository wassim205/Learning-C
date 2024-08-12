/*

Challenge 8 : Affichage de la valeur octale et hexadécimale équivalente
Écrivez un programme C pour afficher la valeur équivalente en octal et en hexadécimal. 
Entrez un nombre entier et affichez sa valeur équivalente en octal et en hexadécimal

*/

#include <stdio.h>

int main(){

    int a;

    printf("Entrer un nombre: ");
    scanf("%d", &a);

    printf("cette nombre en octal est: %o", a);
    printf("\net en hexadecimale est: %x", a);


    return 0;
}

//DOOOOOONE