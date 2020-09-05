/*
 * CS 170 - Theory of Operating Systems
 * Author: Matthew S Montoya
 * Author: Matthew Iglesias
 * Purpose: Evaluate First Fit, Next Fit, & Best Fit memory allocation strategies
 * Last Modified: 17 April 2020
*/

/** my_malloc takes a “heap” of memory and divides it into regions according to the size of the request and the allocation strategy
 *  Returns a pointer to memory of the desired size or NULL if the memory is not available.
 *  Start at 16 byte boundary */

#include <stdio.h>
#include <stdlib.h>
#include "allocate.h"

#define HEAPMEM 1048576
#define BLOCKSIZE 16

char c_array[1048576];

int main(){
    char index;
    FILE *file;
    int c_ints;

    /* Error Handling: Opening File */
    if ((file = fopen("rand.txt", "r")) == NULL){
        printf("Error opening file.");
        exit(1);
    }

    file = fopen("rand.txt", "r");
    while((index = getc(file)) != EOF){
        fscanf(file, "%s", c_array);
        c_ints = atoi(c_array);
        //printf("\n%d",c_ints); //Prints all the lines as int values
        
    }
    printf("File (rand.txt) successfully read.\n");
    printf("First Fit Algorithm\n");
    //first_fit_malloc(c_ints);
    printf("Next Fit Algorithm\n");
    //my_malloc_next_fit(c_ints);
    printf("Best fit Algorithm\n");
    //my_malloc_best_fit(c_ints);

    fclose(file);
    return 0;
}
