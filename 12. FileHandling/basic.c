#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fptr;
    fptr = fopen("students.txt", "w");
    char name[50],address[50];
    char Buffer[1000];
    int age;
    long int number;


    // checking if the file is opened successfully
    if (fptr == NULL) {
        printf("\nThe file is not opened. The program will "
               "now exit.\n");
        exit(0);
    }

    // for(int i = 1; i<=5; i++) {
    //     printf("Name: ");
    //     scanf("%s",name);
    //     printf("Age: ");
    //     scanf("%d",&age);
    //     printf("Address: ");
    //     scanf("%s",address);
    //     printf("Number: ");
    //     scanf("%ld",&number);

    //     fprintf(fptr,"%s %d %s %ld\n",name,age,address,number);
    // }

    // for(int i = 1; i<=5; i++) {
    //     printf("Name, Age, Address, Number: ");
    //     fgets(Buffer,sizeof(Buffer),stdin);
    //     fputs(Buffer,fptr);
    // }

    char c = 'A';
    fputc(c,fptr);

    fclose(fptr);


    return 0;
}