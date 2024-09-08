#include <stdio.h>

int main(){

    int Birth_year;
    int *pBirth = &Birth_year;


    printf("What is your birth year ?:");
    scanf("%d", &Birth_year);

    int age = 2024 - *pBirth;

    printf("you're %d years old", age);
    return 0;
}