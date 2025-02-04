// malloc, calloc, realloc, free

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    // allocates the memory and returns a pointer to it
    // the allocated memory contains garbage 

    if(ptr == NULL) {
        printf("Memory allocation failed!\n");
    }

    // for(int i = 0; i<5; i++) {
    //     ptr[i] = i + 1;value
    //     *(ptr+i) = i + 1;
    // }

    for(int i = 0; i<5; i++) {
        printf("%d ",*(ptr+i));
    }
    printf("\n");

    free(ptr);
    return 0;
}