// take input from user to store n number of integer dynamically

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d",&n);
    
    int *ptr = (int *)malloc(n * sizeof(int));

    // take input
    printf("Enter the integers: ");
    for(int i =0; i<n; i++){
        scanf("%d",ptr+i);
    }

    printf("The integers are: ");
    for(int i =0; i<n; i++){
        printf("%d ",*(ptr+i));
    }
    printf("\n");

    free(ptr);

    return 0;
}