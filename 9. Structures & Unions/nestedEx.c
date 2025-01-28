#include <stdio.h>
#include <string.h>

struct Address
{
    char country[50];
    char district[50];
    char city[50];
};

struct Person
{
    char name[50];
    int age;
    struct Address address;
};

int main()
{
    struct Person person_1;
    strcpy(person_1.name, "Prayush");
    person_1.age = 23;
    strcpy(person_1.address.city, "Dharan");
    strcpy(person_1.address.country, "Nepal");
    strcpy(person_1.address.district, "Sunsari");

    printf("Name: %s\n", person_1.name);
    printf("Age: %d\n", person_1.age);
    printf("Address: %s, %s, %s\n", person_1.address.city, person_1.address.district, person_1.address.country);

    return 0;
}