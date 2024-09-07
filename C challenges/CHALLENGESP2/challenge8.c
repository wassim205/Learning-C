/*Nous désirons afficher la mention obtenue par un élève en fonction de la moyenne de ses notes. 
S’il a une moyenne strictement inférieure a 10, il est recalé. 
S’il a une moyenne entre 10 (inclus) et 12, il obtient la mention passable.
 S’il a une moyenne entre 12 (inclus) et 14, il obtient la mention assez bien. 
 S’il a une moyenne entre 14 (inclus) et 16, il obtient la mention bien. 
 S’il a une moyenne supérieure a 16 (inclus) il obtient la mention très bien. Ecrire les instructions nécessaires.
*/

#include <stdio.h>

int main(){

    int Note;
    printf("Entrez votre note: ");
    scanf("%d", &Note);

    if (Note < 10)
    {
        printf("RECALE");
    }
    else if (Note >= 10 && Note < 12)
    {
        printf("PASSABLE");
    }
    else if (Note >= 12 && Note < 14)
    {
        printf("ASSEZ BIEN");
    }
    else if (Note >= 14 && Note < 16)
    {
        printf("BIEN");
    }
    else if (Note >= 16 && Note <= 20)
    {
        printf("TRES BIEN");
    }
    else{
        printf("Ca nombre n\'est pas un nombre de NOTE");
    }

    return 0;
}
//DOOOOOOOONE