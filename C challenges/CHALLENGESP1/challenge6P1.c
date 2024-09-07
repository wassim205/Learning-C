/*

Challenge 6 : Circonférence d"un cercle
Écrivez un programme pour trouver la circonférence d"un cercle. Prenez le rayon du cercle en entrée de l"utilisateur. 
La formule pour, la circonférence du cercle = 2πr ; où r est le rayon.

*/
#include <stdio.h>

int main()

{
    float Circonference;
    int r;
    const float PI = 3.14159265359;
  
    printf("Entrer le rayon de la cercle: ");
    scanf("%d", &r);

    Circonference = 2 * PI * r;
    printf("La Circonference de votre cercle est: %.2f", Circonference);



    return 0;
}

//DOOOOOOONE
