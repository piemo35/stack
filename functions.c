#include"header.h"


static stack_type *st;
static unsigned int numel=0, max; //


/* inizializzazione */      //Provare a Gestire con Eccezioni
int initSTACK(unsigned int nmax){
	max=nmax;
	return (st=malloc(sizeof(stack_type)*nmax))==NULL ? ERR : OK;
}

/* controlla se e' vuoto */
unsigned int isSTACKempty(void) { //1 = vuoto
 return ! numel;
}

/* controlla se e' pieno */
unsigned int isSTACKfull(void) { //1 = pieno
 return numel==max;
}

/* preleva un elemento dallo stack */
stack_type popSTACK(void){
  return st[--numel];
}

/* mette un elemento in cima allo stack */
void pushSTACK(stack_type a){
 st[numel++]=a;
}

/* distrugge lo stack */
void destroySTACK(void){
   free(st);
   }

void printSTACK(void){
    for (int i=0; i< sizeof(st);i++) printf("%d",st[i]);
}

int howManyEmpty(void){
    return max - numel;
}

int howManyBusy(void){
    return numel;
}