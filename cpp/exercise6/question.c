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
    
    example = malloc(sizeof(example));
    memset(example, 0, sizeof(example));

    free(example);
    return 0; 
}