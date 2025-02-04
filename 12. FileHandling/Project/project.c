#include "students.c"

int main() {

    char fileName[] = "students.bin";
    int choice;
    do {
        printf("1. Enter a student\n2. Show all students\n3. Search a student\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);


        switch(choice) {
            case 1:
                if(enter_students(fileName)) {
                    printf("Data Written Successfully!\n");
                    sleep(4);
                    system("clear");
                } else {
                    printf("Error Writing the data!\n");
                    exit(0);
                }
                break; 
            case 2:
                read_students(fileName);
                break;
            case 3:
                search_students(fileName);
                break;
            case 4:
                printf("Thanks for visiting!\n");
                break;
            default:
                printf("Invalid Input! Please try again\n");
        }

    }while(choice!=4);


    return 0;
}