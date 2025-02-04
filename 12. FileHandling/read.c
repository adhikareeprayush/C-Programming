// C Program to illustrate file opening
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fptr;
    fptr = fopen("students.txt", "r");
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
    //     fscanf(fptr, "%s %d %s %ld",name,&age,address,&number);
    //     printf("Name: %s\n",name);
    //     printf("Age: %d\n",age);
    //     printf("Address: %s\n",address);
    //     printf("Number: %ld\n",number);
    // }

    // for(int i = 1; i<=5; i++) {
    //     fgets(Buffer,sizeof(Buffer),fptr);
    //     printf("Buffer: %s\n",Buffer);
    // }


    // char c;
    // while(c!=EOF) {
    //     c = fgetc(fptr);
    //     printf("%c",c);
    // }

    fclose(fptr);

    return 0;
}