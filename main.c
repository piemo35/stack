#include "header.h"



int main(){

    //int isCreated = initSTACK(5);
    initSTACK(8);
    int scelta;
    int popped;

    /*if(isCreated){
        printf("Stack initialized");
    }else{
        printf("ERROR in stack initializing\n");
    }*/

    do {
        printf("\nMENU\n\n[1] Inserisci elemento\n[2] Estrai elemento\n[3] Svuota e visualizza stack\n[4] Visualizza stack\n[5] Visualizza numero di elementi inseriti\n[6] Visualizza il numero di elementi liberi\n[0] Esci");
        scanf("%d", &scelta);

        switch (scelta) {

            case 1:
                if (!isSTACKfull()) {
                    pushSTACK(4);
                    printf("Elemento aggiunto correttamente");
                } else {
                    printf("ERR - stack pieno");
                }
                break;

            case 2:
                if (!isSTACKempty()) {
                    popped = popSTACK();
                    printf("estratto: %d", popped);
                } else {
                    printf("ERR - stack vuoto");
                }
                break;

            case 3:
                destroySTACK();
                printSTACK();
                break;

            case 4:
                printSTACK();
                break;

            case 5: //numero elementi inseriti
                if (!isSTACKempty()) {
                    int e = howManyBusy();
                    printf("Elementi inseriti: %d", e);
                } else {
                    printf("Stack vuoto");
                }
                break;

            case 6: // numero elementi liberi
                if (!isSTACKfull()) {
                    int b = howManyEmpty();
                    printf("Elementi liberi: %d", b);
                } else {
                    printf("stack pieno");
                }
                break;

            default:
                printf("numero non valido per lo switch case");
                break;
        }
    }while(scelta != 0);

	    return 0;
    }
