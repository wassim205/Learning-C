#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, racine1, racine2;

    printf("Entrez les coefficients de l'equation (a, b, c) : ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        racine1 = (-b + sqrt(discriminant)) / (2*a);
        racine2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Les racines de l'equation sont : %.2f et %.2f\n", racine1, racine2);
    } else if (discriminant == 0) {
        racine1 = -b / (2*a);
        printf("L'equation a une seule racine : %.2f\n", racine1);
    } else {
        float partieReelle = -b / (2*a);
        float partieImaginaire = sqrt(-discriminant) / (2*a);
        printf("Les racines de l'equation sont : %.2f + %.2fi et %.2f - %.2fi\n", partieReelle, partieImaginaire, partieReelle, partieImaginaire);
    }

    return 0;
}
