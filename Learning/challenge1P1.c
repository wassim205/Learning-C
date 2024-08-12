#include <stdio.h>

// un programme prener le nom, prenom, age, sexe et numero de telephone et son afficher

int main(){

    char nom[15];
    char prenom[15];
    int age;
    char sexe[10];
    int numero;

    printf("votre nom: \n");
    fgets(nom, 15, stdin);
   
    printf("\nvotre prenom: \n");
    fgets(prenom, 15, stdin);
   
    printf("\nvotre age: \n");
    scanf("%d" , &age);
    
    printf("\nvotre sexe: \n");
    fgets(sexe, 10, stdin);
    
    printf("\nvotre numero: \n");
    scanf("%d", &numero);


    return 0;
}
