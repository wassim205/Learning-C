/*

Challenge 7 : Nombre entier à trois chiffres en ordre inverse
Écrivez un programme C pour afficher un nombre entier à trois chiffres dans l"ordre inverse sans utiliser la boucle.
Par exemple, si le nombre entier est 234, son inverse est 432.

*/

#include <stdio.h>

int main(){

    int a;
    int b;
    int c;
    int nombre;

    printf("Entrez 3 chiffre vous voudrais les inverser: ");
    scanf("%d", &nombre);
    

    a = nombre / 100; //المئات 
    b = (nombre % 100) / 10; //العشرات
    c = nombre % 10; //الوحدات 


    printf("L\"inverse c\"est: %d%d%d ", c, b, a);

    return 0;
}
//DOOOOOOONE

//second way:
/*

#include <stdio.h>
#include <string.h>

int main(){

    char nombre[10];

    printf("Entrez 3 chiffre vous voudrais les inverser: ");
    fgets(nombre, 10, stdin);
    
    printf("L\"inverse c\"est: %s ", strrev(nombre));

    return 0;
}

*/