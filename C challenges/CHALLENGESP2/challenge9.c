/*Ecrire un programme C qui lit un caractère et détermine s'il fait partie des alphabets ou non.
 Et s'il l'est, dire en plus s’il est une minuscule ou une majuscule.
*/
#include <stdio.h>

int main(){

    char caractere;

    // Demander à l'utilisateur de saisir un caractère
    printf("Entrez un caractère : ");
    scanf("%c", &caractere);

    // Vérifier si le caractère est une lettre de l'alphabet
    if ((caractere >= 'a' && caractere <= 'z') || (caractere >= 'A' && caractere <= 'Z')) {
        if (caractere >= 'a' && caractere <= 'z') {
            printf("Le caractère est une lettre minuscule.\n");
        } else {
            printf("Le caractère est une lettre majuscule.\n");
        }
    } else {
        printf("Le caractère n'est pas une lettre de l'alphabet.\n");
    }

    return 0;
}








    return 0;
}