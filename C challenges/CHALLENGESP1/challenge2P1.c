#include <stdio.h>
#include <string.h>
int main(){
    char temperatype[30];
    int temperature;
    int Celsius;
    int Fahrenheit;

    printf("qu\"il type de temperature vous voudrais la changer?\n");
    scanf("%s", &temperatype);
   
    if(strcmp(temperatype, "Celsius") == 0){
        printf("taper la temperature pour la changer a la Fahrenheit: ");
        scanf("%d", &Celsius);
        Fahrenheit = (Celsius * 1.8) + 32;
        printf("la temperature en Fahernheit est: %d", Fahrenheit);
    }
    else{
        printf("taper la temperature pour la changer a la Celsius: ");
        scanf("%d", &Fahrenheit);
        Celsius = (Fahrenheit - 32)/1.8;
        printf("la temperature en Celsius est: %d", Celsius); 
    }


    return 0;
}
// Temprature changer.
// DOOOOOOOONE