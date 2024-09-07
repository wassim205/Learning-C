#include <stdio.h>

int main() {
    char caractere;

    // Demander à l'utilisateur d'entrer un caractère
    printf("Entrez un caractère: ");
    scanf("%c", &caractere);

    // Vérifier si le caractère est un alphabet majuscule en vérifiant sa valeur ASCII
    if(caractere >= 'A' && caractere <= 'Z') {
        printf("%c est un alphabet majuscule.\n", caractere);
    } else {
        printf("%c n'est pas un alphabet majuscule.\n", caractere);
    }

    return 0;
}
//DOOOOOOOOONE