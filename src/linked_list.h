#ifndef LINKED_LIST_DEF
#define LINKED_LIST_DEF

#include <stdbool.h>

struct node
{
    int data; 
    int key;
    struct node *next;
};

void printList(void);

void insertFirst(int, int);

struct node* deleteFirst(void);

bool isEmpty(void);

int length(void);

struct node* find(int);

struct node* delete(int);

void sort(void);

void reverse(struct node**);

#endif
