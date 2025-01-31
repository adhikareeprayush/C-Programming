// malloc, calloc, realloc, free
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));
    // allocates the memory and returns a pointer to it
    // the allocated memory contains 0 value

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
    return 0;
}