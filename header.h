#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
#define ERR 1
#define OK 0

typedef int stack_type;


int initSTACK(unsigned int nmax);

unsigned int isSTACKempty(void);

unsigned int isSTACKfull(void);

stack_type popSTACK(void);

void pushSTACK(stack_type a);

void destroySTACK(void);

void printSTACK(void);

int howManyBusy(void);

int howManyEmpty(void);