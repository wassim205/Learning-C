#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_COMPLAINTS 10
#define MAX_ID_LEN 10
#define MAX_USERS 200


typedef struct {
    char id[MAX_ID_LEN];
    char motif[50];
    char description[200];
    char categorie[50];
    char statut[20];
    char date[11];
} Reclamation;


typedef struct {
    char Identifiant[35];
    char mot_de_passe[25];
    Reclamation reclamation[MAX_COMPLAINTS];
    int reclamation_count;
} Utilisateur;


Utilisateur u[MAX_USERS];
int user_count = 0;



int Valid_mot_de_passe(char mot_de_passe[], char user_name[]);
void ID_Generator(char ID[], int user_index);
void get_current_date(char *date_str);
void SIGN_UP();
void afficher_toutes_reclamations();
void agent_de_reclamation_menu(int user_index);
int SIGN_IN();
void AJOUTER(int user_index);
void MODIFIER();
void SUPPRIMER();
void RECHERCHER();
void AFFICHER(int user_index);
void menu(int user_index);
int main();





int Valid_mot_de_passe(char mot_de_passe[], char user_name[]) {
    if (strlen(mot_de_passe) < 8) {
        printf("\nMot de passe doit contenir au moins 8 caracteres avec: ");
        printf("\nUne lettre majuscule\nUne lettre minuscul\nUn chiffre\nUn caractere special\nEt ne doit pas contenir le nom d'utilisateur");
        return 0;
    }

    int has_upper = 0, has_lower = 0, has_digit = 0, has_special = 0;
    for (int i = 0; i < strlen(mot_de_passe); i++) {
        if (isupper(mot_de_passe[i])) has_upper = 1;
        else if (islower(mot_de_passe[i])) has_lower = 1;
        else if (isdigit(mot_de_passe[i])) has_digit = 1;
        else if (ispunct(mot_de_passe[i])) has_special = 1;
    }

    if (!has_upper || !has_lower || !has_digit || !has_special) {
        printf("\nMot de passe doit contenir les criteres demandés.\n");
        return 0;
    }

    if (strstr(mot_de_passe, user_name)) {
        printf("Le mot de passe ne doit pas contenir le nom d'utilisateur\n");
        return 0;
    }

    printf("Votre mot de passe est valide.\n");
    return 1;
}




void ID_Generator(char ID[], int user_index) {
    int unique = 0;
    while (!unique) {
        int random_number = rand() % 1000000;
        sprintf(ID, "REC%06d", random_number);
        unique = 1;

        for (int i = 0; i < u[user_index].reclamation_count; i++) {
            if (strcmp(u[user_index].reclamation[i].id, ID) == 0) {
                unique = 0;
                break;
            }
        }
    }
}




void get_current_date(char *date_str) {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    sprintf(date_str, "%04d-%02d-%02d", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);
}





void SIGN_UP() {
    if (user_count >= MAX_USERS) {
        printf("Nombre maximum d'utilisateurs atteint.\n");
        return;
    }

    printf("\nEntrez votre identifiant: ");
    scanf("%34s", u[user_count].Identifiant);

    if (strcmp(u[user_count].Identifiant, "agent") == 0) {
        strcpy(u[user_count].mot_de_passe, "agent");
        agent_de_reclamation_menu(user_count);
    } else {
        char mot_de_passe[25];
        printf("Entrez votre mot de passe: ");
        scanf("%24s", mot_de_passe);

        if (Valid_mot_de_passe(mot_de_passe, u[user_count].Identifiant)) {
            strcpy(u[user_count].mot_de_passe, mot_de_passe);
            u[user_count].reclamation_count = 0;
            printf("\nBienvenue!\n");
            user_count++;
        } else {
            printf("Mot de passe invalide.\n");
        }
    }
}




int SIGN_IN() {
    char idantifiant_enregistrer[35];
    char mot_de_passe_Enregistrer[25];

    printf("\nEntrez votre idantifiant: ");
    scanf("%34s", idantifiant_enregistrer);

    printf("Entrez votre mot de passe: ");
    scanf("%24s", mot_de_passe_Enregistrer);
    
    for (int i = 0; i < user_count; i++) {
        if (strcmp(idantifiant_enregistrer, u[i].Identifiant) == 0 && strcmp(mot_de_passe_Enregistrer, u[i].mot_de_passe) == 0) {
            printf("\nContent de te revoir!\n");

            if (strcmp(u[i].Identifiant, "agent") == 0) {
                agent_de_reclamation_menu(i);
                return -1;
            } else {
                return i;
            }
        }
    }
    printf("Ce compte n'existe pas! Verifier les informations ou SIGN UP Premierement\n");
    return -1;
}





void afficher_toutes_reclamations() {
    printf("\nToutes les reclamations:\n");
    for (int i = 0; i < user_count; i++) {
        for (int j = 0; j < u[i].reclamation_count; j++) {
            printf("-------------------------\n");
            printf("Utilisateur: %s\n", u[i].Identifiant);
            printf("ID: %s\n", u[i].reclamation[j].id);
            printf("Motif: %s\n", u[i].reclamation[j].motif);
            printf("Description: %s\n", u[i].reclamation[j].description);
            printf("Categorie: %s\n", u[i].reclamation[j].categorie);
            printf("Statut: %s\n", u[i].reclamation[j].statut);
            printf("Date: %s\n", u[i].reclamation[j].date);
        }
    }
}



