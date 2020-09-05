/*
 * CS 170 - Theory of Operating Systems
 * Author: Matthew S Montoya
 * Author: Matthew Iglesias
 * Purpose: Evaluate First Fit, Next Fit, & Best Fit memory allocation strategies
 * Last Modified: 17 April 2020
*/

#include <stdio.h>
#include <stddef.h>
#include "allocate.h"

/* Initialize block of memory of the first block and refer it to next block of memory */
void initialize(){
 l_list->size=memory-sizeof(struct block);
 l_list->free=1; //indicate block has not been allocated
 l_list->next=NULL;
}

/* Allocate Using First Fit*/
void *first_fit_malloc(size_t noOfBytes){
 struct block *curr,*prev;
 void *result;
 if(!(l_list->size)){
  initialize();
  printf("Memory initialized\n");
 }
 curr=l_list;
 while((((curr->size)<noOfBytes)||((curr->free)==0))&&(curr->next!=NULL)){
  prev=curr;
  curr=curr->next;
  printf("One block checked\n");
 }
 if((curr->size)==noOfBytes){
  curr->free=0;
  result=(void*)(++curr);
  printf("Exact fitting block allocated\n");
  return result;
 }
 else if((curr->size)>(noOfBytes+sizeof(struct block))){
  split(curr,noOfBytes);
  result=(void*)(++curr);
  printf("Fitting block allocated with a split\n");
  return result;
 }
 else{
  result=NULL;
  printf("Sorry. No sufficient memory to allocate\n");
  return result;
 }
}

/* Free Function */
void my_Free(void* ptr){
 if(((void*)memory<=ptr)&&(ptr<=(void*)(memory+(int)memory))){
  struct block* curr=ptr;
  --curr;
  curr->free=1;
  merge();
 }
 else printf("Please provide a valid pointer allocated by MyMalloc\n");
}