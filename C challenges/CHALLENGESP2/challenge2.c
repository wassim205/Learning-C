#include <stdio.h>

int main(){

    char car;

    printf("Saiser un caractre: ");
    scanf("%c", &car);

    switch (car)
    {
        case 'a':
            printf("Vous saisez un voyelle!");
            break;

        case 'e':
            printf("Vous saisez un voyelle!");
            break;

        case 'o':
            printf("Vous saisez un voyelle!");
            break;

        case 'i':
            printf("Vous saisez un voyelle!");
            break;

        case 'u':
            printf("Vous saisez un voyelle!");
            break;

        case 'y':
            printf("Vous saisez un voyelle!");
            break;
    
        default:
            printf("Vous saisez un caractere normale!");
            break;
    }

    return 0;
}
//DOOOOOOONE