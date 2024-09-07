#include <stdio.h>

int main(){

    int num;
    printf("Entrer votre nombre: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("le nombre est poitive");
    }
    else if (num < 0)
    {
        printf("le nombre est negative");
    }
    else
    {
        printf("Le nombre est NUL");
    }


    return 0;
}
//DOOOOOOOOOONE