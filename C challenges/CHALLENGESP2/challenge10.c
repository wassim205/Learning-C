#include <stdio.h>
#include <string.h>

int main() {
    char date[11];
    char jour[3], mois[3], annee[5];
    int mois_num;

    // Demander à l'utilisateur de saisir la date
    printf("Entrez une date au format JJ/MM/AAAA : ");
    scanf("%s", date);

    // Extraire le jour, le mois et l'année de la date saisie
    sscanf(date, "%2s/%2s/%4s", jour, mois, annee);

    // Convertir le mois de format numérique à format texte
    mois_num = atoi(mois);
    char *mois_texte;
    switch(mois_num) {
        case 1: mois_texte = "Janvier"; break;
        case 2: mois_texte = "Fevrier"; break;
        case 3: mois_texte = "Mars"; break;
        case 4: mois_texte = "Avril"; break;
        case 5: mois_texte = "Mai"; break;
        case 6: mois_texte = "Juin"; break;
        case 7: mois_texte = "Juillet"; break;
        case 8: mois_texte = "Aout"; break;
        case 9: mois_texte = "Septembre"; break;
        case 10: mois_texte = "Octobre"; break;
        case 11: mois_texte = "Novembre"; break;
        case 12: mois_texte = "Decembre"; break;
        default : mois_texte = "Mois inconnu"; break;
    }

    // Afficher la date au format demandé
    printf("%s-%s-%s\n", jour, mois_texte, annee);

    return 0;
}