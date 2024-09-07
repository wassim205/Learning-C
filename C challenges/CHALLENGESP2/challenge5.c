/* Ecrire un programme C piloté par menu pour convertir une année donnée en,

Mois
Jours
Heures
Minutes
Secondes Pour plus de simplicité, n'incluez pas l'année bissextile (sauf si vous êtes courageux pour le faire) 

1 Year =
31540000 seconds
525600 minutes
8760 hours
365 days
52.1429 weeks
12 months
0.1 decade
0.01 century
*/

#include <stdio.h>

int main(){

    int year, seconds, minutes, hours, days, months;
    float weeks, decade, century;

    printf("The Years: ");
    scanf("%d", &year);

    century = 0.01 * year;
    decade = 0.1 * year;
    months = 12 * year;
    weeks = 52.1429 * year;
    days = 365 * year;
    hours = 8760 * year;
    minutes = 525600 * year;
    seconds = 31540000 * year;

    
    printf("%d year\'s\' is \n%.2f CENTURIES\n%.2f DECADES\n%d MONTHS\n%.6f WEEKS\n%d DAYS\n%d HOURS\n%d MINUTES\n%d SECONDS.", year, century, decade, months, weeks, days, hours, minutes, seconds);



    return 0;
}
// DOOOOOOOOOONE