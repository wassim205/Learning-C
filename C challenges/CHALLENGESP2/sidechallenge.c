#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[20];
    int age;
    char id[5];
}Person;

int main(){

    Person person1;

    strcpy(person1.name, "Wassim");
    person1.age = 19;
    strcpy(person1.id, "00001");

    Person person2;

    strcpy(person2.name, "Mohamed");
    person2.age = 7;
    strcpy(person2.id, "00002");

    printf("the person %s is %s and he is %d years old\n", person1.id, person1.name, person1.age);
    printf("And the second person is %s with th ID %s and he is %d years old\n", person2.name, person2.id, person2.age);

    return 0;
}
//Greeeeeeeeat learning