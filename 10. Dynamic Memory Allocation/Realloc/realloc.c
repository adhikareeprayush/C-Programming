// malloc, calloc, realloc, free

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    // allocated the memory for 5 integers

    ptr = (int *)realloc(ptr,10 * sizeof(int));
    // resizes the previously allocated memory

    if(ptr == NULL) {
        printf("Memory allocation failed!\n");
    }

    // for(int i = 0; i<5; i++) {
        // ptr[i] = i + 1;
        // *(ptr+i) = i + 1;
    // }

    for(int i = 0; i<5; i++) {
        printf("%d ",*(ptr+i));
    }
    printf("\n");

    free(ptr);
    // free the dynamically allocated memory
    return 0;
}