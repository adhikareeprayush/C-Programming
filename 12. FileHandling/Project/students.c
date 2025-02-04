#include "students.h"


void clear_buffer(){
    while(getchar()!= '\n');
}

bool enter_students(const char fileName[]) {
    clear_buffer();
    FILE *fptr;

    if(fptr == NULL) {
        printf("Error opening the file!\n");
        exit(0);
    }

    struct Student temp;
    printf("Enter the details:\n");
    printf("Name: ");
    // fgets(temp.name,sizeof(temp.name), stdin);
    scanf("%[^\n]s",temp.name);
    printf("Age: ");
    scanf("%d",&temp.age);
    printf("Marks: ");
    scanf("%f",&temp.marks);

    bool result =  fwrite(&temp,sizeof(temp),1,fptr); // success -> 1 else 0
    fclose(fptr);
    return result;
}

void read_students(const char fileName[]) {
    struct Student temp;
    clear_buffer();
    FILE *fptr;
    fptr = fopen(fileName, "rb");
    if(fptr == NULL) {
        printf("Error opening the file!\n");
        exit(0);
    }

    while(fread(&temp, sizeof(temp), 1, fptr)) {
        printf("Name: %s\n", temp.name);
        printf("Age: %d\n",temp.age);
        printf("Marks: %.2f\n",temp.marks);
    }

    fclose(fptr);

}

void search_students(const char fileName[]) {
    struct Student temp;
    clear_buffer();
    FILE *fptr;
    fptr = fopen(fileName, "rb");
    if(fptr == NULL) {
        printf("Error opening the file!\n");
        exit(0);
    }

    char name[50];
    printf("Enter the name of student: ");
    scanf("%[^\n]s",name);

    bool flag = false;
    while(fread(&temp, sizeof(temp), 1, fptr)) {
        if(strcmp(name, temp.name) == 0) {
            flag = true;
            break;
        }
    }
    system("clear");
    

    if(flag == false) {
        printf("Student Not Found!!!\n");
    } else {
        printf("The data of the student is : \n");
        printf("Name: %s\n", temp.name);
        printf("Age: %d\n",temp.age);
        printf("Marks: %.2f\n",temp.marks);
    }
    sleep(5);

}