void AFFICHER(int user_index) {
    printf("\nVos reclamations:\n");
    for (int i = 0; i < u[user_index].reclamation_count; i++) {
        printf("-------------------------\n");
        printf("ID: %s\n", u[user_index].reclamation[i].id);
        printf("Motif: %s\n", u[user_index].reclamation[i].motif);
        printf("Description: %s\n", u[user_index].reclamation[i].description);
        printf("Categorie: %s\n", u[user_index].reclamation[i].categorie);
        printf("Statut: %s\n", u[user_index].reclamation[i].statut);
        printf("Date: %s\n", u[user_index].reclamation[i].date);
    }
}





void AJOUTER(int user_index) {
    if (u[user_index].reclamation_count >= MAX_COMPLAINTS) {
        printf("Nombre maximum de reclamations atteint pour cet utilisateur.\n");
        return;
    }

    int rec_index = u[user_index].reclamation_count;

    ID_Generator(u[user_index].reclamation[rec_index].id, user_index);

    printf("\nEntrez le motif de la reclamation: ");
    scanf("%49s", u[user_index].reclamation[rec_index].motif);

    printf("\nEntrez la description: ");
    scanf(" %[^\n]", u[user_index].reclamation[rec_index].description);

    printf("\nEntrez la categorie: ");
    scanf("%49s", u[user_index].reclamation[rec_index].categorie);

    get_current_date(u[user_index].reclamation[rec_index].date);
    strcpy(u[user_index].reclamation[rec_index].statut, "en cours");

    u[user_index].reclamation_count++;
    printf("\nReclamation ajoutee avec succes!\n");
}




void RECHERCHER() {
    char identifiant_recherche[35];
    printf("Entrez l'identifiant de l'utilisateur à rechercher: ");
    scanf("%34s", identifiant_recherche);

    int found = 0;
    for (int i = 0; i < user_count; i++) {
        if (strcmp(u[i].Identifiant, identifiant_recherche) == 0) {
            printf("Reclamations pour l'utilisateur: %s\n", u[i].Identifiant);
            for (int j = 0; j < u[i].reclamation_count; j++) {
                printf("-------------------------\n");
                printf("ID: %s\n", u[i].reclamation[j].id);
                printf("Motif: %s\n", u[i].reclamation[j].motif);
                printf("Description: %s\n", u[i].reclamation[j].description);
                printf("Categorie: %s\n", u[i].reclamation[j].categorie);
                printf("Statut: %s\n", u[i].reclamation[j].statut);
                printf("Date: %s\n", u[i].reclamation[j].date);
                printf("-------------------------\n");
            }
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Aucun utilisateur avec l'identifiant '%s' n'a ete trouve.\n", identifiant_recherche);
    }
}



void MODIFIER() {
    printf("MODIFIER pas encore disponible.\n");
}



void SUPPRIMER() {
    printf("SUPPRIMER pas encore disponible.\n");
}


void MARQUER(){
    printf("RECHERCHER pas encore disponible.\n");
}







void agent_de_reclamation_menu(int user_index) {
    int choix;

    while (1) {
        printf("1. AFFICHER LES RECLAMATIONS\n");
        printf("2. MODIFIER UNE RECLAMATION\n");
        printf("3. SUPPRIMER UNE RECLAMATION\n");
        printf("4. RECHERCHER UNE RECLAMATION\n");
        printf("5. MARQUER UNE RECLAMATION\n");
        printf("5. RETOUR A L\'ACCUEIL\n");
        printf("Entrez votre choix: ");
        scanf("%d", &choix);

        if (choix == 1) {
            afficher_toutes_reclamations();
        } else if (choix == 2) {
            MODIFIER();
        } else if (choix == 3) {
            SUPPRIMER();
        }else if (choix == 4){
            RECHERCHER();
        } else if (choix == 5) {
            main();
        } else {
            printf("Choix introuvable.\n");
        }
    }
}





void menu(int user_index) {
    int choix;

    while (1) {
        printf("1. AJOUTER UNE RECLAMATION\n");
        printf("2. MODIFIER UNE RECLAMATION\n");
        printf("3. SUPPRIMER UNE RECLAMATION\n");
        printf("4. VOIR MES RECLAMATIONS\n");
        printf("5. Retour L'accueil\n");
        printf("Entrez votre choix: ");
        scanf("%d", &choix);

        if (choix == 1) {
            AJOUTER(user_index);
        } else if (choix == 2) {
            MODIFIER();
        } else if (choix == 3) {
            SUPPRIMER();
        } else if (choix == 4) {
            AFFICHER(user_index);
        } else if (choix == 5) {
            break;
        } else {
            printf("Choix introuvable.\n");
        }
    }
}





int main() {
    srand(time(NULL));
    int choix;
    int logged_in_user_index = -1;

    while (1) {
        printf("\n1. INSCRIPTION");
        printf("\n2. CONNEXION");
        printf("\n3. QUITTEZ");
        printf("\nEntrez votre choix: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                SIGN_UP();
                if (user_count > 0) {
                    logged_in_user_index = user_count - 1;
                    menu(logged_in_user_index);
                }
                break;
            case 2:
                logged_in_user_index = SIGN_IN();
                if (logged_in_user_index != -1) {
                    menu(logged_in_user_index);
                }
                break;
            case 3:
                printf("Au revoir!\n");
                return 0;
            default:
                printf("Choix invalide.\n");
        }
    }
    return 0;
}