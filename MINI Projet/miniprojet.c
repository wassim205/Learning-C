// Systeme de gestion de contact

#include <stdio.h>
#include <string.h>

typedef struct {
    char name[70];
    char numero[10];
    char email[254];
} Contact;

void AJOUTER(Contact P[], int indice) {
   
    getchar();
    printf("Entrez le nom: ");
    fgets(P[indice].name, 70, stdin);
    P[indice].name[strcspn(P[indice].name, "\n")] = '\0';

    printf("Entrez le numero: ");
    scanf("%s", P[indice].numero);

    getchar();
    printf("Entrez le email: ");
    scanf("%s", P[indice].email);
}

void SUPPRIMER(Contact P[], int *numContact) {
    char nom[70];
    int found = 0;

    getchar();
    printf("Entrez le nom du contact a supprimer: ");
    fgets(nom, 70, stdin);
    nom[strcspn(nom, "\n")] = '\0';

    for (int i = 0; i < *numContact; i++) {
        if (strcmp(P[i].name, nom) == 0) {
            found = 1;


            for (int j = i; j < *numContact - 1; j++) {
                P[j] = P[j + 1];
            }

            (*numContact)--;
            printf("Contact supprime avec succes.\n");
            break;
        }
    }

    if (!found) {
        printf("Nom introuvable.\n");
    }
}

void AFFICHER(Contact P[], int numContact) {
    
    if (numContact == 0) {
        printf("\nAucun contact disponible.\n");
    } 
    else {
        for (int i = 0; i < numContact; i++) {
            printf("\nContact %d:", i + 1);
            printf("\nNOM: %s", P[i].name);
            printf("\nNumero: %s", P[i].numero);
            printf("\nEmail: %s\n", P[i].email);
        }
    }
}

int main() {
   
    Contact P[200];
    int Choix;
    int numContact = 0;

    printf("Bienvenue!\n");

    while (1) {
       
        printf("\nMENU:\n");
        printf("1. Ajouter un contact\n");
        printf("2. Supprimer un contact\n");
        printf("3. Afficher les contacts\n");
        printf("4. Quitter\n");
        printf("Entrez votre choix: ");
        scanf("%d", &Choix);

        if (Choix == 1) {
            AJOUTER(P, numContact);
            numContact++;
        } 
        
        else if (Choix == 2) {
            SUPPRIMER(P, &numContact);
        } 
        
        else if (Choix == 3) {
            AFFICHER(P, numContact);
        } 
        
        else if (Choix == 4) {
            printf("\nAu revoir!\n");
            break;
        } 
        
        else {
            printf("\nChoix invalide!\n");
        }
    }

    return 0;
}
