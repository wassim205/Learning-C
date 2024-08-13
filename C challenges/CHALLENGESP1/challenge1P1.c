#include <stdio.h>
 
// un programme prener le nom, prenom, age, sexe et numero de telephone et son afficher

int main(){

    char nom[15];
    char prenom[15];
    int age;
    char sexe[10];
    int numero;

    printf("votre nom: \n");
    scanf("%s", &nom);
   
    printf("\nvotre prenom: \n");
    scanf("%s", &prenom);
   
    printf("\nvotre age: \n");
    scanf("%d" , &age);
    
    printf("\nvotre sexe: \n");
    scanf("%s", &sexe);
    
    printf("\nvotre numero: \n");
    scanf("%d", &numero);


        // Affichage des informations saisies
    printf("\nNom: %s\n", nom);
    printf("Prenom: %s\n", prenom);
    printf("Age: %d\n", age);
    printf("Sexe: %s\n", sexe);
    printf("Numero de telephone: %d\n", numero);


    return 0;
}

// DOoooone