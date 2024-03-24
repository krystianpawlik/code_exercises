// fix problem in the code
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>

typedef struct {
    int a;
} my_struct_t;

int main(int argc, char *argv[]) 
{ 
    my_struct_t *example;
    
    example = malloc(sizeof(my_struct_t));
    memset(example, 0, sizeof(my_struct_t));

    printf("sizeof(example) = %ld, sizeof(*example) = %ld, sizeof(my_struct_t) = %ld\n", sizeof(example), sizeof(*example), sizeof(my_struct_t));

    free(example);
    return 0; 
}