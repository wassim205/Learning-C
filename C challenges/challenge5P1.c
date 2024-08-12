// la disence entre deux point
#include <stdio.h>
#include <math.h>
int main(){

    int x1;
    int y1;
    int x2;
    int y2;

    printf("Entrer X1 Pour le point A: ");
    scanf("%d", &x1);

    printf("Entrer Y1 Pour le point A: ");
    scanf("%d", &y1);
    
    printf("Entrer X2 Pour le point B: ");
    scanf("%d", &x2);

    printf("Entrer Y2 Pour le point B: ");
    scanf("%d", &y2);


    int AB = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("La distence entre A et est: AB = %d", AB);



    return 0;
}
// DOOOONE