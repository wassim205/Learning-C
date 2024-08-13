#include <stdio.h>
int main(){

    int num;

    printf("saiser un nombre: ");
    scanf("%d", &num);

    num = num % 2;
    if(num == 0){
        printf("Votre nombre est pair!");
    }
    else{
        printf("Votre nombre est impair!");
    }

    return 0;
}

//DOOOOOOONE