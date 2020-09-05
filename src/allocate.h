/*
 * CS 170 - Theory of Operating Systems
 * Author: Matthew S Montoya
 * Author: Matthew Iglesias
 * Purpose: Evaluate First Fit, Next Fit, & Best Fit memory allocation strategies
 * Last Modified: 17 April 2020
*/

#include<stdio.h>
#include<stddef.h>

char memory[20000];

struct block{
 size_t size;
 int free;
 struct block *next; 
};

struct block *l_list=(void*)memory;

void initialize();
void split(struct block *fitting_slot,size_t size);
void *MyMalloc(size_t noOfBytes);
void merge();
void MyFree(void* ptr);