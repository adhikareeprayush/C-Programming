// C Program to illustrate file opening
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fptr;
    fptr = fopen("students.bin", "wb");
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

    for(int i = 1; i<=5; i++) {
        printf("Name, Age, Address, Number: ");
        fgets(Buffer,sizeof(Buffer),stdin);
        fwrite(Buffer, sizeof(Buffer), 1, fptr);
    }

    fclose(fptr);
    fptr = fopen("students.bin","rb");

    for(int i = 1; i<=5; i++) {
        fread(Buffer,sizeof(Buffer), 1, fptr);
        printf("Buffer: %s\n",Buffer);
    }


    fclose(fptr);

    return 0;
}